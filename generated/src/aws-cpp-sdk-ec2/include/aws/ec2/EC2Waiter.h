/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/model/BundleTaskState.h>
#include <aws/ec2/model/ConversionTaskState.h>
#include <aws/ec2/model/DescribeBundleTasksRequest.h>
#include <aws/ec2/model/DescribeBundleTasksResponse.h>
#include <aws/ec2/model/DescribeConversionTasksRequest.h>
#include <aws/ec2/model/DescribeConversionTasksResponse.h>
#include <aws/ec2/model/DescribeCustomerGatewaysRequest.h>
#include <aws/ec2/model/DescribeCustomerGatewaysResponse.h>
#include <aws/ec2/model/DescribeExportTasksRequest.h>
#include <aws/ec2/model/DescribeExportTasksResponse.h>
#include <aws/ec2/model/DescribeImageUsageReportsRequest.h>
#include <aws/ec2/model/DescribeImageUsageReportsResponse.h>
#include <aws/ec2/model/DescribeImagesRequest.h>
#include <aws/ec2/model/DescribeImagesResponse.h>
#include <aws/ec2/model/DescribeImportSnapshotTasksRequest.h>
#include <aws/ec2/model/DescribeImportSnapshotTasksResponse.h>
#include <aws/ec2/model/DescribeInstanceStatusRequest.h>
#include <aws/ec2/model/DescribeInstanceStatusResponse.h>
#include <aws/ec2/model/DescribeInstancesRequest.h>
#include <aws/ec2/model/DescribeInstancesResponse.h>
#include <aws/ec2/model/DescribeInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeInternetGatewaysResponse.h>
#include <aws/ec2/model/DescribeKeyPairsRequest.h>
#include <aws/ec2/model/DescribeKeyPairsResponse.h>
#include <aws/ec2/model/DescribeNatGatewaysRequest.h>
#include <aws/ec2/model/DescribeNatGatewaysResponse.h>
#include <aws/ec2/model/DescribeNetworkInterfacesRequest.h>
#include <aws/ec2/model/DescribeNetworkInterfacesResponse.h>
#include <aws/ec2/model/DescribeSecondaryNetworksRequest.h>
#include <aws/ec2/model/DescribeSecondaryNetworksResponse.h>
#include <aws/ec2/model/DescribeSecondarySubnetsRequest.h>
#include <aws/ec2/model/DescribeSecondarySubnetsResponse.h>
#include <aws/ec2/model/DescribeSecurityGroupVpcAssociationsRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupVpcAssociationsResponse.h>
#include <aws/ec2/model/DescribeSecurityGroupsRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupsResponse.h>
#include <aws/ec2/model/DescribeSnapshotsRequest.h>
#include <aws/ec2/model/DescribeSnapshotsResponse.h>
#include <aws/ec2/model/DescribeSpotInstanceRequestsRequest.h>
#include <aws/ec2/model/DescribeSpotInstanceRequestsResponse.h>
#include <aws/ec2/model/DescribeStoreImageTasksRequest.h>
#include <aws/ec2/model/DescribeStoreImageTasksResponse.h>
#include <aws/ec2/model/DescribeSubnetsRequest.h>
#include <aws/ec2/model/DescribeSubnetsResponse.h>
#include <aws/ec2/model/DescribeVolumesRequest.h>
#include <aws/ec2/model/DescribeVolumesResponse.h>
#include <aws/ec2/model/DescribeVpcPeeringConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpcPeeringConnectionsResponse.h>
#include <aws/ec2/model/DescribeVpcsRequest.h>
#include <aws/ec2/model/DescribeVpcsResponse.h>
#include <aws/ec2/model/DescribeVpnConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpnConnectionsResponse.h>
#include <aws/ec2/model/ExportTaskState.h>
#include <aws/ec2/model/GetPasswordDataRequest.h>
#include <aws/ec2/model/GetPasswordDataResponse.h>
#include <aws/ec2/model/ImageState.h>
#include <aws/ec2/model/InstanceStateName.h>
#include <aws/ec2/model/NatGatewayState.h>
#include <aws/ec2/model/NetworkInterfaceStatus.h>
#include <aws/ec2/model/SecondaryNetworkState.h>
#include <aws/ec2/model/SecondarySubnetState.h>
#include <aws/ec2/model/SecurityGroupVpcAssociationState.h>
#include <aws/ec2/model/SnapshotState.h>
#include <aws/ec2/model/SubnetState.h>
#include <aws/ec2/model/SummaryStatus.h>
#include <aws/ec2/model/VolumeState.h>
#include <aws/ec2/model/VpcPeeringConnectionStateReasonCode.h>
#include <aws/ec2/model/VpcState.h>
#include <aws/ec2/model/VpnState.h>

