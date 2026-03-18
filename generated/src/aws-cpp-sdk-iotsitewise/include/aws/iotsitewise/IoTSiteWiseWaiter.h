/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iotsitewise/IoTSiteWiseClient.h>
#include <aws/iotsitewise/model/AssetModelState.h>
#include <aws/iotsitewise/model/AssetState.h>
#include <aws/iotsitewise/model/DescribeAssetModelRequest.h>
#include <aws/iotsitewise/model/DescribeAssetModelResult.h>
#include <aws/iotsitewise/model/DescribeAssetRequest.h>
#include <aws/iotsitewise/model/DescribeAssetResult.h>
#include <aws/iotsitewise/model/DescribePortalRequest.h>
#include <aws/iotsitewise/model/DescribePortalResult.h>
#include <aws/iotsitewise/model/PortalState.h>

#include <algorithm>

namespace Aws {
namespace IoTSiteWise {

template <typename DerivedClient = IoTSiteWiseClient>
class IoTSiteWiseWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeAssetOutcome> WaitUntilAssetActive(const Model::DescribeAssetRequest& request) {
    using OutcomeT = Model::DescribeAssetOutcome;
    using RequestT = Model::DescribeAssetRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AssetActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeAssetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AssetStateMapper::GetNameForAssetState(result.GetAssetStatus().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AssetActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeAssetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AssetStateMapper::GetNameForAssetState(result.GetAssetStatus().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAsset(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilAssetActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAssetOutcome> WaitUntilAssetNotExists(const Model::DescribeAssetRequest& request) {
    using OutcomeT = Model::DescribeAssetOutcome;
    using RequestT = Model::DescribeAssetRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("AssetNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAsset(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilAssetNotExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAssetModelOutcome> WaitUntilAssetModelActive(const Model::DescribeAssetModelRequest& request) {
    using OutcomeT = Model::DescribeAssetModelOutcome;
    using RequestT = Model::DescribeAssetModelRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AssetModelActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeAssetModelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AssetModelStateMapper::GetNameForAssetModelState(result.GetAssetModelStatus().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AssetModelActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeAssetModelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AssetModelStateMapper::GetNameForAssetModelState(result.GetAssetModelStatus().GetState()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAssetModel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilAssetModelActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAssetModelOutcome> WaitUntilAssetModelNotExists(
      const Model::DescribeAssetModelRequest& request) {
    using OutcomeT = Model::DescribeAssetModelOutcome;
    using RequestT = Model::DescribeAssetModelRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "AssetModelNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAssetModel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilAssetModelNotExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribePortalOutcome> WaitUntilPortalActive(const Model::DescribePortalRequest& request) {
    using OutcomeT = Model::DescribePortalOutcome;
    using RequestT = Model::DescribePortalRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PortalActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribePortalOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PortalStateMapper::GetNameForPortalState(result.GetPortalStatus().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribePortal(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilPortalActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribePortalOutcome> WaitUntilPortalNotExists(const Model::DescribePortalRequest& request) {
    using OutcomeT = Model::DescribePortalOutcome;
    using RequestT = Model::DescribePortalRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("PortalNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribePortal(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilPortalNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace IoTSiteWise
}  // namespace Aws
