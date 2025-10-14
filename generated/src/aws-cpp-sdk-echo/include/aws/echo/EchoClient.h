/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/echo/Echo_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/echo/EchoServiceClientModel.h>

namespace Aws
{
namespace Echo
{
class AWS_ECHO_API EchoClient : public Aws::Client::AWSRpcV2CborClient, public Aws::Client::ClientWithAsyncTemplateMethods<EchoClient>
{
public:
typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
static const char* GetServiceName();
static const char* GetAllocationTag();

      typedef EchoClientConfiguration ClientConfigurationType;
      typedef EchoEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EchoClient(const Aws::Echo::EchoClientConfiguration& clientConfiguration = Aws::Echo::EchoClientConfiguration(),
                   std::shared_ptr<EchoEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EchoClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<EchoEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::Echo::EchoClientConfiguration& clientConfiguration = Aws::Echo::EchoClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EchoClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<EchoEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::Echo::EchoClientConfiguration& clientConfiguration = Aws::Echo::EchoClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EchoClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EchoClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EchoClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EchoClient();

        /**
         * 
         */
        virtual Model::EchoOperationOutcome EchoOperation(const Model::EchoOperationRequest& request = {}) const;

        /**
         * A Callable wrapper for EchoOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EchoOperationRequestT = Model::EchoOperationRequest>
        Model::EchoOperationOutcomeCallable EchoOperationCallable(const EchoOperationRequestT& request = {}) const
        {
            return SubmitCallable(&EchoClient::EchoOperation, request);
        }

        /**
         * An Async wrapper for EchoOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EchoOperationRequestT = Model::EchoOperationRequest>
        void EchoOperationAsync(const EchoOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const EchoOperationRequestT& request = {}) const
        {
            return SubmitAsync(&EchoClient::EchoOperation, request, handler, context);
        }


void OverrideEndpoint(const Aws::String& endpoint);
std::shared_ptr<EchoEndpointProviderBase>& accessEndpointProvider();
    private:
    friend class Aws::Client::ClientWithAsyncTemplateMethods<EchoClient>;
    void init(const EchoClientConfiguration& clientConfiguration);

    EchoClientConfiguration m_clientConfiguration;
    std::shared_ptr<EchoEndpointProviderBase> m_endpointProvider;
    };

    } // namespace Echo
    } // namespace Aws
