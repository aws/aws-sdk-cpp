/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/lambda/LambdaClient.h>
#include <aws/lambda/model/GetFunctionConfigurationRequest.h>
#include <aws/lambda/model/GetFunctionConfigurationResult.h>
#include <aws/lambda/model/GetFunctionRequest.h>
#include <aws/lambda/model/GetFunctionResult.h>
#include <aws/lambda/model/LastUpdateStatus.h>
#include <aws/lambda/model/State.h>

#include <algorithm>

namespace Aws {
namespace Lambda {

template <typename DerivedClient = LambdaClient>
class LambdaWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetFunctionOutcome> WaitUntilFunctionActiveV2(const Model::GetFunctionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetFunctionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Active"),
                         [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetConfiguration().GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetConfiguration().GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Pending"),
                         [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetConfiguration().GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetFunctionRequest& req) { return static_cast<DerivedClient*>(this)->GetFunction(req); };
    Aws::Utils::Waiter<Model::GetFunctionRequest, Model::GetFunctionOutcome> waiter(1, 300, acceptors, operation,
                                                                                    "WaitUntilFunctionActiveV2");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionOutcome> WaitUntilFunctionExists(const Model::GetFunctionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetFunctionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::GetFunctionRequest& req) { return static_cast<DerivedClient*>(this)->GetFunction(req); };
    Aws::Utils::Waiter<Model::GetFunctionRequest, Model::GetFunctionOutcome> waiter(1, 20, acceptors, operation, "WaitUntilFunctionExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionOutcome> WaitUntilFunctionUpdatedV2(const Model::GetFunctionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetFunctionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Successful"),
                         [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(
                                      result.GetConfiguration().GetLastUpdateStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(
                                      result.GetConfiguration().GetLastUpdateStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("InProgress"),
                         [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(
                                      result.GetConfiguration().GetLastUpdateStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetFunctionRequest& req) { return static_cast<DerivedClient*>(this)->GetFunction(req); };
    Aws::Utils::Waiter<Model::GetFunctionRequest, Model::GetFunctionOutcome> waiter(1, 300, acceptors, operation,
                                                                                    "WaitUntilFunctionUpdatedV2");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionConfigurationOutcome> WaitUntilFunctionActive(
      const Model::GetFunctionConfigurationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetFunctionConfigurationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Active"),
                         [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Pending"),
                         [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetFunctionConfigurationRequest& req) {
      return static_cast<DerivedClient*>(this)->GetFunctionConfiguration(req);
    };
    Aws::Utils::Waiter<Model::GetFunctionConfigurationRequest, Model::GetFunctionConfigurationOutcome> waiter(5, 60, acceptors, operation,
                                                                                                              "WaitUntilFunctionActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionConfigurationOutcome> WaitUntilFunctionUpdated(
      const Model::GetFunctionConfigurationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetFunctionConfigurationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Successful"),
                         [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(result.GetLastUpdateStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(result.GetLastUpdateStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("InProgress"),
                         [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(result.GetLastUpdateStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetFunctionConfigurationRequest& req) {
      return static_cast<DerivedClient*>(this)->GetFunctionConfiguration(req);
    };
    Aws::Utils::Waiter<Model::GetFunctionConfigurationRequest, Model::GetFunctionConfigurationOutcome> waiter(5, 60, acceptors, operation,
                                                                                                              "WaitUntilFunctionUpdated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionConfigurationOutcome> WaitUntilPublishedVersionActive(
      const Model::GetFunctionConfigurationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetFunctionConfigurationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Active"),
                         [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Pending"),
                         [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetFunctionConfigurationRequest& req) {
      return static_cast<DerivedClient*>(this)->GetFunctionConfiguration(req);
    };
    Aws::Utils::Waiter<Model::GetFunctionConfigurationRequest, Model::GetFunctionConfigurationOutcome> waiter(
        5, 312, acceptors, operation, "WaitUntilPublishedVersionActive");
    return waiter.Wait(request);
  }
};
}  // namespace Lambda
}  // namespace Aws
