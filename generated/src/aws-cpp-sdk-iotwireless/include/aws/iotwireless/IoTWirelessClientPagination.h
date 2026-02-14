/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iotwireless/IoTWirelessClient.h>
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

namespace Aws {
namespace IoTWireless {

using ListDestinationsPaginator = Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListDestinationsRequest,
                                                                    Pagination::ListDestinationsPaginationTraits<IoTWirelessClient>>;
using ListDeviceProfilesPaginator = Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListDeviceProfilesRequest,
                                                                      Pagination::ListDeviceProfilesPaginationTraits<IoTWirelessClient>>;
using ListFuotaTasksPaginator = Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListFuotaTasksRequest,
                                                                  Pagination::ListFuotaTasksPaginationTraits<IoTWirelessClient>>;
using ListMulticastGroupsPaginator = Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListMulticastGroupsRequest,
                                                                       Pagination::ListMulticastGroupsPaginationTraits<IoTWirelessClient>>;
using ListMulticastGroupsByFuotaTaskPaginator =
    Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListMulticastGroupsByFuotaTaskRequest,
                                      Pagination::ListMulticastGroupsByFuotaTaskPaginationTraits<IoTWirelessClient>>;
using ListNetworkAnalyzerConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListNetworkAnalyzerConfigurationsRequest,
                                      Pagination::ListNetworkAnalyzerConfigurationsPaginationTraits<IoTWirelessClient>>;
using ListQueuedMessagesPaginator = Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListQueuedMessagesRequest,
                                                                      Pagination::ListQueuedMessagesPaginationTraits<IoTWirelessClient>>;
using ListServiceProfilesPaginator = Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListServiceProfilesRequest,
                                                                       Pagination::ListServiceProfilesPaginationTraits<IoTWirelessClient>>;
using ListWirelessDevicesPaginator = Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListWirelessDevicesRequest,
                                                                       Pagination::ListWirelessDevicesPaginationTraits<IoTWirelessClient>>;
using ListWirelessGatewaysPaginator =
    Aws::Utils::Pagination::Paginator<IoTWirelessClient, Model::ListWirelessGatewaysRequest,
                                      Pagination::ListWirelessGatewaysPaginationTraits<IoTWirelessClient>>;

}  // namespace IoTWireless
}  // namespace Aws
