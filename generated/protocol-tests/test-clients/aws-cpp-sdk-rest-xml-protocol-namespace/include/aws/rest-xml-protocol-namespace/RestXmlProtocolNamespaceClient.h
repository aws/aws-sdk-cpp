/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespace_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespaceServiceClientModel.h>

namespace Aws
{
namespace RestXmlProtocolNamespace
{
  /**
   * <p>A REST XML service that sends XML requests and responses.</p> <p>This service
   * and test case is complementary to the test cases in the <code>restXml</code>
   * directory, but the service under test here has the <code>xmlNamespace</code>
   * trait applied to it.</p> <p>See https://github.com/awslabs/smithy/issues/616</p>
   */
  class AWS_RESTXMLPROTOCOLNAMESPACE_API RestXmlProtocolNamespaceClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<RestXmlProtocolNamespaceClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RestXmlProtocolNamespaceClientConfiguration ClientConfigurationType;
      typedef RestXmlProtocolNamespaceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RestXmlProtocolNamespaceClient(const Aws::RestXmlProtocolNamespace::RestXmlProtocolNamespaceClientConfiguration& clientConfiguration = Aws::RestXmlProtocolNamespace::RestXmlProtocolNamespaceClientConfiguration(),
                                       std::shared_ptr<RestXmlProtocolNamespaceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RestXmlProtocolNamespaceClient(const Aws::Auth::AWSCredentials& credentials,
                                       std::shared_ptr<RestXmlProtocolNamespaceEndpointProviderBase> endpointProvider = nullptr,
                                       const Aws::RestXmlProtocolNamespace::RestXmlProtocolNamespaceClientConfiguration& clientConfiguration = Aws::RestXmlProtocolNamespace::RestXmlProtocolNamespaceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RestXmlProtocolNamespaceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<RestXmlProtocolNamespaceEndpointProviderBase> endpointProvider = nullptr,
                                       const Aws::RestXmlProtocolNamespace::RestXmlProtocolNamespaceClientConfiguration& clientConfiguration = Aws::RestXmlProtocolNamespace::RestXmlProtocolNamespaceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RestXmlProtocolNamespaceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RestXmlProtocolNamespaceClient(const Aws::Auth::AWSCredentials& credentials,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RestXmlProtocolNamespaceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RestXmlProtocolNamespaceClient();


        /**
         * 
         */
        virtual Model::SimpleScalarPropertiesOutcome SimpleScalarProperties(const Model::SimpleScalarPropertiesRequest& request = {}) const;

        /**
         * A Callable wrapper for SimpleScalarProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SimpleScalarPropertiesRequestT = Model::SimpleScalarPropertiesRequest>
        Model::SimpleScalarPropertiesOutcomeCallable SimpleScalarPropertiesCallable(const SimpleScalarPropertiesRequestT& request = {}) const
        {
            return SubmitCallable(&RestXmlProtocolNamespaceClient::SimpleScalarProperties, request);
        }

        /**
         * An Async wrapper for SimpleScalarProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SimpleScalarPropertiesRequestT = Model::SimpleScalarPropertiesRequest>
        void SimpleScalarPropertiesAsync(const SimpleScalarPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const SimpleScalarPropertiesRequestT& request = {}) const
        {
            return SubmitAsync(&RestXmlProtocolNamespaceClient::SimpleScalarProperties, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<RestXmlProtocolNamespaceEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<RestXmlProtocolNamespaceClient>;
        void init(const RestXmlProtocolNamespaceClientConfiguration& clientConfiguration);

        RestXmlProtocolNamespaceClientConfiguration m_clientConfiguration;
        std::shared_ptr<RestXmlProtocolNamespaceEndpointProviderBase> m_endpointProvider;
  };

} // namespace RestXmlProtocolNamespace
} // namespace Aws
