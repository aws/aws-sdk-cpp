/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::DescribeBundleTasksOutcome;
    using RequestT = Model::DescribeBundleTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BundleTaskCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("complete"),
        [](const Model::DescribeBundleTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetBundleTasks().begin(), result.GetBundleTasks().end(), [&](const Model::BundleTask& item) {
            return Model::BundleTaskStateMapper::GetNameForBundleTaskState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BundleTaskCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeBundleTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetBundleTasks().begin(), result.GetBundleTasks().end(), [&](const Model::BundleTask& item) {
            return Model::BundleTaskStateMapper::GetNameForBundleTaskState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeBundleTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilBundleTaskComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeConversionTasksOutcome> WaitUntilConversionTaskCancelled(
      const Model::DescribeConversionTasksRequest& request) {
    using OutcomeT = Model::DescribeConversionTasksOutcome;
    using RequestT = Model::DescribeConversionTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConversionTaskCancelledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("cancelled"),
        [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetConversionTasks().begin(), result.GetConversionTasks().end(), [&](const Model::ConversionTask& item) {
                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) == expected.get<Aws::String>();
              });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeConversionTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilConversionTaskCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeConversionTasksOutcome> WaitUntilConversionTaskCompleted(
      const Model::DescribeConversionTasksRequest& request) {
    using OutcomeT = Model::DescribeConversionTasksOutcome;
    using RequestT = Model::DescribeConversionTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConversionTaskCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("completed"),
        [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetConversionTasks().begin(), result.GetConversionTasks().end(), [&](const Model::ConversionTask& item) {
                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConversionTaskCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("cancelled"),
        [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetConversionTasks().begin(), result.GetConversionTasks().end(), [&](const Model::ConversionTask& item) {
                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConversionTaskCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("cancelling"),
        [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetConversionTasks().begin(), result.GetConversionTasks().end(), [&](const Model::ConversionTask& item) {
                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) == expected.get<Aws::String>();
              });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeConversionTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilConversionTaskCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeConversionTasksOutcome> WaitUntilConversionTaskDeleted(
      const Model::DescribeConversionTasksRequest& request) {
    using OutcomeT = Model::DescribeConversionTasksOutcome;
    using RequestT = Model::DescribeConversionTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConversionTaskDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("deleted"),
        [](const Model::DescribeConversionTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetConversionTasks().begin(), result.GetConversionTasks().end(), [&](const Model::ConversionTask& item) {
                return Model::ConversionTaskStateMapper::GetNameForConversionTaskState(item.GetState()) == expected.get<Aws::String>();
              });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeConversionTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilConversionTaskDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeCustomerGatewaysOutcome> WaitUntilCustomerGatewayAvailable(
      const Model::DescribeCustomerGatewaysRequest& request) {
    using OutcomeT = Model::DescribeCustomerGatewaysOutcome;
    using RequestT = Model::DescribeCustomerGatewaysRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CustomerGatewayAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeCustomerGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetCustomerGateways().begin(), result.GetCustomerGateways().end(),
                             [&](const Model::CustomerGateway& item) { return item.GetState() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CustomerGatewayAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeCustomerGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCustomerGateways().begin(), result.GetCustomerGateways().end(),
                             [&](const Model::CustomerGateway& item) { return item.GetState() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CustomerGatewayAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeCustomerGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCustomerGateways().begin(), result.GetCustomerGateways().end(),
                             [&](const Model::CustomerGateway& item) { return item.GetState() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCustomerGateways(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilCustomerGatewayAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeExportTasksOutcome> WaitUntilExportTaskCancelled(
      const Model::DescribeExportTasksRequest& request) {
    using OutcomeT = Model::DescribeExportTasksOutcome;
    using RequestT = Model::DescribeExportTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportTaskCancelledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("cancelled"),
        [](const Model::DescribeExportTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetExportTasks().begin(), result.GetExportTasks().end(), [&](const Model::ExportTask& item) {
            return Model::ExportTaskStateMapper::GetNameForExportTaskState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeExportTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilExportTaskCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeExportTasksOutcome> WaitUntilExportTaskCompleted(
      const Model::DescribeExportTasksRequest& request) {
    using OutcomeT = Model::DescribeExportTasksOutcome;
    using RequestT = Model::DescribeExportTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportTaskCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("completed"),
        [](const Model::DescribeExportTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetExportTasks().begin(), result.GetExportTasks().end(), [&](const Model::ExportTask& item) {
            return Model::ExportTaskStateMapper::GetNameForExportTaskState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeExportTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilExportTaskCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImagesOutcome> WaitUntilImageAvailable(const Model::DescribeImagesRequest& request) {
    using OutcomeT = Model::DescribeImagesOutcome;
    using RequestT = Model::DescribeImagesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeImagesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetImages().begin(), result.GetImages().end(), [&](const Model::Image& item) {
            return Model::ImageStateMapper::GetNameForImageState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeImagesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetImages().begin(), result.GetImages().end(), [&](const Model::Image& item) {
            return Model::ImageStateMapper::GetNameForImageState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImages(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilImageAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImagesOutcome> WaitUntilImageExists(const Model::DescribeImagesRequest& request) {
    using OutcomeT = Model::DescribeImagesOutcome;
    using RequestT = Model::DescribeImagesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageExistsWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeImagesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetImages().size() > 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ImageExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvalidAMIID.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImages(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilImageExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageUsageReportsOutcome> WaitUntilImageUsageReportAvailable(
      const Model::DescribeImageUsageReportsRequest& request) {
    using OutcomeT = Model::DescribeImageUsageReportsOutcome;
    using RequestT = Model::DescribeImageUsageReportsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageUsageReportAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeImageUsageReportsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetImageUsageReports().begin(), result.GetImageUsageReports().end(),
                             [&](const Model::ImageUsageReport& item) { return item.GetState() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageUsageReportAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeImageUsageReportsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetImageUsageReports().begin(), result.GetImageUsageReports().end(),
                             [&](const Model::ImageUsageReport& item) { return item.GetState() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImageUsageReports(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilImageUsageReportAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImportSnapshotTasksOutcome> WaitUntilSnapshotImported(
      const Model::DescribeImportSnapshotTasksRequest& request) {
    using OutcomeT = Model::DescribeImportSnapshotTasksOutcome;
    using RequestT = Model::DescribeImportSnapshotTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SnapshotImportedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("completed"),
        [](const Model::DescribeImportSnapshotTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetImportSnapshotTasks().begin(), result.GetImportSnapshotTasks().end(),
                             [&](const Model::ImportSnapshotTask& item) {
                               return item.GetSnapshotTaskDetail().GetStatus() == expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SnapshotImportedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("error"),
        [](const Model::DescribeImportSnapshotTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetImportSnapshotTasks().begin(), result.GetImportSnapshotTasks().end(),
                             [&](const Model::ImportSnapshotTask& item) {
                               return item.GetSnapshotTaskDetail().GetStatus() == expected.get<Aws::String>();
                             });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImportSnapshotTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilSnapshotImported");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstancesOutcome> WaitUntilInstanceExists(const Model::DescribeInstancesRequest& request) {
    using OutcomeT = Model::DescribeInstancesOutcome;
    using RequestT = Model::DescribeInstancesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceExistsWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetReservations().size() > 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InstanceExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvalidInstanceID.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilInstanceExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstancesOutcome> WaitUntilInstanceRunning(const Model::DescribeInstancesRequest& request) {
    using OutcomeT = Model::DescribeInstancesOutcome;
    using RequestT = Model::DescribeInstancesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("running"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::all_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("shutting-down"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("terminated"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopping"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InstanceRunningWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvalidInstanceID.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilInstanceRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstancesOutcome> WaitUntilInstanceStopped(const Model::DescribeInstancesRequest& request) {
    using OutcomeT = Model::DescribeInstancesOutcome;
    using RequestT = Model::DescribeInstancesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("stopped"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::all_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("pending"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("terminated"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilInstanceStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstancesOutcome> WaitUntilInstanceTerminated(const Model::DescribeInstancesRequest& request) {
    using OutcomeT = Model::DescribeInstancesOutcome;
    using RequestT = Model::DescribeInstancesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceTerminatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("terminated"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::all_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceTerminatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("pending"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceTerminatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopping"),
        [](const Model::DescribeInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReservations().begin(), result.GetReservations().end(), [&](const Model::Reservation& item0) {
            return std::any_of(item0.GetInstances().begin(), item0.GetInstances().end(), [&](const Model::Instance& item1) {
              return Model::InstanceStateNameMapper::GetNameForInstanceStateName(item1.GetState().GetName()) == expected.get<Aws::String>();
            });
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilInstanceTerminated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstanceStatusOutcome> WaitUntilInstanceStatusOk(
      const Model::DescribeInstanceStatusRequest& request) {
    using OutcomeT = Model::DescribeInstanceStatusOutcome;
    using RequestT = Model::DescribeInstanceStatusRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceStatusOkWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ok"),
        [](const Model::DescribeInstanceStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetInstanceStatuses().begin(), result.GetInstanceStatuses().end(),
                             [&](const Model::InstanceStatus& item) {
                               return Model::SummaryStatusMapper::GetNameForSummaryStatus(item.GetInstanceStatus().GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InstanceStatusOkWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvalidInstanceID.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInstanceStatus(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilInstanceStatusOk");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstanceStatusOutcome> WaitUntilSystemStatusOk(
      const Model::DescribeInstanceStatusRequest& request) {
    using OutcomeT = Model::DescribeInstanceStatusOutcome;
    using RequestT = Model::DescribeInstanceStatusRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SystemStatusOkWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ok"),
        [](const Model::DescribeInstanceStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetInstanceStatuses().begin(), result.GetInstanceStatuses().end(),
                             [&](const Model::InstanceStatus& item) {
                               return Model::SummaryStatusMapper::GetNameForSummaryStatus(item.GetSystemStatus().GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInstanceStatus(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilSystemStatusOk");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInternetGatewaysOutcome> WaitUntilInternetGatewayExists(
      const Model::DescribeInternetGatewaysRequest& request) {
    using OutcomeT = Model::DescribeInternetGatewaysOutcome;
    using RequestT = Model::DescribeInternetGatewaysRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InternetGatewayExistsWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeInternetGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetInternetGateways().size() > 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "InternetGatewayExistsWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InvalidInternetGateway.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInternetGateways(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilInternetGatewayExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeKeyPairsOutcome> WaitUntilKeyPairExists(const Model::DescribeKeyPairsRequest& request) {
    using OutcomeT = Model::DescribeKeyPairsOutcome;
    using RequestT = Model::DescribeKeyPairsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "KeyPairExistsWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeKeyPairsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetKeyPairs().size() > 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("KeyPairExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvalidKeyPair.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeKeyPairs(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilKeyPairExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNatGatewaysOutcome> WaitUntilNatGatewayAvailable(
      const Model::DescribeNatGatewaysRequest& request) {
    using OutcomeT = Model::DescribeNatGatewaysOutcome;
    using RequestT = Model::DescribeNatGatewaysRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NatGatewayAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
            return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NatGatewayAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
            return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NatGatewayAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
            return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NatGatewayAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
            return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("NatGatewayAvailableWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("NatGatewayNotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNatGateways(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilNatGatewayAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNatGatewaysOutcome> WaitUntilNatGatewayDeleted(
      const Model::DescribeNatGatewaysRequest& request) {
    using OutcomeT = Model::DescribeNatGatewaysOutcome;
    using RequestT = Model::DescribeNatGatewaysRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NatGatewayDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("deleted"),
        [](const Model::DescribeNatGatewaysOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetNatGateways().begin(), result.GetNatGateways().end(), [&](const Model::NatGateway& item) {
            return Model::NatGatewayStateMapper::GetNameForNatGatewayState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("NatGatewayDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("NatGatewayNotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNatGateways(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilNatGatewayDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNetworkInterfacesOutcome> WaitUntilNetworkInterfaceAvailable(
      const Model::DescribeNetworkInterfacesRequest& request) {
    using OutcomeT = Model::DescribeNetworkInterfacesOutcome;
    using RequestT = Model::DescribeNetworkInterfacesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NetworkInterfaceAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeNetworkInterfacesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetNetworkInterfaces().begin(), result.GetNetworkInterfaces().end(),
                             [&](const Model::NetworkInterface& item) {
                               return Model::NetworkInterfaceStatusMapper::GetNameForNetworkInterfaceStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "NetworkInterfaceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("InvalidNetworkInterfaceID.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNetworkInterfaces(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilNetworkInterfaceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecondaryNetworksOutcome> WaitUntilSecondaryNetworkCreateComplete(
      const Model::DescribeSecondaryNetworksRequest& request) {
    using OutcomeT = Model::DescribeSecondaryNetworksOutcome;
    using RequestT = Model::DescribeSecondaryNetworksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecondaryNetworkCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("create-complete"),
        [](const Model::DescribeSecondaryNetworksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetSecondaryNetworks().begin(), result.GetSecondaryNetworks().end(), [&](const Model::SecondaryNetwork& item) {
                return Model::SecondaryNetworkStateMapper::GetNameForSecondaryNetworkState(item.GetState()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecondaryNetworkCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("create-failed"),
        [](const Model::DescribeSecondaryNetworksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetSecondaryNetworks().begin(), result.GetSecondaryNetworks().end(), [&](const Model::SecondaryNetwork& item) {
                return Model::SecondaryNetworkStateMapper::GetNameForSecondaryNetworkState(item.GetState()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "SecondaryNetworkCreateCompleteWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InvalidSecondaryNetworkId.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSecondaryNetworks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilSecondaryNetworkCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecondaryNetworksOutcome> WaitUntilSecondaryNetworkDeleteComplete(
      const Model::DescribeSecondaryNetworksRequest& request) {
    using OutcomeT = Model::DescribeSecondaryNetworksOutcome;
    using RequestT = Model::DescribeSecondaryNetworksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecondaryNetworkDeleteCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("delete-complete"),
        [](const Model::DescribeSecondaryNetworksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetSecondaryNetworks().begin(), result.GetSecondaryNetworks().end(), [&](const Model::SecondaryNetwork& item) {
                return Model::SecondaryNetworkStateMapper::GetNameForSecondaryNetworkState(item.GetState()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecondaryNetworkDeleteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("delete-failed"),
        [](const Model::DescribeSecondaryNetworksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetSecondaryNetworks().begin(), result.GetSecondaryNetworks().end(), [&](const Model::SecondaryNetwork& item) {
                return Model::SecondaryNetworkStateMapper::GetNameForSecondaryNetworkState(item.GetState()) == expected.get<Aws::String>();
              });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSecondaryNetworks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilSecondaryNetworkDeleteComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecondarySubnetsOutcome> WaitUntilSecondarySubnetCreateComplete(
      const Model::DescribeSecondarySubnetsRequest& request) {
    using OutcomeT = Model::DescribeSecondarySubnetsOutcome;
    using RequestT = Model::DescribeSecondarySubnetsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecondarySubnetCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("create-complete"),
        [](const Model::DescribeSecondarySubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetSecondarySubnets().begin(), result.GetSecondarySubnets().end(), [&](const Model::SecondarySubnet& item) {
                return Model::SecondarySubnetStateMapper::GetNameForSecondarySubnetState(item.GetState()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecondarySubnetCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("delete-failed"),
        [](const Model::DescribeSecondarySubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetSecondarySubnets().begin(), result.GetSecondarySubnets().end(), [&](const Model::SecondarySubnet& item) {
                return Model::SecondarySubnetStateMapper::GetNameForSecondarySubnetState(item.GetState()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "SecondarySubnetCreateCompleteWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InvalidSecondarySubnetId.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSecondarySubnets(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilSecondarySubnetCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecondarySubnetsOutcome> WaitUntilSecondarySubnetDeleteComplete(
      const Model::DescribeSecondarySubnetsRequest& request) {
    using OutcomeT = Model::DescribeSecondarySubnetsOutcome;
    using RequestT = Model::DescribeSecondarySubnetsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecondarySubnetDeleteCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("delete-complete"),
        [](const Model::DescribeSecondarySubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetSecondarySubnets().begin(), result.GetSecondarySubnets().end(), [&](const Model::SecondarySubnet& item) {
                return Model::SecondarySubnetStateMapper::GetNameForSecondarySubnetState(item.GetState()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecondarySubnetDeleteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("delete-failed"),
        [](const Model::DescribeSecondarySubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetSecondarySubnets().begin(), result.GetSecondarySubnets().end(), [&](const Model::SecondarySubnet& item) {
                return Model::SecondarySubnetStateMapper::GetNameForSecondarySubnetState(item.GetState()) == expected.get<Aws::String>();
              });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSecondarySubnets(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilSecondarySubnetDeleteComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecurityGroupsOutcome> WaitUntilSecurityGroupExists(
      const Model::DescribeSecurityGroupsRequest& request) {
    using OutcomeT = Model::DescribeSecurityGroupsOutcome;
    using RequestT = Model::DescribeSecurityGroupsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecurityGroupExistsWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeSecurityGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetSecurityGroups().size() > 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("SecurityGroupExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvalidGroup.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSecurityGroups(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilSecurityGroupExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecurityGroupVpcAssociationsOutcome> WaitUntilSecurityGroupVpcAssociationAssociated(
      const Model::DescribeSecurityGroupVpcAssociationsRequest& request) {
    using OutcomeT = Model::DescribeSecurityGroupVpcAssociationsOutcome;
    using RequestT = Model::DescribeSecurityGroupVpcAssociationsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecurityGroupVpcAssociationAssociatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("associated"),
        [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                             [&](const Model::SecurityGroupVpcAssociation& item) {
                               return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                          item.GetState()) == expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecurityGroupVpcAssociationAssociatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("associating"),
        [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                             [&](const Model::SecurityGroupVpcAssociation& item) {
                               return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                          item.GetState()) == expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecurityGroupVpcAssociationAssociatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("association-failed"),
        [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                             [&](const Model::SecurityGroupVpcAssociation& item) {
                               return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                          item.GetState()) == expected.get<Aws::String>();
                             });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSecurityGroupVpcAssociations(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation,
                                                  "WaitUntilSecurityGroupVpcAssociationAssociated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSecurityGroupVpcAssociationsOutcome> WaitUntilSecurityGroupVpcAssociationDisassociated(
      const Model::DescribeSecurityGroupVpcAssociationsRequest& request) {
    using OutcomeT = Model::DescribeSecurityGroupVpcAssociationsOutcome;
    using RequestT = Model::DescribeSecurityGroupVpcAssociationsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecurityGroupVpcAssociationDisassociatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("disassociated"),
        [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                             [&](const Model::SecurityGroupVpcAssociation& item) {
                               return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                          item.GetState()) == expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecurityGroupVpcAssociationDisassociatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("disassociating"),
        [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                             [&](const Model::SecurityGroupVpcAssociation& item) {
                               return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                          item.GetState()) == expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecurityGroupVpcAssociationDisassociatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("disassociation-failed"),
        [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetSecurityGroupVpcAssociations().begin(), result.GetSecurityGroupVpcAssociations().end(),
                             [&](const Model::SecurityGroupVpcAssociation& item) {
                               return Model::SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(
                                          item.GetState()) == expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SecurityGroupVpcAssociationDisassociatedWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeSecurityGroupVpcAssociationsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetSecurityGroupVpcAssociations().size() == 0) == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSecurityGroupVpcAssociations(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation,
                                                  "WaitUntilSecurityGroupVpcAssociationDisassociated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSnapshotsOutcome> WaitUntilSnapshotCompleted(const Model::DescribeSnapshotsRequest& request) {
    using OutcomeT = Model::DescribeSnapshotsOutcome;
    using RequestT = Model::DescribeSnapshotsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SnapshotCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("completed"),
        [](const Model::DescribeSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetSnapshots().begin(), result.GetSnapshots().end(), [&](const Model::Snapshot& item) {
            return Model::SnapshotStateMapper::GetNameForSnapshotState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SnapshotCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("error"),
        [](const Model::DescribeSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetSnapshots().begin(), result.GetSnapshots().end(), [&](const Model::Snapshot& item) {
            return Model::SnapshotStateMapper::GetNameForSnapshotState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSnapshots(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilSnapshotCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSpotInstanceRequestsOutcome> WaitUntilSpotInstanceRequestFulfilled(
      const Model::DescribeSpotInstanceRequestsRequest& request) {
    using OutcomeT = Model::DescribeSpotInstanceRequestsOutcome;
    using RequestT = Model::DescribeSpotInstanceRequestsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpotInstanceRequestFulfilledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("fulfilled"),
        [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
              [&](const Model::SpotInstanceRequest& item) { return item.GetStatus().GetCode() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpotInstanceRequestFulfilledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("request-canceled-and-instance-running"),
        [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
              [&](const Model::SpotInstanceRequest& item) { return item.GetStatus().GetCode() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpotInstanceRequestFulfilledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("schedule-expired"),
        [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
              [&](const Model::SpotInstanceRequest& item) { return item.GetStatus().GetCode() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpotInstanceRequestFulfilledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("canceled-before-fulfillment"),
        [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
              [&](const Model::SpotInstanceRequest& item) { return item.GetStatus().GetCode() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpotInstanceRequestFulfilledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("bad-parameters"),
        [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
              [&](const Model::SpotInstanceRequest& item) { return item.GetStatus().GetCode() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpotInstanceRequestFulfilledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("system-error"),
        [](const Model::DescribeSpotInstanceRequestsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetSpotInstanceRequests().begin(), result.GetSpotInstanceRequests().end(),
              [&](const Model::SpotInstanceRequest& item) { return item.GetStatus().GetCode() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "SpotInstanceRequestFulfilledWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InvalidSpotInstanceRequestID.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSpotInstanceRequests(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilSpotInstanceRequestFulfilled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStoreImageTasksOutcome> WaitUntilStoreImageTaskComplete(
      const Model::DescribeStoreImageTasksRequest& request) {
    using OutcomeT = Model::DescribeStoreImageTasksOutcome;
    using RequestT = Model::DescribeStoreImageTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StoreImageTaskCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::DescribeStoreImageTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetStoreImageTaskResults().begin(), result.GetStoreImageTaskResults().end(),
              [&](const Model::StoreImageTaskResponse& item) { return item.GetStoreTaskState() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StoreImageTaskCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeStoreImageTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetStoreImageTaskResults().begin(), result.GetStoreImageTaskResults().end(),
              [&](const Model::StoreImageTaskResponse& item) { return item.GetStoreTaskState() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StoreImageTaskCompleteWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InProgress"),
        [](const Model::DescribeStoreImageTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetStoreImageTaskResults().begin(), result.GetStoreImageTaskResults().end(),
              [&](const Model::StoreImageTaskResponse& item) { return item.GetStoreTaskState() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStoreImageTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilStoreImageTaskComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSubnetsOutcome> WaitUntilSubnetAvailable(const Model::DescribeSubnetsRequest& request) {
    using OutcomeT = Model::DescribeSubnetsOutcome;
    using RequestT = Model::DescribeSubnetsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SubnetAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeSubnetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetSubnets().begin(), result.GetSubnets().end(), [&](const Model::Subnet& item) {
            return Model::SubnetStateMapper::GetNameForSubnetState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSubnets(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilSubnetAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVolumesOutcome> WaitUntilVolumeAvailable(const Model::DescribeVolumesRequest& request) {
    using OutcomeT = Model::DescribeVolumesOutcome;
    using RequestT = Model::DescribeVolumesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VolumeAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
            return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VolumeAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
            return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVolumes(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilVolumeAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVolumesOutcome> WaitUntilVolumeDeleted(const Model::DescribeVolumesRequest& request) {
    using OutcomeT = Model::DescribeVolumesOutcome;
    using RequestT = Model::DescribeVolumesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VolumeDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("deleted"),
        [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
            return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("VolumeDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("InvalidVolume.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVolumes(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilVolumeDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVolumesOutcome> WaitUntilVolumeInUse(const Model::DescribeVolumesRequest& request) {
    using OutcomeT = Model::DescribeVolumesOutcome;
    using RequestT = Model::DescribeVolumesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VolumeInUseWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("in-use"),
        [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
            return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VolumeInUseWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeVolumesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetVolumes().begin(), result.GetVolumes().end(), [&](const Model::Volume& item) {
            return Model::VolumeStateMapper::GetNameForVolumeState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVolumes(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilVolumeInUse");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpcPeeringConnectionsOutcome> WaitUntilVpcPeeringConnectionDeleted(
      const Model::DescribeVpcPeeringConnectionsRequest& request) {
    using OutcomeT = Model::DescribeVpcPeeringConnectionsOutcome;
    using RequestT = Model::DescribeVpcPeeringConnectionsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VpcPeeringConnectionDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("deleted"),
        [](const Model::DescribeVpcPeeringConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetVpcPeeringConnections().begin(), result.GetVpcPeeringConnections().end(),
                             [&](const Model::VpcPeeringConnection& item) {
                               return Model::VpcPeeringConnectionStateReasonCodeMapper::GetNameForVpcPeeringConnectionStateReasonCode(
                                          item.GetStatus().GetCode()) == expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "VpcPeeringConnectionDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("InvalidVpcPeeringConnectionID.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVpcPeeringConnections(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilVpcPeeringConnectionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpcPeeringConnectionsOutcome> WaitUntilVpcPeeringConnectionExists(
      const Model::DescribeVpcPeeringConnectionsRequest& request) {
    using OutcomeT = Model::DescribeVpcPeeringConnectionsOutcome;
    using RequestT = Model::DescribeVpcPeeringConnectionsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("VpcPeeringConnectionExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "VpcPeeringConnectionExistsWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InvalidVpcPeeringConnectionID.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVpcPeeringConnections(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilVpcPeeringConnectionExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpcsOutcome> WaitUntilVpcAvailable(const Model::DescribeVpcsRequest& request) {
    using OutcomeT = Model::DescribeVpcsOutcome;
    using RequestT = Model::DescribeVpcsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VpcAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeVpcsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetVpcs().begin(), result.GetVpcs().end(), [&](const Model::Vpc& item) {
            return Model::VpcStateMapper::GetNameForVpcState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVpcs(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilVpcAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpcsOutcome> WaitUntilVpcExists(const Model::DescribeVpcsRequest& request) {
    using OutcomeT = Model::DescribeVpcsOutcome;
    using RequestT = Model::DescribeVpcsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("VpcExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("VpcExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvalidVpcID.NotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVpcs(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 120, std::move(acceptors), operation, "WaitUntilVpcExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpnConnectionsOutcome> WaitUntilVpnConnectionAvailable(
      const Model::DescribeVpnConnectionsRequest& request) {
    using OutcomeT = Model::DescribeVpnConnectionsOutcome;
    using RequestT = Model::DescribeVpnConnectionsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VpnConnectionAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
            return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VpnConnectionAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
            return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VpnConnectionAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
            return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVpnConnections(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilVpnConnectionAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVpnConnectionsOutcome> WaitUntilVpnConnectionDeleted(
      const Model::DescribeVpnConnectionsRequest& request) {
    using OutcomeT = Model::DescribeVpnConnectionsOutcome;
    using RequestT = Model::DescribeVpnConnectionsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VpnConnectionDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("deleted"),
        [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
            return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VpnConnectionDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("pending"),
        [](const Model::DescribeVpnConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetVpnConnections().begin(), result.GetVpnConnections().end(), [&](const Model::VpnConnection& item) {
            return Model::VpnStateMapper::GetNameForVpnState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVpnConnections(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilVpnConnectionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPasswordDataOutcome> WaitUntilPasswordDataAvailable(const Model::GetPasswordDataRequest& request) {
    using OutcomeT = Model::GetPasswordDataOutcome;
    using RequestT = Model::GetPasswordDataRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PasswordDataAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::GetPasswordDataOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetPasswordData().size() > 0) == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetPasswordData(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilPasswordDataAvailable");
    return waiter.Wait(request);
  }
};
}  // namespace EC2
}  // namespace Aws