#include <algorithm>

namespace Aws {
namespace EC2 {

template <typename DerivedClient = EC2Client>
class EC2Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeBundleTasksOutcome> WaitUntilBundleTaskComplete(
      const Model::DescribeBundleTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeBundleTasksOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("complete"),
         [](const Model::DescribeBundleTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetBundleTasks().begin(), result.GetBundleTasks().end(), [&](const Model::BundleTask& item) {
             return Model::BundleTaskStateMapper::GetNameForBundleTaskState(item.GetState()) == expected.get<Aws::String>();
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
         [](const Model::DescribeBundleTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetBundleTasks().begin(), result.GetBundleTasks().end(), [&](const Model::BundleTask& item) {
             return Model::BundleTaskStateMapper::GetNameForBundleTaskState(item.GetState()) == expected.get<Aws::String>();
           });
         }});

    auto operation = [this](const Model::DescribeBundleTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeBundleTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeBundleTasksRequest, Model::DescribeBundleTasksOutcome> waiter(15, 8, acceptors, operation,
                                                                                                    "WaitUntilBundleTaskComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeConversionTasksOutcome> WaitUntilConversionTaskCancelled(
      const Model::DescribeConversionTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeConversionTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("cancelled"),
                         [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetConversionTasks().begin(), result.GetConversionTasks().end(),
                                              [&](const Model::ConversionTask& item) {
                                                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeConversionTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeConversionTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeConversionTasksRequest, Model::DescribeConversionTasksOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilConversionTaskCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeConversionTasksOutcome> WaitUntilConversionTaskCompleted(
      const Model::DescribeConversionTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeConversionTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("completed"),
                         [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetConversionTasks().begin(), result.GetConversionTasks().end(),
                                              [&](const Model::ConversionTask& item) {
                                                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("cancelled"),
                         [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetConversionTasks().begin(), result.GetConversionTasks().end(),
                                              [&](const Model::ConversionTask& item) {
                                                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("cancelling"),
                         [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetConversionTasks().begin(), result.GetConversionTasks().end(),
                                              [&](const Model::ConversionTask& item) {
                                                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeConversionTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeConversionTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeConversionTasksRequest, Model::DescribeConversionTasksOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilConversionTaskCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeConversionTasksOutcome> WaitUntilConversionTaskDeleted(
      const Model::DescribeConversionTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeConversionTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetConversionTasks().begin(), result.GetConversionTasks().end(),
                                              [&](const Model::ConversionTask& item) {
                                                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeConversionTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeConversionTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeConversionTasksRequest, Model::DescribeConversionTasksOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilConversionTaskDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeCustomerGatewaysOutcome> WaitUntilCustomerGatewayAvailable(
      const Model::DescribeCustomerGatewaysRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeCustomerGatewaysOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeCustomerGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetCustomerGateways().begin(), result.GetCustomerGateways().end(),
                               [&](const Model::CustomerGateway& item) { return item.GetState() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeCustomerGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetCustomerGateways().begin(), result.GetCustomerGateways().end(),
                               [&](const Model::CustomerGateway& item) { return item.GetState() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeCustomerGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetCustomerGateways().begin(), result.GetCustomerGateways().end(),
                               [&](const Model::CustomerGateway& item) { return item.GetState() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeCustomerGatewaysRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeCustomerGateways(req);
    };
    Aws::Utils::Waiter<Model::DescribeCustomerGatewaysRequest, Model::DescribeCustomerGatewaysOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilCustomerGatewayAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeExportTasksOutcome> WaitUntilExportTaskCancelled(
      const Model::DescribeExportTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeExportTasksOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("cancelled"),
         [](const Model::DescribeExportTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetExportTasks().begin(), result.GetExportTasks().end(), [&](const Model::ExportTask& item) {
             return Model::ExportTaskStateMapper::GetNameForExportTaskState(item.GetState()) == expected.get<Aws::String>();
           });
         }});

    auto operation = [this](const Model::DescribeExportTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeExportTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeExportTasksRequest, Model::DescribeExportTasksOutcome> waiter(15, 8, acceptors, operation,
                                                                                                    "WaitUntilExportTaskCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeExportTasksOutcome> WaitUntilExportTaskCompleted(
      const Model::DescribeExportTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeExportTasksOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("completed"),
         [](const Model::DescribeExportTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetExportTasks().begin(), result.GetExportTasks().end(), [&](const Model::ExportTask& item) {
             return Model::ExportTaskStateMapper::GetNameForExportTaskState(item.GetState()) == expected.get<Aws::String>();
           });
         }});

    auto operation = [this](const Model::DescribeExportTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeExportTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeExportTasksRequest, Model::DescribeExportTasksOutcome> waiter(15, 8, acceptors, operation,
                                                                                                    "WaitUntilExportTaskCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImagesOutcome> WaitUntilImageAvailable(const Model::DescribeImagesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImagesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeImagesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetImages().begin(), result.GetImages().end(), [&](const Model::Image& item) {
                             return Model::ImageStateMapper::GetNameForImageState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeImagesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetImages().begin(), result.GetImages().end(), [&](const Model::Image& item) {
                             return Model::ImageStateMapper::GetNameForImageState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeImagesRequest& req) { return static_cast<DerivedClient*>(this)->DescribeImages(req); };
    Aws::Utils::Waiter<Model::DescribeImagesRequest, Model::DescribeImagesOutcome> waiter(15, 8, acceptors, operation,
                                                                                          "WaitUntilImageAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImagesOutcome> WaitUntilImageExists(const Model::DescribeImagesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImagesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeImagesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetImages().size() > 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidAMIID.NotFound")});

    auto operation = [this](const Model::DescribeImagesRequest& req) { return static_cast<DerivedClient*>(this)->DescribeImages(req); };
    Aws::Utils::Waiter<Model::DescribeImagesRequest, Model::DescribeImagesOutcome> waiter(15, 8, acceptors, operation,
                                                                                          "WaitUntilImageExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageUsageReportsOutcome> WaitUntilImageUsageReportAvailable(
      const Model::DescribeImageUsageReportsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImageUsageReportsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeImageUsageReportsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetImageUsageReports().begin(), result.GetImageUsageReports().end(),
                               [&](const Model::ImageUsageReport& item) { return item.GetState() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeImageUsageReportsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetImageUsageReports().begin(), result.GetImageUsageReports().end(),
                               [&](const Model::ImageUsageReport& item) { return item.GetState() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeImageUsageReportsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeImageUsageReports(req);
    };
    Aws::Utils::Waiter<Model::DescribeImageUsageReportsRequest, Model::DescribeImageUsageReportsOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilImageUsageReportAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImportSnapshotTasksOutcome> WaitUntilSnapshotImported(
      const Model::DescribeImportSnapshotTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImportSnapshotTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("completed"),
                         [](const Model::DescribeImportSnapshotTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetImportSnapshotTasks().begin(), result.GetImportSnapshotTasks().end(),
                                              [&](const Model::ImportSnapshotTask& item) {
                                                return item.GetSnapshotTaskDetail().GetStatus() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("error"),
                         [](const Model::DescribeImportSnapshotTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetImportSnapshotTasks().begin(), result.GetImportSnapshotTasks().end(),
                                              [&](const Model::ImportSnapshotTask& item) {
                                                return item.GetSnapshotTaskDetail().GetStatus() == expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeImportSnapshotTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeImportSnapshotTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeImportSnapshotTasksRequest, Model::DescribeImportSnapshotTasksOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilSnapshotImported");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstancesOutcome> WaitUntilInstanceExists(const Model::DescribeInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInstancesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetReservations().size() > 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidInstanceID.NotFound")});

    auto operation = [this](const Model::DescribeInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeInstancesRequest, Model::DescribeInstancesOutcome> waiter(5, 24, acceptors, operation,
                                                                                                "WaitUntilInstanceExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstancesOutcome> WaitUntilInstanceRunning(const Model::DescribeInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInstancesOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("running"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::all_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("shutting-down"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("terminated"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("stopping"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidInstanceID.NotFound")});

    auto operation = [this](const Model::DescribeInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeInstancesRequest, Model::DescribeInstancesOutcome> waiter(15, 8, acceptors, operation,
                                                                                                "WaitUntilInstanceRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstancesOutcome> WaitUntilInstanceStopped(const Model::DescribeInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInstancesOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("stopped"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::all_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("pending"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("terminated"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});

    auto operation = [this](const Model::DescribeInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeInstancesRequest, Model::DescribeInstancesOutcome> waiter(15, 8, acceptors, operation,
                                                                                                "WaitUntilInstanceStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstancesOutcome> WaitUntilInstanceTerminated(const Model::DescribeInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInstancesOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("terminated"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::all_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("pending"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("stopping"),
         [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
             return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
               return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) ==
                      expected.get<Aws::String>();
             });
           });
         }});

    auto operation = [this](const Model::DescribeInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeInstancesRequest, Model::DescribeInstancesOutcome> waiter(15, 8, acceptors, operation,
                                                                                                "WaitUntilInstanceTerminated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstanceStatusOutcome> WaitUntilInstanceStatusOk(
      const Model::DescribeInstanceStatusRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInstanceStatusOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ok"),
                         [](const Model::DescribeInstanceStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetInstanceStatuses().begin(), result.GetInstanceStatuses().end(),
                                              [&](const Model::InstanceStatus& item) {
                                                return Model::SummaryStatusMapper::GetNameForSummaryStatus(
                                                           item.GetInstanceStatus().GetStatus()) == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidInstanceID.NotFound")});

    auto operation = [this](const Model::DescribeInstanceStatusRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeInstanceStatus(req);
    };
    Aws::Utils::Waiter<Model::DescribeInstanceStatusRequest, Model::DescribeInstanceStatusOutcome> waiter(15, 8, acceptors, operation,
                                                                                                          "WaitUntilInstanceStatusOk");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstanceStatusOutcome> WaitUntilSystemStatusOk(
      const Model::DescribeInstanceStatusRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInstanceStatusOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ok"),
                         [](const Model::DescribeInstanceStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetInstanceStatuses().begin(), result.GetInstanceStatuses().end(),
                                              [&](const Model::InstanceStatus& item) {
                                                return Model::SummaryStatusMapper::GetNameForSummaryStatus(
                                                           item.GetSystemStatus().GetStatus()) == expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeInstanceStatusRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeInstanceStatus(req);
    };
    Aws::Utils::Waiter<Model::DescribeInstanceStatusRequest, Model::DescribeInstanceStatusOutcome> waiter(15, 8, acceptors, operation,
                                                                                                          "WaitUntilSystemStatusOk");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInternetGatewaysOutcome> WaitUntilInternetGatewayExists(
      const Model::DescribeInternetGatewaysRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInternetGatewaysOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeInternetGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetInternetGateways().size() > 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidInternetGateway.NotFound")});

    auto operation = [this](const Model::DescribeInternetGatewaysRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeInternetGateways(req);
    };
    Aws::Utils::Waiter<Model::DescribeInternetGatewaysRequest, Model::DescribeInternetGatewaysOutcome> waiter(
        5, 24, acceptors, operation, "WaitUntilInternetGatewayExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeKeyPairsOutcome> WaitUntilKeyPairExists(const Model::DescribeKeyPairsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeKeyPairsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeKeyPairsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetKeyPairs().size() > 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidKeyPair.NotFound")});

    auto operation = [this](const Model::DescribeKeyPairsRequest& req) { return static_cast<DerivedClient*>(this)->DescribeKeyPairs(req); };
    Aws::Utils::Waiter<Model::DescribeKeyPairsRequest, Model::DescribeKeyPairsOutcome> waiter(5, 24, acceptors, operation,
                                                                                              "WaitUntilKeyPairExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNatGatewaysOutcome> WaitUntilNatGatewayAvailable(
      const Model::DescribeNatGatewaysRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNatGatewaysOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
         [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
             return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
         [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
             return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
         [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
             return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
           });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
         [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
             return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
           });
         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("NatGatewayNotFound")});

    auto operation = [this](const Model::DescribeNatGatewaysRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeNatGateways(req);
    };
    Aws::Utils::Waiter<Model::DescribeNatGatewaysRequest, Model::DescribeNatGatewaysOutcome> waiter(15, 8, acceptors, operation,
                                                                                                    "WaitUntilNatGatewayAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNatGatewaysOutcome> WaitUntilNatGatewayDeleted(
      const Model::DescribeNatGatewaysRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNatGatewaysOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
         [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
             return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
           });
         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("NatGatewayNotFound")});

    auto operation = [this](const Model::DescribeNatGatewaysRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeNatGateways(req);
    };
    Aws::Utils::Waiter<Model::DescribeNatGatewaysRequest, Model::DescribeNatGatewaysOutcome> waiter(15, 8, acceptors, operation,
                                                                                                    "WaitUntilNatGatewayDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNetworkInterfacesOutcome> WaitUntilNetworkInterfaceAvailable(
      const Model::DescribeNetworkInterfacesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNetworkInterfacesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeNetworkInterfacesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetNetworkInterfaces().begin(), result.GetNetworkInterfaces().end(),
                                              [&](const Model::NetworkInterface& item) {
                                                return Model::NetworkInterfaceStatusMapper::GetNameForNetworkInterfaceStatus(
                                                           item.GetStatus()) == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidNetworkInterfaceID.NotFound")});

    auto operation = [this](const Model::DescribeNetworkInterfacesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeNetworkInterfaces(req);
    };
    Aws::Utils::Waiter<Model::DescribeNetworkInterfacesRequest, Model::DescribeNetworkInterfacesOutcome> waiter(
        20, 6, acceptors, operation, "WaitUntilNetworkInterfaceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecondaryNetworksOutcome> WaitUntilSecondaryNetworkCreateComplete(
      const Model::DescribeSecondaryNetworksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSecondaryNetworksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("create-complete"),
                         [](const Model::DescribeSecondaryNetworksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetSecondaryNetworks().begin(), result.GetSecondaryNetworks().end(),
                                              [&](const Model::SecondaryNetwork& item) {
                                                return Model::SecondaryNetworkStateMapper::GetNameForSecondaryNetworkState(
                                                           item.GetState()) == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("create-failed"),
                         [](const Model::DescribeSecondaryNetworksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSecondaryNetworks().begin(), result.GetSecondaryNetworks().end(),
                                              [&](const Model::SecondaryNetwork& item) {
                                                return Model::SecondaryNetworkStateMapper::GetNameForSecondaryNetworkState(
                                                           item.GetState()) == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidSecondaryNetworkId.NotFound")});

    auto operation = [this](const Model::DescribeSecondaryNetworksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSecondaryNetworks(req);
    };
    Aws::Utils::Waiter<Model::DescribeSecondaryNetworksRequest, Model::DescribeSecondaryNetworksOutcome> waiter(
        10, 12, acceptors, operation, "WaitUntilSecondaryNetworkCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecondaryNetworksOutcome> WaitUntilSecondaryNetworkDeleteComplete(
      const Model::DescribeSecondaryNetworksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSecondaryNetworksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("delete-complete"),
                         [](const Model::DescribeSecondaryNetworksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetSecondaryNetworks().begin(), result.GetSecondaryNetworks().end(),
                                              [&](const Model::SecondaryNetwork& item) {
                                                return Model::SecondaryNetworkStateMapper::GetNameForSecondaryNetworkState(
                                                           item.GetState()) == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("delete-failed"),
                         [](const Model::DescribeSecondaryNetworksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSecondaryNetworks().begin(), result.GetSecondaryNetworks().end(),
                                              [&](const Model::SecondaryNetwork& item) {
                                                return Model::SecondaryNetworkStateMapper::GetNameForSecondaryNetworkState(
                                                           item.GetState()) == expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeSecondaryNetworksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSecondaryNetworks(req);
    };
    Aws::Utils::Waiter<Model::DescribeSecondaryNetworksRequest, Model::DescribeSecondaryNetworksOutcome> waiter(
        10, 12, acceptors, operation, "WaitUntilSecondaryNetworkDeleteComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecondarySubnetsOutcome> WaitUntilSecondarySubnetCreateComplete(
      const Model::DescribeSecondarySubnetsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSecondarySubnetsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("create-complete"),
                         [](const Model::DescribeSecondarySubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetSecondarySubnets().begin(), result.GetSecondarySubnets().end(),
                                              [&](const Model::SecondarySubnet& item) {
                                                return Model::SecondarySubnetStateMapper::GetNameForSecondarySubnetState(item.GetState()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("delete-failed"),
                         [](const Model::DescribeSecondarySubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSecondarySubnets().begin(), result.GetSecondarySubnets().end(),
                                              [&](const Model::SecondarySubnet& item) {
                                                return Model::SecondarySubnetStateMapper::GetNameForSecondarySubnetState(item.GetState()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidSecondarySubnetId.NotFound")});

    auto operation = [this](const Model::DescribeSecondarySubnetsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSecondarySubnets(req);
    };
    Aws::Utils::Waiter<Model::DescribeSecondarySubnetsRequest, Model::DescribeSecondarySubnetsOutcome> waiter(
        10, 12, acceptors, operation, "WaitUntilSecondarySubnetCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecondarySubnetsOutcome> WaitUntilSecondarySubnetDeleteComplete(
      const Model::DescribeSecondarySubnetsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSecondarySubnetsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("delete-complete"),
                         [](const Model::DescribeSecondarySubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetSecondarySubnets().begin(), result.GetSecondarySubnets().end(),
                                              [&](const Model::SecondarySubnet& item) {
                                                return Model::SecondarySubnetStateMapper::GetNameForSecondarySubnetState(item.GetState()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("delete-failed"),
                         [](const Model::DescribeSecondarySubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSecondarySubnets().begin(), result.GetSecondarySubnets().end(),
                                              [&](const Model::SecondarySubnet& item) {
                                                return Model::SecondarySubnetStateMapper::GetNameForSecondarySubnetState(item.GetState()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeSecondarySubnetsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSecondarySubnets(req);
    };
    Aws::Utils::Waiter<Model::DescribeSecondarySubnetsRequest, Model::DescribeSecondarySubnetsOutcome> waiter(
        10, 12, acceptors, operation, "WaitUntilSecondarySubnetDeleteComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecurityGroupsOutcome> WaitUntilSecurityGroupExists(
      const Model::DescribeSecurityGroupsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSecurityGroupsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeSecurityGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetSecurityGroups().size() > 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidGroup.NotFound")});

    auto operation = [this](const Model::DescribeSecurityGroupsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSecurityGroups(req);
    };
    Aws::Utils::Waiter<Model::DescribeSecurityGroupsRequest, Model::DescribeSecurityGroupsOutcome> waiter(5, 24, acceptors, operation,
                                                                                                          "WaitUntilSecurityGroupExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecurityGroupVpcAssociationsOutcome> WaitUntilSecurityGroupVpcAssociationAssociated(
      const Model::DescribeSecurityGroupVpcAssociationsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSecurityGroupVpcAssociationsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("associated"),
                         [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                               [&](const Model::SecurityGroupVpcAssociation& item) {
                                 return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                            item.GetState()) == expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("associating"),
                         [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                               [&](const Model::SecurityGroupVpcAssociation& item) {
                                 return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                            item.GetState()) == expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("association-failed"),
                         [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                               [&](const Model::SecurityGroupVpcAssociation& item) {
                                 return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                            item.GetState()) == expected.get<Aws::String>();
                               });
                         }});

    auto operation = [this](const Model::DescribeSecurityGroupVpcAssociationsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSecurityGroupVpcAssociations(req);
    };
    Aws::Utils::Waiter<Model::DescribeSecurityGroupVpcAssociationsRequest, Model::DescribeSecurityGroupVpcAssociationsOutcome> waiter(
        10, 12, acceptors, operation, "WaitUntilSecurityGroupVpcAssociationAssociated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecurityGroupVpcAssociationsOutcome> WaitUntilSecurityGroupVpcAssociationDisassociated(
      const Model::DescribeSecurityGroupVpcAssociationsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSecurityGroupVpcAssociationsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("disassociated"),
                         [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                               [&](const Model::SecurityGroupVpcAssociation& item) {
                                 return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                            item.GetState()) == expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("disassociating"),
                         [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                               [&](const Model::SecurityGroupVpcAssociation& item) {
                                 return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                            item.GetState()) == expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("disassociation-failed"),
                         [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                               [&](const Model::SecurityGroupVpcAssociation& item) {
                                 return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                            item.GetState()) == expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetSecurityGroupVpcAssociations().size() == 0) == expected.get<bool>();
                         }});

    auto operation = [this](const Model::DescribeSecurityGroupVpcAssociationsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSecurityGroupVpcAssociations(req);
    };
    Aws::Utils::Waiter<Model::DescribeSecurityGroupVpcAssociationsRequest, Model::DescribeSecurityGroupVpcAssociationsOutcome> waiter(
        10, 12, acceptors, operation, "WaitUntilSecurityGroupVpcAssociationDisassociated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSnapshotsOutcome> WaitUntilSnapshotCompleted(const Model::DescribeSnapshotsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSnapshotsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("completed"),
                         [](const Model::DescribeSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetSnapshots().begin(), result.GetSnapshots().end(), [&](const Model::Snapshot& item) {
                             return Model::SnapshotStateMapper::GetNameForSnapshotState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("error"),
                         [](const Model::DescribeSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSnapshots().begin(), result.GetSnapshots().end(), [&](const Model::Snapshot& item) {
                             return Model::SnapshotStateMapper::GetNameForSnapshotState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeSnapshotsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSnapshots(req);
    };
    Aws::Utils::Waiter<Model::DescribeSnapshotsRequest, Model::DescribeSnapshotsOutcome> waiter(15, 8, acceptors, operation,
                                                                                                "WaitUntilSnapshotCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSpotInstanceRequestsOutcome> WaitUntilSpotInstanceRequestFulfilled(
      const Model::DescribeSpotInstanceRequestsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSpotInstanceRequestsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("fulfilled"),
                         [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
                                              [&](const Model::SpotInstanceRequest& item) {
                                                return item.GetStatus().GetCode() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("request-canceled-and-instance-running"),
         [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(
               result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
               [&](const Model::SpotInstanceRequest& item) { return item.GetStatus().GetCode() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("schedule-expired"),
                         [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
                                              [&](const Model::SpotInstanceRequest& item) {
                                                return item.GetStatus().GetCode() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("canceled-before-fulfillment"),
                         [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
                                              [&](const Model::SpotInstanceRequest& item) {
                                                return item.GetStatus().GetCode() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("bad-parameters"),
                         [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
                                              [&](const Model::SpotInstanceRequest& item) {
                                                return item.GetStatus().GetCode() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("system-error"),
                         [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
                                              [&](const Model::SpotInstanceRequest& item) {
                                                return item.GetStatus().GetCode() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidSpotInstanceRequestID.NotFound")});

    auto operation = [this](const Model::DescribeSpotInstanceRequestsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSpotInstanceRequests(req);
    };
    Aws::Utils::Waiter<Model::DescribeSpotInstanceRequestsRequest, Model::DescribeSpotInstanceRequestsOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilSpotInstanceRequestFulfilled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStoreImageTasksOutcome> WaitUntilStoreImageTaskComplete(
      const Model::DescribeStoreImageTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStoreImageTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Completed"),
                         [](const Model::DescribeStoreImageTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStoreImageTaskResults().begin(), result.GetStoreImageTaskResults().end(),
                                              [&](const Model::StoreImageTaskResponse& item) {
                                                return item.GetStoreTaskState() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeStoreImageTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStoreImageTaskResults().begin(), result.GetStoreImageTaskResults().end(),
                                              [&](const Model::StoreImageTaskResponse& item) {
                                                return item.GetStoreTaskState() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("InProgress"),
                         [](const Model::DescribeStoreImageTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStoreImageTaskResults().begin(), result.GetStoreImageTaskResults().end(),
                                              [&](const Model::StoreImageTaskResponse& item) {
                                                return item.GetStoreTaskState() == expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeStoreImageTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeStoreImageTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeStoreImageTasksRequest, Model::DescribeStoreImageTasksOutcome> waiter(
        5, 24, acceptors, operation, "WaitUntilStoreImageTaskComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSubnetsOutcome> WaitUntilSubnetAvailable(const Model::DescribeSubnetsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeSubnetsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeSubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetSubnets().begin(), result.GetSubnets().end(), [&](const Model::Subnet& item) {
                             return Model::SubnetStateMapper::GetNameForSubnetState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeSubnetsRequest& req) { return static_cast<DerivedClient*>(this)->DescribeSubnets(req); };
    Aws::Utils::Waiter<Model::DescribeSubnetsRequest, Model::DescribeSubnetsOutcome> waiter(15, 8, acceptors, operation,
                                                                                            "WaitUntilSubnetAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVolumesOutcome> WaitUntilVolumeAvailable(const Model::DescribeVolumesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVolumesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
                             return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
                             return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeVolumesRequest& req) { return static_cast<DerivedClient*>(this)->DescribeVolumes(req); };
    Aws::Utils::Waiter<Model::DescribeVolumesRequest, Model::DescribeVolumesOutcome> waiter(15, 8, acceptors, operation,
                                                                                            "WaitUntilVolumeAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVolumesOutcome> WaitUntilVolumeDeleted(const Model::DescribeVolumesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVolumesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
                             return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidVolume.NotFound")});

    auto operation = [this](const Model::DescribeVolumesRequest& req) { return static_cast<DerivedClient*>(this)->DescribeVolumes(req); };
    Aws::Utils::Waiter<Model::DescribeVolumesRequest, Model::DescribeVolumesOutcome> waiter(15, 8, acceptors, operation,
                                                                                            "WaitUntilVolumeDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVolumesOutcome> WaitUntilVolumeInUse(const Model::DescribeVolumesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVolumesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("in-use"),
                         [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
                             return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
                             return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeVolumesRequest& req) { return static_cast<DerivedClient*>(this)->DescribeVolumes(req); };
    Aws::Utils::Waiter<Model::DescribeVolumesRequest, Model::DescribeVolumesOutcome> waiter(15, 8, acceptors, operation,
                                                                                            "WaitUntilVolumeInUse");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpcPeeringConnectionsOutcome> WaitUntilVpcPeeringConnectionDeleted(
      const Model::DescribeVpcPeeringConnectionsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVpcPeeringConnectionsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeVpcPeeringConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetVpcPeeringConnections().begin(), result.GetVpcPeeringConnections().end(),
                               [&](const Model::VpcPeeringConnection& item) {
                                 return Model::VpcPeeringConnectionStateReasonCodeMapper::GetNameForVpcPeeringConnectionStateReasonCode(
                                            item.GetStatus().GetCode()) == expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidVpcPeeringConnectionID.NotFound")});

    auto operation = [this](const Model::DescribeVpcPeeringConnectionsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeVpcPeeringConnections(req);
    };
    Aws::Utils::Waiter<Model::DescribeVpcPeeringConnectionsRequest, Model::DescribeVpcPeeringConnectionsOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilVpcPeeringConnectionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpcPeeringConnectionsOutcome> WaitUntilVpcPeeringConnectionExists(
      const Model::DescribeVpcPeeringConnectionsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVpcPeeringConnectionsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back(
        {Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidVpcPeeringConnectionID.NotFound")});

    auto operation = [this](const Model::DescribeVpcPeeringConnectionsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeVpcPeeringConnections(req);
    };
    Aws::Utils::Waiter<Model::DescribeVpcPeeringConnectionsRequest, Model::DescribeVpcPeeringConnectionsOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilVpcPeeringConnectionExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpcsOutcome> WaitUntilVpcAvailable(const Model::DescribeVpcsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVpcsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeVpcsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetVpcs().begin(), result.GetVpcs().end(), [&](const Model::Vpc& item) {
                             return Model::VpcStateMapper::GetNameForVpcState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeVpcsRequest& req) { return static_cast<DerivedClient*>(this)->DescribeVpcs(req); };
    Aws::Utils::Waiter<Model::DescribeVpcsRequest, Model::DescribeVpcsOutcome> waiter(15, 8, acceptors, operation, "WaitUntilVpcAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpcsOutcome> WaitUntilVpcExists(const Model::DescribeVpcsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVpcsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidVpcID.NotFound")});

    auto operation = [this](const Model::DescribeVpcsRequest& req) { return static_cast<DerivedClient*>(this)->DescribeVpcs(req); };
    Aws::Utils::Waiter<Model::DescribeVpcsRequest, Model::DescribeVpcsOutcome> waiter(1, 120, acceptors, operation, "WaitUntilVpcExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpnConnectionsOutcome> WaitUntilVpnConnectionAvailable(
      const Model::DescribeVpnConnectionsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVpnConnectionsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
                                 return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
                                 return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
                                 return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
                               });
                         }});

    auto operation = [this](const Model::DescribeVpnConnectionsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeVpnConnections(req);
    };
    Aws::Utils::Waiter<Model::DescribeVpnConnectionsRequest, Model::DescribeVpnConnectionsOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilVpnConnectionAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpnConnectionsOutcome> WaitUntilVpnConnectionDeleted(
      const Model::DescribeVpnConnectionsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVpnConnectionsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
                                 return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("pending"),
                         [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
                                 return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
                               });
                         }});

    auto operation = [this](const Model::DescribeVpnConnectionsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeVpnConnections(req);
    };
    Aws::Utils::Waiter<Model::DescribeVpnConnectionsRequest, Model::DescribeVpnConnectionsOutcome> waiter(15, 8, acceptors, operation,
                                                                                                          "WaitUntilVpnConnectionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPasswordDataOutcome> WaitUntilPasswordDataAvailable(const Model::GetPasswordDataRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPasswordDataOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::GetPasswordDataOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetPasswordData().size() > 0) == expected.get<bool>();
                         }});

    auto operation = [this](const Model::GetPasswordDataRequest& req) { return static_cast<DerivedClient*>(this)->GetPasswordData(req); };
    Aws::Utils::Waiter<Model::GetPasswordDataRequest, Model::GetPasswordDataOutcome> waiter(15, 8, acceptors, operation,
                                                                                            "WaitUntilPasswordDataAvailable");
    return waiter.Wait(request);
  }
};
}  // namespace EC2
}  // namespace Aws
