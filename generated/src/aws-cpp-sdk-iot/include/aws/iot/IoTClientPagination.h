/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iot/IoTClient.h>
#include <aws/iot/model/GetBehaviorModelTrainingSummariesPaginationTraits.h>
#include <aws/iot/model/ListActiveViolationsPaginationTraits.h>
#include <aws/iot/model/ListAttachedPoliciesPaginationTraits.h>
#include <aws/iot/model/ListAuditFindingsPaginationTraits.h>
#include <aws/iot/model/ListAuditMitigationActionsExecutionsPaginationTraits.h>
#include <aws/iot/model/ListAuditMitigationActionsTasksPaginationTraits.h>
#include <aws/iot/model/ListAuditSuppressionsPaginationTraits.h>
#include <aws/iot/model/ListAuditTasksPaginationTraits.h>
#include <aws/iot/model/ListAuthorizersPaginationTraits.h>
#include <aws/iot/model/ListBillingGroupsPaginationTraits.h>
#include <aws/iot/model/ListCACertificatesPaginationTraits.h>
#include <aws/iot/model/ListCertificatesByCAPaginationTraits.h>
#include <aws/iot/model/ListCertificatesPaginationTraits.h>
#include <aws/iot/model/ListCommandExecutionsPaginationTraits.h>
#include <aws/iot/model/ListCommandsPaginationTraits.h>
#include <aws/iot/model/ListCustomMetricsPaginationTraits.h>
#include <aws/iot/model/ListDetectMitigationActionsExecutionsPaginationTraits.h>
#include <aws/iot/model/ListDetectMitigationActionsTasksPaginationTraits.h>
#include <aws/iot/model/ListDimensionsPaginationTraits.h>
#include <aws/iot/model/ListDomainConfigurationsPaginationTraits.h>
#include <aws/iot/model/ListFleetMetricsPaginationTraits.h>
#include <aws/iot/model/ListIndicesPaginationTraits.h>
#include <aws/iot/model/ListJobExecutionsForJobPaginationTraits.h>
#include <aws/iot/model/ListJobExecutionsForThingPaginationTraits.h>
#include <aws/iot/model/ListJobTemplatesPaginationTraits.h>
#include <aws/iot/model/ListJobsPaginationTraits.h>
#include <aws/iot/model/ListManagedJobTemplatesPaginationTraits.h>
#include <aws/iot/model/ListMetricValuesPaginationTraits.h>
#include <aws/iot/model/ListMitigationActionsPaginationTraits.h>
#include <aws/iot/model/ListOTAUpdatesPaginationTraits.h>
#include <aws/iot/model/ListOutgoingCertificatesPaginationTraits.h>
#include <aws/iot/model/ListPackageVersionsPaginationTraits.h>
#include <aws/iot/model/ListPackagesPaginationTraits.h>
#include <aws/iot/model/ListPoliciesPaginationTraits.h>
#include <aws/iot/model/ListPrincipalThingsPaginationTraits.h>
#include <aws/iot/model/ListPrincipalThingsV2PaginationTraits.h>
#include <aws/iot/model/ListProvisioningTemplateVersionsPaginationTraits.h>
#include <aws/iot/model/ListProvisioningTemplatesPaginationTraits.h>
#include <aws/iot/model/ListRelatedResourcesForAuditFindingPaginationTraits.h>
#include <aws/iot/model/ListRoleAliasesPaginationTraits.h>
#include <aws/iot/model/ListSbomValidationResultsPaginationTraits.h>
#include <aws/iot/model/ListScheduledAuditsPaginationTraits.h>
#include <aws/iot/model/ListSecurityProfilesForTargetPaginationTraits.h>
#include <aws/iot/model/ListSecurityProfilesPaginationTraits.h>
#include <aws/iot/model/ListStreamsPaginationTraits.h>
#include <aws/iot/model/ListTagsForResourcePaginationTraits.h>
#include <aws/iot/model/ListTargetsForPolicyPaginationTraits.h>
#include <aws/iot/model/ListTargetsForSecurityProfilePaginationTraits.h>
#include <aws/iot/model/ListThingGroupsForThingPaginationTraits.h>
#include <aws/iot/model/ListThingGroupsPaginationTraits.h>
#include <aws/iot/model/ListThingPrincipalsPaginationTraits.h>
#include <aws/iot/model/ListThingPrincipalsV2PaginationTraits.h>
#include <aws/iot/model/ListThingRegistrationTaskReportsPaginationTraits.h>
#include <aws/iot/model/ListThingRegistrationTasksPaginationTraits.h>
#include <aws/iot/model/ListThingTypesPaginationTraits.h>
#include <aws/iot/model/ListThingsInBillingGroupPaginationTraits.h>
#include <aws/iot/model/ListThingsInThingGroupPaginationTraits.h>
#include <aws/iot/model/ListThingsPaginationTraits.h>
#include <aws/iot/model/ListTopicRuleDestinationsPaginationTraits.h>
#include <aws/iot/model/ListTopicRulesPaginationTraits.h>
#include <aws/iot/model/ListV2LoggingLevelsPaginationTraits.h>
#include <aws/iot/model/ListViolationEventsPaginationTraits.h>

