/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/customer-profiles/CustomerProfilesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/customer-profiles/CustomerProfilesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CustomerProfilesClient header */
#include <aws/customer-profiles/model/AddProfileKeyResult.h>
#include <aws/customer-profiles/model/BatchGetCalculatedAttributeForProfileResult.h>
#include <aws/customer-profiles/model/BatchGetProfileResult.h>
#include <aws/customer-profiles/model/CreateCalculatedAttributeDefinitionResult.h>
#include <aws/customer-profiles/model/CreateDomainResult.h>
#include <aws/customer-profiles/model/CreateDomainLayoutResult.h>
#include <aws/customer-profiles/model/CreateEventStreamResult.h>
#include <aws/customer-profiles/model/CreateEventTriggerResult.h>
#include <aws/customer-profiles/model/CreateIntegrationWorkflowResult.h>
#include <aws/customer-profiles/model/CreateProfileResult.h>
#include <aws/customer-profiles/model/CreateSegmentDefinitionResult.h>
#include <aws/customer-profiles/model/CreateSegmentEstimateResult.h>
#include <aws/customer-profiles/model/CreateSegmentSnapshotResult.h>
#include <aws/customer-profiles/model/CreateUploadJobResult.h>
#include <aws/customer-profiles/model/DeleteCalculatedAttributeDefinitionResult.h>
#include <aws/customer-profiles/model/DeleteDomainResult.h>
#include <aws/customer-profiles/model/DeleteDomainLayoutResult.h>
#include <aws/customer-profiles/model/DeleteEventStreamResult.h>
#include <aws/customer-profiles/model/DeleteEventTriggerResult.h>
#include <aws/customer-profiles/model/DeleteIntegrationResult.h>
#include <aws/customer-profiles/model/DeleteProfileResult.h>
#include <aws/customer-profiles/model/DeleteProfileKeyResult.h>
#include <aws/customer-profiles/model/DeleteProfileObjectResult.h>
#include <aws/customer-profiles/model/DeleteProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/DeleteSegmentDefinitionResult.h>
#include <aws/customer-profiles/model/DeleteWorkflowResult.h>
#include <aws/customer-profiles/model/DetectProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/GetAutoMergingPreviewResult.h>
#include <aws/customer-profiles/model/GetCalculatedAttributeDefinitionResult.h>
#include <aws/customer-profiles/model/GetCalculatedAttributeForProfileResult.h>
#include <aws/customer-profiles/model/GetDomainResult.h>
#include <aws/customer-profiles/model/GetDomainLayoutResult.h>
#include <aws/customer-profiles/model/GetEventStreamResult.h>
#include <aws/customer-profiles/model/GetEventTriggerResult.h>
#include <aws/customer-profiles/model/GetIdentityResolutionJobResult.h>
#include <aws/customer-profiles/model/GetIntegrationResult.h>
#include <aws/customer-profiles/model/GetMatchesResult.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeTemplateResult.h>
#include <aws/customer-profiles/model/GetSegmentDefinitionResult.h>
#include <aws/customer-profiles/model/GetSegmentEstimateResult.h>
#include <aws/customer-profiles/model/GetSegmentMembershipResult.h>
#include <aws/customer-profiles/model/GetSegmentSnapshotResult.h>
#include <aws/customer-profiles/model/GetSimilarProfilesResult.h>
#include <aws/customer-profiles/model/GetUploadJobResult.h>
#include <aws/customer-profiles/model/GetUploadJobPathResult.h>
#include <aws/customer-profiles/model/GetWorkflowResult.h>
#include <aws/customer-profiles/model/GetWorkflowStepsResult.h>
#include <aws/customer-profiles/model/ListAccountIntegrationsResult.h>
#include <aws/customer-profiles/model/ListCalculatedAttributeDefinitionsResult.h>
#include <aws/customer-profiles/model/ListCalculatedAttributesForProfileResult.h>
#include <aws/customer-profiles/model/ListDomainLayoutsResult.h>
#include <aws/customer-profiles/model/ListDomainsResult.h>
#include <aws/customer-profiles/model/ListEventStreamsResult.h>
#include <aws/customer-profiles/model/ListEventTriggersResult.h>
#include <aws/customer-profiles/model/ListIdentityResolutionJobsResult.h>
#include <aws/customer-profiles/model/ListIntegrationsResult.h>
#include <aws/customer-profiles/model/ListObjectTypeAttributesResult.h>
#include <aws/customer-profiles/model/ListProfileAttributeValuesResult.h>
#include <aws/customer-profiles/model/ListProfileObjectTypeTemplatesResult.h>
#include <aws/customer-profiles/model/ListProfileObjectTypesResult.h>
#include <aws/customer-profiles/model/ListProfileObjectsResult.h>
#include <aws/customer-profiles/model/ListRuleBasedMatchesResult.h>
#include <aws/customer-profiles/model/ListSegmentDefinitionsResult.h>
#include <aws/customer-profiles/model/ListTagsForResourceResult.h>
#include <aws/customer-profiles/model/ListUploadJobsResult.h>
#include <aws/customer-profiles/model/ListWorkflowsResult.h>
#include <aws/customer-profiles/model/MergeProfilesResult.h>
#include <aws/customer-profiles/model/PutIntegrationResult.h>
#include <aws/customer-profiles/model/PutProfileObjectResult.h>
#include <aws/customer-profiles/model/PutProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/SearchProfilesResult.h>
#include <aws/customer-profiles/model/StartUploadJobResult.h>
#include <aws/customer-profiles/model/StopUploadJobResult.h>
#include <aws/customer-profiles/model/TagResourceResult.h>
#include <aws/customer-profiles/model/UntagResourceResult.h>
#include <aws/customer-profiles/model/UpdateCalculatedAttributeDefinitionResult.h>
#include <aws/customer-profiles/model/UpdateDomainResult.h>
#include <aws/customer-profiles/model/UpdateDomainLayoutResult.h>
#include <aws/customer-profiles/model/UpdateEventTriggerResult.h>
#include <aws/customer-profiles/model/UpdateProfileResult.h>
#include <aws/customer-profiles/model/ListProfileObjectTypeTemplatesRequest.h>
#include <aws/customer-profiles/model/ListDomainsRequest.h>
/* End of service model headers required in CustomerProfilesClient header */

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

  namespace CustomerProfiles
  {
    using CustomerProfilesClientConfiguration = Aws::Client::GenericClientConfiguration;
    using CustomerProfilesEndpointProviderBase = Aws::CustomerProfiles::Endpoint::CustomerProfilesEndpointProviderBase;
    using CustomerProfilesEndpointProvider = Aws::CustomerProfiles::Endpoint::CustomerProfilesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CustomerProfilesClient header */
      class AddProfileKeyRequest;
      class BatchGetCalculatedAttributeForProfileRequest;
      class BatchGetProfileRequest;
      class CreateCalculatedAttributeDefinitionRequest;
      class CreateDomainRequest;
      class CreateDomainLayoutRequest;
      class CreateEventStreamRequest;
      class CreateEventTriggerRequest;
      class CreateIntegrationWorkflowRequest;
      class CreateProfileRequest;
      class CreateSegmentDefinitionRequest;
      class CreateSegmentEstimateRequest;
      class CreateSegmentSnapshotRequest;
      class CreateUploadJobRequest;
      class DeleteCalculatedAttributeDefinitionRequest;
      class DeleteDomainRequest;
      class DeleteDomainLayoutRequest;
      class DeleteEventStreamRequest;
      class DeleteEventTriggerRequest;
      class DeleteIntegrationRequest;
      class DeleteProfileRequest;
      class DeleteProfileKeyRequest;
      class DeleteProfileObjectRequest;
      class DeleteProfileObjectTypeRequest;
      class DeleteSegmentDefinitionRequest;
      class DeleteWorkflowRequest;
      class DetectProfileObjectTypeRequest;
      class GetAutoMergingPreviewRequest;
      class GetCalculatedAttributeDefinitionRequest;
      class GetCalculatedAttributeForProfileRequest;
      class GetDomainRequest;
      class GetDomainLayoutRequest;
      class GetEventStreamRequest;
      class GetEventTriggerRequest;
      class GetIdentityResolutionJobRequest;
      class GetIntegrationRequest;
      class GetMatchesRequest;
      class GetProfileObjectTypeRequest;
      class GetProfileObjectTypeTemplateRequest;
      class GetSegmentDefinitionRequest;
      class GetSegmentEstimateRequest;
      class GetSegmentMembershipRequest;
      class GetSegmentSnapshotRequest;
      class GetSimilarProfilesRequest;
      class GetUploadJobRequest;
      class GetUploadJobPathRequest;
      class GetWorkflowRequest;
      class GetWorkflowStepsRequest;
      class ListAccountIntegrationsRequest;
      class ListCalculatedAttributeDefinitionsRequest;
      class ListCalculatedAttributesForProfileRequest;
      class ListDomainLayoutsRequest;
      class ListDomainsRequest;
      class ListEventStreamsRequest;
      class ListEventTriggersRequest;
      class ListIdentityResolutionJobsRequest;
      class ListIntegrationsRequest;
      class ListObjectTypeAttributesRequest;
      class ListProfileAttributeValuesRequest;
      class ListProfileObjectTypeTemplatesRequest;
      class ListProfileObjectTypesRequest;
      class ListProfileObjectsRequest;
      class ListRuleBasedMatchesRequest;
      class ListSegmentDefinitionsRequest;
      class ListTagsForResourceRequest;
      class ListUploadJobsRequest;
      class ListWorkflowsRequest;
      class MergeProfilesRequest;
      class PutIntegrationRequest;
      class PutProfileObjectRequest;
      class PutProfileObjectTypeRequest;
      class SearchProfilesRequest;
      class StartUploadJobRequest;
      class StopUploadJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCalculatedAttributeDefinitionRequest;
      class UpdateDomainRequest;
      class UpdateDomainLayoutRequest;
      class UpdateEventTriggerRequest;
      class UpdateProfileRequest;
      /* End of service model forward declarations required in CustomerProfilesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddProfileKeyResult, CustomerProfilesError> AddProfileKeyOutcome;
      typedef Aws::Utils::Outcome<BatchGetCalculatedAttributeForProfileResult, CustomerProfilesError> BatchGetCalculatedAttributeForProfileOutcome;
      typedef Aws::Utils::Outcome<BatchGetProfileResult, CustomerProfilesError> BatchGetProfileOutcome;
      typedef Aws::Utils::Outcome<CreateCalculatedAttributeDefinitionResult, CustomerProfilesError> CreateCalculatedAttributeDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateDomainResult, CustomerProfilesError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<CreateDomainLayoutResult, CustomerProfilesError> CreateDomainLayoutOutcome;
      typedef Aws::Utils::Outcome<CreateEventStreamResult, CustomerProfilesError> CreateEventStreamOutcome;
      typedef Aws::Utils::Outcome<CreateEventTriggerResult, CustomerProfilesError> CreateEventTriggerOutcome;
      typedef Aws::Utils::Outcome<CreateIntegrationWorkflowResult, CustomerProfilesError> CreateIntegrationWorkflowOutcome;
      typedef Aws::Utils::Outcome<CreateProfileResult, CustomerProfilesError> CreateProfileOutcome;
      typedef Aws::Utils::Outcome<CreateSegmentDefinitionResult, CustomerProfilesError> CreateSegmentDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateSegmentEstimateResult, CustomerProfilesError> CreateSegmentEstimateOutcome;
      typedef Aws::Utils::Outcome<CreateSegmentSnapshotResult, CustomerProfilesError> CreateSegmentSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateUploadJobResult, CustomerProfilesError> CreateUploadJobOutcome;
      typedef Aws::Utils::Outcome<DeleteCalculatedAttributeDefinitionResult, CustomerProfilesError> DeleteCalculatedAttributeDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainResult, CustomerProfilesError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainLayoutResult, CustomerProfilesError> DeleteDomainLayoutOutcome;
      typedef Aws::Utils::Outcome<DeleteEventStreamResult, CustomerProfilesError> DeleteEventStreamOutcome;
      typedef Aws::Utils::Outcome<DeleteEventTriggerResult, CustomerProfilesError> DeleteEventTriggerOutcome;
      typedef Aws::Utils::Outcome<DeleteIntegrationResult, CustomerProfilesError> DeleteIntegrationOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileResult, CustomerProfilesError> DeleteProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileKeyResult, CustomerProfilesError> DeleteProfileKeyOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileObjectResult, CustomerProfilesError> DeleteProfileObjectOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileObjectTypeResult, CustomerProfilesError> DeleteProfileObjectTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteSegmentDefinitionResult, CustomerProfilesError> DeleteSegmentDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkflowResult, CustomerProfilesError> DeleteWorkflowOutcome;
      typedef Aws::Utils::Outcome<DetectProfileObjectTypeResult, CustomerProfilesError> DetectProfileObjectTypeOutcome;
      typedef Aws::Utils::Outcome<GetAutoMergingPreviewResult, CustomerProfilesError> GetAutoMergingPreviewOutcome;
      typedef Aws::Utils::Outcome<GetCalculatedAttributeDefinitionResult, CustomerProfilesError> GetCalculatedAttributeDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetCalculatedAttributeForProfileResult, CustomerProfilesError> GetCalculatedAttributeForProfileOutcome;
      typedef Aws::Utils::Outcome<GetDomainResult, CustomerProfilesError> GetDomainOutcome;
      typedef Aws::Utils::Outcome<GetDomainLayoutResult, CustomerProfilesError> GetDomainLayoutOutcome;
      typedef Aws::Utils::Outcome<GetEventStreamResult, CustomerProfilesError> GetEventStreamOutcome;
      typedef Aws::Utils::Outcome<GetEventTriggerResult, CustomerProfilesError> GetEventTriggerOutcome;
      typedef Aws::Utils::Outcome<GetIdentityResolutionJobResult, CustomerProfilesError> GetIdentityResolutionJobOutcome;
      typedef Aws::Utils::Outcome<GetIntegrationResult, CustomerProfilesError> GetIntegrationOutcome;
      typedef Aws::Utils::Outcome<GetMatchesResult, CustomerProfilesError> GetMatchesOutcome;
      typedef Aws::Utils::Outcome<GetProfileObjectTypeResult, CustomerProfilesError> GetProfileObjectTypeOutcome;
      typedef Aws::Utils::Outcome<GetProfileObjectTypeTemplateResult, CustomerProfilesError> GetProfileObjectTypeTemplateOutcome;
      typedef Aws::Utils::Outcome<GetSegmentDefinitionResult, CustomerProfilesError> GetSegmentDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetSegmentEstimateResult, CustomerProfilesError> GetSegmentEstimateOutcome;
      typedef Aws::Utils::Outcome<GetSegmentMembershipResult, CustomerProfilesError> GetSegmentMembershipOutcome;
      typedef Aws::Utils::Outcome<GetSegmentSnapshotResult, CustomerProfilesError> GetSegmentSnapshotOutcome;
      typedef Aws::Utils::Outcome<GetSimilarProfilesResult, CustomerProfilesError> GetSimilarProfilesOutcome;
      typedef Aws::Utils::Outcome<GetUploadJobResult, CustomerProfilesError> GetUploadJobOutcome;
      typedef Aws::Utils::Outcome<GetUploadJobPathResult, CustomerProfilesError> GetUploadJobPathOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowResult, CustomerProfilesError> GetWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowStepsResult, CustomerProfilesError> GetWorkflowStepsOutcome;
      typedef Aws::Utils::Outcome<ListAccountIntegrationsResult, CustomerProfilesError> ListAccountIntegrationsOutcome;
      typedef Aws::Utils::Outcome<ListCalculatedAttributeDefinitionsResult, CustomerProfilesError> ListCalculatedAttributeDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListCalculatedAttributesForProfileResult, CustomerProfilesError> ListCalculatedAttributesForProfileOutcome;
      typedef Aws::Utils::Outcome<ListDomainLayoutsResult, CustomerProfilesError> ListDomainLayoutsOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, CustomerProfilesError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListEventStreamsResult, CustomerProfilesError> ListEventStreamsOutcome;
      typedef Aws::Utils::Outcome<ListEventTriggersResult, CustomerProfilesError> ListEventTriggersOutcome;
      typedef Aws::Utils::Outcome<ListIdentityResolutionJobsResult, CustomerProfilesError> ListIdentityResolutionJobsOutcome;
      typedef Aws::Utils::Outcome<ListIntegrationsResult, CustomerProfilesError> ListIntegrationsOutcome;
      typedef Aws::Utils::Outcome<ListObjectTypeAttributesResult, CustomerProfilesError> ListObjectTypeAttributesOutcome;
      typedef Aws::Utils::Outcome<ListProfileAttributeValuesResult, CustomerProfilesError> ListProfileAttributeValuesOutcome;
      typedef Aws::Utils::Outcome<ListProfileObjectTypeTemplatesResult, CustomerProfilesError> ListProfileObjectTypeTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListProfileObjectTypesResult, CustomerProfilesError> ListProfileObjectTypesOutcome;
      typedef Aws::Utils::Outcome<ListProfileObjectsResult, CustomerProfilesError> ListProfileObjectsOutcome;
      typedef Aws::Utils::Outcome<ListRuleBasedMatchesResult, CustomerProfilesError> ListRuleBasedMatchesOutcome;
      typedef Aws::Utils::Outcome<ListSegmentDefinitionsResult, CustomerProfilesError> ListSegmentDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CustomerProfilesError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListUploadJobsResult, CustomerProfilesError> ListUploadJobsOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowsResult, CustomerProfilesError> ListWorkflowsOutcome;
      typedef Aws::Utils::Outcome<MergeProfilesResult, CustomerProfilesError> MergeProfilesOutcome;
      typedef Aws::Utils::Outcome<PutIntegrationResult, CustomerProfilesError> PutIntegrationOutcome;
      typedef Aws::Utils::Outcome<PutProfileObjectResult, CustomerProfilesError> PutProfileObjectOutcome;
      typedef Aws::Utils::Outcome<PutProfileObjectTypeResult, CustomerProfilesError> PutProfileObjectTypeOutcome;
      typedef Aws::Utils::Outcome<SearchProfilesResult, CustomerProfilesError> SearchProfilesOutcome;
      typedef Aws::Utils::Outcome<StartUploadJobResult, CustomerProfilesError> StartUploadJobOutcome;
      typedef Aws::Utils::Outcome<StopUploadJobResult, CustomerProfilesError> StopUploadJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CustomerProfilesError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CustomerProfilesError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCalculatedAttributeDefinitionResult, CustomerProfilesError> UpdateCalculatedAttributeDefinitionOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainResult, CustomerProfilesError> UpdateDomainOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainLayoutResult, CustomerProfilesError> UpdateDomainLayoutOutcome;
      typedef Aws::Utils::Outcome<UpdateEventTriggerResult, CustomerProfilesError> UpdateEventTriggerOutcome;
      typedef Aws::Utils::Outcome<UpdateProfileResult, CustomerProfilesError> UpdateProfileOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddProfileKeyOutcome> AddProfileKeyOutcomeCallable;
      typedef std::future<BatchGetCalculatedAttributeForProfileOutcome> BatchGetCalculatedAttributeForProfileOutcomeCallable;
      typedef std::future<BatchGetProfileOutcome> BatchGetProfileOutcomeCallable;
      typedef std::future<CreateCalculatedAttributeDefinitionOutcome> CreateCalculatedAttributeDefinitionOutcomeCallable;
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<CreateDomainLayoutOutcome> CreateDomainLayoutOutcomeCallable;
      typedef std::future<CreateEventStreamOutcome> CreateEventStreamOutcomeCallable;
      typedef std::future<CreateEventTriggerOutcome> CreateEventTriggerOutcomeCallable;
      typedef std::future<CreateIntegrationWorkflowOutcome> CreateIntegrationWorkflowOutcomeCallable;
      typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
      typedef std::future<CreateSegmentDefinitionOutcome> CreateSegmentDefinitionOutcomeCallable;
      typedef std::future<CreateSegmentEstimateOutcome> CreateSegmentEstimateOutcomeCallable;
      typedef std::future<CreateSegmentSnapshotOutcome> CreateSegmentSnapshotOutcomeCallable;
      typedef std::future<CreateUploadJobOutcome> CreateUploadJobOutcomeCallable;
      typedef std::future<DeleteCalculatedAttributeDefinitionOutcome> DeleteCalculatedAttributeDefinitionOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DeleteDomainLayoutOutcome> DeleteDomainLayoutOutcomeCallable;
      typedef std::future<DeleteEventStreamOutcome> DeleteEventStreamOutcomeCallable;
      typedef std::future<DeleteEventTriggerOutcome> DeleteEventTriggerOutcomeCallable;
      typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
      typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
      typedef std::future<DeleteProfileKeyOutcome> DeleteProfileKeyOutcomeCallable;
      typedef std::future<DeleteProfileObjectOutcome> DeleteProfileObjectOutcomeCallable;
      typedef std::future<DeleteProfileObjectTypeOutcome> DeleteProfileObjectTypeOutcomeCallable;
      typedef std::future<DeleteSegmentDefinitionOutcome> DeleteSegmentDefinitionOutcomeCallable;
      typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
      typedef std::future<DetectProfileObjectTypeOutcome> DetectProfileObjectTypeOutcomeCallable;
      typedef std::future<GetAutoMergingPreviewOutcome> GetAutoMergingPreviewOutcomeCallable;
      typedef std::future<GetCalculatedAttributeDefinitionOutcome> GetCalculatedAttributeDefinitionOutcomeCallable;
      typedef std::future<GetCalculatedAttributeForProfileOutcome> GetCalculatedAttributeForProfileOutcomeCallable;
      typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
      typedef std::future<GetDomainLayoutOutcome> GetDomainLayoutOutcomeCallable;
      typedef std::future<GetEventStreamOutcome> GetEventStreamOutcomeCallable;
      typedef std::future<GetEventTriggerOutcome> GetEventTriggerOutcomeCallable;
      typedef std::future<GetIdentityResolutionJobOutcome> GetIdentityResolutionJobOutcomeCallable;
      typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
      typedef std::future<GetMatchesOutcome> GetMatchesOutcomeCallable;
      typedef std::future<GetProfileObjectTypeOutcome> GetProfileObjectTypeOutcomeCallable;
      typedef std::future<GetProfileObjectTypeTemplateOutcome> GetProfileObjectTypeTemplateOutcomeCallable;
      typedef std::future<GetSegmentDefinitionOutcome> GetSegmentDefinitionOutcomeCallable;
      typedef std::future<GetSegmentEstimateOutcome> GetSegmentEstimateOutcomeCallable;
      typedef std::future<GetSegmentMembershipOutcome> GetSegmentMembershipOutcomeCallable;
      typedef std::future<GetSegmentSnapshotOutcome> GetSegmentSnapshotOutcomeCallable;
      typedef std::future<GetSimilarProfilesOutcome> GetSimilarProfilesOutcomeCallable;
      typedef std::future<GetUploadJobOutcome> GetUploadJobOutcomeCallable;
      typedef std::future<GetUploadJobPathOutcome> GetUploadJobPathOutcomeCallable;
      typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
      typedef std::future<GetWorkflowStepsOutcome> GetWorkflowStepsOutcomeCallable;
      typedef std::future<ListAccountIntegrationsOutcome> ListAccountIntegrationsOutcomeCallable;
      typedef std::future<ListCalculatedAttributeDefinitionsOutcome> ListCalculatedAttributeDefinitionsOutcomeCallable;
      typedef std::future<ListCalculatedAttributesForProfileOutcome> ListCalculatedAttributesForProfileOutcomeCallable;
      typedef std::future<ListDomainLayoutsOutcome> ListDomainLayoutsOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListEventStreamsOutcome> ListEventStreamsOutcomeCallable;
      typedef std::future<ListEventTriggersOutcome> ListEventTriggersOutcomeCallable;
      typedef std::future<ListIdentityResolutionJobsOutcome> ListIdentityResolutionJobsOutcomeCallable;
      typedef std::future<ListIntegrationsOutcome> ListIntegrationsOutcomeCallable;
      typedef std::future<ListObjectTypeAttributesOutcome> ListObjectTypeAttributesOutcomeCallable;
      typedef std::future<ListProfileAttributeValuesOutcome> ListProfileAttributeValuesOutcomeCallable;
      typedef std::future<ListProfileObjectTypeTemplatesOutcome> ListProfileObjectTypeTemplatesOutcomeCallable;
      typedef std::future<ListProfileObjectTypesOutcome> ListProfileObjectTypesOutcomeCallable;
      typedef std::future<ListProfileObjectsOutcome> ListProfileObjectsOutcomeCallable;
      typedef std::future<ListRuleBasedMatchesOutcome> ListRuleBasedMatchesOutcomeCallable;
      typedef std::future<ListSegmentDefinitionsOutcome> ListSegmentDefinitionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListUploadJobsOutcome> ListUploadJobsOutcomeCallable;
      typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
      typedef std::future<MergeProfilesOutcome> MergeProfilesOutcomeCallable;
      typedef std::future<PutIntegrationOutcome> PutIntegrationOutcomeCallable;
      typedef std::future<PutProfileObjectOutcome> PutProfileObjectOutcomeCallable;
      typedef std::future<PutProfileObjectTypeOutcome> PutProfileObjectTypeOutcomeCallable;
      typedef std::future<SearchProfilesOutcome> SearchProfilesOutcomeCallable;
      typedef std::future<StartUploadJobOutcome> StartUploadJobOutcomeCallable;
      typedef std::future<StopUploadJobOutcome> StopUploadJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCalculatedAttributeDefinitionOutcome> UpdateCalculatedAttributeDefinitionOutcomeCallable;
      typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
      typedef std::future<UpdateDomainLayoutOutcome> UpdateDomainLayoutOutcomeCallable;
      typedef std::future<UpdateEventTriggerOutcome> UpdateEventTriggerOutcomeCallable;
      typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CustomerProfilesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CustomerProfilesClient*, const Model::AddProfileKeyRequest&, const Model::AddProfileKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddProfileKeyResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::BatchGetCalculatedAttributeForProfileRequest&, const Model::BatchGetCalculatedAttributeForProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCalculatedAttributeForProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::BatchGetProfileRequest&, const Model::BatchGetProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateCalculatedAttributeDefinitionRequest&, const Model::CreateCalculatedAttributeDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCalculatedAttributeDefinitionResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateDomainLayoutRequest&, const Model::CreateDomainLayoutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainLayoutResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateEventStreamRequest&, const Model::CreateEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventStreamResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateEventTriggerRequest&, const Model::CreateEventTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventTriggerResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateIntegrationWorkflowRequest&, const Model::CreateIntegrationWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationWorkflowResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateSegmentDefinitionRequest&, const Model::CreateSegmentDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSegmentDefinitionResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateSegmentEstimateRequest&, const Model::CreateSegmentEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSegmentEstimateResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateSegmentSnapshotRequest&, const Model::CreateSegmentSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSegmentSnapshotResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateUploadJobRequest&, const Model::CreateUploadJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUploadJobResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteCalculatedAttributeDefinitionRequest&, const Model::DeleteCalculatedAttributeDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCalculatedAttributeDefinitionResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteDomainLayoutRequest&, const Model::DeleteDomainLayoutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainLayoutResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteEventStreamRequest&, const Model::DeleteEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventStreamResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteEventTriggerRequest&, const Model::DeleteEventTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventTriggerResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileKeyRequest&, const Model::DeleteProfileKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileKeyResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileObjectRequest&, const Model::DeleteProfileObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileObjectResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileObjectTypeRequest&, const Model::DeleteProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteSegmentDefinitionRequest&, const Model::DeleteSegmentDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSegmentDefinitionResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DetectProfileObjectTypeRequest&, const Model::DetectProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetAutoMergingPreviewRequest&, const Model::GetAutoMergingPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutoMergingPreviewResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetCalculatedAttributeDefinitionRequest&, const Model::GetCalculatedAttributeDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCalculatedAttributeDefinitionResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetCalculatedAttributeForProfileRequest&, const Model::GetCalculatedAttributeForProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCalculatedAttributeForProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetDomainRequest&, const Model::GetDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetDomainLayoutRequest&, const Model::GetDomainLayoutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainLayoutResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetEventStreamRequest&, const Model::GetEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventStreamResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetEventTriggerRequest&, const Model::GetEventTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventTriggerResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetIdentityResolutionJobRequest&, const Model::GetIdentityResolutionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityResolutionJobResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetMatchesRequest&, const Model::GetMatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMatchesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetProfileObjectTypeRequest&, const Model::GetProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetProfileObjectTypeTemplateRequest&, const Model::GetProfileObjectTypeTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileObjectTypeTemplateResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetSegmentDefinitionRequest&, const Model::GetSegmentDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentDefinitionResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetSegmentEstimateRequest&, const Model::GetSegmentEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentEstimateResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetSegmentMembershipRequest&, const Model::GetSegmentMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentMembershipResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetSegmentSnapshotRequest&, const Model::GetSegmentSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentSnapshotResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetSimilarProfilesRequest&, const Model::GetSimilarProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSimilarProfilesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetUploadJobRequest&, const Model::GetUploadJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUploadJobResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetUploadJobPathRequest&, const Model::GetUploadJobPathOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUploadJobPathResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetWorkflowStepsRequest&, const Model::GetWorkflowStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowStepsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListAccountIntegrationsRequest&, const Model::ListAccountIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountIntegrationsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListCalculatedAttributeDefinitionsRequest&, const Model::ListCalculatedAttributeDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCalculatedAttributeDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListCalculatedAttributesForProfileRequest&, const Model::ListCalculatedAttributesForProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCalculatedAttributesForProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListDomainLayoutsRequest&, const Model::ListDomainLayoutsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainLayoutsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListEventStreamsRequest&, const Model::ListEventStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventStreamsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListEventTriggersRequest&, const Model::ListEventTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventTriggersResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListIdentityResolutionJobsRequest&, const Model::ListIdentityResolutionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityResolutionJobsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListIntegrationsRequest&, const Model::ListIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntegrationsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListObjectTypeAttributesRequest&, const Model::ListObjectTypeAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectTypeAttributesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileAttributeValuesRequest&, const Model::ListProfileAttributeValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileAttributeValuesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileObjectTypeTemplatesRequest&, const Model::ListProfileObjectTypeTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileObjectTypeTemplatesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileObjectTypesRequest&, const Model::ListProfileObjectTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileObjectTypesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileObjectsRequest&, const Model::ListProfileObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileObjectsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListRuleBasedMatchesRequest&, const Model::ListRuleBasedMatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleBasedMatchesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListSegmentDefinitionsRequest&, const Model::ListSegmentDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSegmentDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListUploadJobsRequest&, const Model::ListUploadJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUploadJobsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::MergeProfilesRequest&, const Model::MergeProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergeProfilesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::PutIntegrationRequest&, const Model::PutIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIntegrationResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::PutProfileObjectRequest&, const Model::PutProfileObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProfileObjectResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::PutProfileObjectTypeRequest&, const Model::PutProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::SearchProfilesRequest&, const Model::SearchProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProfilesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::StartUploadJobRequest&, const Model::StartUploadJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartUploadJobResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::StopUploadJobRequest&, const Model::StopUploadJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopUploadJobResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UpdateCalculatedAttributeDefinitionRequest&, const Model::UpdateCalculatedAttributeDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCalculatedAttributeDefinitionResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UpdateDomainLayoutRequest&, const Model::UpdateDomainLayoutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainLayoutResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UpdateEventTriggerRequest&, const Model::UpdateEventTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventTriggerResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UpdateProfileRequest&, const Model::UpdateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CustomerProfiles
} // namespace Aws
