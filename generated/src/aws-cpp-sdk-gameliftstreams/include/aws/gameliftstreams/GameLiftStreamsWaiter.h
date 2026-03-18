/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/gameliftstreams/GameLiftStreamsClient.h>
#include <aws/gameliftstreams/model/ApplicationStatus.h>
#include <aws/gameliftstreams/model/GetApplicationRequest.h>
#include <aws/gameliftstreams/model/GetApplicationResult.h>
#include <aws/gameliftstreams/model/GetStreamGroupRequest.h>
#include <aws/gameliftstreams/model/GetStreamGroupResult.h>
#include <aws/gameliftstreams/model/GetStreamSessionRequest.h>
#include <aws/gameliftstreams/model/GetStreamSessionResult.h>
#include <aws/gameliftstreams/model/StreamGroupStatus.h>
#include <aws/gameliftstreams/model/StreamSessionStatus.h>

#include <algorithm>

namespace Aws {
namespace GameLiftStreams {

template <typename DerivedClient = GameLiftStreamsClient>
class GameLiftStreamsWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetApplicationOutcome> WaitUntilApplicationReady(const Model::GetApplicationRequest& request) {
    using OutcomeT = Model::GetApplicationOutcome;
    using RequestT = Model::GetApplicationRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ApplicationReadyWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("READY"),
        [](const Model::GetApplicationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ApplicationStatusMapper::GetNameForApplicationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ApplicationReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetApplication(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilApplicationReady");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetApplicationOutcome> WaitUntilApplicationDeleted(const Model::GetApplicationRequest& request) {
    using OutcomeT = Model::GetApplicationOutcome;
    using RequestT = Model::GetApplicationRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ApplicationDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetApplication(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilApplicationDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetStreamGroupOutcome> WaitUntilStreamGroupActive(const Model::GetStreamGroupRequest& request) {
    using OutcomeT = Model::GetStreamGroupOutcome;
    using RequestT = Model::GetStreamGroupRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StreamGroupActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StreamGroupActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StreamGroupActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ACTIVE_WITH_ERRORS"),
        [](const Model::GetStreamGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StreamGroupStatusMapper::GetNameForStreamGroupStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StreamGroupActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETING"),
        [](const Model::GetStreamGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StreamGroupStatusMapper::GetNameForStreamGroupStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetStreamGroup(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 120, std::move(acceptors), operation, "WaitUntilStreamGroupActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetStreamGroupOutcome> WaitUntilStreamGroupDeleted(const Model::GetStreamGroupRequest& request) {
    using OutcomeT = Model::GetStreamGroupOutcome;
    using RequestT = Model::GetStreamGroupRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "StreamGroupDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetStreamGroup(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilStreamGroupDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetStreamSessionOutcome> WaitUntilStreamSessionActive(const Model::GetStreamSessionRequest& request) {
    using OutcomeT = Model::GetStreamSessionOutcome;
    using RequestT = Model::GetStreamSessionRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StreamSessionActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StreamSessionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetStreamSession(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilStreamSessionActive");
    return waiter.Wait(request);
  }
};
}  // namespace GameLiftStreams
}  // namespace Aws
