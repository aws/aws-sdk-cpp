/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/devicefarm/DeviceFarmClient.h>
#include <aws/devicefarm/model/GetOfferingStatusPaginationTraits.h>
#include <aws/devicefarm/model/ListArtifactsPaginationTraits.h>
#include <aws/devicefarm/model/ListDevicePoolsPaginationTraits.h>
#include <aws/devicefarm/model/ListDevicesPaginationTraits.h>
#include <aws/devicefarm/model/ListJobsPaginationTraits.h>
#include <aws/devicefarm/model/ListOfferingTransactionsPaginationTraits.h>
#include <aws/devicefarm/model/ListOfferingsPaginationTraits.h>
#include <aws/devicefarm/model/ListProjectsPaginationTraits.h>
#include <aws/devicefarm/model/ListRunsPaginationTraits.h>
#include <aws/devicefarm/model/ListSamplesPaginationTraits.h>
#include <aws/devicefarm/model/ListSuitesPaginationTraits.h>
#include <aws/devicefarm/model/ListTestGridProjectsPaginationTraits.h>
#include <aws/devicefarm/model/ListTestGridSessionActionsPaginationTraits.h>
#include <aws/devicefarm/model/ListTestGridSessionArtifactsPaginationTraits.h>
#include <aws/devicefarm/model/ListTestGridSessionsPaginationTraits.h>
#include <aws/devicefarm/model/ListTestsPaginationTraits.h>
#include <aws/devicefarm/model/ListUniqueProblemsPaginationTraits.h>
#include <aws/devicefarm/model/ListUploadsPaginationTraits.h>

namespace Aws {
namespace DeviceFarm {

using GetOfferingStatusPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::GetOfferingStatusRequest,
                                                                     Pagination::GetOfferingStatusPaginationTraits<DeviceFarmClient>>;
using ListArtifactsPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListArtifactsRequest,
                                                                 Pagination::ListArtifactsPaginationTraits<DeviceFarmClient>>;
using ListDevicePoolsPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListDevicePoolsRequest,
                                                                   Pagination::ListDevicePoolsPaginationTraits<DeviceFarmClient>>;
using ListDevicesPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListDevicesRequest,
                                                               Pagination::ListDevicesPaginationTraits<DeviceFarmClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DeviceFarmClient>>;
using ListOfferingsPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListOfferingsRequest,
                                                                 Pagination::ListOfferingsPaginationTraits<DeviceFarmClient>>;
using ListOfferingTransactionsPaginator =
    Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListOfferingTransactionsRequest,
                                      Pagination::ListOfferingTransactionsPaginationTraits<DeviceFarmClient>>;
using ListProjectsPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListProjectsRequest,
                                                                Pagination::ListProjectsPaginationTraits<DeviceFarmClient>>;
using ListRunsPaginator =
    Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListRunsRequest, Pagination::ListRunsPaginationTraits<DeviceFarmClient>>;
using ListSamplesPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListSamplesRequest,
                                                               Pagination::ListSamplesPaginationTraits<DeviceFarmClient>>;
using ListSuitesPaginator =
    Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListSuitesRequest, Pagination::ListSuitesPaginationTraits<DeviceFarmClient>>;
using ListTestGridProjectsPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListTestGridProjectsRequest,
                                                                        Pagination::ListTestGridProjectsPaginationTraits<DeviceFarmClient>>;
using ListTestGridSessionActionsPaginator =
    Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListTestGridSessionActionsRequest,
                                      Pagination::ListTestGridSessionActionsPaginationTraits<DeviceFarmClient>>;
using ListTestGridSessionArtifactsPaginator =
    Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListTestGridSessionArtifactsRequest,
                                      Pagination::ListTestGridSessionArtifactsPaginationTraits<DeviceFarmClient>>;
using ListTestGridSessionsPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListTestGridSessionsRequest,
                                                                        Pagination::ListTestGridSessionsPaginationTraits<DeviceFarmClient>>;
using ListTestsPaginator =
    Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListTestsRequest, Pagination::ListTestsPaginationTraits<DeviceFarmClient>>;
using ListUniqueProblemsPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListUniqueProblemsRequest,
                                                                      Pagination::ListUniqueProblemsPaginationTraits<DeviceFarmClient>>;
using ListUploadsPaginator = Aws::Utils::Pagination::Paginator<DeviceFarmClient, Model::ListUploadsRequest,
                                                               Pagination::ListUploadsPaginationTraits<DeviceFarmClient>>;

}  // namespace DeviceFarm
}  // namespace Aws
