/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iotthingsgraph/IoTThingsGraphErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iotthingsgraph/IoTThingsGraphEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTThingsGraphClient header */
/* End of service model headers required in IoTThingsGraphClient header */

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

  namespace IoTThingsGraph
  {
    using IoTThingsGraphClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTThingsGraphEndpointProviderBase = Aws::IoTThingsGraph::Endpoint::IoTThingsGraphEndpointProviderBase;
    using IoTThingsGraphEndpointProvider = Aws::IoTThingsGraph::Endpoint::IoTThingsGraphEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTThingsGraphClient header */
      /* End of service model forward declarations required in IoTThingsGraphClient header */

      /* Service model Outcome class definitions */
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTThingsGraphClient;

    /* Service model async handlers definitions */
    /* End of service model async handlers definitions */
  } // namespace IoTThingsGraph
} // namespace Aws
