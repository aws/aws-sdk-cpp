/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectClient.h>
#include <aws/connect/model/EvaluateDataTableValuesPaginationTraits.h>
#include <aws/connect/model/GetCurrentMetricDataPaginationTraits.h>
#include <aws/connect/model/GetCurrentUserDataPaginationTraits.h>
#include <aws/connect/model/GetMetricDataPaginationTraits.h>
#include <aws/connect/model/GetMetricDataV2PaginationTraits.h>
#include <aws/connect/model/ListAgentStatusesPaginationTraits.h>
#include <aws/connect/model/ListApprovedOriginsPaginationTraits.h>
#include <aws/connect/model/ListAuthenticationProfilesPaginationTraits.h>
#include <aws/connect/model/ListBotsPaginationTraits.h>
#include <aws/connect/model/ListChildHoursOfOperationsPaginationTraits.h>
#include <aws/connect/model/ListContactEvaluationsPaginationTraits.h>
#include <aws/connect/model/ListContactFlowModuleAliasesPaginationTraits.h>
#include <aws/connect/model/ListContactFlowModuleVersionsPaginationTraits.h>
#include <aws/connect/model/ListContactFlowModulesPaginationTraits.h>
#include <aws/connect/model/ListContactFlowVersionsPaginationTraits.h>
#include <aws/connect/model/ListContactFlowsPaginationTraits.h>
#include <aws/connect/model/ListContactReferencesPaginationTraits.h>
#include <aws/connect/model/ListDataTableAttributesPaginationTraits.h>
#include <aws/connect/model/ListDataTablePrimaryValuesPaginationTraits.h>
#include <aws/connect/model/ListDataTableValuesPaginationTraits.h>
#include <aws/connect/model/ListDataTablesPaginationTraits.h>
#include <aws/connect/model/ListDefaultVocabulariesPaginationTraits.h>
#include <aws/connect/model/ListEntitySecurityProfilesPaginationTraits.h>
#include <aws/connect/model/ListEvaluationFormVersionsPaginationTraits.h>
#include <aws/connect/model/ListEvaluationFormsPaginationTraits.h>
#include <aws/connect/model/ListFlowAssociationsPaginationTraits.h>
#include <aws/connect/model/ListHoursOfOperationOverridesPaginationTraits.h>
#include <aws/connect/model/ListHoursOfOperationsPaginationTraits.h>
#include <aws/connect/model/ListInstanceAttributesPaginationTraits.h>
#include <aws/connect/model/ListInstanceStorageConfigsPaginationTraits.h>
#include <aws/connect/model/ListInstancesPaginationTraits.h>
#include <aws/connect/model/ListIntegrationAssociationsPaginationTraits.h>
#include <aws/connect/model/ListLambdaFunctionsPaginationTraits.h>
#include <aws/connect/model/ListLexBotsPaginationTraits.h>
#include <aws/connect/model/ListPhoneNumbersPaginationTraits.h>
#include <aws/connect/model/ListPhoneNumbersV2PaginationTraits.h>
#include <aws/connect/model/ListPredefinedAttributesPaginationTraits.h>
#include <aws/connect/model/ListPromptsPaginationTraits.h>
#include <aws/connect/model/ListQueueQuickConnectsPaginationTraits.h>
#include <aws/connect/model/ListQueuesPaginationTraits.h>
#include <aws/connect/model/ListQuickConnectsPaginationTraits.h>
#include <aws/connect/model/ListRealtimeContactAnalysisSegmentsV2PaginationTraits.h>
#include <aws/connect/model/ListRoutingProfileManualAssignmentQueuesPaginationTraits.h>
#include <aws/connect/model/ListRoutingProfileQueuesPaginationTraits.h>
#include <aws/connect/model/ListRoutingProfilesPaginationTraits.h>
#include <aws/connect/model/ListRulesPaginationTraits.h>
#include <aws/connect/model/ListSecurityKeysPaginationTraits.h>
#include <aws/connect/model/ListSecurityProfileApplicationsPaginationTraits.h>
#include <aws/connect/model/ListSecurityProfileFlowModulesPaginationTraits.h>
#include <aws/connect/model/ListSecurityProfilePermissionsPaginationTraits.h>
#include <aws/connect/model/ListSecurityProfilesPaginationTraits.h>
#include <aws/connect/model/ListTaskTemplatesPaginationTraits.h>
#include <aws/connect/model/ListTestCasesPaginationTraits.h>
#include <aws/connect/model/ListTrafficDistributionGroupUsersPaginationTraits.h>
#include <aws/connect/model/ListTrafficDistributionGroupsPaginationTraits.h>
#include <aws/connect/model/ListUseCasesPaginationTraits.h>
#include <aws/connect/model/ListUserHierarchyGroupsPaginationTraits.h>
#include <aws/connect/model/ListUserProficienciesPaginationTraits.h>
#include <aws/connect/model/ListUsersPaginationTraits.h>
#include <aws/connect/model/ListViewVersionsPaginationTraits.h>
#include <aws/connect/model/ListViewsPaginationTraits.h>
#include <aws/connect/model/ListWorkspacePagesPaginationTraits.h>
#include <aws/connect/model/ListWorkspacesPaginationTraits.h>
#include <aws/connect/model/SearchAgentStatusesPaginationTraits.h>
#include <aws/connect/model/SearchAvailablePhoneNumbersPaginationTraits.h>
#include <aws/connect/model/SearchContactFlowModulesPaginationTraits.h>
#include <aws/connect/model/SearchContactFlowsPaginationTraits.h>
#include <aws/connect/model/SearchContactsPaginationTraits.h>
#include <aws/connect/model/SearchDataTablesPaginationTraits.h>
#include <aws/connect/model/SearchHoursOfOperationOverridesPaginationTraits.h>
#include <aws/connect/model/SearchHoursOfOperationsPaginationTraits.h>
#include <aws/connect/model/SearchPredefinedAttributesPaginationTraits.h>
#include <aws/connect/model/SearchPromptsPaginationTraits.h>
#include <aws/connect/model/SearchQueuesPaginationTraits.h>
#include <aws/connect/model/SearchQuickConnectsPaginationTraits.h>
#include <aws/connect/model/SearchResourceTagsPaginationTraits.h>
#include <aws/connect/model/SearchRoutingProfilesPaginationTraits.h>
#include <aws/connect/model/SearchSecurityProfilesPaginationTraits.h>
#include <aws/connect/model/SearchTestCasesPaginationTraits.h>
#include <aws/connect/model/SearchUserHierarchyGroupsPaginationTraits.h>
#include <aws/connect/model/SearchUsersPaginationTraits.h>
#include <aws/connect/model/SearchViewsPaginationTraits.h>
#include <aws/connect/model/SearchVocabulariesPaginationTraits.h>
#include <aws/connect/model/SearchWorkspaceAssociationsPaginationTraits.h>
#include <aws/connect/model/SearchWorkspacesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Connect {

using EvaluateDataTableValuesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::EvaluateDataTableValuesRequest,
                                      Pagination::EvaluateDataTableValuesPaginationTraits<ConnectClient>>;
using GetCurrentMetricDataPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::GetCurrentMetricDataRequest,
                                                                        Pagination::GetCurrentMetricDataPaginationTraits<ConnectClient>>;
using GetCurrentUserDataPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::GetCurrentUserDataRequest,
                                                                      Pagination::GetCurrentUserDataPaginationTraits<ConnectClient>>;
using GetMetricDataPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::GetMetricDataRequest, Pagination::GetMetricDataPaginationTraits<ConnectClient>>;
using GetMetricDataV2Paginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::GetMetricDataV2Request,
                                                                   Pagination::GetMetricDataV2PaginationTraits<ConnectClient>>;
using ListAgentStatusesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListAgentStatusesRequest,
                                                                     Pagination::ListAgentStatusesPaginationTraits<ConnectClient>>;
using ListApprovedOriginsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListApprovedOriginsRequest,
                                                                       Pagination::ListApprovedOriginsPaginationTraits<ConnectClient>>;
using ListAuthenticationProfilesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListAuthenticationProfilesRequest,
                                      Pagination::ListAuthenticationProfilesPaginationTraits<ConnectClient>>;
using ListBotsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<ConnectClient>>;
using ListChildHoursOfOperationsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListChildHoursOfOperationsRequest,
                                      Pagination::ListChildHoursOfOperationsPaginationTraits<ConnectClient>>;
using ListContactEvaluationsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListContactEvaluationsRequest,
                                      Pagination::ListContactEvaluationsPaginationTraits<ConnectClient>>;
using ListContactFlowModuleAliasesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListContactFlowModuleAliasesRequest,
                                      Pagination::ListContactFlowModuleAliasesPaginationTraits<ConnectClient>>;
using ListContactFlowModulesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListContactFlowModulesRequest,
                                      Pagination::ListContactFlowModulesPaginationTraits<ConnectClient>>;
using ListContactFlowModuleVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListContactFlowModuleVersionsRequest,
                                      Pagination::ListContactFlowModuleVersionsPaginationTraits<ConnectClient>>;
using ListContactFlowsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListContactFlowsRequest,
                                                                    Pagination::ListContactFlowsPaginationTraits<ConnectClient>>;
using ListContactFlowVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListContactFlowVersionsRequest,
                                      Pagination::ListContactFlowVersionsPaginationTraits<ConnectClient>>;
using ListContactReferencesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListContactReferencesRequest,
                                                                         Pagination::ListContactReferencesPaginationTraits<ConnectClient>>;
using ListDataTableAttributesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListDataTableAttributesRequest,
                                      Pagination::ListDataTableAttributesPaginationTraits<ConnectClient>>;
using ListDataTablePrimaryValuesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListDataTablePrimaryValuesRequest,
                                      Pagination::ListDataTablePrimaryValuesPaginationTraits<ConnectClient>>;
using ListDataTablesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListDataTablesRequest,
                                                                  Pagination::ListDataTablesPaginationTraits<ConnectClient>>;
using ListDataTableValuesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListDataTableValuesRequest,
                                                                       Pagination::ListDataTableValuesPaginationTraits<ConnectClient>>;
using ListDefaultVocabulariesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListDefaultVocabulariesRequest,
                                      Pagination::ListDefaultVocabulariesPaginationTraits<ConnectClient>>;
using ListEntitySecurityProfilesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListEntitySecurityProfilesRequest,
                                      Pagination::ListEntitySecurityProfilesPaginationTraits<ConnectClient>>;
using ListEvaluationFormsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListEvaluationFormsRequest,
                                                                       Pagination::ListEvaluationFormsPaginationTraits<ConnectClient>>;
using ListEvaluationFormVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListEvaluationFormVersionsRequest,
                                      Pagination::ListEvaluationFormVersionsPaginationTraits<ConnectClient>>;
using ListFlowAssociationsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListFlowAssociationsRequest,
                                                                        Pagination::ListFlowAssociationsPaginationTraits<ConnectClient>>;
using ListHoursOfOperationOverridesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListHoursOfOperationOverridesRequest,
                                      Pagination::ListHoursOfOperationOverridesPaginationTraits<ConnectClient>>;
using ListHoursOfOperationsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListHoursOfOperationsRequest,
                                                                         Pagination::ListHoursOfOperationsPaginationTraits<ConnectClient>>;
using ListInstanceAttributesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListInstanceAttributesRequest,
                                      Pagination::ListInstanceAttributesPaginationTraits<ConnectClient>>;
using ListInstancesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListInstancesRequest, Pagination::ListInstancesPaginationTraits<ConnectClient>>;
using ListInstanceStorageConfigsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListInstanceStorageConfigsRequest,
                                      Pagination::ListInstanceStorageConfigsPaginationTraits<ConnectClient>>;
using ListIntegrationAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListIntegrationAssociationsRequest,
                                      Pagination::ListIntegrationAssociationsPaginationTraits<ConnectClient>>;
using ListLambdaFunctionsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListLambdaFunctionsRequest,
                                                                       Pagination::ListLambdaFunctionsPaginationTraits<ConnectClient>>;
using ListLexBotsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListLexBotsRequest, Pagination::ListLexBotsPaginationTraits<ConnectClient>>;
using ListPhoneNumbersPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListPhoneNumbersRequest,
                                                                    Pagination::ListPhoneNumbersPaginationTraits<ConnectClient>>;
using ListPhoneNumbersV2Paginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListPhoneNumbersV2Request,
                                                                      Pagination::ListPhoneNumbersV2PaginationTraits<ConnectClient>>;
using ListPredefinedAttributesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListPredefinedAttributesRequest,
                                      Pagination::ListPredefinedAttributesPaginationTraits<ConnectClient>>;
using ListPromptsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListPromptsRequest, Pagination::ListPromptsPaginationTraits<ConnectClient>>;
using ListQueueQuickConnectsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListQueueQuickConnectsRequest,
                                      Pagination::ListQueueQuickConnectsPaginationTraits<ConnectClient>>;
using ListQueuesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListQueuesRequest, Pagination::ListQueuesPaginationTraits<ConnectClient>>;
using ListQuickConnectsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListQuickConnectsRequest,
                                                                     Pagination::ListQuickConnectsPaginationTraits<ConnectClient>>;
using ListRealtimeContactAnalysisSegmentsV2Paginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListRealtimeContactAnalysisSegmentsV2Request,
                                      Pagination::ListRealtimeContactAnalysisSegmentsV2PaginationTraits<ConnectClient>>;
using ListRoutingProfileManualAssignmentQueuesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListRoutingProfileManualAssignmentQueuesRequest,
                                      Pagination::ListRoutingProfileManualAssignmentQueuesPaginationTraits<ConnectClient>>;
using ListRoutingProfileQueuesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListRoutingProfileQueuesRequest,
                                      Pagination::ListRoutingProfileQueuesPaginationTraits<ConnectClient>>;
using ListRoutingProfilesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListRoutingProfilesRequest,
                                                                       Pagination::ListRoutingProfilesPaginationTraits<ConnectClient>>;
using ListRulesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<ConnectClient>>;
using ListSecurityKeysPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListSecurityKeysRequest,
                                                                    Pagination::ListSecurityKeysPaginationTraits<ConnectClient>>;
using ListSecurityProfileApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListSecurityProfileApplicationsRequest,
                                      Pagination::ListSecurityProfileApplicationsPaginationTraits<ConnectClient>>;
using ListSecurityProfileFlowModulesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListSecurityProfileFlowModulesRequest,
                                      Pagination::ListSecurityProfileFlowModulesPaginationTraits<ConnectClient>>;
using ListSecurityProfilePermissionsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListSecurityProfilePermissionsRequest,
                                      Pagination::ListSecurityProfilePermissionsPaginationTraits<ConnectClient>>;
using ListSecurityProfilesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListSecurityProfilesRequest,
                                                                        Pagination::ListSecurityProfilesPaginationTraits<ConnectClient>>;
using ListTaskTemplatesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListTaskTemplatesRequest,
                                                                     Pagination::ListTaskTemplatesPaginationTraits<ConnectClient>>;
using ListTestCasesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListTestCasesRequest, Pagination::ListTestCasesPaginationTraits<ConnectClient>>;
using ListTrafficDistributionGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListTrafficDistributionGroupsRequest,
                                      Pagination::ListTrafficDistributionGroupsPaginationTraits<ConnectClient>>;
using ListTrafficDistributionGroupUsersPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListTrafficDistributionGroupUsersRequest,
                                      Pagination::ListTrafficDistributionGroupUsersPaginationTraits<ConnectClient>>;
using ListUseCasesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListUseCasesRequest, Pagination::ListUseCasesPaginationTraits<ConnectClient>>;
using ListUserHierarchyGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListUserHierarchyGroupsRequest,
                                      Pagination::ListUserHierarchyGroupsPaginationTraits<ConnectClient>>;
using ListUserProficienciesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListUserProficienciesRequest,
                                                                         Pagination::ListUserProficienciesPaginationTraits<ConnectClient>>;
using ListUsersPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<ConnectClient>>;
using ListViewsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListViewsRequest, Pagination::ListViewsPaginationTraits<ConnectClient>>;
using ListViewVersionsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListViewVersionsRequest,
                                                                    Pagination::ListViewVersionsPaginationTraits<ConnectClient>>;
using ListWorkspacePagesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListWorkspacePagesRequest,
                                                                      Pagination::ListWorkspacePagesPaginationTraits<ConnectClient>>;
using ListWorkspacesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::ListWorkspacesRequest,
                                                                  Pagination::ListWorkspacesPaginationTraits<ConnectClient>>;
using SearchAgentStatusesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchAgentStatusesRequest,
                                                                       Pagination::SearchAgentStatusesPaginationTraits<ConnectClient>>;
using SearchAvailablePhoneNumbersPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchAvailablePhoneNumbersRequest,
                                      Pagination::SearchAvailablePhoneNumbersPaginationTraits<ConnectClient>>;
using SearchContactFlowModulesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchContactFlowModulesRequest,
                                      Pagination::SearchContactFlowModulesPaginationTraits<ConnectClient>>;
using SearchContactFlowsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchContactFlowsRequest,
                                                                      Pagination::SearchContactFlowsPaginationTraits<ConnectClient>>;
using SearchContactsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchContactsRequest,
                                                                  Pagination::SearchContactsPaginationTraits<ConnectClient>>;
using SearchDataTablesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchDataTablesRequest,
                                                                    Pagination::SearchDataTablesPaginationTraits<ConnectClient>>;
using SearchHoursOfOperationOverridesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchHoursOfOperationOverridesRequest,
                                      Pagination::SearchHoursOfOperationOverridesPaginationTraits<ConnectClient>>;
using SearchHoursOfOperationsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchHoursOfOperationsRequest,
                                      Pagination::SearchHoursOfOperationsPaginationTraits<ConnectClient>>;
using SearchPredefinedAttributesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchPredefinedAttributesRequest,
                                      Pagination::SearchPredefinedAttributesPaginationTraits<ConnectClient>>;
using SearchPromptsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchPromptsRequest, Pagination::SearchPromptsPaginationTraits<ConnectClient>>;
using SearchQueuesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchQueuesRequest, Pagination::SearchQueuesPaginationTraits<ConnectClient>>;
using SearchQuickConnectsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchQuickConnectsRequest,
                                                                       Pagination::SearchQuickConnectsPaginationTraits<ConnectClient>>;
using SearchResourceTagsPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchResourceTagsRequest,
                                                                      Pagination::SearchResourceTagsPaginationTraits<ConnectClient>>;
using SearchRoutingProfilesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchRoutingProfilesRequest,
                                                                         Pagination::SearchRoutingProfilesPaginationTraits<ConnectClient>>;
using SearchSecurityProfilesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchSecurityProfilesRequest,
                                      Pagination::SearchSecurityProfilesPaginationTraits<ConnectClient>>;
using SearchTestCasesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchTestCasesRequest,
                                                                   Pagination::SearchTestCasesPaginationTraits<ConnectClient>>;
using SearchUserHierarchyGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchUserHierarchyGroupsRequest,
                                      Pagination::SearchUserHierarchyGroupsPaginationTraits<ConnectClient>>;
using SearchUsersPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchUsersRequest, Pagination::SearchUsersPaginationTraits<ConnectClient>>;
using SearchViewsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchViewsRequest, Pagination::SearchViewsPaginationTraits<ConnectClient>>;
using SearchVocabulariesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchVocabulariesRequest,
                                                                      Pagination::SearchVocabulariesPaginationTraits<ConnectClient>>;
using SearchWorkspaceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchWorkspaceAssociationsRequest,
                                      Pagination::SearchWorkspaceAssociationsPaginationTraits<ConnectClient>>;
using SearchWorkspacesPaginator = Aws::Utils::Pagination::Paginator<ConnectClient, Model::SearchWorkspacesRequest,
                                                                    Pagination::SearchWorkspacesPaginationTraits<ConnectClient>>;

}  // namespace Connect
}  // namespace Aws
