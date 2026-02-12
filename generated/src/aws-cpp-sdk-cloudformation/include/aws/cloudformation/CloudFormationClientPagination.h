/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormationClient.h>
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

namespace Aws {
namespace CloudFormation {

using DescribeAccountLimitsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::DescribeAccountLimitsRequest,
                                      Pagination::DescribeAccountLimitsPaginationTraits<CloudFormationClient>>;
using DescribeChangeSetPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::DescribeChangeSetRequest,
                                                                     Pagination::DescribeChangeSetPaginationTraits<CloudFormationClient>>;
using DescribeEventsPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::DescribeEventsRequest,
                                                                  Pagination::DescribeEventsPaginationTraits<CloudFormationClient>>;
using DescribeStackEventsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::DescribeStackEventsRequest,
                                      Pagination::DescribeStackEventsPaginationTraits<CloudFormationClient>>;
using DescribeStackResourceDriftsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::DescribeStackResourceDriftsRequest,
                                      Pagination::DescribeStackResourceDriftsPaginationTraits<CloudFormationClient>>;
using DescribeStacksPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::DescribeStacksRequest,
                                                                  Pagination::DescribeStacksPaginationTraits<CloudFormationClient>>;
using ListChangeSetsPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListChangeSetsRequest,
                                                                  Pagination::ListChangeSetsPaginationTraits<CloudFormationClient>>;
using ListExportsPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListExportsRequest,
                                                               Pagination::ListExportsPaginationTraits<CloudFormationClient>>;
using ListGeneratedTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListGeneratedTemplatesRequest,
                                      Pagination::ListGeneratedTemplatesPaginationTraits<CloudFormationClient>>;
using ListImportsPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListImportsRequest,
                                                               Pagination::ListImportsPaginationTraits<CloudFormationClient>>;
using ListResourceScanRelatedResourcesPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListResourceScanRelatedResourcesRequest,
                                      Pagination::ListResourceScanRelatedResourcesPaginationTraits<CloudFormationClient>>;
using ListResourceScanResourcesPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListResourceScanResourcesRequest,
                                      Pagination::ListResourceScanResourcesPaginationTraits<CloudFormationClient>>;
using ListResourceScansPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListResourceScansRequest,
                                                                     Pagination::ListResourceScansPaginationTraits<CloudFormationClient>>;
using ListStackInstancesPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListStackInstancesRequest,
                                                                      Pagination::ListStackInstancesPaginationTraits<CloudFormationClient>>;
using ListStackRefactorActionsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListStackRefactorActionsRequest,
                                      Pagination::ListStackRefactorActionsPaginationTraits<CloudFormationClient>>;
using ListStackRefactorsPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListStackRefactorsRequest,
                                                                      Pagination::ListStackRefactorsPaginationTraits<CloudFormationClient>>;
using ListStackResourcesPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListStackResourcesRequest,
                                                                      Pagination::ListStackResourcesPaginationTraits<CloudFormationClient>>;
using ListStacksPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListStacksRequest,
                                                              Pagination::ListStacksPaginationTraits<CloudFormationClient>>;
using ListStackSetOperationResultsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListStackSetOperationResultsRequest,
                                      Pagination::ListStackSetOperationResultsPaginationTraits<CloudFormationClient>>;
using ListStackSetOperationsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListStackSetOperationsRequest,
                                      Pagination::ListStackSetOperationsPaginationTraits<CloudFormationClient>>;
using ListStackSetsPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListStackSetsRequest,
                                                                 Pagination::ListStackSetsPaginationTraits<CloudFormationClient>>;
using ListTypeRegistrationsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListTypeRegistrationsRequest,
                                      Pagination::ListTypeRegistrationsPaginationTraits<CloudFormationClient>>;
using ListTypesPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListTypesRequest,
                                                             Pagination::ListTypesPaginationTraits<CloudFormationClient>>;
using ListTypeVersionsPaginator = Aws::Utils::Pagination::Paginator<CloudFormationClient, Model::ListTypeVersionsRequest,
                                                                    Pagination::ListTypeVersionsPaginationTraits<CloudFormationClient>>;

}  // namespace CloudFormation
}  // namespace Aws