namespace Aws {
namespace IoT {

using GetBehaviorModelTrainingSummariesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::GetBehaviorModelTrainingSummariesRequest,
                                      Pagination::GetBehaviorModelTrainingSummariesPaginationTraits<IoTClient>>;
using ListActiveViolationsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListActiveViolationsRequest,
                                                                        Pagination::ListActiveViolationsPaginationTraits<IoTClient>>;
using ListAttachedPoliciesPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListAttachedPoliciesRequest,
                                                                        Pagination::ListAttachedPoliciesPaginationTraits<IoTClient>>;
using ListAuditFindingsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListAuditFindingsRequest, Pagination::ListAuditFindingsPaginationTraits<IoTClient>>;
using ListAuditMitigationActionsExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListAuditMitigationActionsExecutionsRequest,
                                      Pagination::ListAuditMitigationActionsExecutionsPaginationTraits<IoTClient>>;
using ListAuditMitigationActionsTasksPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListAuditMitigationActionsTasksRequest,
                                      Pagination::ListAuditMitigationActionsTasksPaginationTraits<IoTClient>>;
using ListAuditSuppressionsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListAuditSuppressionsRequest,
                                                                         Pagination::ListAuditSuppressionsPaginationTraits<IoTClient>>;
using ListAuditTasksPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListAuditTasksRequest, Pagination::ListAuditTasksPaginationTraits<IoTClient>>;
using ListAuthorizersPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListAuthorizersRequest, Pagination::ListAuthorizersPaginationTraits<IoTClient>>;
using ListBillingGroupsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListBillingGroupsRequest, Pagination::ListBillingGroupsPaginationTraits<IoTClient>>;
using ListCACertificatesPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListCACertificatesRequest,
                                                                      Pagination::ListCACertificatesPaginationTraits<IoTClient>>;
using ListCertificatesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListCertificatesRequest, Pagination::ListCertificatesPaginationTraits<IoTClient>>;
using ListCertificatesByCAPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListCertificatesByCARequest,
                                                                        Pagination::ListCertificatesByCAPaginationTraits<IoTClient>>;
using ListCommandExecutionsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListCommandExecutionsRequest,
                                                                         Pagination::ListCommandExecutionsPaginationTraits<IoTClient>>;
using ListCommandsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListCommandsRequest, Pagination::ListCommandsPaginationTraits<IoTClient>>;
using ListCustomMetricsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListCustomMetricsRequest, Pagination::ListCustomMetricsPaginationTraits<IoTClient>>;
using ListDetectMitigationActionsExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListDetectMitigationActionsExecutionsRequest,
                                      Pagination::ListDetectMitigationActionsExecutionsPaginationTraits<IoTClient>>;
using ListDetectMitigationActionsTasksPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListDetectMitigationActionsTasksRequest,
                                      Pagination::ListDetectMitigationActionsTasksPaginationTraits<IoTClient>>;
using ListDimensionsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListDimensionsRequest, Pagination::ListDimensionsPaginationTraits<IoTClient>>;
using ListDomainConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListDomainConfigurationsRequest,
                                      Pagination::ListDomainConfigurationsPaginationTraits<IoTClient>>;
using ListFleetMetricsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListFleetMetricsRequest, Pagination::ListFleetMetricsPaginationTraits<IoTClient>>;
using ListIndicesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListIndicesRequest, Pagination::ListIndicesPaginationTraits<IoTClient>>;
using ListJobExecutionsForJobPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListJobExecutionsForJobRequest,
                                                                           Pagination::ListJobExecutionsForJobPaginationTraits<IoTClient>>;
using ListJobExecutionsForThingPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListJobExecutionsForThingRequest,
                                      Pagination::ListJobExecutionsForThingPaginationTraits<IoTClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<IoTClient>>;
using ListJobTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListJobTemplatesRequest, Pagination::ListJobTemplatesPaginationTraits<IoTClient>>;
using ListManagedJobTemplatesPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListManagedJobTemplatesRequest,
                                                                           Pagination::ListManagedJobTemplatesPaginationTraits<IoTClient>>;
using ListMetricValuesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListMetricValuesRequest, Pagination::ListMetricValuesPaginationTraits<IoTClient>>;
using ListMitigationActionsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListMitigationActionsRequest,
                                                                         Pagination::ListMitigationActionsPaginationTraits<IoTClient>>;
using ListOTAUpdatesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListOTAUpdatesRequest, Pagination::ListOTAUpdatesPaginationTraits<IoTClient>>;
using ListOutgoingCertificatesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListOutgoingCertificatesRequest,
                                      Pagination::ListOutgoingCertificatesPaginationTraits<IoTClient>>;
using ListPackagesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListPackagesRequest, Pagination::ListPackagesPaginationTraits<IoTClient>>;
using ListPackageVersionsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListPackageVersionsRequest,
                                                                       Pagination::ListPackageVersionsPaginationTraits<IoTClient>>;
using ListPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<IoTClient>>;
using ListPrincipalThingsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListPrincipalThingsRequest,
                                                                       Pagination::ListPrincipalThingsPaginationTraits<IoTClient>>;
using ListPrincipalThingsV2Paginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListPrincipalThingsV2Request,
                                                                         Pagination::ListPrincipalThingsV2PaginationTraits<IoTClient>>;
using ListProvisioningTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListProvisioningTemplatesRequest,
                                      Pagination::ListProvisioningTemplatesPaginationTraits<IoTClient>>;
using ListProvisioningTemplateVersionsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListProvisioningTemplateVersionsRequest,
                                      Pagination::ListProvisioningTemplateVersionsPaginationTraits<IoTClient>>;
using ListRelatedResourcesForAuditFindingPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListRelatedResourcesForAuditFindingRequest,
                                      Pagination::ListRelatedResourcesForAuditFindingPaginationTraits<IoTClient>>;
using ListRoleAliasesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListRoleAliasesRequest, Pagination::ListRoleAliasesPaginationTraits<IoTClient>>;
using ListSbomValidationResultsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListSbomValidationResultsRequest,
                                      Pagination::ListSbomValidationResultsPaginationTraits<IoTClient>>;
using ListScheduledAuditsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListScheduledAuditsRequest,
                                                                       Pagination::ListScheduledAuditsPaginationTraits<IoTClient>>;
using ListSecurityProfilesPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListSecurityProfilesRequest,
                                                                        Pagination::ListSecurityProfilesPaginationTraits<IoTClient>>;
using ListSecurityProfilesForTargetPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListSecurityProfilesForTargetRequest,
                                      Pagination::ListSecurityProfilesForTargetPaginationTraits<IoTClient>>;
using ListStreamsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListStreamsRequest, Pagination::ListStreamsPaginationTraits<IoTClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<IoTClient>>;
using ListTargetsForPolicyPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListTargetsForPolicyRequest,
                                                                        Pagination::ListTargetsForPolicyPaginationTraits<IoTClient>>;
using ListTargetsForSecurityProfilePaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListTargetsForSecurityProfileRequest,
                                      Pagination::ListTargetsForSecurityProfilePaginationTraits<IoTClient>>;
using ListThingGroupsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingGroupsRequest, Pagination::ListThingGroupsPaginationTraits<IoTClient>>;
using ListThingGroupsForThingPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingGroupsForThingRequest,
                                                                           Pagination::ListThingGroupsForThingPaginationTraits<IoTClient>>;
using ListThingPrincipalsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingPrincipalsRequest,
                                                                       Pagination::ListThingPrincipalsPaginationTraits<IoTClient>>;
using ListThingPrincipalsV2Paginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingPrincipalsV2Request,
                                                                         Pagination::ListThingPrincipalsV2PaginationTraits<IoTClient>>;
using ListThingRegistrationTaskReportsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingRegistrationTaskReportsRequest,
                                      Pagination::ListThingRegistrationTaskReportsPaginationTraits<IoTClient>>;
using ListThingRegistrationTasksPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingRegistrationTasksRequest,
                                      Pagination::ListThingRegistrationTasksPaginationTraits<IoTClient>>;
using ListThingsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingsRequest, Pagination::ListThingsPaginationTraits<IoTClient>>;
using ListThingsInBillingGroupPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingsInBillingGroupRequest,
                                      Pagination::ListThingsInBillingGroupPaginationTraits<IoTClient>>;
using ListThingsInThingGroupPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingsInThingGroupRequest,
                                                                          Pagination::ListThingsInThingGroupPaginationTraits<IoTClient>>;
using ListThingTypesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListThingTypesRequest, Pagination::ListThingTypesPaginationTraits<IoTClient>>;
using ListTopicRuleDestinationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListTopicRuleDestinationsRequest,
                                      Pagination::ListTopicRuleDestinationsPaginationTraits<IoTClient>>;
using ListTopicRulesPaginator =
    Aws::Utils::Pagination::Paginator<IoTClient, Model::ListTopicRulesRequest, Pagination::ListTopicRulesPaginationTraits<IoTClient>>;
using ListV2LoggingLevelsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListV2LoggingLevelsRequest,
                                                                       Pagination::ListV2LoggingLevelsPaginationTraits<IoTClient>>;
using ListViolationEventsPaginator = Aws::Utils::Pagination::Paginator<IoTClient, Model::ListViolationEventsRequest,
                                                                       Pagination::ListViolationEventsPaginationTraits<IoTClient>>;

}  // namespace IoT
}  // namespace Aws
