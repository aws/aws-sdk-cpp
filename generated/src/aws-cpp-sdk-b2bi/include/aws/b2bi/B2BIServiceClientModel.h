/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/b2bi/B2BIErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/b2bi/B2BIEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in B2BIClient header */
#include <aws/b2bi/model/CreateCapabilityResult.h>
#include <aws/b2bi/model/CreatePartnershipResult.h>
#include <aws/b2bi/model/CreateProfileResult.h>
#include <aws/b2bi/model/CreateTransformerResult.h>
#include <aws/b2bi/model/GetCapabilityResult.h>
#include <aws/b2bi/model/GetPartnershipResult.h>
#include <aws/b2bi/model/GetProfileResult.h>
#include <aws/b2bi/model/GetTransformerResult.h>
#include <aws/b2bi/model/GetTransformerJobResult.h>
#include <aws/b2bi/model/ListCapabilitiesResult.h>
#include <aws/b2bi/model/ListPartnershipsResult.h>
#include <aws/b2bi/model/ListProfilesResult.h>
#include <aws/b2bi/model/ListTagsForResourceResult.h>
#include <aws/b2bi/model/ListTransformersResult.h>
#include <aws/b2bi/model/StartTransformerJobResult.h>
#include <aws/b2bi/model/TestMappingResult.h>
#include <aws/b2bi/model/TestParsingResult.h>
#include <aws/b2bi/model/UpdateCapabilityResult.h>
#include <aws/b2bi/model/UpdatePartnershipResult.h>
#include <aws/b2bi/model/UpdateProfileResult.h>
#include <aws/b2bi/model/UpdateTransformerResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in B2BIClient header */

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

  namespace B2BI
  {
    using B2BIClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using B2BIEndpointProviderBase = Aws::B2BI::Endpoint::B2BIEndpointProviderBase;
    using B2BIEndpointProvider = Aws::B2BI::Endpoint::B2BIEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in B2BIClient header */
      class CreateCapabilityRequest;
      class CreatePartnershipRequest;
      class CreateProfileRequest;
      class CreateTransformerRequest;
      class DeleteCapabilityRequest;
      class DeletePartnershipRequest;
      class DeleteProfileRequest;
      class DeleteTransformerRequest;
      class GetCapabilityRequest;
      class GetPartnershipRequest;
      class GetProfileRequest;
      class GetTransformerRequest;
      class GetTransformerJobRequest;
      class ListCapabilitiesRequest;
      class ListPartnershipsRequest;
      class ListProfilesRequest;
      class ListTagsForResourceRequest;
      class ListTransformersRequest;
      class StartTransformerJobRequest;
      class TagResourceRequest;
      class TestMappingRequest;
      class TestParsingRequest;
      class UntagResourceRequest;
      class UpdateCapabilityRequest;
      class UpdatePartnershipRequest;
      class UpdateProfileRequest;
      class UpdateTransformerRequest;
      /* End of service model forward declarations required in B2BIClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCapabilityResult, B2BIError> CreateCapabilityOutcome;
      typedef Aws::Utils::Outcome<CreatePartnershipResult, B2BIError> CreatePartnershipOutcome;
      typedef Aws::Utils::Outcome<CreateProfileResult, B2BIError> CreateProfileOutcome;
      typedef Aws::Utils::Outcome<CreateTransformerResult, B2BIError> CreateTransformerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, B2BIError> DeleteCapabilityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, B2BIError> DeletePartnershipOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, B2BIError> DeleteProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, B2BIError> DeleteTransformerOutcome;
      typedef Aws::Utils::Outcome<GetCapabilityResult, B2BIError> GetCapabilityOutcome;
      typedef Aws::Utils::Outcome<GetPartnershipResult, B2BIError> GetPartnershipOutcome;
      typedef Aws::Utils::Outcome<GetProfileResult, B2BIError> GetProfileOutcome;
      typedef Aws::Utils::Outcome<GetTransformerResult, B2BIError> GetTransformerOutcome;
      typedef Aws::Utils::Outcome<GetTransformerJobResult, B2BIError> GetTransformerJobOutcome;
      typedef Aws::Utils::Outcome<ListCapabilitiesResult, B2BIError> ListCapabilitiesOutcome;
      typedef Aws::Utils::Outcome<ListPartnershipsResult, B2BIError> ListPartnershipsOutcome;
      typedef Aws::Utils::Outcome<ListProfilesResult, B2BIError> ListProfilesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, B2BIError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTransformersResult, B2BIError> ListTransformersOutcome;
      typedef Aws::Utils::Outcome<StartTransformerJobResult, B2BIError> StartTransformerJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, B2BIError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestMappingResult, B2BIError> TestMappingOutcome;
      typedef Aws::Utils::Outcome<TestParsingResult, B2BIError> TestParsingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, B2BIError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCapabilityResult, B2BIError> UpdateCapabilityOutcome;
      typedef Aws::Utils::Outcome<UpdatePartnershipResult, B2BIError> UpdatePartnershipOutcome;
      typedef Aws::Utils::Outcome<UpdateProfileResult, B2BIError> UpdateProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateTransformerResult, B2BIError> UpdateTransformerOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCapabilityOutcome> CreateCapabilityOutcomeCallable;
      typedef std::future<CreatePartnershipOutcome> CreatePartnershipOutcomeCallable;
      typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
      typedef std::future<CreateTransformerOutcome> CreateTransformerOutcomeCallable;
      typedef std::future<DeleteCapabilityOutcome> DeleteCapabilityOutcomeCallable;
      typedef std::future<DeletePartnershipOutcome> DeletePartnershipOutcomeCallable;
      typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
      typedef std::future<DeleteTransformerOutcome> DeleteTransformerOutcomeCallable;
      typedef std::future<GetCapabilityOutcome> GetCapabilityOutcomeCallable;
      typedef std::future<GetPartnershipOutcome> GetPartnershipOutcomeCallable;
      typedef std::future<GetProfileOutcome> GetProfileOutcomeCallable;
      typedef std::future<GetTransformerOutcome> GetTransformerOutcomeCallable;
      typedef std::future<GetTransformerJobOutcome> GetTransformerJobOutcomeCallable;
      typedef std::future<ListCapabilitiesOutcome> ListCapabilitiesOutcomeCallable;
      typedef std::future<ListPartnershipsOutcome> ListPartnershipsOutcomeCallable;
      typedef std::future<ListProfilesOutcome> ListProfilesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTransformersOutcome> ListTransformersOutcomeCallable;
      typedef std::future<StartTransformerJobOutcome> StartTransformerJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestMappingOutcome> TestMappingOutcomeCallable;
      typedef std::future<TestParsingOutcome> TestParsingOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCapabilityOutcome> UpdateCapabilityOutcomeCallable;
      typedef std::future<UpdatePartnershipOutcome> UpdatePartnershipOutcomeCallable;
      typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
      typedef std::future<UpdateTransformerOutcome> UpdateTransformerOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class B2BIClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const B2BIClient*, const Model::CreateCapabilityRequest&, const Model::CreateCapabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCapabilityResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::CreatePartnershipRequest&, const Model::CreatePartnershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePartnershipResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::CreateTransformerRequest&, const Model::CreateTransformerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransformerResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::DeleteCapabilityRequest&, const Model::DeleteCapabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCapabilityResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::DeletePartnershipRequest&, const Model::DeletePartnershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePartnershipResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::DeleteTransformerRequest&, const Model::DeleteTransformerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransformerResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::GetCapabilityRequest&, const Model::GetCapabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCapabilityResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::GetPartnershipRequest&, const Model::GetPartnershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPartnershipResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::GetProfileRequest&, const Model::GetProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::GetTransformerRequest&, const Model::GetTransformerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransformerResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::GetTransformerJobRequest&, const Model::GetTransformerJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransformerJobResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::ListCapabilitiesRequest&, const Model::ListCapabilitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCapabilitiesResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::ListPartnershipsRequest&, const Model::ListPartnershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartnershipsResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::ListProfilesRequest&, const Model::ListProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfilesResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::ListTransformersRequest&, const Model::ListTransformersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTransformersResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::StartTransformerJobRequest&, const Model::StartTransformerJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTransformerJobResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::TestMappingRequest&, const Model::TestMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestMappingResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::TestParsingRequest&, const Model::TestParsingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestParsingResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::UpdateCapabilityRequest&, const Model::UpdateCapabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCapabilityResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::UpdatePartnershipRequest&, const Model::UpdatePartnershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePartnershipResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::UpdateProfileRequest&, const Model::UpdateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResponseReceivedHandler;
    typedef std::function<void(const B2BIClient*, const Model::UpdateTransformerRequest&, const Model::UpdateTransformerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTransformerResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace B2BI
} // namespace Aws
