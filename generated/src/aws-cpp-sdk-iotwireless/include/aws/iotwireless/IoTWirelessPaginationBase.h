/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iotwireless/model/ListDestinationsPaginationTraits.h>
#include <aws/iotwireless/model/ListDeviceProfilesPaginationTraits.h>
#include <aws/iotwireless/model/ListFuotaTasksPaginationTraits.h>
#include <aws/iotwireless/model/ListMulticastGroupsByFuotaTaskPaginationTraits.h>
#include <aws/iotwireless/model/ListMulticastGroupsPaginationTraits.h>
#include <aws/iotwireless/model/ListNetworkAnalyzerConfigurationsPaginationTraits.h>
#include <aws/iotwireless/model/ListQueuedMessagesPaginationTraits.h>
#include <aws/iotwireless/model/ListServiceProfilesPaginationTraits.h>
#include <aws/iotwireless/model/ListWirelessDevicesPaginationTraits.h>
#include <aws/iotwireless/model/ListWirelessGatewaysPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IoTWireless {

class IoTWirelessClient;

template <typename DerivedClient>
class IoTWirelessPaginationBase {
 public:
  /**
   * Create a paginator for ListDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDestinationsRequest,
                                    Pagination::ListDestinationsPaginationTraits<DerivedClient>>
  ListDestinationsPaginator(const Model::ListDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDestinationsRequest,
                                             Pagination::ListDestinationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListDeviceProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeviceProfilesRequest,
                                    Pagination::ListDeviceProfilesPaginationTraits<DerivedClient>>
  ListDeviceProfilesPaginator(const Model::ListDeviceProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeviceProfilesRequest,
                                             Pagination::ListDeviceProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFuotaTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFuotaTasksRequest, Pagination::ListFuotaTasksPaginationTraits<DerivedClient>>
  ListFuotaTasksPaginator(const Model::ListFuotaTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFuotaTasksRequest,
                                             Pagination::ListFuotaTasksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListMulticastGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMulticastGroupsRequest,
                                    Pagination::ListMulticastGroupsPaginationTraits<DerivedClient>>
  ListMulticastGroupsPaginator(const Model::ListMulticastGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMulticastGroupsRequest,
                                             Pagination::ListMulticastGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMulticastGroupsByFuotaTask operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMulticastGroupsByFuotaTaskRequest,
                                    Pagination::ListMulticastGroupsByFuotaTaskPaginationTraits<DerivedClient>>
  ListMulticastGroupsByFuotaTaskPaginator(const Model::ListMulticastGroupsByFuotaTaskRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMulticastGroupsByFuotaTaskRequest,
                                             Pagination::ListMulticastGroupsByFuotaTaskPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkAnalyzerConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkAnalyzerConfigurationsRequest,
                                    Pagination::ListNetworkAnalyzerConfigurationsPaginationTraits<DerivedClient>>
  ListNetworkAnalyzerConfigurationsPaginator(const Model::ListNetworkAnalyzerConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkAnalyzerConfigurationsRequest,
                                             Pagination::ListNetworkAnalyzerConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQueuedMessages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuedMessagesRequest,
                                    Pagination::ListQueuedMessagesPaginationTraits<DerivedClient>>
  ListQueuedMessagesPaginator(const Model::ListQueuedMessagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuedMessagesRequest,
                                             Pagination::ListQueuedMessagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceProfilesRequest,
                                    Pagination::ListServiceProfilesPaginationTraits<DerivedClient>>
  ListServiceProfilesPaginator(const Model::ListServiceProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceProfilesRequest,
                                             Pagination::ListServiceProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWirelessDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWirelessDevicesRequest,
                                    Pagination::ListWirelessDevicesPaginationTraits<DerivedClient>>
  ListWirelessDevicesPaginator(const Model::ListWirelessDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWirelessDevicesRequest,
                                             Pagination::ListWirelessDevicesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWirelessGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWirelessGatewaysRequest,
                                    Pagination::ListWirelessGatewaysPaginationTraits<DerivedClient>>
  ListWirelessGatewaysPaginator(const Model::ListWirelessGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWirelessGatewaysRequest,
                                             Pagination::ListWirelessGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace IoTWireless
}  // namespace Aws
