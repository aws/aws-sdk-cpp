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
#include <aws/customer-profiles/model/CreateDomainResult.h>
#include <aws/customer-profiles/model/CreateIntegrationWorkflowResult.h>
#include <aws/customer-profiles/model/CreateProfileResult.h>
#include <aws/customer-profiles/model/DeleteDomainResult.h>
#include <aws/customer-profiles/model/DeleteIntegrationResult.h>
#include <aws/customer-profiles/model/DeleteProfileResult.h>
#include <aws/customer-profiles/model/DeleteProfileKeyResult.h>
#include <aws/customer-profiles/model/DeleteProfileObjectResult.h>
#include <aws/customer-profiles/model/DeleteProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/DeleteWorkflowResult.h>
#include <aws/customer-profiles/model/GetAutoMergingPreviewResult.h>
#include <aws/customer-profiles/model/GetDomainResult.h>
#include <aws/customer-profiles/model/GetIdentityResolutionJobResult.h>
#include <aws/customer-profiles/model/GetIntegrationResult.h>
#include <aws/customer-profiles/model/GetMatchesResult.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeTemplateResult.h>
#include <aws/customer-profiles/model/GetWorkflowResult.h>
#include <aws/customer-profiles/model/GetWorkflowStepsResult.h>
#include <aws/customer-profiles/model/ListAccountIntegrationsResult.h>
#include <aws/customer-profiles/model/ListDomainsResult.h>
#include <aws/customer-profiles/model/ListIdentityResolutionJobsResult.h>
#include <aws/customer-profiles/model/ListIntegrationsResult.h>
#include <aws/customer-profiles/model/ListProfileObjectTypeTemplatesResult.h>
#include <aws/customer-profiles/model/ListProfileObjectTypesResult.h>
#include <aws/customer-profiles/model/ListProfileObjectsResult.h>
#include <aws/customer-profiles/model/ListTagsForResourceResult.h>
#include <aws/customer-profiles/model/ListWorkflowsResult.h>
#include <aws/customer-profiles/model/MergeProfilesResult.h>
#include <aws/customer-profiles/model/PutIntegrationResult.h>
#include <aws/customer-profiles/model/PutProfileObjectResult.h>
#include <aws/customer-profiles/model/PutProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/SearchProfilesResult.h>
#include <aws/customer-profiles/model/TagResourceResult.h>
#include <aws/customer-profiles/model/UntagResourceResult.h>
#include <aws/customer-profiles/model/UpdateDomainResult.h>
#include <aws/customer-profiles/model/UpdateProfileResult.h>
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
    using CustomerProfilesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CustomerProfilesEndpointProviderBase = Aws::CustomerProfiles::Endpoint::CustomerProfilesEndpointProviderBase;
    using CustomerProfilesEndpointProvider = Aws::CustomerProfiles::Endpoint::CustomerProfilesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CustomerProfilesClient header */
      class AddProfileKeyRequest;
      class CreateDomainRequest;
      class CreateIntegrationWorkflowRequest;
      class CreateProfileRequest;
      class DeleteDomainRequest;
      class DeleteIntegrationRequest;
      class DeleteProfileRequest;
      class DeleteProfileKeyRequest;
      class DeleteProfileObjectRequest;
      class DeleteProfileObjectTypeRequest;
      class DeleteWorkflowRequest;
      class GetAutoMergingPreviewRequest;
      class GetDomainRequest;
      class GetIdentityResolutionJobRequest;
      class GetIntegrationRequest;
      class GetMatchesRequest;
      class GetProfileObjectTypeRequest;
      class GetProfileObjectTypeTemplateRequest;
      class GetWorkflowRequest;
      class GetWorkflowStepsRequest;
      class ListAccountIntegrationsRequest;
      class ListDomainsRequest;
      class ListIdentityResolutionJobsRequest;
      class ListIntegrationsRequest;
      class ListProfileObjectTypeTemplatesRequest;
      class ListProfileObjectTypesRequest;
      class ListProfileObjectsRequest;
      class ListTagsForResourceRequest;
      class ListWorkflowsRequest;
      class MergeProfilesRequest;
      class PutIntegrationRequest;
      class PutProfileObjectRequest;
      class PutProfileObjectTypeRequest;
      class SearchProfilesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDomainRequest;
      class UpdateProfileRequest;
      /* End of service model forward declarations required in CustomerProfilesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddProfileKeyResult, CustomerProfilesError> AddProfileKeyOutcome;
      typedef Aws::Utils::Outcome<CreateDomainResult, CustomerProfilesError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<CreateIntegrationWorkflowResult, CustomerProfilesError> CreateIntegrationWorkflowOutcome;
      typedef Aws::Utils::Outcome<CreateProfileResult, CustomerProfilesError> CreateProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainResult, CustomerProfilesError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<DeleteIntegrationResult, CustomerProfilesError> DeleteIntegrationOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileResult, CustomerProfilesError> DeleteProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileKeyResult, CustomerProfilesError> DeleteProfileKeyOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileObjectResult, CustomerProfilesError> DeleteProfileObjectOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileObjectTypeResult, CustomerProfilesError> DeleteProfileObjectTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkflowResult, CustomerProfilesError> DeleteWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetAutoMergingPreviewResult, CustomerProfilesError> GetAutoMergingPreviewOutcome;
      typedef Aws::Utils::Outcome<GetDomainResult, CustomerProfilesError> GetDomainOutcome;
      typedef Aws::Utils::Outcome<GetIdentityResolutionJobResult, CustomerProfilesError> GetIdentityResolutionJobOutcome;
      typedef Aws::Utils::Outcome<GetIntegrationResult, CustomerProfilesError> GetIntegrationOutcome;
      typedef Aws::Utils::Outcome<GetMatchesResult, CustomerProfilesError> GetMatchesOutcome;
      typedef Aws::Utils::Outcome<GetProfileObjectTypeResult, CustomerProfilesError> GetProfileObjectTypeOutcome;
      typedef Aws::Utils::Outcome<GetProfileObjectTypeTemplateResult, CustomerProfilesError> GetProfileObjectTypeTemplateOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowResult, CustomerProfilesError> GetWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowStepsResult, CustomerProfilesError> GetWorkflowStepsOutcome;
      typedef Aws::Utils::Outcome<ListAccountIntegrationsResult, CustomerProfilesError> ListAccountIntegrationsOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, CustomerProfilesError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListIdentityResolutionJobsResult, CustomerProfilesError> ListIdentityResolutionJobsOutcome;
      typedef Aws::Utils::Outcome<ListIntegrationsResult, CustomerProfilesError> ListIntegrationsOutcome;
      typedef Aws::Utils::Outcome<ListProfileObjectTypeTemplatesResult, CustomerProfilesError> ListProfileObjectTypeTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListProfileObjectTypesResult, CustomerProfilesError> ListProfileObjectTypesOutcome;
      typedef Aws::Utils::Outcome<ListProfileObjectsResult, CustomerProfilesError> ListProfileObjectsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CustomerProfilesError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowsResult, CustomerProfilesError> ListWorkflowsOutcome;
      typedef Aws::Utils::Outcome<MergeProfilesResult, CustomerProfilesError> MergeProfilesOutcome;
      typedef Aws::Utils::Outcome<PutIntegrationResult, CustomerProfilesError> PutIntegrationOutcome;
      typedef Aws::Utils::Outcome<PutProfileObjectResult, CustomerProfilesError> PutProfileObjectOutcome;
      typedef Aws::Utils::Outcome<PutProfileObjectTypeResult, CustomerProfilesError> PutProfileObjectTypeOutcome;
      typedef Aws::Utils::Outcome<SearchProfilesResult, CustomerProfilesError> SearchProfilesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CustomerProfilesError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CustomerProfilesError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainResult, CustomerProfilesError> UpdateDomainOutcome;
      typedef Aws::Utils::Outcome<UpdateProfileResult, CustomerProfilesError> UpdateProfileOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddProfileKeyOutcome> AddProfileKeyOutcomeCallable;
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<CreateIntegrationWorkflowOutcome> CreateIntegrationWorkflowOutcomeCallable;
      typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
      typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
      typedef std::future<DeleteProfileKeyOutcome> DeleteProfileKeyOutcomeCallable;
      typedef std::future<DeleteProfileObjectOutcome> DeleteProfileObjectOutcomeCallable;
      typedef std::future<DeleteProfileObjectTypeOutcome> DeleteProfileObjectTypeOutcomeCallable;
      typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
      typedef std::future<GetAutoMergingPreviewOutcome> GetAutoMergingPreviewOutcomeCallable;
      typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
      typedef std::future<GetIdentityResolutionJobOutcome> GetIdentityResolutionJobOutcomeCallable;
      typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
      typedef std::future<GetMatchesOutcome> GetMatchesOutcomeCallable;
      typedef std::future<GetProfileObjectTypeOutcome> GetProfileObjectTypeOutcomeCallable;
      typedef std::future<GetProfileObjectTypeTemplateOutcome> GetProfileObjectTypeTemplateOutcomeCallable;
      typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
      typedef std::future<GetWorkflowStepsOutcome> GetWorkflowStepsOutcomeCallable;
      typedef std::future<ListAccountIntegrationsOutcome> ListAccountIntegrationsOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListIdentityResolutionJobsOutcome> ListIdentityResolutionJobsOutcomeCallable;
      typedef std::future<ListIntegrationsOutcome> ListIntegrationsOutcomeCallable;
      typedef std::future<ListProfileObjectTypeTemplatesOutcome> ListProfileObjectTypeTemplatesOutcomeCallable;
      typedef std::future<ListProfileObjectTypesOutcome> ListProfileObjectTypesOutcomeCallable;
      typedef std::future<ListProfileObjectsOutcome> ListProfileObjectsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
      typedef std::future<MergeProfilesOutcome> MergeProfilesOutcomeCallable;
      typedef std::future<PutIntegrationOutcome> PutIntegrationOutcomeCallable;
      typedef std::future<PutProfileObjectOutcome> PutProfileObjectOutcomeCallable;
      typedef std::future<PutProfileObjectTypeOutcome> PutProfileObjectTypeOutcomeCallable;
      typedef std::future<SearchProfilesOutcome> SearchProfilesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
      typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CustomerProfilesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CustomerProfilesClient*, const Model::AddProfileKeyRequest&, const Model::AddProfileKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddProfileKeyResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateIntegrationWorkflowRequest&, const Model::CreateIntegrationWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationWorkflowResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileKeyRequest&, const Model::DeleteProfileKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileKeyResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileObjectRequest&, const Model::DeleteProfileObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileObjectResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileObjectTypeRequest&, const Model::DeleteProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetAutoMergingPreviewRequest&, const Model::GetAutoMergingPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutoMergingPreviewResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetDomainRequest&, const Model::GetDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetIdentityResolutionJobRequest&, const Model::GetIdentityResolutionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityResolutionJobResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetMatchesRequest&, const Model::GetMatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMatchesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetProfileObjectTypeRequest&, const Model::GetProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetProfileObjectTypeTemplateRequest&, const Model::GetProfileObjectTypeTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileObjectTypeTemplateResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetWorkflowStepsRequest&, const Model::GetWorkflowStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowStepsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListAccountIntegrationsRequest&, const Model::ListAccountIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountIntegrationsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListIdentityResolutionJobsRequest&, const Model::ListIdentityResolutionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityResolutionJobsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListIntegrationsRequest&, const Model::ListIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntegrationsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileObjectTypeTemplatesRequest&, const Model::ListProfileObjectTypeTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileObjectTypeTemplatesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileObjectTypesRequest&, const Model::ListProfileObjectTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileObjectTypesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileObjectsRequest&, const Model::ListProfileObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileObjectsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::MergeProfilesRequest&, const Model::MergeProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergeProfilesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::PutIntegrationRequest&, const Model::PutIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIntegrationResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::PutProfileObjectRequest&, const Model::PutProfileObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProfileObjectResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::PutProfileObjectTypeRequest&, const Model::PutProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::SearchProfilesRequest&, const Model::SearchProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProfilesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UpdateProfileRequest&, const Model::UpdateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CustomerProfiles
} // namespace Aws
