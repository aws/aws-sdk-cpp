/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudhsm/CloudHSMErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudhsm/CloudHSMEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudHSMClient header */
/* End of service model headers required in CloudHSMClient header */

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

  namespace CloudHSM
  {
    using CloudHSMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudHSMEndpointProviderBase = Aws::CloudHSM::Endpoint::CloudHSMEndpointProviderBase;
    using CloudHSMEndpointProvider = Aws::CloudHSM::Endpoint::CloudHSMEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudHSMClient header */
      /* End of service model forward declarations required in CloudHSMClient header */

      /* Service model Outcome class definitions */
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudHSMClient;

    /* Service model async handlers definitions */
    /* End of service model async handlers definitions */
  } // namespace CloudHSM
} // namespace Aws
