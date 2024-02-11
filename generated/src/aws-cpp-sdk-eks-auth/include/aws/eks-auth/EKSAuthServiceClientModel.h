/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/eks-auth/EKSAuthErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/eks-auth/EKSAuthEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EKSAuthClient header */
#include <aws/eks-auth/model/AssumeRoleForPodIdentityResult.h>
/* End of service model headers required in EKSAuthClient header */

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

  namespace EKSAuth
  {
    using EKSAuthClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EKSAuthEndpointProviderBase = Aws::EKSAuth::Endpoint::EKSAuthEndpointProviderBase;
    using EKSAuthEndpointProvider = Aws::EKSAuth::Endpoint::EKSAuthEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EKSAuthClient header */
      class AssumeRoleForPodIdentityRequest;
      /* End of service model forward declarations required in EKSAuthClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssumeRoleForPodIdentityResult, EKSAuthError> AssumeRoleForPodIdentityOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssumeRoleForPodIdentityOutcome> AssumeRoleForPodIdentityOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EKSAuthClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EKSAuthClient*, const Model::AssumeRoleForPodIdentityRequest&, const Model::AssumeRoleForPodIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssumeRoleForPodIdentityResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EKSAuth
} // namespace Aws
