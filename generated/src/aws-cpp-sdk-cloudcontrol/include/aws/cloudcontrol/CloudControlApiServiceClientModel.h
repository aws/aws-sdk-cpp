/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudcontrol/CloudControlApiErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudcontrol/CloudControlApiEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudControlApiClient header */
#include <aws/cloudcontrol/model/CancelResourceRequestResult.h>
#include <aws/cloudcontrol/model/CreateResourceResult.h>
#include <aws/cloudcontrol/model/DeleteResourceResult.h>
#include <aws/cloudcontrol/model/GetResourceResult.h>
#include <aws/cloudcontrol/model/GetResourceRequestStatusResult.h>
#include <aws/cloudcontrol/model/ListResourceRequestsResult.h>
#include <aws/cloudcontrol/model/ListResourcesResult.h>
#include <aws/cloudcontrol/model/UpdateResourceResult.h>
/* End of service model headers required in CloudControlApiClient header */

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

  namespace CloudControlApi
  {
    using CloudControlApiClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudControlApiEndpointProviderBase = Aws::CloudControlApi::Endpoint::CloudControlApiEndpointProviderBase;
    using CloudControlApiEndpointProvider = Aws::CloudControlApi::Endpoint::CloudControlApiEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudControlApiClient header */
      class CancelResourceRequestRequest;
      class CreateResourceRequest;
      class DeleteResourceRequest;
      class GetResourceRequest;
      class GetResourceRequestStatusRequest;
      class ListResourceRequestsRequest;
      class ListResourcesRequest;
      class UpdateResourceRequest;
      /* End of service model forward declarations required in CloudControlApiClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelResourceRequestResult, CloudControlApiError> CancelResourceRequestOutcome;
      typedef Aws::Utils::Outcome<CreateResourceResult, CloudControlApiError> CreateResourceOutcome;
      typedef Aws::Utils::Outcome<DeleteResourceResult, CloudControlApiError> DeleteResourceOutcome;
      typedef Aws::Utils::Outcome<GetResourceResult, CloudControlApiError> GetResourceOutcome;
      typedef Aws::Utils::Outcome<GetResourceRequestStatusResult, CloudControlApiError> GetResourceRequestStatusOutcome;
      typedef Aws::Utils::Outcome<ListResourceRequestsResult, CloudControlApiError> ListResourceRequestsOutcome;
      typedef Aws::Utils::Outcome<ListResourcesResult, CloudControlApiError> ListResourcesOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceResult, CloudControlApiError> UpdateResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelResourceRequestOutcome> CancelResourceRequestOutcomeCallable;
      typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
      typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
      typedef std::future<GetResourceOutcome> GetResourceOutcomeCallable;
      typedef std::future<GetResourceRequestStatusOutcome> GetResourceRequestStatusOutcomeCallable;
      typedef std::future<ListResourceRequestsOutcome> ListResourceRequestsOutcomeCallable;
      typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
      typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudControlApiClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudControlApiClient*, const Model::CancelResourceRequestRequest&, const Model::CancelResourceRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelResourceRequestResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::CreateResourceRequest&, const Model::CreateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::DeleteResourceRequest&, const Model::DeleteResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::GetResourceRequest&, const Model::GetResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::GetResourceRequestStatusRequest&, const Model::GetResourceRequestStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceRequestStatusResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::ListResourceRequestsRequest&, const Model::ListResourceRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceRequestsResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::UpdateResourceRequest&, const Model::UpdateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudControlApi
} // namespace Aws
