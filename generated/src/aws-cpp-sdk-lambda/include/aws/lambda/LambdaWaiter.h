/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::GetFunctionOutcome;
    using RequestT = Model::GetFunctionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionActiveV2Waiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Active"),
        [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetConfiguration().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionActiveV2Waiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetConfiguration().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionActiveV2Waiter", Aws::Utils::WaiterState::RETRY, Aws::String("Pending"),
        [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetConfiguration().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetFunction(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 300, std::move(acceptors), operation, "WaitUntilFunctionActiveV2");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionOutcome> WaitUntilFunctionExists(const Model::GetFunctionRequest& request) {
    using OutcomeT = Model::GetFunctionOutcome;
    using RequestT = Model::GetFunctionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FunctionExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FunctionExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetFunction(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 20, std::move(acceptors), operation, "WaitUntilFunctionExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionOutcome> WaitUntilFunctionUpdatedV2(const Model::GetFunctionRequest& request) {
    using OutcomeT = Model::GetFunctionOutcome;
    using RequestT = Model::GetFunctionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionUpdatedV2Waiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Successful"),
        [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(result.GetConfiguration().GetLastUpdateStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionUpdatedV2Waiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(result.GetConfiguration().GetLastUpdateStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionUpdatedV2Waiter", Aws::Utils::WaiterState::RETRY, Aws::String("InProgress"),
        [](const Model::GetFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(result.GetConfiguration().GetLastUpdateStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetFunction(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 300, std::move(acceptors), operation, "WaitUntilFunctionUpdatedV2");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionConfigurationOutcome> WaitUntilFunctionActive(
      const Model::GetFunctionConfigurationRequest& request) {
    using OutcomeT = Model::GetFunctionConfigurationOutcome;
    using RequestT = Model::GetFunctionConfigurationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Active"),
        [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Pending"),
        [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetFunctionConfiguration(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 60, std::move(acceptors), operation, "WaitUntilFunctionActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionConfigurationOutcome> WaitUntilFunctionUpdated(
      const Model::GetFunctionConfigurationRequest& request) {
    using OutcomeT = Model::GetFunctionConfigurationOutcome;
    using RequestT = Model::GetFunctionConfigurationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionUpdatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Successful"),
        [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(result.GetLastUpdateStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(result.GetLastUpdateStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FunctionUpdatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InProgress"),
        [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LastUpdateStatusMapper::GetNameForLastUpdateStatus(result.GetLastUpdateStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetFunctionConfiguration(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 60, std::move(acceptors), operation, "WaitUntilFunctionUpdated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetFunctionConfigurationOutcome> WaitUntilPublishedVersionActive(
      const Model::GetFunctionConfigurationRequest& request) {
    using OutcomeT = Model::GetFunctionConfigurationOutcome;
    using RequestT = Model::GetFunctionConfigurationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PublishedVersionActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Active"),
        [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PublishedVersionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PublishedVersionActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Pending"),
        [](const Model::GetFunctionConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetFunctionConfiguration(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 312, std::move(acceptors), operation, "WaitUntilPublishedVersionActive");
    return waiter.Wait(request);
  }
};
}  // namespace Lambda
}  // namespace Aws
