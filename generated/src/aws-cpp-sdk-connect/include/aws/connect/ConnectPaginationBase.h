/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace Connect {

class ConnectClient;

template <typename DerivedClient>
class ConnectPaginationBase {
 public:
  /**
   * Create a paginator for EvaluateDataTableValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::EvaluateDataTableValuesRequest,
                                    Pagination::EvaluateDataTableValuesPaginationTraits<DerivedClient>>
  EvaluateDataTableValuesPaginator(const Model::EvaluateDataTableValuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::EvaluateDataTableValuesRequest,
                                             Pagination::EvaluateDataTableValuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCurrentMetricData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCurrentMetricDataRequest,
                                    Pagination::GetCurrentMetricDataPaginationTraits<DerivedClient>>
  GetCurrentMetricDataPaginator(const Model::GetCurrentMetricDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCurrentMetricDataRequest,
                                             Pagination::GetCurrentMetricDataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCurrentUserData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCurrentUserDataRequest,
                                    Pagination::GetCurrentUserDataPaginationTraits<DerivedClient>>
  GetCurrentUserDataPaginator(const Model::GetCurrentUserDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCurrentUserDataRequest,
                                             Pagination::GetCurrentUserDataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetMetricData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMetricDataRequest, Pagination::GetMetricDataPaginationTraits<DerivedClient>>
  GetMetricDataPaginator(const Model::GetMetricDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMetricDataRequest,
                                             Pagination::GetMetricDataPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetMetricDataV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMetricDataV2Request,
                                    Pagination::GetMetricDataV2PaginationTraits<DerivedClient>>
  GetMetricDataV2Paginator(const Model::GetMetricDataV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMetricDataV2Request,
                                             Pagination::GetMetricDataV2PaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListAgentStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentStatusesRequest,
                                    Pagination::ListAgentStatusesPaginationTraits<DerivedClient>>
  ListAgentStatusesPaginator(const Model::ListAgentStatusesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentStatusesRequest,
                                             Pagination::ListAgentStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApprovedOrigins operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApprovedOriginsRequest,
                                    Pagination::ListApprovedOriginsPaginationTraits<DerivedClient>>
  ListApprovedOriginsPaginator(const Model::ListApprovedOriginsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApprovedOriginsRequest,
                                             Pagination::ListApprovedOriginsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAuthenticationProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuthenticationProfilesRequest,
                                    Pagination::ListAuthenticationProfilesPaginationTraits<DerivedClient>>
  ListAuthenticationProfilesPaginator(const Model::ListAuthenticationProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuthenticationProfilesRequest,
                                             Pagination::ListAuthenticationProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<DerivedClient>>
  ListBotsPaginator(const Model::ListBotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChildHoursOfOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChildHoursOfOperationsRequest,
                                    Pagination::ListChildHoursOfOperationsPaginationTraits<DerivedClient>>
  ListChildHoursOfOperationsPaginator(const Model::ListChildHoursOfOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChildHoursOfOperationsRequest,
                                             Pagination::ListChildHoursOfOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContactEvaluations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactEvaluationsRequest,
                                    Pagination::ListContactEvaluationsPaginationTraits<DerivedClient>>
  ListContactEvaluationsPaginator(const Model::ListContactEvaluationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactEvaluationsRequest,
                                             Pagination::ListContactEvaluationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContactFlowModuleAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowModuleAliasesRequest,
                                    Pagination::ListContactFlowModuleAliasesPaginationTraits<DerivedClient>>
  ListContactFlowModuleAliasesPaginator(const Model::ListContactFlowModuleAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowModuleAliasesRequest,
                                             Pagination::ListContactFlowModuleAliasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContactFlowModules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowModulesRequest,
                                    Pagination::ListContactFlowModulesPaginationTraits<DerivedClient>>
  ListContactFlowModulesPaginator(const Model::ListContactFlowModulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowModulesRequest,
                                             Pagination::ListContactFlowModulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContactFlowModuleVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowModuleVersionsRequest,
                                    Pagination::ListContactFlowModuleVersionsPaginationTraits<DerivedClient>>
  ListContactFlowModuleVersionsPaginator(const Model::ListContactFlowModuleVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowModuleVersionsRequest,
                                             Pagination::ListContactFlowModuleVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContactFlows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowsRequest,
                                    Pagination::ListContactFlowsPaginationTraits<DerivedClient>>
  ListContactFlowsPaginator(const Model::ListContactFlowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowsRequest,
                                             Pagination::ListContactFlowsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListContactFlowVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowVersionsRequest,
                                    Pagination::ListContactFlowVersionsPaginationTraits<DerivedClient>>
  ListContactFlowVersionsPaginator(const Model::ListContactFlowVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactFlowVersionsRequest,
                                             Pagination::ListContactFlowVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContactReferences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactReferencesRequest,
                                    Pagination::ListContactReferencesPaginationTraits<DerivedClient>>
  ListContactReferencesPaginator(const Model::ListContactReferencesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactReferencesRequest,
                                             Pagination::ListContactReferencesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataTableAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataTableAttributesRequest,
                                    Pagination::ListDataTableAttributesPaginationTraits<DerivedClient>>
  ListDataTableAttributesPaginator(const Model::ListDataTableAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataTableAttributesRequest,
                                             Pagination::ListDataTableAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataTablePrimaryValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataTablePrimaryValuesRequest,
                                    Pagination::ListDataTablePrimaryValuesPaginationTraits<DerivedClient>>
  ListDataTablePrimaryValuesPaginator(const Model::ListDataTablePrimaryValuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataTablePrimaryValuesRequest,
                                             Pagination::ListDataTablePrimaryValuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataTablesRequest, Pagination::ListDataTablesPaginationTraits<DerivedClient>>
  ListDataTablesPaginator(const Model::ListDataTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataTablesRequest,
                                             Pagination::ListDataTablesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDataTableValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataTableValuesRequest,
                                    Pagination::ListDataTableValuesPaginationTraits<DerivedClient>>
  ListDataTableValuesPaginator(const Model::ListDataTableValuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataTableValuesRequest,
                                             Pagination::ListDataTableValuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDefaultVocabularies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDefaultVocabulariesRequest,
                                    Pagination::ListDefaultVocabulariesPaginationTraits<DerivedClient>>
  ListDefaultVocabulariesPaginator(const Model::ListDefaultVocabulariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDefaultVocabulariesRequest,
                                             Pagination::ListDefaultVocabulariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEntitySecurityProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitySecurityProfilesRequest,
                                    Pagination::ListEntitySecurityProfilesPaginationTraits<DerivedClient>>
  ListEntitySecurityProfilesPaginator(const Model::ListEntitySecurityProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitySecurityProfilesRequest,
                                             Pagination::ListEntitySecurityProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEvaluationForms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEvaluationFormsRequest,
                                    Pagination::ListEvaluationFormsPaginationTraits<DerivedClient>>
  ListEvaluationFormsPaginator(const Model::ListEvaluationFormsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEvaluationFormsRequest,
                                             Pagination::ListEvaluationFormsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEvaluationFormVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEvaluationFormVersionsRequest,
                                    Pagination::ListEvaluationFormVersionsPaginationTraits<DerivedClient>>
  ListEvaluationFormVersionsPaginator(const Model::ListEvaluationFormVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEvaluationFormVersionsRequest,
                                             Pagination::ListEvaluationFormVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFlowAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowAssociationsRequest,
                                    Pagination::ListFlowAssociationsPaginationTraits<DerivedClient>>
  ListFlowAssociationsPaginator(const Model::ListFlowAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowAssociationsRequest,
                                             Pagination::ListFlowAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHoursOfOperationOverrides operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHoursOfOperationOverridesRequest,
                                    Pagination::ListHoursOfOperationOverridesPaginationTraits<DerivedClient>>
  ListHoursOfOperationOverridesPaginator(const Model::ListHoursOfOperationOverridesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHoursOfOperationOverridesRequest,
                                             Pagination::ListHoursOfOperationOverridesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHoursOfOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHoursOfOperationsRequest,
                                    Pagination::ListHoursOfOperationsPaginationTraits<DerivedClient>>
  ListHoursOfOperationsPaginator(const Model::ListHoursOfOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHoursOfOperationsRequest,
                                             Pagination::ListHoursOfOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstanceAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceAttributesRequest,
                                    Pagination::ListInstanceAttributesPaginationTraits<DerivedClient>>
  ListInstanceAttributesPaginator(const Model::ListInstanceAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceAttributesRequest,
                                             Pagination::ListInstanceAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest, Pagination::ListInstancesPaginationTraits<DerivedClient>>
  ListInstancesPaginator(const Model::ListInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest,
                                             Pagination::ListInstancesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListInstanceStorageConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceStorageConfigsRequest,
                                    Pagination::ListInstanceStorageConfigsPaginationTraits<DerivedClient>>
  ListInstanceStorageConfigsPaginator(const Model::ListInstanceStorageConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceStorageConfigsRequest,
                                             Pagination::ListInstanceStorageConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIntegrationAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegrationAssociationsRequest,
                                    Pagination::ListIntegrationAssociationsPaginationTraits<DerivedClient>>
  ListIntegrationAssociationsPaginator(const Model::ListIntegrationAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegrationAssociationsRequest,
                                             Pagination::ListIntegrationAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLambdaFunctions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLambdaFunctionsRequest,
                                    Pagination::ListLambdaFunctionsPaginationTraits<DerivedClient>>
  ListLambdaFunctionsPaginator(const Model::ListLambdaFunctionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLambdaFunctionsRequest,
                                             Pagination::ListLambdaFunctionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLexBots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLexBotsRequest, Pagination::ListLexBotsPaginationTraits<DerivedClient>>
  ListLexBotsPaginator(const Model::ListLexBotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLexBotsRequest,
                                             Pagination::ListLexBotsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListPhoneNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersRequest,
                                    Pagination::ListPhoneNumbersPaginationTraits<DerivedClient>>
  ListPhoneNumbersPaginator(const Model::ListPhoneNumbersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersRequest,
                                             Pagination::ListPhoneNumbersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPhoneNumbersV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersV2Request,
                                    Pagination::ListPhoneNumbersV2PaginationTraits<DerivedClient>>
  ListPhoneNumbersV2Paginator(const Model::ListPhoneNumbersV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersV2Request,
                                             Pagination::ListPhoneNumbersV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPredefinedAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPredefinedAttributesRequest,
                                    Pagination::ListPredefinedAttributesPaginationTraits<DerivedClient>>
  ListPredefinedAttributesPaginator(const Model::ListPredefinedAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPredefinedAttributesRequest,
                                             Pagination::ListPredefinedAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPrompts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPromptsRequest, Pagination::ListPromptsPaginationTraits<DerivedClient>>
  ListPromptsPaginator(const Model::ListPromptsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPromptsRequest,
                                             Pagination::ListPromptsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListQueueQuickConnects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueQuickConnectsRequest,
                                    Pagination::ListQueueQuickConnectsPaginationTraits<DerivedClient>>
  ListQueueQuickConnectsPaginator(const Model::ListQueueQuickConnectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueQuickConnectsRequest,
                                             Pagination::ListQueueQuickConnectsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest, Pagination::ListQueuesPaginationTraits<DerivedClient>>
  ListQueuesPaginator(const Model::ListQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest,
                                             Pagination::ListQueuesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListQuickConnects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuickConnectsRequest,
                                    Pagination::ListQuickConnectsPaginationTraits<DerivedClient>>
  ListQuickConnectsPaginator(const Model::ListQuickConnectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuickConnectsRequest,
                                             Pagination::ListQuickConnectsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRealtimeContactAnalysisSegmentsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRealtimeContactAnalysisSegmentsV2Request,
                                    Pagination::ListRealtimeContactAnalysisSegmentsV2PaginationTraits<DerivedClient>>
  ListRealtimeContactAnalysisSegmentsV2Paginator(const Model::ListRealtimeContactAnalysisSegmentsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRealtimeContactAnalysisSegmentsV2Request,
                                             Pagination::ListRealtimeContactAnalysisSegmentsV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoutingProfileManualAssignmentQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingProfileManualAssignmentQueuesRequest,
                                    Pagination::ListRoutingProfileManualAssignmentQueuesPaginationTraits<DerivedClient>>
  ListRoutingProfileManualAssignmentQueuesPaginator(const Model::ListRoutingProfileManualAssignmentQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingProfileManualAssignmentQueuesRequest,
                                             Pagination::ListRoutingProfileManualAssignmentQueuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoutingProfileQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingProfileQueuesRequest,
                                    Pagination::ListRoutingProfileQueuesPaginationTraits<DerivedClient>>
  ListRoutingProfileQueuesPaginator(const Model::ListRoutingProfileQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingProfileQueuesRequest,
                                             Pagination::ListRoutingProfileQueuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoutingProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingProfilesRequest,
                                    Pagination::ListRoutingProfilesPaginationTraits<DerivedClient>>
  ListRoutingProfilesPaginator(const Model::ListRoutingProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingProfilesRequest,
                                             Pagination::ListRoutingProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>
  ListRulesPaginator(const Model::ListRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityKeysRequest,
                                    Pagination::ListSecurityKeysPaginationTraits<DerivedClient>>
  ListSecurityKeysPaginator(const Model::ListSecurityKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityKeysRequest,
                                             Pagination::ListSecurityKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListSecurityProfileApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfileApplicationsRequest,
                                    Pagination::ListSecurityProfileApplicationsPaginationTraits<DerivedClient>>
  ListSecurityProfileApplicationsPaginator(const Model::ListSecurityProfileApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfileApplicationsRequest,
                                             Pagination::ListSecurityProfileApplicationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityProfileFlowModules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfileFlowModulesRequest,
                                    Pagination::ListSecurityProfileFlowModulesPaginationTraits<DerivedClient>>
  ListSecurityProfileFlowModulesPaginator(const Model::ListSecurityProfileFlowModulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfileFlowModulesRequest,
                                             Pagination::ListSecurityProfileFlowModulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityProfilePermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfilePermissionsRequest,
                                    Pagination::ListSecurityProfilePermissionsPaginationTraits<DerivedClient>>
  ListSecurityProfilePermissionsPaginator(const Model::ListSecurityProfilePermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfilePermissionsRequest,
                                             Pagination::ListSecurityProfilePermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfilesRequest,
                                    Pagination::ListSecurityProfilesPaginationTraits<DerivedClient>>
  ListSecurityProfilesPaginator(const Model::ListSecurityProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfilesRequest,
                                             Pagination::ListSecurityProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTaskTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskTemplatesRequest,
                                    Pagination::ListTaskTemplatesPaginationTraits<DerivedClient>>
  ListTaskTemplatesPaginator(const Model::ListTaskTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskTemplatesRequest,
                                             Pagination::ListTaskTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTestCases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestCasesRequest, Pagination::ListTestCasesPaginationTraits<DerivedClient>>
  ListTestCasesPaginator(const Model::ListTestCasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestCasesRequest,
                                             Pagination::ListTestCasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTrafficDistributionGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrafficDistributionGroupsRequest,
                                    Pagination::ListTrafficDistributionGroupsPaginationTraits<DerivedClient>>
  ListTrafficDistributionGroupsPaginator(const Model::ListTrafficDistributionGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrafficDistributionGroupsRequest,
                                             Pagination::ListTrafficDistributionGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrafficDistributionGroupUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrafficDistributionGroupUsersRequest,
                                    Pagination::ListTrafficDistributionGroupUsersPaginationTraits<DerivedClient>>
  ListTrafficDistributionGroupUsersPaginator(const Model::ListTrafficDistributionGroupUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrafficDistributionGroupUsersRequest,
                                             Pagination::ListTrafficDistributionGroupUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUseCases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUseCasesRequest, Pagination::ListUseCasesPaginationTraits<DerivedClient>>
  ListUseCasesPaginator(const Model::ListUseCasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUseCasesRequest,
                                             Pagination::ListUseCasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListUserHierarchyGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserHierarchyGroupsRequest,
                                    Pagination::ListUserHierarchyGroupsPaginationTraits<DerivedClient>>
  ListUserHierarchyGroupsPaginator(const Model::ListUserHierarchyGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserHierarchyGroupsRequest,
                                             Pagination::ListUserHierarchyGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUserProficiencies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserProficienciesRequest,
                                    Pagination::ListUserProficienciesPaginationTraits<DerivedClient>>
  ListUserProficienciesPaginator(const Model::ListUserProficienciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserProficienciesRequest,
                                             Pagination::ListUserProficienciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>
  ListUsersPaginator(const Model::ListUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListViews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViewsRequest, Pagination::ListViewsPaginationTraits<DerivedClient>>
  ListViewsPaginator(const Model::ListViewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViewsRequest, Pagination::ListViewsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListViewVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViewVersionsRequest,
                                    Pagination::ListViewVersionsPaginationTraits<DerivedClient>>
  ListViewVersionsPaginator(const Model::ListViewVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViewVersionsRequest,
                                             Pagination::ListViewVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListWorkspacePages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacePagesRequest,
                                    Pagination::ListWorkspacePagesPaginationTraits<DerivedClient>>
  ListWorkspacePagesPaginator(const Model::ListWorkspacePagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacePagesRequest,
                                             Pagination::ListWorkspacePagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkspaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest, Pagination::ListWorkspacesPaginationTraits<DerivedClient>>
  ListWorkspacesPaginator(const Model::ListWorkspacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest,
                                             Pagination::ListWorkspacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for SearchAgentStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAgentStatusesRequest,
                                    Pagination::SearchAgentStatusesPaginationTraits<DerivedClient>>
  SearchAgentStatusesPaginator(const Model::SearchAgentStatusesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAgentStatusesRequest,
                                             Pagination::SearchAgentStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchAvailablePhoneNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAvailablePhoneNumbersRequest,
                                    Pagination::SearchAvailablePhoneNumbersPaginationTraits<DerivedClient>>
  SearchAvailablePhoneNumbersPaginator(const Model::SearchAvailablePhoneNumbersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAvailablePhoneNumbersRequest,
                                             Pagination::SearchAvailablePhoneNumbersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchContactFlowModules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContactFlowModulesRequest,
                                    Pagination::SearchContactFlowModulesPaginationTraits<DerivedClient>>
  SearchContactFlowModulesPaginator(const Model::SearchContactFlowModulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContactFlowModulesRequest,
                                             Pagination::SearchContactFlowModulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchContactFlows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContactFlowsRequest,
                                    Pagination::SearchContactFlowsPaginationTraits<DerivedClient>>
  SearchContactFlowsPaginator(const Model::SearchContactFlowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContactFlowsRequest,
                                             Pagination::SearchContactFlowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchContacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContactsRequest, Pagination::SearchContactsPaginationTraits<DerivedClient>>
  SearchContactsPaginator(const Model::SearchContactsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContactsRequest,
                                             Pagination::SearchContactsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for SearchDataTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDataTablesRequest,
                                    Pagination::SearchDataTablesPaginationTraits<DerivedClient>>
  SearchDataTablesPaginator(const Model::SearchDataTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDataTablesRequest,
                                             Pagination::SearchDataTablesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for SearchHoursOfOperationOverrides operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchHoursOfOperationOverridesRequest,
                                    Pagination::SearchHoursOfOperationOverridesPaginationTraits<DerivedClient>>
  SearchHoursOfOperationOverridesPaginator(const Model::SearchHoursOfOperationOverridesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchHoursOfOperationOverridesRequest,
                                             Pagination::SearchHoursOfOperationOverridesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchHoursOfOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchHoursOfOperationsRequest,
                                    Pagination::SearchHoursOfOperationsPaginationTraits<DerivedClient>>
  SearchHoursOfOperationsPaginator(const Model::SearchHoursOfOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchHoursOfOperationsRequest,
                                             Pagination::SearchHoursOfOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchPredefinedAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchPredefinedAttributesRequest,
                                    Pagination::SearchPredefinedAttributesPaginationTraits<DerivedClient>>
  SearchPredefinedAttributesPaginator(const Model::SearchPredefinedAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchPredefinedAttributesRequest,
                                             Pagination::SearchPredefinedAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchPrompts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchPromptsRequest, Pagination::SearchPromptsPaginationTraits<DerivedClient>>
  SearchPromptsPaginator(const Model::SearchPromptsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchPromptsRequest,
                                             Pagination::SearchPromptsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for SearchQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQueuesRequest, Pagination::SearchQueuesPaginationTraits<DerivedClient>>
  SearchQueuesPaginator(const Model::SearchQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQueuesRequest,
                                             Pagination::SearchQueuesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for SearchQuickConnects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQuickConnectsRequest,
                                    Pagination::SearchQuickConnectsPaginationTraits<DerivedClient>>
  SearchQuickConnectsPaginator(const Model::SearchQuickConnectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQuickConnectsRequest,
                                             Pagination::SearchQuickConnectsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchResourceTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchResourceTagsRequest,
                                    Pagination::SearchResourceTagsPaginationTraits<DerivedClient>>
  SearchResourceTagsPaginator(const Model::SearchResourceTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchResourceTagsRequest,
                                             Pagination::SearchResourceTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchRoutingProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRoutingProfilesRequest,
                                    Pagination::SearchRoutingProfilesPaginationTraits<DerivedClient>>
  SearchRoutingProfilesPaginator(const Model::SearchRoutingProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRoutingProfilesRequest,
                                             Pagination::SearchRoutingProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchSecurityProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSecurityProfilesRequest,
                                    Pagination::SearchSecurityProfilesPaginationTraits<DerivedClient>>
  SearchSecurityProfilesPaginator(const Model::SearchSecurityProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSecurityProfilesRequest,
                                             Pagination::SearchSecurityProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchTestCases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTestCasesRequest,
                                    Pagination::SearchTestCasesPaginationTraits<DerivedClient>>
  SearchTestCasesPaginator(const Model::SearchTestCasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTestCasesRequest,
                                             Pagination::SearchTestCasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for SearchUserHierarchyGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchUserHierarchyGroupsRequest,
                                    Pagination::SearchUserHierarchyGroupsPaginationTraits<DerivedClient>>
  SearchUserHierarchyGroupsPaginator(const Model::SearchUserHierarchyGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchUserHierarchyGroupsRequest,
                                             Pagination::SearchUserHierarchyGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchUsersRequest, Pagination::SearchUsersPaginationTraits<DerivedClient>>
  SearchUsersPaginator(const Model::SearchUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchUsersRequest,
                                             Pagination::SearchUsersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for SearchViews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchViewsRequest, Pagination::SearchViewsPaginationTraits<DerivedClient>>
  SearchViewsPaginator(const Model::SearchViewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchViewsRequest,
                                             Pagination::SearchViewsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for SearchVocabularies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchVocabulariesRequest,
                                    Pagination::SearchVocabulariesPaginationTraits<DerivedClient>>
  SearchVocabulariesPaginator(const Model::SearchVocabulariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchVocabulariesRequest,
                                             Pagination::SearchVocabulariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchWorkspaceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchWorkspaceAssociationsRequest,
                                    Pagination::SearchWorkspaceAssociationsPaginationTraits<DerivedClient>>
  SearchWorkspaceAssociationsPaginator(const Model::SearchWorkspaceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchWorkspaceAssociationsRequest,
                                             Pagination::SearchWorkspaceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchWorkspaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchWorkspacesRequest,
                                    Pagination::SearchWorkspacesPaginationTraits<DerivedClient>>
  SearchWorkspacesPaginator(const Model::SearchWorkspacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchWorkspacesRequest,
                                             Pagination::SearchWorkspacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace Connect
}  // namespace Aws
