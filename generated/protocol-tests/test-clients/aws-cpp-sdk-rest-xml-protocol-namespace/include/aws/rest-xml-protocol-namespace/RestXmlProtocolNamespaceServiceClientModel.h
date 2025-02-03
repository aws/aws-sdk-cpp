/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespaceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespaceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RestXmlProtocolNamespaceClient header */
#include <aws/rest-xml-protocol-namespace/model/SimpleScalarPropertiesResult.h>
#include <aws/rest-xml-protocol-namespace/model/SimpleScalarPropertiesRequest.h>
/* End of service model headers required in RestXmlProtocolNamespaceClient header */

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

  namespace RestXmlProtocolNamespace
  {
    using RestXmlProtocolNamespaceClientConfiguration = Aws::Client::GenericClientConfiguration;
    using RestXmlProtocolNamespaceEndpointProviderBase = Aws::RestXmlProtocolNamespace::Endpoint::RestXmlProtocolNamespaceEndpointProviderBase;
    using RestXmlProtocolNamespaceEndpointProvider = Aws::RestXmlProtocolNamespace::Endpoint::RestXmlProtocolNamespaceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RestXmlProtocolNamespaceClient header */
      class SimpleScalarPropertiesRequest;
      /* End of service model forward declarations required in RestXmlProtocolNamespaceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<SimpleScalarPropertiesResult, RestXmlProtocolNamespaceError> SimpleScalarPropertiesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<SimpleScalarPropertiesOutcome> SimpleScalarPropertiesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RestXmlProtocolNamespaceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RestXmlProtocolNamespaceClient*, const Model::SimpleScalarPropertiesRequest&, const Model::SimpleScalarPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SimpleScalarPropertiesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RestXmlProtocolNamespace
} // namespace Aws
