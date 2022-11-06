/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/signer/SignerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/signer/SignerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SignerClient header */
#include <aws/signer/model/AddProfilePermissionResult.h>
#include <aws/signer/model/DescribeSigningJobResult.h>
#include <aws/signer/model/GetSigningPlatformResult.h>
#include <aws/signer/model/GetSigningProfileResult.h>
#include <aws/signer/model/ListProfilePermissionsResult.h>
#include <aws/signer/model/ListSigningJobsResult.h>
#include <aws/signer/model/ListSigningPlatformsResult.h>
#include <aws/signer/model/ListSigningProfilesResult.h>
#include <aws/signer/model/ListTagsForResourceResult.h>
#include <aws/signer/model/PutSigningProfileResult.h>
#include <aws/signer/model/RemoveProfilePermissionResult.h>
#include <aws/signer/model/StartSigningJobResult.h>
#include <aws/signer/model/TagResourceResult.h>
#include <aws/signer/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SignerClient header */

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

  namespace signer
  {
    using SignerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SignerEndpointProviderBase = Aws::signer::Endpoint::SignerEndpointProviderBase;
    using SignerEndpointProvider = Aws::signer::Endpoint::SignerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SignerClient header */
      class AddProfilePermissionRequest;
      class CancelSigningProfileRequest;
      class DescribeSigningJobRequest;
      class GetSigningPlatformRequest;
      class GetSigningProfileRequest;
      class ListProfilePermissionsRequest;
      class ListSigningJobsRequest;
      class ListSigningPlatformsRequest;
      class ListSigningProfilesRequest;
      class ListTagsForResourceRequest;
      class PutSigningProfileRequest;
      class RemoveProfilePermissionRequest;
      class RevokeSignatureRequest;
      class RevokeSigningProfileRequest;
      class StartSigningJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in SignerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddProfilePermissionResult, SignerError> AddProfilePermissionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SignerError> CancelSigningProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeSigningJobResult, SignerError> DescribeSigningJobOutcome;
      typedef Aws::Utils::Outcome<GetSigningPlatformResult, SignerError> GetSigningPlatformOutcome;
      typedef Aws::Utils::Outcome<GetSigningProfileResult, SignerError> GetSigningProfileOutcome;
      typedef Aws::Utils::Outcome<ListProfilePermissionsResult, SignerError> ListProfilePermissionsOutcome;
      typedef Aws::Utils::Outcome<ListSigningJobsResult, SignerError> ListSigningJobsOutcome;
      typedef Aws::Utils::Outcome<ListSigningPlatformsResult, SignerError> ListSigningPlatformsOutcome;
      typedef Aws::Utils::Outcome<ListSigningProfilesResult, SignerError> ListSigningProfilesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SignerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutSigningProfileResult, SignerError> PutSigningProfileOutcome;
      typedef Aws::Utils::Outcome<RemoveProfilePermissionResult, SignerError> RemoveProfilePermissionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SignerError> RevokeSignatureOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SignerError> RevokeSigningProfileOutcome;
      typedef Aws::Utils::Outcome<StartSigningJobResult, SignerError> StartSigningJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SignerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SignerError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddProfilePermissionOutcome> AddProfilePermissionOutcomeCallable;
      typedef std::future<CancelSigningProfileOutcome> CancelSigningProfileOutcomeCallable;
      typedef std::future<DescribeSigningJobOutcome> DescribeSigningJobOutcomeCallable;
      typedef std::future<GetSigningPlatformOutcome> GetSigningPlatformOutcomeCallable;
      typedef std::future<GetSigningProfileOutcome> GetSigningProfileOutcomeCallable;
      typedef std::future<ListProfilePermissionsOutcome> ListProfilePermissionsOutcomeCallable;
      typedef std::future<ListSigningJobsOutcome> ListSigningJobsOutcomeCallable;
      typedef std::future<ListSigningPlatformsOutcome> ListSigningPlatformsOutcomeCallable;
      typedef std::future<ListSigningProfilesOutcome> ListSigningProfilesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutSigningProfileOutcome> PutSigningProfileOutcomeCallable;
      typedef std::future<RemoveProfilePermissionOutcome> RemoveProfilePermissionOutcomeCallable;
      typedef std::future<RevokeSignatureOutcome> RevokeSignatureOutcomeCallable;
      typedef std::future<RevokeSigningProfileOutcome> RevokeSigningProfileOutcomeCallable;
      typedef std::future<StartSigningJobOutcome> StartSigningJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SignerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SignerClient*, const Model::AddProfilePermissionRequest&, const Model::AddProfilePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddProfilePermissionResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::CancelSigningProfileRequest&, const Model::CancelSigningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSigningProfileResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::DescribeSigningJobRequest&, const Model::DescribeSigningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSigningJobResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::GetSigningPlatformRequest&, const Model::GetSigningPlatformOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSigningPlatformResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::GetSigningProfileRequest&, const Model::GetSigningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSigningProfileResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::ListProfilePermissionsRequest&, const Model::ListProfilePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfilePermissionsResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::ListSigningJobsRequest&, const Model::ListSigningJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSigningJobsResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::ListSigningPlatformsRequest&, const Model::ListSigningPlatformsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSigningPlatformsResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::ListSigningProfilesRequest&, const Model::ListSigningProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSigningProfilesResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::PutSigningProfileRequest&, const Model::PutSigningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSigningProfileResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::RemoveProfilePermissionRequest&, const Model::RemoveProfilePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveProfilePermissionResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::RevokeSignatureRequest&, const Model::RevokeSignatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSignatureResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::RevokeSigningProfileRequest&, const Model::RevokeSigningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSigningProfileResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::StartSigningJobRequest&, const Model::StartSigningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSigningJobResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace signer
} // namespace Aws
