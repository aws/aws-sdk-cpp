/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/cloudformation/model/DescribeAccountLimitsPaginationTraits.h>
#include <aws/cloudformation/model/DescribeChangeSetPaginationTraits.h>
#include <aws/cloudformation/model/DescribeEventsPaginationTraits.h>
#include <aws/cloudformation/model/DescribeStackEventsPaginationTraits.h>
#include <aws/cloudformation/model/DescribeStackResourceDriftsPaginationTraits.h>
#include <aws/cloudformation/model/DescribeStacksPaginationTraits.h>
#include <aws/cloudformation/model/ListChangeSetsPaginationTraits.h>
#include <aws/cloudformation/model/ListExportsPaginationTraits.h>
#include <aws/cloudformation/model/ListGeneratedTemplatesPaginationTraits.h>
#include <aws/cloudformation/model/ListImportsPaginationTraits.h>
#include <aws/cloudformation/model/ListResourceScanRelatedResourcesPaginationTraits.h>
#include <aws/cloudformation/model/ListResourceScanResourcesPaginationTraits.h>
#include <aws/cloudformation/model/ListResourceScansPaginationTraits.h>
#include <aws/cloudformation/model/ListStackInstancesPaginationTraits.h>
#include <aws/cloudformation/model/ListStackRefactorActionsPaginationTraits.h>
#include <aws/cloudformation/model/ListStackRefactorsPaginationTraits.h>
#include <aws/cloudformation/model/ListStackResourcesPaginationTraits.h>
#include <aws/cloudformation/model/ListStackSetOperationResultsPaginationTraits.h>
#include <aws/cloudformation/model/ListStackSetOperationsPaginationTraits.h>
#include <aws/cloudformation/model/ListStackSetsPaginationTraits.h>
#include <aws/cloudformation/model/ListStacksPaginationTraits.h>
#include <aws/cloudformation/model/ListTypeRegistrationsPaginationTraits.h>
#include <aws/cloudformation/model/ListTypeVersionsPaginationTraits.h>
#include <aws/cloudformation/model/ListTypesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudFormation {

class CloudFormationClient;

