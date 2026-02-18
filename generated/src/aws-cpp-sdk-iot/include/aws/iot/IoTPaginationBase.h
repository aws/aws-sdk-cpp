/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace IoT {

class IoTClient;

template <typename DerivedClient>
class IoTPaginationBase {
 public:
  /**
   * Create a paginator for GetBehaviorModelTrainingSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBehaviorModelTrainingSummariesRequest,
                                    Pagination::GetBehaviorModelTrainingSummariesPaginationTraits<DerivedClient>>
  GetBehaviorModelTrainingSummariesPaginator(const Model::GetBehaviorModelTrainingSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBehaviorModelTrainingSummariesRequest,
                                             Pagination::GetBehaviorModelTrainingSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListActiveViolations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActiveViolationsRequest,
                                    Pagination::ListActiveViolationsPaginationTraits<DerivedClient>>
  ListActiveViolationsPaginator(const Model::ListActiveViolationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActiveViolationsRequest,
                                             Pagination::ListActiveViolationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttachedPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedPoliciesRequest,
                                    Pagination::ListAttachedPoliciesPaginationTraits<DerivedClient>>
  ListAttachedPoliciesPaginator(const Model::ListAttachedPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedPoliciesRequest,
                                             Pagination::ListAttachedPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAuditFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditFindingsRequest,
                                    Pagination::ListAuditFindingsPaginationTraits<DerivedClient>>
  ListAuditFindingsPaginator(const Model::ListAuditFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditFindingsRequest,
                                             Pagination::ListAuditFindingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAuditMitigationActionsExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditMitigationActionsExecutionsRequest,
                                    Pagination::ListAuditMitigationActionsExecutionsPaginationTraits<DerivedClient>>
  ListAuditMitigationActionsExecutionsPaginator(const Model::ListAuditMitigationActionsExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditMitigationActionsExecutionsRequest,
                                             Pagination::ListAuditMitigationActionsExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAuditMitigationActionsTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditMitigationActionsTasksRequest,
                                    Pagination::ListAuditMitigationActionsTasksPaginationTraits<DerivedClient>>
  ListAuditMitigationActionsTasksPaginator(const Model::ListAuditMitigationActionsTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditMitigationActionsTasksRequest,
                                             Pagination::ListAuditMitigationActionsTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAuditSuppressions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditSuppressionsRequest,
                                    Pagination::ListAuditSuppressionsPaginationTraits<DerivedClient>>
  ListAuditSuppressionsPaginator(const Model::ListAuditSuppressionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditSuppressionsRequest,
                                             Pagination::ListAuditSuppressionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAuditTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditTasksRequest, Pagination::ListAuditTasksPaginationTraits<DerivedClient>>
  ListAuditTasksPaginator(const Model::ListAuditTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuditTasksRequest,
                                             Pagination::ListAuditTasksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListAuthorizers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuthorizersRequest,
                                    Pagination::ListAuthorizersPaginationTraits<DerivedClient>>
  ListAuthorizersPaginator(const Model::ListAuthorizersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAuthorizersRequest,
                                             Pagination::ListAuthorizersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListBillingGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingGroupsRequest,
                                    Pagination::ListBillingGroupsPaginationTraits<DerivedClient>>
  ListBillingGroupsPaginator(const Model::ListBillingGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingGroupsRequest,
                                             Pagination::ListBillingGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCACertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCACertificatesRequest,
                                    Pagination::ListCACertificatesPaginationTraits<DerivedClient>>
  ListCACertificatesPaginator(const Model::ListCACertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCACertificatesRequest,
                                             Pagination::ListCACertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                    Pagination::ListCertificatesPaginationTraits<DerivedClient>>
  ListCertificatesPaginator(const Model::ListCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                             Pagination::ListCertificatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCertificatesByCA operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesByCARequest,
                                    Pagination::ListCertificatesByCAPaginationTraits<DerivedClient>>
  ListCertificatesByCAPaginator(const Model::ListCertificatesByCARequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesByCARequest,
                                             Pagination::ListCertificatesByCAPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCommandExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandExecutionsRequest,
                                    Pagination::ListCommandExecutionsPaginationTraits<DerivedClient>>
  ListCommandExecutionsPaginator(const Model::ListCommandExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandExecutionsRequest,
                                             Pagination::ListCommandExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCommands operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandsRequest, Pagination::ListCommandsPaginationTraits<DerivedClient>>
  ListCommandsPaginator(const Model::ListCommandsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandsRequest,
                                             Pagination::ListCommandsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCustomMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomMetricsRequest,
                                    Pagination::ListCustomMetricsPaginationTraits<DerivedClient>>
  ListCustomMetricsPaginator(const Model::ListCustomMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomMetricsRequest,
                                             Pagination::ListCustomMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDetectMitigationActionsExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDetectMitigationActionsExecutionsRequest,
                                    Pagination::ListDetectMitigationActionsExecutionsPaginationTraits<DerivedClient>>
  ListDetectMitigationActionsExecutionsPaginator(const Model::ListDetectMitigationActionsExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDetectMitigationActionsExecutionsRequest,
                                             Pagination::ListDetectMitigationActionsExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDetectMitigationActionsTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDetectMitigationActionsTasksRequest,
                                    Pagination::ListDetectMitigationActionsTasksPaginationTraits<DerivedClient>>
  ListDetectMitigationActionsTasksPaginator(const Model::ListDetectMitigationActionsTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDetectMitigationActionsTasksRequest,
                                             Pagination::ListDetectMitigationActionsTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDimensions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDimensionsRequest, Pagination::ListDimensionsPaginationTraits<DerivedClient>>
  ListDimensionsPaginator(const Model::ListDimensionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDimensionsRequest,
                                             Pagination::ListDimensionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDomainConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainConfigurationsRequest,
                                    Pagination::ListDomainConfigurationsPaginationTraits<DerivedClient>>
  ListDomainConfigurationsPaginator(const Model::ListDomainConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainConfigurationsRequest,
                                             Pagination::ListDomainConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFleetMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetMetricsRequest,
                                    Pagination::ListFleetMetricsPaginationTraits<DerivedClient>>
  ListFleetMetricsPaginator(const Model::ListFleetMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetMetricsRequest,
                                             Pagination::ListFleetMetricsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListIndices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndicesRequest, Pagination::ListIndicesPaginationTraits<DerivedClient>>
  ListIndicesPaginator(const Model::ListIndicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndicesRequest,
                                             Pagination::ListIndicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListJobExecutionsForJob operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobExecutionsForJobRequest,
                                    Pagination::ListJobExecutionsForJobPaginationTraits<DerivedClient>>
  ListJobExecutionsForJobPaginator(const Model::ListJobExecutionsForJobRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobExecutionsForJobRequest,
                                             Pagination::ListJobExecutionsForJobPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobExecutionsForThing operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobExecutionsForThingRequest,
                                    Pagination::ListJobExecutionsForThingPaginationTraits<DerivedClient>>
  ListJobExecutionsForThingPaginator(const Model::ListJobExecutionsForThingRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobExecutionsForThingRequest,
                                             Pagination::ListJobExecutionsForThingPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListJobTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobTemplatesRequest,
                                    Pagination::ListJobTemplatesPaginationTraits<DerivedClient>>
  ListJobTemplatesPaginator(const Model::ListJobTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobTemplatesRequest,
                                             Pagination::ListJobTemplatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListManagedJobTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedJobTemplatesRequest,
                                    Pagination::ListManagedJobTemplatesPaginationTraits<DerivedClient>>
  ListManagedJobTemplatesPaginator(const Model::ListManagedJobTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedJobTemplatesRequest,
                                             Pagination::ListManagedJobTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMetricValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricValuesRequest,
                                    Pagination::ListMetricValuesPaginationTraits<DerivedClient>>
  ListMetricValuesPaginator(const Model::ListMetricValuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricValuesRequest,
                                             Pagination::ListMetricValuesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListMitigationActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMitigationActionsRequest,
                                    Pagination::ListMitigationActionsPaginationTraits<DerivedClient>>
  ListMitigationActionsPaginator(const Model::ListMitigationActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMitigationActionsRequest,
                                             Pagination::ListMitigationActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOTAUpdates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOTAUpdatesRequest, Pagination::ListOTAUpdatesPaginationTraits<DerivedClient>>
  ListOTAUpdatesPaginator(const Model::ListOTAUpdatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOTAUpdatesRequest,
                                             Pagination::ListOTAUpdatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListOutgoingCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOutgoingCertificatesRequest,
                                    Pagination::ListOutgoingCertificatesPaginationTraits<DerivedClient>>
  ListOutgoingCertificatesPaginator(const Model::ListOutgoingCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOutgoingCertificatesRequest,
                                             Pagination::ListOutgoingCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesRequest, Pagination::ListPackagesPaginationTraits<DerivedClient>>
  ListPackagesPaginator(const Model::ListPackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesRequest,
                                             Pagination::ListPackagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPackageVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageVersionsRequest,
                                    Pagination::ListPackageVersionsPaginationTraits<DerivedClient>>
  ListPackageVersionsPaginator(const Model::ListPackageVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageVersionsRequest,
                                             Pagination::ListPackageVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<DerivedClient>>
  ListPoliciesPaginator(const Model::ListPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest,
                                             Pagination::ListPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPrincipalThings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrincipalThingsRequest,
                                    Pagination::ListPrincipalThingsPaginationTraits<DerivedClient>>
  ListPrincipalThingsPaginator(const Model::ListPrincipalThingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrincipalThingsRequest,
                                             Pagination::ListPrincipalThingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPrincipalThingsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrincipalThingsV2Request,
                                    Pagination::ListPrincipalThingsV2PaginationTraits<DerivedClient>>
  ListPrincipalThingsV2Paginator(const Model::ListPrincipalThingsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrincipalThingsV2Request,
                                             Pagination::ListPrincipalThingsV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProvisioningTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisioningTemplatesRequest,
                                    Pagination::ListProvisioningTemplatesPaginationTraits<DerivedClient>>
  ListProvisioningTemplatesPaginator(const Model::ListProvisioningTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisioningTemplatesRequest,
                                             Pagination::ListProvisioningTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProvisioningTemplateVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisioningTemplateVersionsRequest,
                                    Pagination::ListProvisioningTemplateVersionsPaginationTraits<DerivedClient>>
  ListProvisioningTemplateVersionsPaginator(const Model::ListProvisioningTemplateVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisioningTemplateVersionsRequest,
                                             Pagination::ListProvisioningTemplateVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRelatedResourcesForAuditFinding operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRelatedResourcesForAuditFindingRequest,
                                    Pagination::ListRelatedResourcesForAuditFindingPaginationTraits<DerivedClient>>
  ListRelatedResourcesForAuditFindingPaginator(const Model::ListRelatedResourcesForAuditFindingRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRelatedResourcesForAuditFindingRequest,
                                             Pagination::ListRelatedResourcesForAuditFindingPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoleAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoleAliasesRequest,
                                    Pagination::ListRoleAliasesPaginationTraits<DerivedClient>>
  ListRoleAliasesPaginator(const Model::ListRoleAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoleAliasesRequest,
                                             Pagination::ListRoleAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListSbomValidationResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSbomValidationResultsRequest,
                                    Pagination::ListSbomValidationResultsPaginationTraits<DerivedClient>>
  ListSbomValidationResultsPaginator(const Model::ListSbomValidationResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSbomValidationResultsRequest,
                                             Pagination::ListSbomValidationResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListScheduledAudits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledAuditsRequest,
                                    Pagination::ListScheduledAuditsPaginationTraits<DerivedClient>>
  ListScheduledAuditsPaginator(const Model::ListScheduledAuditsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledAuditsRequest,
                                             Pagination::ListScheduledAuditsPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListSecurityProfilesForTarget operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfilesForTargetRequest,
                                    Pagination::ListSecurityProfilesForTargetPaginationTraits<DerivedClient>>
  ListSecurityProfilesForTargetPaginator(const Model::ListSecurityProfilesForTargetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityProfilesForTargetRequest,
                                             Pagination::ListSecurityProfilesForTargetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStreams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamsRequest, Pagination::ListStreamsPaginationTraits<DerivedClient>>
  ListStreamsPaginator(const Model::ListStreamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamsRequest,
                                             Pagination::ListStreamsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTargetsForPolicy operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsForPolicyRequest,
                                    Pagination::ListTargetsForPolicyPaginationTraits<DerivedClient>>
  ListTargetsForPolicyPaginator(const Model::ListTargetsForPolicyRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsForPolicyRequest,
                                             Pagination::ListTargetsForPolicyPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTargetsForSecurityProfile operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsForSecurityProfileRequest,
                                    Pagination::ListTargetsForSecurityProfilePaginationTraits<DerivedClient>>
  ListTargetsForSecurityProfilePaginator(const Model::ListTargetsForSecurityProfileRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsForSecurityProfileRequest,
                                             Pagination::ListTargetsForSecurityProfilePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThingGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingGroupsRequest,
                                    Pagination::ListThingGroupsPaginationTraits<DerivedClient>>
  ListThingGroupsPaginator(const Model::ListThingGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingGroupsRequest,
                                             Pagination::ListThingGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListThingGroupsForThing operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingGroupsForThingRequest,
                                    Pagination::ListThingGroupsForThingPaginationTraits<DerivedClient>>
  ListThingGroupsForThingPaginator(const Model::ListThingGroupsForThingRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingGroupsForThingRequest,
                                             Pagination::ListThingGroupsForThingPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThingPrincipals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingPrincipalsRequest,
                                    Pagination::ListThingPrincipalsPaginationTraits<DerivedClient>>
  ListThingPrincipalsPaginator(const Model::ListThingPrincipalsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingPrincipalsRequest,
                                             Pagination::ListThingPrincipalsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThingPrincipalsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingPrincipalsV2Request,
                                    Pagination::ListThingPrincipalsV2PaginationTraits<DerivedClient>>
  ListThingPrincipalsV2Paginator(const Model::ListThingPrincipalsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingPrincipalsV2Request,
                                             Pagination::ListThingPrincipalsV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThingRegistrationTaskReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingRegistrationTaskReportsRequest,
                                    Pagination::ListThingRegistrationTaskReportsPaginationTraits<DerivedClient>>
  ListThingRegistrationTaskReportsPaginator(const Model::ListThingRegistrationTaskReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingRegistrationTaskReportsRequest,
                                             Pagination::ListThingRegistrationTaskReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThingRegistrationTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingRegistrationTasksRequest,
                                    Pagination::ListThingRegistrationTasksPaginationTraits<DerivedClient>>
  ListThingRegistrationTasksPaginator(const Model::ListThingRegistrationTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingRegistrationTasksRequest,
                                             Pagination::ListThingRegistrationTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingsRequest, Pagination::ListThingsPaginationTraits<DerivedClient>>
  ListThingsPaginator(const Model::ListThingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingsRequest,
                                             Pagination::ListThingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListThingsInBillingGroup operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingsInBillingGroupRequest,
                                    Pagination::ListThingsInBillingGroupPaginationTraits<DerivedClient>>
  ListThingsInBillingGroupPaginator(const Model::ListThingsInBillingGroupRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingsInBillingGroupRequest,
                                             Pagination::ListThingsInBillingGroupPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThingsInThingGroup operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingsInThingGroupRequest,
                                    Pagination::ListThingsInThingGroupPaginationTraits<DerivedClient>>
  ListThingsInThingGroupPaginator(const Model::ListThingsInThingGroupRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingsInThingGroupRequest,
                                             Pagination::ListThingsInThingGroupPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThingTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingTypesRequest, Pagination::ListThingTypesPaginationTraits<DerivedClient>>
  ListThingTypesPaginator(const Model::ListThingTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThingTypesRequest,
                                             Pagination::ListThingTypesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListTopicRuleDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicRuleDestinationsRequest,
                                    Pagination::ListTopicRuleDestinationsPaginationTraits<DerivedClient>>
  ListTopicRuleDestinationsPaginator(const Model::ListTopicRuleDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicRuleDestinationsRequest,
                                             Pagination::ListTopicRuleDestinationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTopicRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicRulesRequest, Pagination::ListTopicRulesPaginationTraits<DerivedClient>>
  ListTopicRulesPaginator(const Model::ListTopicRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicRulesRequest,
                                             Pagination::ListTopicRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListV2LoggingLevels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListV2LoggingLevelsRequest,
                                    Pagination::ListV2LoggingLevelsPaginationTraits<DerivedClient>>
  ListV2LoggingLevelsPaginator(const Model::ListV2LoggingLevelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListV2LoggingLevelsRequest,
                                             Pagination::ListV2LoggingLevelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListViolationEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViolationEventsRequest,
                                    Pagination::ListViolationEventsPaginationTraits<DerivedClient>>
  ListViolationEventsPaginator(const Model::ListViolationEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViolationEventsRequest,
                                             Pagination::ListViolationEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace IoT
}  // namespace Aws
