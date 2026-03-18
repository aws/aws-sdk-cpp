/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::DescribeStreamOutcome;
    using RequestT = Model::DescribeStreamRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StreamExistsWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeStreamOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StreamStatusMapper::GetNameForStreamStatus(result.GetStreamDescription().GetStreamStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStream(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilStreamExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStreamOutcome> WaitUntilStreamNotExists(const Model::DescribeStreamRequest& request) {
    using OutcomeT = Model::DescribeStreamOutcome;
    using RequestT = Model::DescribeStreamRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("StreamNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStream(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilStreamNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace Kinesis
}  // namespace Aws
