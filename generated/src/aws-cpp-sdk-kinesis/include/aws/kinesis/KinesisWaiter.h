/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/DescribeStreamResult.h>
#include <aws/kinesis/model/StreamStatus.h>

#include <algorithm>

namespace Aws {
namespace Kinesis {

template <typename DerivedClient = KinesisClient>
class KinesisWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeStreamOutcome> WaitUntilStreamExists(const Model::DescribeStreamRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStreamOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeStreamOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StreamStatusMapper::GetNameForStreamStatus(result.GetStreamDescription().GetStreamStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeStreamRequest& req) { return static_cast<DerivedClient*>(this)->DescribeStream(req); };
    Aws::Utils::Waiter<Model::DescribeStreamRequest, Model::DescribeStreamOutcome> waiter(10, 12, acceptors, operation,
                                                                                          "WaitUntilStreamExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStreamOutcome> WaitUntilStreamNotExists(const Model::DescribeStreamRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStreamOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeStreamRequest& req) { return static_cast<DerivedClient*>(this)->DescribeStream(req); };
    Aws::Utils::Waiter<Model::DescribeStreamRequest, Model::DescribeStreamOutcome> waiter(10, 12, acceptors, operation,
                                                                                          "WaitUntilStreamNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace Kinesis
}  // namespace Aws
