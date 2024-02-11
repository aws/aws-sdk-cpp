/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudformation/CloudFormationErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudformation/CloudFormationEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudFormationClient header */
#include <aws/cloudformation/model/ActivateOrganizationsAccessResult.h>
#include <aws/cloudformation/model/ActivateTypeResult.h>
#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsResult.h>
#include <aws/cloudformation/model/ContinueUpdateRollbackResult.h>
#include <aws/cloudformation/model/CreateChangeSetResult.h>
#include <aws/cloudformation/model/CreateStackResult.h>
#include <aws/cloudformation/model/CreateStackInstancesResult.h>
#include <aws/cloudformation/model/CreateStackSetResult.h>
#include <aws/cloudformation/model/DeactivateOrganizationsAccessResult.h>
#include <aws/cloudformation/model/DeactivateTypeResult.h>
#include <aws/cloudformation/model/DeleteChangeSetResult.h>
#include <aws/cloudformation/model/DeleteStackInstancesResult.h>
#include <aws/cloudformation/model/DeleteStackSetResult.h>
#include <aws/cloudformation/model/DeregisterTypeResult.h>
#include <aws/cloudformation/model/DescribeAccountLimitsResult.h>
#include <aws/cloudformation/model/DescribeChangeSetResult.h>
#include <aws/cloudformation/model/DescribeChangeSetHooksResult.h>
#include <aws/cloudformation/model/DescribeOrganizationsAccessResult.h>
#include <aws/cloudformation/model/DescribePublisherResult.h>
#include <aws/cloudformation/model/DescribeStackDriftDetectionStatusResult.h>
#include <aws/cloudformation/model/DescribeStackEventsResult.h>
#include <aws/cloudformation/model/DescribeStackInstanceResult.h>
#include <aws/cloudformation/model/DescribeStackResourceResult.h>
#include <aws/cloudformation/model/DescribeStackResourceDriftsResult.h>
#include <aws/cloudformation/model/DescribeStackResourcesResult.h>
#include <aws/cloudformation/model/DescribeStackSetResult.h>
#include <aws/cloudformation/model/DescribeStackSetOperationResult.h>
#include <aws/cloudformation/model/DescribeStacksResult.h>
#include <aws/cloudformation/model/DescribeTypeResult.h>
#include <aws/cloudformation/model/DescribeTypeRegistrationResult.h>
#include <aws/cloudformation/model/DetectStackDriftResult.h>
#include <aws/cloudformation/model/DetectStackResourceDriftResult.h>
#include <aws/cloudformation/model/DetectStackSetDriftResult.h>
#include <aws/cloudformation/model/EstimateTemplateCostResult.h>
#include <aws/cloudformation/model/ExecuteChangeSetResult.h>
#include <aws/cloudformation/model/GetStackPolicyResult.h>
#include <aws/cloudformation/model/GetTemplateResult.h>
#include <aws/cloudformation/model/GetTemplateSummaryResult.h>
#include <aws/cloudformation/model/ImportStacksToStackSetResult.h>
#include <aws/cloudformation/model/ListChangeSetsResult.h>
#include <aws/cloudformation/model/ListExportsResult.h>
#include <aws/cloudformation/model/ListImportsResult.h>
#include <aws/cloudformation/model/ListStackInstanceResourceDriftsResult.h>
#include <aws/cloudformation/model/ListStackInstancesResult.h>
#include <aws/cloudformation/model/ListStackResourcesResult.h>
#include <aws/cloudformation/model/ListStackSetOperationResultsResult.h>
#include <aws/cloudformation/model/ListStackSetOperationsResult.h>
#include <aws/cloudformation/model/ListStackSetsResult.h>
#include <aws/cloudformation/model/ListStacksResult.h>
#include <aws/cloudformation/model/ListTypeRegistrationsResult.h>
#include <aws/cloudformation/model/ListTypeVersionsResult.h>
#include <aws/cloudformation/model/ListTypesResult.h>
#include <aws/cloudformation/model/PublishTypeResult.h>
#include <aws/cloudformation/model/RecordHandlerProgressResult.h>
#include <aws/cloudformation/model/RegisterPublisherResult.h>
#include <aws/cloudformation/model/RegisterTypeResult.h>
#include <aws/cloudformation/model/RollbackStackResult.h>
#include <aws/cloudformation/model/SetTypeConfigurationResult.h>
#include <aws/cloudformation/model/SetTypeDefaultVersionResult.h>
#include <aws/cloudformation/model/StopStackSetOperationResult.h>
#include <aws/cloudformation/model/TestTypeResult.h>
#include <aws/cloudformation/model/UpdateStackResult.h>
#include <aws/cloudformation/model/UpdateStackInstancesResult.h>
#include <aws/cloudformation/model/UpdateStackSetResult.h>
#include <aws/cloudformation/model/UpdateTerminationProtectionResult.h>
#include <aws/cloudformation/model/ValidateTemplateResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CloudFormationClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace CloudFormation
  {
    using CloudFormationClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudFormationEndpointProviderBase = Aws::CloudFormation::Endpoint::CloudFormationEndpointProviderBase;
    using CloudFormationEndpointProvider = Aws::CloudFormation::Endpoint::CloudFormationEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudFormationClient header */
      class ActivateOrganizationsAccessRequest;
      class ActivateTypeRequest;
      class BatchDescribeTypeConfigurationsRequest;
      class CancelUpdateStackRequest;
      class ContinueUpdateRollbackRequest;
      class CreateChangeSetRequest;
      class CreateStackRequest;
      class CreateStackInstancesRequest;
      class CreateStackSetRequest;
      class DeactivateOrganizationsAccessRequest;
      class DeactivateTypeRequest;
      class DeleteChangeSetRequest;
      class DeleteStackRequest;
      class DeleteStackInstancesRequest;
      class DeleteStackSetRequest;
      class DeregisterTypeRequest;
      class DescribeAccountLimitsRequest;
      class DescribeChangeSetRequest;
      class DescribeChangeSetHooksRequest;
      class DescribeOrganizationsAccessRequest;
      class DescribePublisherRequest;
      class DescribeStackDriftDetectionStatusRequest;
      class DescribeStackEventsRequest;
      class DescribeStackInstanceRequest;
      class DescribeStackResourceRequest;
      class DescribeStackResourceDriftsRequest;
      class DescribeStackResourcesRequest;
      class DescribeStackSetRequest;
      class DescribeStackSetOperationRequest;
      class DescribeStacksRequest;
      class DescribeTypeRequest;
      class DescribeTypeRegistrationRequest;
      class DetectStackDriftRequest;
      class DetectStackResourceDriftRequest;
      class DetectStackSetDriftRequest;
      class EstimateTemplateCostRequest;
      class ExecuteChangeSetRequest;
      class GetStackPolicyRequest;
      class GetTemplateRequest;
      class GetTemplateSummaryRequest;
      class ImportStacksToStackSetRequest;
      class ListChangeSetsRequest;
      class ListExportsRequest;
      class ListImportsRequest;
      class ListStackInstanceResourceDriftsRequest;
      class ListStackInstancesRequest;
      class ListStackResourcesRequest;
      class ListStackSetOperationResultsRequest;
      class ListStackSetOperationsRequest;
      class ListStackSetsRequest;
      class ListStacksRequest;
      class ListTypeRegistrationsRequest;
      class ListTypeVersionsRequest;
      class ListTypesRequest;
      class PublishTypeRequest;
      class RecordHandlerProgressRequest;
      class RegisterPublisherRequest;
      class RegisterTypeRequest;
      class RollbackStackRequest;
      class SetStackPolicyRequest;
      class SetTypeConfigurationRequest;
      class SetTypeDefaultVersionRequest;
      class SignalResourceRequest;
      class StopStackSetOperationRequest;
      class TestTypeRequest;
      class UpdateStackRequest;
      class UpdateStackInstancesRequest;
      class UpdateStackSetRequest;
      class UpdateTerminationProtectionRequest;
      class ValidateTemplateRequest;
      /* End of service model forward declarations required in CloudFormationClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ActivateOrganizationsAccessResult, CloudFormationError> ActivateOrganizationsAccessOutcome;
      typedef Aws::Utils::Outcome<ActivateTypeResult, CloudFormationError> ActivateTypeOutcome;
      typedef Aws::Utils::Outcome<BatchDescribeTypeConfigurationsResult, CloudFormationError> BatchDescribeTypeConfigurationsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFormationError> CancelUpdateStackOutcome;
      typedef Aws::Utils::Outcome<ContinueUpdateRollbackResult, CloudFormationError> ContinueUpdateRollbackOutcome;
      typedef Aws::Utils::Outcome<CreateChangeSetResult, CloudFormationError> CreateChangeSetOutcome;
      typedef Aws::Utils::Outcome<CreateStackResult, CloudFormationError> CreateStackOutcome;
      typedef Aws::Utils::Outcome<CreateStackInstancesResult, CloudFormationError> CreateStackInstancesOutcome;
      typedef Aws::Utils::Outcome<CreateStackSetResult, CloudFormationError> CreateStackSetOutcome;
      typedef Aws::Utils::Outcome<DeactivateOrganizationsAccessResult, CloudFormationError> DeactivateOrganizationsAccessOutcome;
      typedef Aws::Utils::Outcome<DeactivateTypeResult, CloudFormationError> DeactivateTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteChangeSetResult, CloudFormationError> DeleteChangeSetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFormationError> DeleteStackOutcome;
      typedef Aws::Utils::Outcome<DeleteStackInstancesResult, CloudFormationError> DeleteStackInstancesOutcome;
      typedef Aws::Utils::Outcome<DeleteStackSetResult, CloudFormationError> DeleteStackSetOutcome;
      typedef Aws::Utils::Outcome<DeregisterTypeResult, CloudFormationError> DeregisterTypeOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, CloudFormationError> DescribeAccountLimitsOutcome;
      typedef Aws::Utils::Outcome<DescribeChangeSetResult, CloudFormationError> DescribeChangeSetOutcome;
      typedef Aws::Utils::Outcome<DescribeChangeSetHooksResult, CloudFormationError> DescribeChangeSetHooksOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationsAccessResult, CloudFormationError> DescribeOrganizationsAccessOutcome;
      typedef Aws::Utils::Outcome<DescribePublisherResult, CloudFormationError> DescribePublisherOutcome;
      typedef Aws::Utils::Outcome<DescribeStackDriftDetectionStatusResult, CloudFormationError> DescribeStackDriftDetectionStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeStackEventsResult, CloudFormationError> DescribeStackEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeStackInstanceResult, CloudFormationError> DescribeStackInstanceOutcome;
      typedef Aws::Utils::Outcome<DescribeStackResourceResult, CloudFormationError> DescribeStackResourceOutcome;
      typedef Aws::Utils::Outcome<DescribeStackResourceDriftsResult, CloudFormationError> DescribeStackResourceDriftsOutcome;
      typedef Aws::Utils::Outcome<DescribeStackResourcesResult, CloudFormationError> DescribeStackResourcesOutcome;
      typedef Aws::Utils::Outcome<DescribeStackSetResult, CloudFormationError> DescribeStackSetOutcome;
      typedef Aws::Utils::Outcome<DescribeStackSetOperationResult, CloudFormationError> DescribeStackSetOperationOutcome;
      typedef Aws::Utils::Outcome<DescribeStacksResult, CloudFormationError> DescribeStacksOutcome;
      typedef Aws::Utils::Outcome<DescribeTypeResult, CloudFormationError> DescribeTypeOutcome;
      typedef Aws::Utils::Outcome<DescribeTypeRegistrationResult, CloudFormationError> DescribeTypeRegistrationOutcome;
      typedef Aws::Utils::Outcome<DetectStackDriftResult, CloudFormationError> DetectStackDriftOutcome;
      typedef Aws::Utils::Outcome<DetectStackResourceDriftResult, CloudFormationError> DetectStackResourceDriftOutcome;
      typedef Aws::Utils::Outcome<DetectStackSetDriftResult, CloudFormationError> DetectStackSetDriftOutcome;
      typedef Aws::Utils::Outcome<EstimateTemplateCostResult, CloudFormationError> EstimateTemplateCostOutcome;
      typedef Aws::Utils::Outcome<ExecuteChangeSetResult, CloudFormationError> ExecuteChangeSetOutcome;
      typedef Aws::Utils::Outcome<GetStackPolicyResult, CloudFormationError> GetStackPolicyOutcome;
      typedef Aws::Utils::Outcome<GetTemplateResult, CloudFormationError> GetTemplateOutcome;
      typedef Aws::Utils::Outcome<GetTemplateSummaryResult, CloudFormationError> GetTemplateSummaryOutcome;
      typedef Aws::Utils::Outcome<ImportStacksToStackSetResult, CloudFormationError> ImportStacksToStackSetOutcome;
      typedef Aws::Utils::Outcome<ListChangeSetsResult, CloudFormationError> ListChangeSetsOutcome;
      typedef Aws::Utils::Outcome<ListExportsResult, CloudFormationError> ListExportsOutcome;
      typedef Aws::Utils::Outcome<ListImportsResult, CloudFormationError> ListImportsOutcome;
      typedef Aws::Utils::Outcome<ListStackInstanceResourceDriftsResult, CloudFormationError> ListStackInstanceResourceDriftsOutcome;
      typedef Aws::Utils::Outcome<ListStackInstancesResult, CloudFormationError> ListStackInstancesOutcome;
      typedef Aws::Utils::Outcome<ListStackResourcesResult, CloudFormationError> ListStackResourcesOutcome;
      typedef Aws::Utils::Outcome<ListStackSetOperationResultsResult, CloudFormationError> ListStackSetOperationResultsOutcome;
      typedef Aws::Utils::Outcome<ListStackSetOperationsResult, CloudFormationError> ListStackSetOperationsOutcome;
      typedef Aws::Utils::Outcome<ListStackSetsResult, CloudFormationError> ListStackSetsOutcome;
      typedef Aws::Utils::Outcome<ListStacksResult, CloudFormationError> ListStacksOutcome;
      typedef Aws::Utils::Outcome<ListTypeRegistrationsResult, CloudFormationError> ListTypeRegistrationsOutcome;
      typedef Aws::Utils::Outcome<ListTypeVersionsResult, CloudFormationError> ListTypeVersionsOutcome;
      typedef Aws::Utils::Outcome<ListTypesResult, CloudFormationError> ListTypesOutcome;
      typedef Aws::Utils::Outcome<PublishTypeResult, CloudFormationError> PublishTypeOutcome;
      typedef Aws::Utils::Outcome<RecordHandlerProgressResult, CloudFormationError> RecordHandlerProgressOutcome;
      typedef Aws::Utils::Outcome<RegisterPublisherResult, CloudFormationError> RegisterPublisherOutcome;
      typedef Aws::Utils::Outcome<RegisterTypeResult, CloudFormationError> RegisterTypeOutcome;
      typedef Aws::Utils::Outcome<RollbackStackResult, CloudFormationError> RollbackStackOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFormationError> SetStackPolicyOutcome;
      typedef Aws::Utils::Outcome<SetTypeConfigurationResult, CloudFormationError> SetTypeConfigurationOutcome;
      typedef Aws::Utils::Outcome<SetTypeDefaultVersionResult, CloudFormationError> SetTypeDefaultVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFormationError> SignalResourceOutcome;
      typedef Aws::Utils::Outcome<StopStackSetOperationResult, CloudFormationError> StopStackSetOperationOutcome;
      typedef Aws::Utils::Outcome<TestTypeResult, CloudFormationError> TestTypeOutcome;
      typedef Aws::Utils::Outcome<UpdateStackResult, CloudFormationError> UpdateStackOutcome;
      typedef Aws::Utils::Outcome<UpdateStackInstancesResult, CloudFormationError> UpdateStackInstancesOutcome;
      typedef Aws::Utils::Outcome<UpdateStackSetResult, CloudFormationError> UpdateStackSetOutcome;
      typedef Aws::Utils::Outcome<UpdateTerminationProtectionResult, CloudFormationError> UpdateTerminationProtectionOutcome;
      typedef Aws::Utils::Outcome<ValidateTemplateResult, CloudFormationError> ValidateTemplateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivateOrganizationsAccessOutcome> ActivateOrganizationsAccessOutcomeCallable;
      typedef std::future<ActivateTypeOutcome> ActivateTypeOutcomeCallable;
      typedef std::future<BatchDescribeTypeConfigurationsOutcome> BatchDescribeTypeConfigurationsOutcomeCallable;
      typedef std::future<CancelUpdateStackOutcome> CancelUpdateStackOutcomeCallable;
      typedef std::future<ContinueUpdateRollbackOutcome> ContinueUpdateRollbackOutcomeCallable;
      typedef std::future<CreateChangeSetOutcome> CreateChangeSetOutcomeCallable;
      typedef std::future<CreateStackOutcome> CreateStackOutcomeCallable;
      typedef std::future<CreateStackInstancesOutcome> CreateStackInstancesOutcomeCallable;
      typedef std::future<CreateStackSetOutcome> CreateStackSetOutcomeCallable;
      typedef std::future<DeactivateOrganizationsAccessOutcome> DeactivateOrganizationsAccessOutcomeCallable;
      typedef std::future<DeactivateTypeOutcome> DeactivateTypeOutcomeCallable;
      typedef std::future<DeleteChangeSetOutcome> DeleteChangeSetOutcomeCallable;
      typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
      typedef std::future<DeleteStackInstancesOutcome> DeleteStackInstancesOutcomeCallable;
      typedef std::future<DeleteStackSetOutcome> DeleteStackSetOutcomeCallable;
      typedef std::future<DeregisterTypeOutcome> DeregisterTypeOutcomeCallable;
      typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
      typedef std::future<DescribeChangeSetOutcome> DescribeChangeSetOutcomeCallable;
      typedef std::future<DescribeChangeSetHooksOutcome> DescribeChangeSetHooksOutcomeCallable;
      typedef std::future<DescribeOrganizationsAccessOutcome> DescribeOrganizationsAccessOutcomeCallable;
      typedef std::future<DescribePublisherOutcome> DescribePublisherOutcomeCallable;
      typedef std::future<DescribeStackDriftDetectionStatusOutcome> DescribeStackDriftDetectionStatusOutcomeCallable;
      typedef std::future<DescribeStackEventsOutcome> DescribeStackEventsOutcomeCallable;
      typedef std::future<DescribeStackInstanceOutcome> DescribeStackInstanceOutcomeCallable;
      typedef std::future<DescribeStackResourceOutcome> DescribeStackResourceOutcomeCallable;
      typedef std::future<DescribeStackResourceDriftsOutcome> DescribeStackResourceDriftsOutcomeCallable;
      typedef std::future<DescribeStackResourcesOutcome> DescribeStackResourcesOutcomeCallable;
      typedef std::future<DescribeStackSetOutcome> DescribeStackSetOutcomeCallable;
      typedef std::future<DescribeStackSetOperationOutcome> DescribeStackSetOperationOutcomeCallable;
      typedef std::future<DescribeStacksOutcome> DescribeStacksOutcomeCallable;
      typedef std::future<DescribeTypeOutcome> DescribeTypeOutcomeCallable;
      typedef std::future<DescribeTypeRegistrationOutcome> DescribeTypeRegistrationOutcomeCallable;
      typedef std::future<DetectStackDriftOutcome> DetectStackDriftOutcomeCallable;
      typedef std::future<DetectStackResourceDriftOutcome> DetectStackResourceDriftOutcomeCallable;
      typedef std::future<DetectStackSetDriftOutcome> DetectStackSetDriftOutcomeCallable;
      typedef std::future<EstimateTemplateCostOutcome> EstimateTemplateCostOutcomeCallable;
      typedef std::future<ExecuteChangeSetOutcome> ExecuteChangeSetOutcomeCallable;
      typedef std::future<GetStackPolicyOutcome> GetStackPolicyOutcomeCallable;
      typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
      typedef std::future<GetTemplateSummaryOutcome> GetTemplateSummaryOutcomeCallable;
      typedef std::future<ImportStacksToStackSetOutcome> ImportStacksToStackSetOutcomeCallable;
      typedef std::future<ListChangeSetsOutcome> ListChangeSetsOutcomeCallable;
      typedef std::future<ListExportsOutcome> ListExportsOutcomeCallable;
      typedef std::future<ListImportsOutcome> ListImportsOutcomeCallable;
      typedef std::future<ListStackInstanceResourceDriftsOutcome> ListStackInstanceResourceDriftsOutcomeCallable;
      typedef std::future<ListStackInstancesOutcome> ListStackInstancesOutcomeCallable;
      typedef std::future<ListStackResourcesOutcome> ListStackResourcesOutcomeCallable;
      typedef std::future<ListStackSetOperationResultsOutcome> ListStackSetOperationResultsOutcomeCallable;
      typedef std::future<ListStackSetOperationsOutcome> ListStackSetOperationsOutcomeCallable;
      typedef std::future<ListStackSetsOutcome> ListStackSetsOutcomeCallable;
      typedef std::future<ListStacksOutcome> ListStacksOutcomeCallable;
      typedef std::future<ListTypeRegistrationsOutcome> ListTypeRegistrationsOutcomeCallable;
      typedef std::future<ListTypeVersionsOutcome> ListTypeVersionsOutcomeCallable;
      typedef std::future<ListTypesOutcome> ListTypesOutcomeCallable;
      typedef std::future<PublishTypeOutcome> PublishTypeOutcomeCallable;
      typedef std::future<RecordHandlerProgressOutcome> RecordHandlerProgressOutcomeCallable;
      typedef std::future<RegisterPublisherOutcome> RegisterPublisherOutcomeCallable;
      typedef std::future<RegisterTypeOutcome> RegisterTypeOutcomeCallable;
      typedef std::future<RollbackStackOutcome> RollbackStackOutcomeCallable;
      typedef std::future<SetStackPolicyOutcome> SetStackPolicyOutcomeCallable;
      typedef std::future<SetTypeConfigurationOutcome> SetTypeConfigurationOutcomeCallable;
      typedef std::future<SetTypeDefaultVersionOutcome> SetTypeDefaultVersionOutcomeCallable;
      typedef std::future<SignalResourceOutcome> SignalResourceOutcomeCallable;
      typedef std::future<StopStackSetOperationOutcome> StopStackSetOperationOutcomeCallable;
      typedef std::future<TestTypeOutcome> TestTypeOutcomeCallable;
      typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
      typedef std::future<UpdateStackInstancesOutcome> UpdateStackInstancesOutcomeCallable;
      typedef std::future<UpdateStackSetOutcome> UpdateStackSetOutcomeCallable;
      typedef std::future<UpdateTerminationProtectionOutcome> UpdateTerminationProtectionOutcomeCallable;
      typedef std::future<ValidateTemplateOutcome> ValidateTemplateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudFormationClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudFormationClient*, const Model::ActivateOrganizationsAccessRequest&, const Model::ActivateOrganizationsAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateOrganizationsAccessResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ActivateTypeRequest&, const Model::ActivateTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateTypeResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::BatchDescribeTypeConfigurationsRequest&, const Model::BatchDescribeTypeConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDescribeTypeConfigurationsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CancelUpdateStackRequest&, const Model::CancelUpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelUpdateStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ContinueUpdateRollbackRequest&, const Model::ContinueUpdateRollbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ContinueUpdateRollbackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CreateChangeSetRequest&, const Model::CreateChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChangeSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CreateStackRequest&, const Model::CreateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CreateStackInstancesRequest&, const Model::CreateStackInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackInstancesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CreateStackSetRequest&, const Model::CreateStackSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeactivateOrganizationsAccessRequest&, const Model::DeactivateOrganizationsAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateOrganizationsAccessResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeactivateTypeRequest&, const Model::DeactivateTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateTypeResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeleteChangeSetRequest&, const Model::DeleteChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChangeSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeleteStackRequest&, const Model::DeleteStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeleteStackInstancesRequest&, const Model::DeleteStackInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackInstancesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeleteStackSetRequest&, const Model::DeleteStackSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeregisterTypeRequest&, const Model::DeregisterTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTypeResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeChangeSetRequest&, const Model::DescribeChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChangeSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeChangeSetHooksRequest&, const Model::DescribeChangeSetHooksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChangeSetHooksResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeOrganizationsAccessRequest&, const Model::DescribeOrganizationsAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationsAccessResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribePublisherRequest&, const Model::DescribePublisherOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePublisherResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackDriftDetectionStatusRequest&, const Model::DescribeStackDriftDetectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackDriftDetectionStatusResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackEventsRequest&, const Model::DescribeStackEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackEventsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackInstanceRequest&, const Model::DescribeStackInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackInstanceResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackResourceRequest&, const Model::DescribeStackResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackResourceResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackResourceDriftsRequest&, const Model::DescribeStackResourceDriftsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackResourceDriftsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackResourcesRequest&, const Model::DescribeStackResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackResourcesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackSetRequest&, const Model::DescribeStackSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackSetOperationRequest&, const Model::DescribeStackSetOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackSetOperationResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStacksRequest&, const Model::DescribeStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStacksResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeTypeRequest&, const Model::DescribeTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTypeResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeTypeRegistrationRequest&, const Model::DescribeTypeRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTypeRegistrationResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DetectStackDriftRequest&, const Model::DetectStackDriftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectStackDriftResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DetectStackResourceDriftRequest&, const Model::DetectStackResourceDriftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectStackResourceDriftResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DetectStackSetDriftRequest&, const Model::DetectStackSetDriftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectStackSetDriftResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::EstimateTemplateCostRequest&, const Model::EstimateTemplateCostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EstimateTemplateCostResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ExecuteChangeSetRequest&, const Model::ExecuteChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteChangeSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::GetStackPolicyRequest&, const Model::GetStackPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStackPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::GetTemplateRequest&, const Model::GetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::GetTemplateSummaryRequest&, const Model::GetTemplateSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateSummaryResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ImportStacksToStackSetRequest&, const Model::ImportStacksToStackSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportStacksToStackSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListChangeSetsRequest&, const Model::ListChangeSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChangeSetsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListExportsRequest&, const Model::ListExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExportsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListImportsRequest&, const Model::ListImportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackInstanceResourceDriftsRequest&, const Model::ListStackInstanceResourceDriftsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackInstanceResourceDriftsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackInstancesRequest&, const Model::ListStackInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackInstancesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackResourcesRequest&, const Model::ListStackResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackResourcesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackSetOperationResultsRequest&, const Model::ListStackSetOperationResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackSetOperationResultsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackSetOperationsRequest&, const Model::ListStackSetOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackSetOperationsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackSetsRequest&, const Model::ListStackSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackSetsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStacksRequest&, const Model::ListStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStacksResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListTypeRegistrationsRequest&, const Model::ListTypeRegistrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTypeRegistrationsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListTypeVersionsRequest&, const Model::ListTypeVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTypeVersionsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListTypesRequest&, const Model::ListTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTypesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::PublishTypeRequest&, const Model::PublishTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishTypeResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::RecordHandlerProgressRequest&, const Model::RecordHandlerProgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecordHandlerProgressResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::RegisterPublisherRequest&, const Model::RegisterPublisherOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterPublisherResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::RegisterTypeRequest&, const Model::RegisterTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTypeResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::RollbackStackRequest&, const Model::RollbackStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RollbackStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::SetStackPolicyRequest&, const Model::SetStackPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetStackPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::SetTypeConfigurationRequest&, const Model::SetTypeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTypeConfigurationResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::SetTypeDefaultVersionRequest&, const Model::SetTypeDefaultVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTypeDefaultVersionResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::SignalResourceRequest&, const Model::SignalResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignalResourceResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::StopStackSetOperationRequest&, const Model::StopStackSetOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopStackSetOperationResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::TestTypeRequest&, const Model::TestTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestTypeResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::UpdateStackRequest&, const Model::UpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::UpdateStackInstancesRequest&, const Model::UpdateStackInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackInstancesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::UpdateStackSetRequest&, const Model::UpdateStackSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::UpdateTerminationProtectionRequest&, const Model::UpdateTerminationProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTerminationProtectionResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ValidateTemplateRequest&, const Model::ValidateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateTemplateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudFormation
} // namespace Aws
