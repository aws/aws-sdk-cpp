/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace DeviceFarm {

class DeviceFarmClient;

template <typename DerivedClient>
class DeviceFarmPaginationBase {
 public:
  /**
   * Create a paginator for GetOfferingStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOfferingStatusRequest,
                                    Pagination::GetOfferingStatusPaginationTraits<DerivedClient>>
  GetOfferingStatusPaginator(const Model::GetOfferingStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOfferingStatusRequest,
                                             Pagination::GetOfferingStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListArtifacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArtifactsRequest, Pagination::ListArtifactsPaginationTraits<DerivedClient>>
  ListArtifactsPaginator(const Model::ListArtifactsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArtifactsRequest,
                                             Pagination::ListArtifactsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListDevicePools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicePoolsRequest,
                                    Pagination::ListDevicePoolsPaginationTraits<DerivedClient>>
  ListDevicePoolsPaginator(const Model::ListDevicePoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicePoolsRequest,
                                             Pagination::ListDevicePoolsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesRequest, Pagination::ListDevicesPaginationTraits<DerivedClient>>
  ListDevicesPaginator(const Model::ListDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesRequest,
                                             Pagination::ListDevicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOfferingsRequest, Pagination::ListOfferingsPaginationTraits<DerivedClient>>
  ListOfferingsPaginator(const Model::ListOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOfferingsRequest,
                                             Pagination::ListOfferingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListOfferingTransactions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOfferingTransactionsRequest,
                                    Pagination::ListOfferingTransactionsPaginationTraits<DerivedClient>>
  ListOfferingTransactionsPaginator(const Model::ListOfferingTransactionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOfferingTransactionsRequest,
                                             Pagination::ListOfferingTransactionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest, Pagination::ListProjectsPaginationTraits<DerivedClient>>
  ListProjectsPaginator(const Model::ListProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest,
                                             Pagination::ListProjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunsRequest, Pagination::ListRunsPaginationTraits<DerivedClient>>
  ListRunsPaginator(const Model::ListRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunsRequest, Pagination::ListRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSamples operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSamplesRequest, Pagination::ListSamplesPaginationTraits<DerivedClient>>
  ListSamplesPaginator(const Model::ListSamplesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSamplesRequest,
                                             Pagination::ListSamplesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListSuites operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuitesRequest, Pagination::ListSuitesPaginationTraits<DerivedClient>>
  ListSuitesPaginator(const Model::ListSuitesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuitesRequest,
                                             Pagination::ListSuitesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListTestGridProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestGridProjectsRequest,
                                    Pagination::ListTestGridProjectsPaginationTraits<DerivedClient>>
  ListTestGridProjectsPaginator(const Model::ListTestGridProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestGridProjectsRequest,
                                             Pagination::ListTestGridProjectsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTestGridSessionActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestGridSessionActionsRequest,
                                    Pagination::ListTestGridSessionActionsPaginationTraits<DerivedClient>>
  ListTestGridSessionActionsPaginator(const Model::ListTestGridSessionActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestGridSessionActionsRequest,
                                             Pagination::ListTestGridSessionActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTestGridSessionArtifacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestGridSessionArtifactsRequest,
                                    Pagination::ListTestGridSessionArtifactsPaginationTraits<DerivedClient>>
  ListTestGridSessionArtifactsPaginator(const Model::ListTestGridSessionArtifactsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestGridSessionArtifactsRequest,
                                             Pagination::ListTestGridSessionArtifactsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTestGridSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestGridSessionsRequest,
                                    Pagination::ListTestGridSessionsPaginationTraits<DerivedClient>>
  ListTestGridSessionsPaginator(const Model::ListTestGridSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestGridSessionsRequest,
                                             Pagination::ListTestGridSessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestsRequest, Pagination::ListTestsPaginationTraits<DerivedClient>>
  ListTestsPaginator(const Model::ListTestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestsRequest, Pagination::ListTestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUniqueProblems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUniqueProblemsRequest,
                                    Pagination::ListUniqueProblemsPaginationTraits<DerivedClient>>
  ListUniqueProblemsPaginator(const Model::ListUniqueProblemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUniqueProblemsRequest,
                                             Pagination::ListUniqueProblemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUploads operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUploadsRequest, Pagination::ListUploadsPaginationTraits<DerivedClient>>
  ListUploadsPaginator(const Model::ListUploadsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUploadsRequest,
                                             Pagination::ListUploadsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace DeviceFarm
}  // namespace Aws
