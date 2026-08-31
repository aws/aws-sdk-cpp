/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/model/ChannelStatus.h>
#include <aws/kinesis/model/DescribeChannelRequest.h>
#include <aws/kinesis/model/DescribeChannelResult.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/DescribeStreamResult.h>
#include <aws/kinesis/model/StreamStatus.h>

#include <algorithm>

namespace Aws {
namespace Kinesis {

template <typename DerivedClient = KinesisClient>
class KinesisWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeChannelOutcome> WaitUntilChannelActive(const Model::DescribeChannelRequest& request) {
    using OutcomeT = Model::DescribeChannelOutcome;
    using RequestT = Model::DescribeChannelRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelDescription().GetChannelStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::DescribeChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelDescription().GetChannelStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::DescribeChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelDescription().GetChannelStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETING"),
        [](const Model::DescribeChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelDescription().GetChannelStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelDescription().GetChannelStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeChannel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilChannelActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStreamOutcome> WaitUntilStreamExists(const Model::DescribeStreamRequest& request) {
    using OutcomeT = Model::DescribeStreamOutcome;
    using RequestT = Model::DescribeStreamRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StreamExistsWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeStreamOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
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
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("StreamNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStream(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilStreamNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace Kinesis
}  // namespace Aws
