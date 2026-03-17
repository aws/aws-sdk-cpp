/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeAssetOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeAssetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AssetStateMapper::GetNameForAssetState(result.GetAssetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeAssetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AssetStateMapper::GetNameForAssetState(result.GetAssetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeAssetRequest& req) { return static_cast<DerivedClient*>(this)->DescribeAsset(req); };
    Aws::Utils::Waiter<Model::DescribeAssetRequest, Model::DescribeAssetOutcome> waiter(3, 40, acceptors, operation,
                                                                                        "WaitUntilAssetActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAssetOutcome> WaitUntilAssetNotExists(const Model::DescribeAssetRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAssetOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeAssetRequest& req) { return static_cast<DerivedClient*>(this)->DescribeAsset(req); };
    Aws::Utils::Waiter<Model::DescribeAssetRequest, Model::DescribeAssetOutcome> waiter(3, 40, acceptors, operation,
                                                                                        "WaitUntilAssetNotExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAssetModelOutcome> WaitUntilAssetModelActive(const Model::DescribeAssetModelRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAssetModelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeAssetModelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AssetModelStateMapper::GetNameForAssetModelState(result.GetAssetModelStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeAssetModelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AssetModelStateMapper::GetNameForAssetModelState(result.GetAssetModelStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeAssetModelRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeAssetModel(req);
    };
    Aws::Utils::Waiter<Model::DescribeAssetModelRequest, Model::DescribeAssetModelOutcome> waiter(3, 40, acceptors, operation,
                                                                                                  "WaitUntilAssetModelActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAssetModelOutcome> WaitUntilAssetModelNotExists(
      const Model::DescribeAssetModelRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAssetModelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeAssetModelRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeAssetModel(req);
    };
    Aws::Utils::Waiter<Model::DescribeAssetModelRequest, Model::DescribeAssetModelOutcome> waiter(3, 40, acceptors, operation,
                                                                                                  "WaitUntilAssetModelNotExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribePortalOutcome> WaitUntilPortalActive(const Model::DescribePortalRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribePortalOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribePortalOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PortalStateMapper::GetNameForPortalState(result.GetPortalStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribePortalRequest& req) { return static_cast<DerivedClient*>(this)->DescribePortal(req); };
    Aws::Utils::Waiter<Model::DescribePortalRequest, Model::DescribePortalOutcome> waiter(3, 40, acceptors, operation,
                                                                                          "WaitUntilPortalActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribePortalOutcome> WaitUntilPortalNotExists(const Model::DescribePortalRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribePortalOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribePortalRequest& req) { return static_cast<DerivedClient*>(this)->DescribePortal(req); };
    Aws::Utils::Waiter<Model::DescribePortalRequest, Model::DescribePortalOutcome> waiter(3, 40, acceptors, operation,
                                                                                          "WaitUntilPortalNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace IoTSiteWise
}  // namespace Aws
