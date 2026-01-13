/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorClient.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsPaginationTraits.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsPaginationTraits.h>

namespace Aws {
namespace IoTDeviceAdvisor {

using ListSuiteDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<IoTDeviceAdvisorClient, Model::ListSuiteDefinitionsRequest,
                                      Pagination::ListSuiteDefinitionsPaginationTraits<IoTDeviceAdvisorClient>>;
using ListSuiteRunsPaginator = Aws::Utils::Pagination::Paginator<IoTDeviceAdvisorClient, Model::ListSuiteRunsRequest,
                                                                 Pagination::ListSuiteRunsPaginationTraits<IoTDeviceAdvisorClient>>;

}  // namespace IoTDeviceAdvisor
}  // namespace Aws
