/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::GetApplicationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("READY"),
                         [](const Model::GetApplicationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ApplicationStatusMapper::GetNameForApplicationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetApplicationRequest& req) { return static_cast<DerivedClient*>(this)->GetApplication(req); };
    Aws::Utils::Waiter<Model::GetApplicationRequest, Model::GetApplicationOutcome> waiter(2, 60, acceptors, operation,
                                                                                          "WaitUntilApplicationReady");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetApplicationOutcome> WaitUntilApplicationDeleted(const Model::GetApplicationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetApplicationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::GetApplicationRequest& req) { return static_cast<DerivedClient*>(this)->GetApplication(req); };
    Aws::Utils::Waiter<Model::GetApplicationRequest, Model::GetApplicationOutcome> waiter(2, 60, acceptors, operation,
                                                                                          "WaitUntilApplicationDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetStreamGroupOutcome> WaitUntilStreamGroupActive(const Model::GetStreamGroupRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetStreamGroupOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE_WITH_ERRORS"),
                         [](const Model::GetStreamGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StreamGroupStatusMapper::GetNameForStreamGroupStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetStreamGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StreamGroupStatusMapper::GetNameForStreamGroupStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetStreamGroupRequest& req) { return static_cast<DerivedClient*>(this)->GetStreamGroup(req); };
    Aws::Utils::Waiter<Model::GetStreamGroupRequest, Model::GetStreamGroupOutcome> waiter(30, 120, acceptors, operation,
                                                                                          "WaitUntilStreamGroupActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetStreamGroupOutcome> WaitUntilStreamGroupDeleted(const Model::GetStreamGroupRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetStreamGroupOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::GetStreamGroupRequest& req) { return static_cast<DerivedClient*>(this)->GetStreamGroup(req); };
    Aws::Utils::Waiter<Model::GetStreamGroupRequest, Model::GetStreamGroupOutcome> waiter(30, 60, acceptors, operation,
                                                                                          "WaitUntilStreamGroupDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetStreamSessionOutcome> WaitUntilStreamSessionActive(const Model::GetStreamSessionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetStreamSessionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetStreamSessionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StreamSessionStatusMapper::GetNameForStreamSessionStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetStreamSessionRequest& req) { return static_cast<DerivedClient*>(this)->GetStreamSession(req); };
    Aws::Utils::Waiter<Model::GetStreamSessionRequest, Model::GetStreamSessionOutcome> waiter(2, 60, acceptors, operation,
                                                                                              "WaitUntilStreamSessionActive");
    return waiter.Wait(request);
  }
};
}  // namespace GameLiftStreams
}  // namespace Aws
