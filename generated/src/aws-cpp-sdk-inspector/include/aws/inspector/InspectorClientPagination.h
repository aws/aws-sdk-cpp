/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/inspector/InspectorClient.h>
#include <aws/inspector/model/GetExclusionsPreviewPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentRunAgentsPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentRunsPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentTargetsPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentTemplatesPaginationTraits.h>
#include <aws/inspector/model/ListEventSubscriptionsPaginationTraits.h>
#include <aws/inspector/model/ListExclusionsPaginationTraits.h>
#include <aws/inspector/model/ListFindingsPaginationTraits.h>
#include <aws/inspector/model/ListRulesPackagesPaginationTraits.h>
#include <aws/inspector/model/PreviewAgentsPaginationTraits.h>

namespace Aws {
namespace Inspector {

using GetExclusionsPreviewPaginator = Aws::Utils::Pagination::Paginator<InspectorClient, Model::GetExclusionsPreviewRequest,
                                                                        Pagination::GetExclusionsPreviewPaginationTraits<InspectorClient>>;
using ListAssessmentRunAgentsPaginator =
    Aws::Utils::Pagination::Paginator<InspectorClient, Model::ListAssessmentRunAgentsRequest,
                                      Pagination::ListAssessmentRunAgentsPaginationTraits<InspectorClient>>;
using ListAssessmentRunsPaginator = Aws::Utils::Pagination::Paginator<InspectorClient, Model::ListAssessmentRunsRequest,
                                                                      Pagination::ListAssessmentRunsPaginationTraits<InspectorClient>>;
using ListAssessmentTargetsPaginator =
    Aws::Utils::Pagination::Paginator<InspectorClient, Model::ListAssessmentTargetsRequest,
                                      Pagination::ListAssessmentTargetsPaginationTraits<InspectorClient>>;
using ListAssessmentTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<InspectorClient, Model::ListAssessmentTemplatesRequest,
                                      Pagination::ListAssessmentTemplatesPaginationTraits<InspectorClient>>;
using ListEventSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<InspectorClient, Model::ListEventSubscriptionsRequest,
                                      Pagination::ListEventSubscriptionsPaginationTraits<InspectorClient>>;
using ListExclusionsPaginator = Aws::Utils::Pagination::Paginator<InspectorClient, Model::ListExclusionsRequest,
                                                                  Pagination::ListExclusionsPaginationTraits<InspectorClient>>;
using ListFindingsPaginator = Aws::Utils::Pagination::Paginator<InspectorClient, Model::ListFindingsRequest,
                                                                Pagination::ListFindingsPaginationTraits<InspectorClient>>;
using ListRulesPackagesPaginator = Aws::Utils::Pagination::Paginator<InspectorClient, Model::ListRulesPackagesRequest,
                                                                     Pagination::ListRulesPackagesPaginationTraits<InspectorClient>>;
using PreviewAgentsPaginator = Aws::Utils::Pagination::Paginator<InspectorClient, Model::PreviewAgentsRequest,
                                                                 Pagination::PreviewAgentsPaginationTraits<InspectorClient>>;

}  // namespace Inspector
}  // namespace Aws
