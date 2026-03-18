/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/eks/EKSClient.h>
#include <aws/eks/model/AddonStatus.h>
#include <aws/eks/model/ClusterStatus.h>
#include <aws/eks/model/DescribeAddonRequest.h>
#include <aws/eks/model/DescribeAddonResult.h>
#include <aws/eks/model/DescribeClusterRequest.h>
#include <aws/eks/model/DescribeClusterResult.h>
#include <aws/eks/model/DescribeFargateProfileRequest.h>
#include <aws/eks/model/DescribeFargateProfileResult.h>
#include <aws/eks/model/DescribeNodegroupRequest.h>
#include <aws/eks/model/DescribeNodegroupResult.h>
#include <aws/eks/model/FargateProfileStatus.h>
#include <aws/eks/model/NodegroupStatus.h>

#include <algorithm>

namespace Aws {
namespace EKS {

template <typename DerivedClient = EKSClient>
class EKSWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeAddonOutcome> WaitUntilAddonActive(const Model::DescribeAddonRequest& request) {
    using OutcomeT = Model::DescribeAddonOutcome;
    using RequestT = Model::DescribeAddonRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AddonActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeAddonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AddonStatusMapper::GetNameForAddonStatus(result.GetAddon().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AddonActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DEGRADED"),
        [](const Model::DescribeAddonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AddonStatusMapper::GetNameForAddonStatus(result.GetAddon().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AddonActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeAddonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AddonStatusMapper::GetNameForAddonStatus(result.GetAddon().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAddon(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilAddonActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAddonOutcome> WaitUntilAddonDeleted(const Model::DescribeAddonRequest& request) {
    using OutcomeT = Model::DescribeAddonOutcome;
    using RequestT = Model::DescribeAddonRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AddonDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeAddonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AddonStatusMapper::GetNameForAddonStatus(result.GetAddon().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("AddonDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAddon(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilAddonDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterActive(const Model::DescribeClusterRequest& request) {
    using OutcomeT = Model::DescribeClusterOutcome;
    using RequestT = Model::DescribeClusterRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETING"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilClusterActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterDeleted(const Model::DescribeClusterRequest& request) {
    using OutcomeT = Model::DescribeClusterOutcome;
    using RequestT = Model::DescribeClusterRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ACTIVE"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATING"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("PENDING"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ClusterDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFargateProfileOutcome> WaitUntilFargateProfileActive(
      const Model::DescribeFargateProfileRequest& request) {
    using OutcomeT = Model::DescribeFargateProfileOutcome;
    using RequestT = Model::DescribeFargateProfileRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FargateProfileActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeFargateProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FargateProfileStatusMapper::GetNameForFargateProfileStatus(result.GetFargateProfile().GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FargateProfileActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeFargateProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FargateProfileStatusMapper::GetNameForFargateProfileStatus(result.GetFargateProfile().GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFargateProfile(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilFargateProfileActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFargateProfileOutcome> WaitUntilFargateProfileDeleted(
      const Model::DescribeFargateProfileRequest& request) {
    using OutcomeT = Model::DescribeFargateProfileOutcome;
    using RequestT = Model::DescribeFargateProfileRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FargateProfileDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeFargateProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FargateProfileStatusMapper::GetNameForFargateProfileStatus(result.GetFargateProfile().GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "FargateProfileDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFargateProfile(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilFargateProfileDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNodegroupOutcome> WaitUntilNodegroupActive(const Model::DescribeNodegroupRequest& request) {
    using OutcomeT = Model::DescribeNodegroupOutcome;
    using RequestT = Model::DescribeNodegroupRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NodegroupActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeNodegroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodegroupStatusMapper::GetNameForNodegroupStatus(result.GetNodegroup().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NodegroupActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeNodegroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodegroupStatusMapper::GetNameForNodegroupStatus(result.GetNodegroup().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNodegroup(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilNodegroupActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNodegroupOutcome> WaitUntilNodegroupDeleted(const Model::DescribeNodegroupRequest& request) {
    using OutcomeT = Model::DescribeNodegroupOutcome;
    using RequestT = Model::DescribeNodegroupRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NodegroupDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeNodegroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodegroupStatusMapper::GetNameForNodegroupStatus(result.GetNodegroup().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("NodegroupDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNodegroup(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilNodegroupDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace EKS
}  // namespace Aws
