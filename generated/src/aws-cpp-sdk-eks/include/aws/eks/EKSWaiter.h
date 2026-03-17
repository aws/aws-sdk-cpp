/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeAddonOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeAddonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AddonStatusMapper::GetNameForAddonStatus(result.GetAddon().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DEGRADED"),
                         [](const Model::DescribeAddonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AddonStatusMapper::GetNameForAddonStatus(result.GetAddon().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeAddonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AddonStatusMapper::GetNameForAddonStatus(result.GetAddon().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeAddonRequest& req) { return static_cast<DerivedClient*>(this)->DescribeAddon(req); };
    Aws::Utils::Waiter<Model::DescribeAddonRequest, Model::DescribeAddonOutcome> waiter(10, 12, acceptors, operation,
                                                                                        "WaitUntilAddonActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAddonOutcome> WaitUntilAddonDeleted(const Model::DescribeAddonRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAddonOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::DescribeAddonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AddonStatusMapper::GetNameForAddonStatus(result.GetAddon().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeAddonRequest& req) { return static_cast<DerivedClient*>(this)->DescribeAddon(req); };
    Aws::Utils::Waiter<Model::DescribeAddonRequest, Model::DescribeAddonOutcome> waiter(10, 12, acceptors, operation,
                                                                                        "WaitUntilAddonDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterActive(const Model::DescribeClusterRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeClusterRequest& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<Model::DescribeClusterRequest, Model::DescribeClusterOutcome> waiter(30, 4, acceptors, operation,
                                                                                            "WaitUntilClusterActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterDeleted(const Model::DescribeClusterRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("PENDING"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetCluster().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeClusterRequest& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<Model::DescribeClusterRequest, Model::DescribeClusterOutcome> waiter(30, 4, acceptors, operation,
                                                                                            "WaitUntilClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFargateProfileOutcome> WaitUntilFargateProfileActive(
      const Model::DescribeFargateProfileRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFargateProfileOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeFargateProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::FargateProfileStatusMapper::GetNameForFargateProfileStatus(
                                      result.GetFargateProfile().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeFargateProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::FargateProfileStatusMapper::GetNameForFargateProfileStatus(
                                      result.GetFargateProfile().GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeFargateProfileRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeFargateProfile(req);
    };
    Aws::Utils::Waiter<Model::DescribeFargateProfileRequest, Model::DescribeFargateProfileOutcome> waiter(10, 12, acceptors, operation,
                                                                                                          "WaitUntilFargateProfileActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFargateProfileOutcome> WaitUntilFargateProfileDeleted(
      const Model::DescribeFargateProfileRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFargateProfileOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::DescribeFargateProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::FargateProfileStatusMapper::GetNameForFargateProfileStatus(
                                      result.GetFargateProfile().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeFargateProfileRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeFargateProfile(req);
    };
    Aws::Utils::Waiter<Model::DescribeFargateProfileRequest, Model::DescribeFargateProfileOutcome> waiter(30, 4, acceptors, operation,
                                                                                                          "WaitUntilFargateProfileDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNodegroupOutcome> WaitUntilNodegroupActive(const Model::DescribeNodegroupRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNodegroupOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeNodegroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodegroupStatusMapper::GetNameForNodegroupStatus(result.GetNodegroup().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeNodegroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodegroupStatusMapper::GetNameForNodegroupStatus(result.GetNodegroup().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeNodegroupRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeNodegroup(req);
    };
    Aws::Utils::Waiter<Model::DescribeNodegroupRequest, Model::DescribeNodegroupOutcome> waiter(30, 4, acceptors, operation,
                                                                                                "WaitUntilNodegroupActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNodegroupOutcome> WaitUntilNodegroupDeleted(const Model::DescribeNodegroupRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNodegroupOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::DescribeNodegroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodegroupStatusMapper::GetNameForNodegroupStatus(result.GetNodegroup().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeNodegroupRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeNodegroup(req);
    };
    Aws::Utils::Waiter<Model::DescribeNodegroupRequest, Model::DescribeNodegroupOutcome> waiter(30, 4, acceptors, operation,
                                                                                                "WaitUntilNodegroupDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace EKS
}  // namespace Aws