template <typename DerivedClient>
class CloudFormationPaginationBase {
 public:
  /**
   * Create a paginator for DescribeAccountLimits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccountLimitsRequest,
                                    Pagination::DescribeAccountLimitsPaginationTraits<DerivedClient>>
  DescribeAccountLimitsPaginator(const Model::DescribeAccountLimitsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccountLimitsRequest,
                                             Pagination::DescribeAccountLimitsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeChangeSet operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeChangeSetRequest,
                                    Pagination::DescribeChangeSetPaginationTraits<DerivedClient>>
  DescribeChangeSetPaginator(const Model::DescribeChangeSetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeChangeSetRequest,
                                             Pagination::DescribeChangeSetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<DerivedClient>>
  DescribeEventsPaginator(const Model::DescribeEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest,
                                             Pagination::DescribeEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeStackEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStackEventsRequest,
                                    Pagination::DescribeStackEventsPaginationTraits<DerivedClient>>
  DescribeStackEventsPaginator(const Model::DescribeStackEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStackEventsRequest,
                                             Pagination::DescribeStackEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeStackResourceDrifts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStackResourceDriftsRequest,
                                    Pagination::DescribeStackResourceDriftsPaginationTraits<DerivedClient>>
  DescribeStackResourceDriftsPaginator(const Model::DescribeStackResourceDriftsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStackResourceDriftsRequest,
                                             Pagination::DescribeStackResourceDriftsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeStacks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStacksRequest, Pagination::DescribeStacksPaginationTraits<DerivedClient>>
  DescribeStacksPaginator(const Model::DescribeStacksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStacksRequest,
                                             Pagination::DescribeStacksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListChangeSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChangeSetsRequest, Pagination::ListChangeSetsPaginationTraits<DerivedClient>>
  ListChangeSetsPaginator(const Model::ListChangeSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChangeSetsRequest,
                                             Pagination::ListChangeSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportsRequest, Pagination::ListExportsPaginationTraits<DerivedClient>>
  ListExportsPaginator(const Model::ListExportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportsRequest,
                                             Pagination::ListExportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListGeneratedTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGeneratedTemplatesRequest,
                                    Pagination::ListGeneratedTemplatesPaginationTraits<DerivedClient>>
  ListGeneratedTemplatesPaginator(const Model::ListGeneratedTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGeneratedTemplatesRequest,
                                             Pagination::ListGeneratedTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits<DerivedClient>>
  ListImportsPaginator(const Model::ListImportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportsRequest,
                                             Pagination::ListImportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListResourceScanRelatedResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceScanRelatedResourcesRequest,
                                    Pagination::ListResourceScanRelatedResourcesPaginationTraits<DerivedClient>>
  ListResourceScanRelatedResourcesPaginator(const Model::ListResourceScanRelatedResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceScanRelatedResourcesRequest,
                                             Pagination::ListResourceScanRelatedResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceScanResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceScanResourcesRequest,
                                    Pagination::ListResourceScanResourcesPaginationTraits<DerivedClient>>
  ListResourceScanResourcesPaginator(const Model::ListResourceScanResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceScanResourcesRequest,
                                             Pagination::ListResourceScanResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceScans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceScansRequest,
                                    Pagination::ListResourceScansPaginationTraits<DerivedClient>>
  ListResourceScansPaginator(const Model::ListResourceScansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceScansRequest,
                                             Pagination::ListResourceScansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStackInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackInstancesRequest,
                                    Pagination::ListStackInstancesPaginationTraits<DerivedClient>>
  ListStackInstancesPaginator(const Model::ListStackInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackInstancesRequest,
                                             Pagination::ListStackInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStackRefactorActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackRefactorActionsRequest,
                                    Pagination::ListStackRefactorActionsPaginationTraits<DerivedClient>>
  ListStackRefactorActionsPaginator(const Model::ListStackRefactorActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackRefactorActionsRequest,
                                             Pagination::ListStackRefactorActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStackRefactors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackRefactorsRequest,
                                    Pagination::ListStackRefactorsPaginationTraits<DerivedClient>>
  ListStackRefactorsPaginator(const Model::ListStackRefactorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackRefactorsRequest,
                                             Pagination::ListStackRefactorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStackResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackResourcesRequest,
                                    Pagination::ListStackResourcesPaginationTraits<DerivedClient>>
  ListStackResourcesPaginator(const Model::ListStackResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackResourcesRequest,
                                             Pagination::ListStackResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStacks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStacksRequest, Pagination::ListStacksPaginationTraits<DerivedClient>>
  ListStacksPaginator(const Model::ListStacksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStacksRequest,
                                             Pagination::ListStacksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListStackSetOperationResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackSetOperationResultsRequest,
                                    Pagination::ListStackSetOperationResultsPaginationTraits<DerivedClient>>
  ListStackSetOperationResultsPaginator(const Model::ListStackSetOperationResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackSetOperationResultsRequest,
                                             Pagination::ListStackSetOperationResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStackSetOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackSetOperationsRequest,
                                    Pagination::ListStackSetOperationsPaginationTraits<DerivedClient>>
  ListStackSetOperationsPaginator(const Model::ListStackSetOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackSetOperationsRequest,
                                             Pagination::ListStackSetOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStackSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackSetsRequest, Pagination::ListStackSetsPaginationTraits<DerivedClient>>
  ListStackSetsPaginator(const Model::ListStackSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStackSetsRequest,
                                             Pagination::ListStackSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTypeRegistrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypeRegistrationsRequest,
                                    Pagination::ListTypeRegistrationsPaginationTraits<DerivedClient>>
  ListTypeRegistrationsPaginator(const Model::ListTypeRegistrationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypeRegistrationsRequest,
                                             Pagination::ListTypeRegistrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypesRequest, Pagination::ListTypesPaginationTraits<DerivedClient>>
  ListTypesPaginator(const Model::ListTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypesRequest, Pagination::ListTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTypeVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypeVersionsRequest,
                                    Pagination::ListTypeVersionsPaginationTraits<DerivedClient>>
  ListTypeVersionsPaginator(const Model::ListTypeVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypeVersionsRequest,
                                             Pagination::ListTypeVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace CloudFormation
}  // namespace Aws
