/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/elb-proxy/ELBProxyClient.h>
#include <aws/elb-proxy/model/GetProxyRequest.h>
#include <aws/elb-proxy/model/GetProxyResult.h>
#include <aws/elb-proxy/model/GetProxyUpdateRequest.h>
#include <aws/elb-proxy/model/GetProxyUpdateResult.h>
#include <aws/elb-proxy/model/ProxyStatusCode.h>
#include <aws/elb-proxy/model/ProxyUpdatePropagationStatus.h>
#include <aws/elb-proxy/model/ProxyUpdateValidationStatus.h>

#include <algorithm>

namespace Aws {
namespace ELBProxy {

template <typename DerivedClient = ELBProxyClient>
class ELBProxyWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetProxyOutcome> WaitUntilProxyActive(const Model::GetProxyRequest& request) {
    using OutcomeT = Model::GetProxyOutcome;
    using RequestT = Model::GetProxyRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProxyActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("active"),
        [](const Model::GetProxyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProxyStatusCodeMapper::GetNameForProxyStatusCode(result.GetStatus().GetCode()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProxyActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("create-failed"),
        [](const Model::GetProxyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProxyStatusCodeMapper::GetNameForProxyStatusCode(result.GetStatus().GetCode()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProxyActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("action-required"),
        [](const Model::GetProxyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProxyStatusCodeMapper::GetNameForProxyStatusCode(result.GetStatus().GetCode()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetProxy(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 40, std::move(acceptors), operation, "WaitUntilProxyActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetProxyOutcome> WaitUntilProxyDeleted(const Model::GetProxyRequest& request) {
    using OutcomeT = Model::GetProxyOutcome;
    using RequestT = Model::GetProxyRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ProxyDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetProxy(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 40, std::move(acceptors), operation, "WaitUntilProxyDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetProxyUpdateOutcome> WaitUntilProxyUpdateComplete(const Model::GetProxyUpdateRequest& request) {
    using OutcomeT = Model::GetProxyUpdateOutcome;
    using RequestT = Model::GetProxyUpdateRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProxyUpdateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("complete"),
        [](const Model::GetProxyUpdateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProxyUpdatePropagationStatusMapper::GetNameForProxyUpdatePropagationStatus(
                     result.GetState().GetPropagationStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProxyUpdateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::GetProxyUpdateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProxyUpdatePropagationStatusMapper::GetNameForProxyUpdatePropagationStatus(
                     result.GetState().GetPropagationStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProxyUpdateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("cancelled"),
        [](const Model::GetProxyUpdateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProxyUpdatePropagationStatusMapper::GetNameForProxyUpdatePropagationStatus(
                     result.GetState().GetPropagationStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProxyUpdateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("skipped"),
        [](const Model::GetProxyUpdateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProxyUpdatePropagationStatusMapper::GetNameForProxyUpdatePropagationStatus(
                     result.GetState().GetPropagationStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProxyUpdateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("invalid"),
        [](const Model::GetProxyUpdateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProxyUpdateValidationStatusMapper::GetNameForProxyUpdateValidationStatus(result.GetState().GetValidationStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetProxyUpdate(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilProxyUpdateComplete");
    return waiter.Wait(request);
  }
};
}  // namespace ELBProxy
}  // namespace Aws
