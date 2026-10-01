/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/lambda-web/LambdaWebClient.h>
#include <aws/lambda-web/model/EndpointState.h>
#include <aws/lambda-web/model/EndpointUpdateStatus.h>
#include <aws/lambda-web/model/FunctionState.h>
#include <aws/lambda-web/model/GetWebFunctionEndpointRequest.h>
#include <aws/lambda-web/model/GetWebFunctionEndpointResult.h>
#include <aws/lambda-web/model/GetWebFunctionRequest.h>
#include <aws/lambda-web/model/GetWebFunctionResult.h>
#include <aws/lambda-web/model/GetWebFunctionRevisionRequest.h>
#include <aws/lambda-web/model/GetWebFunctionRevisionResult.h>
#include <aws/lambda-web/model/RevisionState.h>

#include <algorithm>

namespace Aws {
namespace LambdaWeb {

template <typename DerivedClient = LambdaWebClient>
class LambdaWebWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetWebFunctionOutcome> WaitUntilWebFunctionActive(const Model::GetWebFunctionRequest& request) {
    using OutcomeT = Model::GetWebFunctionOutcome;
    using RequestT = Model::GetWebFunctionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Active"),
        [](const Model::GetWebFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FunctionStateMapper::GetNameForFunctionState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetWebFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FunctionStateMapper::GetNameForFunctionState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::GetWebFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FunctionStateMapper::GetNameForFunctionState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Pending"),
        [](const Model::GetWebFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FunctionStateMapper::GetNameForFunctionState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetWebFunction(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 300, std::move(acceptors), operation, "WaitUntilWebFunctionActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetWebFunctionOutcome> WaitUntilWebFunctionDeleted(const Model::GetWebFunctionRequest& request) {
    using OutcomeT = Model::GetWebFunctionOutcome;
    using RequestT = Model::GetWebFunctionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "WebFunctionDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Deleting"),
        [](const Model::GetWebFunctionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FunctionStateMapper::GetNameForFunctionState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetWebFunction(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 300, std::move(acceptors), operation, "WaitUntilWebFunctionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetWebFunctionEndpointOutcome> WaitUntilWebFunctionEndpointActive(
      const Model::GetWebFunctionEndpointRequest& request) {
    using OutcomeT = Model::GetWebFunctionEndpointOutcome;
    using RequestT = Model::GetWebFunctionEndpointRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionEndpointActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Active"),
        [](const Model::GetWebFunctionEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointStateMapper::GetNameForEndpointState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionEndpointActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetWebFunctionEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointStateMapper::GetNameForEndpointState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionEndpointActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Deleting"),
        [](const Model::GetWebFunctionEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointStateMapper::GetNameForEndpointState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionEndpointActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Pending"),
        [](const Model::GetWebFunctionEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointStateMapper::GetNameForEndpointState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetWebFunctionEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 300, std::move(acceptors), operation, "WaitUntilWebFunctionEndpointActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetWebFunctionEndpointOutcome> WaitUntilWebFunctionEndpointDeleted(
      const Model::GetWebFunctionEndpointRequest& request) {
    using OutcomeT = Model::GetWebFunctionEndpointOutcome;
    using RequestT = Model::GetWebFunctionEndpointRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "WebFunctionEndpointDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionEndpointDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Deleting"),
        [](const Model::GetWebFunctionEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointStateMapper::GetNameForEndpointState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetWebFunctionEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 300, std::move(acceptors), operation, "WaitUntilWebFunctionEndpointDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetWebFunctionEndpointOutcome> WaitUntilWebFunctionEndpointUpdated(
      const Model::GetWebFunctionEndpointRequest& request) {
    using OutcomeT = Model::GetWebFunctionEndpointOutcome;
    using RequestT = Model::GetWebFunctionEndpointRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionEndpointUpdatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Successful"),
        [](const Model::GetWebFunctionEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointUpdateStatusMapper::GetNameForEndpointUpdateStatus(result.GetUpdateStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionEndpointUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetWebFunctionEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointUpdateStatusMapper::GetNameForEndpointUpdateStatus(result.GetUpdateStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionEndpointUpdatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InProgress"),
        [](const Model::GetWebFunctionEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointUpdateStatusMapper::GetNameForEndpointUpdateStatus(result.GetUpdateStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetWebFunctionEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 300, std::move(acceptors), operation, "WaitUntilWebFunctionEndpointUpdated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetWebFunctionRevisionOutcome> WaitUntilWebFunctionRevisionActive(
      const Model::GetWebFunctionRevisionRequest& request) {
    using OutcomeT = Model::GetWebFunctionRevisionOutcome;
    using RequestT = Model::GetWebFunctionRevisionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionRevisionActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Active"),
        [](const Model::GetWebFunctionRevisionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RevisionStateMapper::GetNameForRevisionState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionRevisionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetWebFunctionRevisionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RevisionStateMapper::GetNameForRevisionState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WebFunctionRevisionActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Pending"),
        [](const Model::GetWebFunctionRevisionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RevisionStateMapper::GetNameForRevisionState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetWebFunctionRevision(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 300, std::move(acceptors), operation, "WaitUntilWebFunctionRevisionActive");
    return waiter.Wait(request);
  }
};
}  // namespace LambdaWeb
}  // namespace Aws
