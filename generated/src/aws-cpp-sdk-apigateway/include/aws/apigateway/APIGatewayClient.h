/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apigateway/APIGatewayServiceClientModel.h>

namespace Aws
{
namespace APIGateway
{
  /**
   * <fullname>Amazon API Gateway</fullname> <p>Amazon API Gateway helps developers
   * deliver robust, secure, and scalable mobile and web application back ends. API
   * Gateway allows developers to securely connect mobile and web applications to
   * APIs that run on Lambda, Amazon EC2, or other publicly addressable web services
   * that are hosted outside of AWS.</p>
   */
  class AWS_APIGATEWAY_API APIGatewayClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<APIGatewayClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef APIGatewayClientConfiguration ClientConfigurationType;
      typedef APIGatewayEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        APIGatewayClient(const Aws::APIGateway::APIGatewayClientConfiguration& clientConfiguration = Aws::APIGateway::APIGatewayClientConfiguration(),
                         std::shared_ptr<APIGatewayEndpointProviderBase> endpointProvider = Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        APIGatewayClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<APIGatewayEndpointProviderBase> endpointProvider = Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG),
                         const Aws::APIGateway::APIGatewayClientConfiguration& clientConfiguration = Aws::APIGateway::APIGatewayClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        APIGatewayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<APIGatewayEndpointProviderBase> endpointProvider = Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG),
                         const Aws::APIGateway::APIGatewayClientConfiguration& clientConfiguration = Aws::APIGateway::APIGatewayClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        APIGatewayClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        APIGatewayClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        APIGatewayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~APIGatewayClient();

        /**
         * <p>Create an ApiKey resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiKeyOutcome CreateApiKey(const Model::CreateApiKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApiKeyRequestT = Model::CreateApiKeyRequest>
        Model::CreateApiKeyOutcomeCallable CreateApiKeyCallable(const CreateApiKeyRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateApiKey, request);
        }

        /**
         * An Async wrapper for CreateApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApiKeyRequestT = Model::CreateApiKeyRequest>
        void CreateApiKeyAsync(const CreateApiKeyRequestT& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateApiKey, request, handler, context);
        }

        /**
         * <p>Adds a new Authorizer resource to an existing RestApi resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAuthorizerOutcome CreateAuthorizer(const Model::CreateAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for CreateAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAuthorizerRequestT = Model::CreateAuthorizerRequest>
        Model::CreateAuthorizerOutcomeCallable CreateAuthorizerCallable(const CreateAuthorizerRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateAuthorizer, request);
        }

        /**
         * An Async wrapper for CreateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAuthorizerRequestT = Model::CreateAuthorizerRequest>
        void CreateAuthorizerAsync(const CreateAuthorizerRequestT& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateAuthorizer, request, handler, context);
        }

        /**
         * <p>Creates a new BasePathMapping resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBasePathMappingOutcome CreateBasePathMapping(const Model::CreateBasePathMappingRequest& request) const;

        /**
         * A Callable wrapper for CreateBasePathMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBasePathMappingRequestT = Model::CreateBasePathMappingRequest>
        Model::CreateBasePathMappingOutcomeCallable CreateBasePathMappingCallable(const CreateBasePathMappingRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateBasePathMapping, request);
        }

        /**
         * An Async wrapper for CreateBasePathMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBasePathMappingRequestT = Model::CreateBasePathMappingRequest>
        void CreateBasePathMappingAsync(const CreateBasePathMappingRequestT& request, const CreateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateBasePathMapping, request, handler, context);
        }

        /**
         * <p>Creates a Deployment resource, which makes a specified RestApi callable over
         * the internet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const CreateDeploymentRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateDeployment, request);
        }

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        void CreateDeploymentAsync(const CreateDeploymentRequestT& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateDeployment, request, handler, context);
        }

        /**
         * <p>Creates a documentation part.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentationPartOutcome CreateDocumentationPart(const Model::CreateDocumentationPartRequest& request) const;

        /**
         * A Callable wrapper for CreateDocumentationPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDocumentationPartRequestT = Model::CreateDocumentationPartRequest>
        Model::CreateDocumentationPartOutcomeCallable CreateDocumentationPartCallable(const CreateDocumentationPartRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateDocumentationPart, request);
        }

        /**
         * An Async wrapper for CreateDocumentationPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDocumentationPartRequestT = Model::CreateDocumentationPartRequest>
        void CreateDocumentationPartAsync(const CreateDocumentationPartRequestT& request, const CreateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateDocumentationPart, request, handler, context);
        }

        /**
         * <p>Creates a documentation version</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentationVersionOutcome CreateDocumentationVersion(const Model::CreateDocumentationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateDocumentationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDocumentationVersionRequestT = Model::CreateDocumentationVersionRequest>
        Model::CreateDocumentationVersionOutcomeCallable CreateDocumentationVersionCallable(const CreateDocumentationVersionRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateDocumentationVersion, request);
        }

        /**
         * An Async wrapper for CreateDocumentationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDocumentationVersionRequestT = Model::CreateDocumentationVersionRequest>
        void CreateDocumentationVersionAsync(const CreateDocumentationVersionRequestT& request, const CreateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateDocumentationVersion, request, handler, context);
        }

        /**
         * <p>Creates a new domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainNameOutcome CreateDomainName(const Model::CreateDomainNameRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainNameRequestT = Model::CreateDomainNameRequest>
        Model::CreateDomainNameOutcomeCallable CreateDomainNameCallable(const CreateDomainNameRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateDomainName, request);
        }

        /**
         * An Async wrapper for CreateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainNameRequestT = Model::CreateDomainNameRequest>
        void CreateDomainNameAsync(const CreateDomainNameRequestT& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateDomainName, request, handler, context);
        }

        /**
         * <p>Adds a new Model resource to an existing RestApi resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * A Callable wrapper for CreateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        Model::CreateModelOutcomeCallable CreateModelCallable(const CreateModelRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateModel, request);
        }

        /**
         * An Async wrapper for CreateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        void CreateModelAsync(const CreateModelRequestT& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateModel, request, handler, context);
        }

        /**
         * <p>Creates a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRequestValidatorOutcome CreateRequestValidator(const Model::CreateRequestValidatorRequest& request) const;

        /**
         * A Callable wrapper for CreateRequestValidator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRequestValidatorRequestT = Model::CreateRequestValidatorRequest>
        Model::CreateRequestValidatorOutcomeCallable CreateRequestValidatorCallable(const CreateRequestValidatorRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateRequestValidator, request);
        }

        /**
         * An Async wrapper for CreateRequestValidator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRequestValidatorRequestT = Model::CreateRequestValidatorRequest>
        void CreateRequestValidatorAsync(const CreateRequestValidatorRequestT& request, const CreateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateRequestValidator, request, handler, context);
        }

        /**
         * <p>Creates a Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;

        /**
         * A Callable wrapper for CreateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceRequestT = Model::CreateResourceRequest>
        Model::CreateResourceOutcomeCallable CreateResourceCallable(const CreateResourceRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateResource, request);
        }

        /**
         * An Async wrapper for CreateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceRequestT = Model::CreateResourceRequest>
        void CreateResourceAsync(const CreateResourceRequestT& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateResource, request, handler, context);
        }

        /**
         * <p>Creates a new RestApi resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRestApiOutcome CreateRestApi(const Model::CreateRestApiRequest& request) const;

        /**
         * A Callable wrapper for CreateRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRestApiRequestT = Model::CreateRestApiRequest>
        Model::CreateRestApiOutcomeCallable CreateRestApiCallable(const CreateRestApiRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateRestApi, request);
        }

        /**
         * An Async wrapper for CreateRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRestApiRequestT = Model::CreateRestApiRequest>
        void CreateRestApiAsync(const CreateRestApiRequestT& request, const CreateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateRestApi, request, handler, context);
        }

        /**
         * <p>Creates a new Stage resource that references a pre-existing Deployment for
         * the API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStageOutcome CreateStage(const Model::CreateStageRequest& request) const;

        /**
         * A Callable wrapper for CreateStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStageRequestT = Model::CreateStageRequest>
        Model::CreateStageOutcomeCallable CreateStageCallable(const CreateStageRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateStage, request);
        }

        /**
         * An Async wrapper for CreateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStageRequestT = Model::CreateStageRequest>
        void CreateStageAsync(const CreateStageRequestT& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateStage, request, handler, context);
        }

        /**
         * <p>Creates a usage plan with the throttle and quota limits, as well as the
         * associated API stages, specified in the payload. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsagePlanOutcome CreateUsagePlan(const Model::CreateUsagePlanRequest& request) const;

        /**
         * A Callable wrapper for CreateUsagePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUsagePlanRequestT = Model::CreateUsagePlanRequest>
        Model::CreateUsagePlanOutcomeCallable CreateUsagePlanCallable(const CreateUsagePlanRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateUsagePlan, request);
        }

        /**
         * An Async wrapper for CreateUsagePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUsagePlanRequestT = Model::CreateUsagePlanRequest>
        void CreateUsagePlanAsync(const CreateUsagePlanRequestT& request, const CreateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateUsagePlan, request, handler, context);
        }

        /**
         * <p>Creates a usage plan key for adding an existing API key to a usage
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateUsagePlanKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsagePlanKeyOutcome CreateUsagePlanKey(const Model::CreateUsagePlanKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateUsagePlanKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUsagePlanKeyRequestT = Model::CreateUsagePlanKeyRequest>
        Model::CreateUsagePlanKeyOutcomeCallable CreateUsagePlanKeyCallable(const CreateUsagePlanKeyRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateUsagePlanKey, request);
        }

        /**
         * An Async wrapper for CreateUsagePlanKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUsagePlanKeyRequestT = Model::CreateUsagePlanKeyRequest>
        void CreateUsagePlanKeyAsync(const CreateUsagePlanKeyRequestT& request, const CreateUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateUsagePlanKey, request, handler, context);
        }

        /**
         * <p>Creates a VPC link, under the caller's account in a selected region, in an
         * asynchronous operation that typically takes 2-4 minutes to complete and become
         * operational. The caller must have permissions to create and update VPC Endpoint
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcLinkOutcome CreateVpcLink(const Model::CreateVpcLinkRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVpcLinkRequestT = Model::CreateVpcLinkRequest>
        Model::CreateVpcLinkOutcomeCallable CreateVpcLinkCallable(const CreateVpcLinkRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::CreateVpcLink, request);
        }

        /**
         * An Async wrapper for CreateVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcLinkRequestT = Model::CreateVpcLinkRequest>
        void CreateVpcLinkAsync(const CreateVpcLinkRequestT& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::CreateVpcLink, request, handler, context);
        }

        /**
         * <p>Deletes the ApiKey resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApiKeyRequestT = Model::DeleteApiKeyRequest>
        Model::DeleteApiKeyOutcomeCallable DeleteApiKeyCallable(const DeleteApiKeyRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteApiKey, request);
        }

        /**
         * An Async wrapper for DeleteApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApiKeyRequestT = Model::DeleteApiKeyRequest>
        void DeleteApiKeyAsync(const DeleteApiKeyRequestT& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteApiKey, request, handler, context);
        }

        /**
         * <p>Deletes an existing Authorizer resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuthorizerOutcome DeleteAuthorizer(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for DeleteAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAuthorizerRequestT = Model::DeleteAuthorizerRequest>
        Model::DeleteAuthorizerOutcomeCallable DeleteAuthorizerCallable(const DeleteAuthorizerRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteAuthorizer, request);
        }

        /**
         * An Async wrapper for DeleteAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAuthorizerRequestT = Model::DeleteAuthorizerRequest>
        void DeleteAuthorizerAsync(const DeleteAuthorizerRequestT& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteAuthorizer, request, handler, context);
        }

        /**
         * <p>Deletes the BasePathMapping resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBasePathMappingOutcome DeleteBasePathMapping(const Model::DeleteBasePathMappingRequest& request) const;

        /**
         * A Callable wrapper for DeleteBasePathMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBasePathMappingRequestT = Model::DeleteBasePathMappingRequest>
        Model::DeleteBasePathMappingOutcomeCallable DeleteBasePathMappingCallable(const DeleteBasePathMappingRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteBasePathMapping, request);
        }

        /**
         * An Async wrapper for DeleteBasePathMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBasePathMappingRequestT = Model::DeleteBasePathMappingRequest>
        void DeleteBasePathMappingAsync(const DeleteBasePathMappingRequestT& request, const DeleteBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteBasePathMapping, request, handler, context);
        }

        /**
         * <p>Deletes the ClientCertificate resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClientCertificateOutcome DeleteClientCertificate(const Model::DeleteClientCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteClientCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClientCertificateRequestT = Model::DeleteClientCertificateRequest>
        Model::DeleteClientCertificateOutcomeCallable DeleteClientCertificateCallable(const DeleteClientCertificateRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteClientCertificate, request);
        }

        /**
         * An Async wrapper for DeleteClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClientCertificateRequestT = Model::DeleteClientCertificateRequest>
        void DeleteClientCertificateAsync(const DeleteClientCertificateRequestT& request, const DeleteClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteClientCertificate, request, handler, context);
        }

        /**
         * <p>Deletes a Deployment resource. Deleting a deployment will only succeed if
         * there are no Stage resources associated with it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentOutcome DeleteDeployment(const Model::DeleteDeploymentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
        Model::DeleteDeploymentOutcomeCallable DeleteDeploymentCallable(const DeleteDeploymentRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteDeployment, request);
        }

        /**
         * An Async wrapper for DeleteDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
        void DeleteDeploymentAsync(const DeleteDeploymentRequestT& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteDeployment, request, handler, context);
        }

        /**
         * <p>Deletes a documentation part</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentationPartOutcome DeleteDocumentationPart(const Model::DeleteDocumentationPartRequest& request) const;

        /**
         * A Callable wrapper for DeleteDocumentationPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDocumentationPartRequestT = Model::DeleteDocumentationPartRequest>
        Model::DeleteDocumentationPartOutcomeCallable DeleteDocumentationPartCallable(const DeleteDocumentationPartRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteDocumentationPart, request);
        }

        /**
         * An Async wrapper for DeleteDocumentationPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDocumentationPartRequestT = Model::DeleteDocumentationPartRequest>
        void DeleteDocumentationPartAsync(const DeleteDocumentationPartRequestT& request, const DeleteDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteDocumentationPart, request, handler, context);
        }

        /**
         * <p>Deletes a documentation version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentationVersionOutcome DeleteDocumentationVersion(const Model::DeleteDocumentationVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDocumentationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDocumentationVersionRequestT = Model::DeleteDocumentationVersionRequest>
        Model::DeleteDocumentationVersionOutcomeCallable DeleteDocumentationVersionCallable(const DeleteDocumentationVersionRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteDocumentationVersion, request);
        }

        /**
         * An Async wrapper for DeleteDocumentationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDocumentationVersionRequestT = Model::DeleteDocumentationVersionRequest>
        void DeleteDocumentationVersionAsync(const DeleteDocumentationVersionRequestT& request, const DeleteDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteDocumentationVersion, request, handler, context);
        }

        /**
         * <p>Deletes the DomainName resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainNameOutcome DeleteDomainName(const Model::DeleteDomainNameRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainNameRequestT = Model::DeleteDomainNameRequest>
        Model::DeleteDomainNameOutcomeCallable DeleteDomainNameCallable(const DeleteDomainNameRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteDomainName, request);
        }

        /**
         * An Async wrapper for DeleteDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainNameRequestT = Model::DeleteDomainNameRequest>
        void DeleteDomainNameAsync(const DeleteDomainNameRequestT& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteDomainName, request, handler, context);
        }

        /**
         * <p>Clears any customization of a GatewayResponse of a specified response type on
         * the given RestApi and resets it with the default settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteGatewayResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayResponseOutcome DeleteGatewayResponse(const Model::DeleteGatewayResponseRequest& request) const;

        /**
         * A Callable wrapper for DeleteGatewayResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGatewayResponseRequestT = Model::DeleteGatewayResponseRequest>
        Model::DeleteGatewayResponseOutcomeCallable DeleteGatewayResponseCallable(const DeleteGatewayResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteGatewayResponse, request);
        }

        /**
         * An Async wrapper for DeleteGatewayResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGatewayResponseRequestT = Model::DeleteGatewayResponseRequest>
        void DeleteGatewayResponseAsync(const DeleteGatewayResponseRequestT& request, const DeleteGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteGatewayResponse, request, handler, context);
        }

        /**
         * <p>Represents a delete integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
        Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const DeleteIntegrationRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteIntegration, request);
        }

        /**
         * An Async wrapper for DeleteIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
        void DeleteIntegrationAsync(const DeleteIntegrationRequestT& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteIntegration, request, handler, context);
        }

        /**
         * <p>Represents a delete integration response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationResponseOutcome DeleteIntegrationResponse(const Model::DeleteIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntegrationResponseRequestT = Model::DeleteIntegrationResponseRequest>
        Model::DeleteIntegrationResponseOutcomeCallable DeleteIntegrationResponseCallable(const DeleteIntegrationResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteIntegrationResponse, request);
        }

        /**
         * An Async wrapper for DeleteIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntegrationResponseRequestT = Model::DeleteIntegrationResponseRequest>
        void DeleteIntegrationResponseAsync(const DeleteIntegrationResponseRequestT& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteIntegrationResponse, request, handler, context);
        }

        /**
         * <p>Deletes an existing Method resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMethodOutcome DeleteMethod(const Model::DeleteMethodRequest& request) const;

        /**
         * A Callable wrapper for DeleteMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMethodRequestT = Model::DeleteMethodRequest>
        Model::DeleteMethodOutcomeCallable DeleteMethodCallable(const DeleteMethodRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteMethod, request);
        }

        /**
         * An Async wrapper for DeleteMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMethodRequestT = Model::DeleteMethodRequest>
        void DeleteMethodAsync(const DeleteMethodRequestT& request, const DeleteMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteMethod, request, handler, context);
        }

        /**
         * <p>Deletes an existing MethodResponse resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMethodResponseOutcome DeleteMethodResponse(const Model::DeleteMethodResponseRequest& request) const;

        /**
         * A Callable wrapper for DeleteMethodResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMethodResponseRequestT = Model::DeleteMethodResponseRequest>
        Model::DeleteMethodResponseOutcomeCallable DeleteMethodResponseCallable(const DeleteMethodResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteMethodResponse, request);
        }

        /**
         * An Async wrapper for DeleteMethodResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMethodResponseRequestT = Model::DeleteMethodResponseRequest>
        void DeleteMethodResponseAsync(const DeleteMethodResponseRequestT& request, const DeleteMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteMethodResponse, request, handler, context);
        }

        /**
         * <p>Deletes a model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        Model::DeleteModelOutcomeCallable DeleteModelCallable(const DeleteModelRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteModel, request);
        }

        /**
         * An Async wrapper for DeleteModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        void DeleteModelAsync(const DeleteModelRequestT& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteModel, request, handler, context);
        }

        /**
         * <p>Deletes a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRequestValidatorOutcome DeleteRequestValidator(const Model::DeleteRequestValidatorRequest& request) const;

        /**
         * A Callable wrapper for DeleteRequestValidator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRequestValidatorRequestT = Model::DeleteRequestValidatorRequest>
        Model::DeleteRequestValidatorOutcomeCallable DeleteRequestValidatorCallable(const DeleteRequestValidatorRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteRequestValidator, request);
        }

        /**
         * An Async wrapper for DeleteRequestValidator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRequestValidatorRequestT = Model::DeleteRequestValidatorRequest>
        void DeleteRequestValidatorAsync(const DeleteRequestValidatorRequestT& request, const DeleteRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteRequestValidator, request, handler, context);
        }

        /**
         * <p>Deletes a Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceRequestT = Model::DeleteResourceRequest>
        Model::DeleteResourceOutcomeCallable DeleteResourceCallable(const DeleteResourceRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteResource, request);
        }

        /**
         * An Async wrapper for DeleteResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceRequestT = Model::DeleteResourceRequest>
        void DeleteResourceAsync(const DeleteResourceRequestT& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteResource, request, handler, context);
        }

        /**
         * <p>Deletes the specified API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRestApiOutcome DeleteRestApi(const Model::DeleteRestApiRequest& request) const;

        /**
         * A Callable wrapper for DeleteRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRestApiRequestT = Model::DeleteRestApiRequest>
        Model::DeleteRestApiOutcomeCallable DeleteRestApiCallable(const DeleteRestApiRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteRestApi, request);
        }

        /**
         * An Async wrapper for DeleteRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRestApiRequestT = Model::DeleteRestApiRequest>
        void DeleteRestApiAsync(const DeleteRestApiRequestT& request, const DeleteRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteRestApi, request, handler, context);
        }

        /**
         * <p>Deletes a Stage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStageOutcome DeleteStage(const Model::DeleteStageRequest& request) const;

        /**
         * A Callable wrapper for DeleteStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStageRequestT = Model::DeleteStageRequest>
        Model::DeleteStageOutcomeCallable DeleteStageCallable(const DeleteStageRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteStage, request);
        }

        /**
         * An Async wrapper for DeleteStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStageRequestT = Model::DeleteStageRequest>
        void DeleteStageAsync(const DeleteStageRequestT& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteStage, request, handler, context);
        }

        /**
         * <p>Deletes a usage plan of a given plan Id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsagePlanOutcome DeleteUsagePlan(const Model::DeleteUsagePlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteUsagePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUsagePlanRequestT = Model::DeleteUsagePlanRequest>
        Model::DeleteUsagePlanOutcomeCallable DeleteUsagePlanCallable(const DeleteUsagePlanRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteUsagePlan, request);
        }

        /**
         * An Async wrapper for DeleteUsagePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUsagePlanRequestT = Model::DeleteUsagePlanRequest>
        void DeleteUsagePlanAsync(const DeleteUsagePlanRequestT& request, const DeleteUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteUsagePlan, request, handler, context);
        }

        /**
         * <p>Deletes a usage plan key and remove the underlying API key from the
         * associated usage plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteUsagePlanKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsagePlanKeyOutcome DeleteUsagePlanKey(const Model::DeleteUsagePlanKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteUsagePlanKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUsagePlanKeyRequestT = Model::DeleteUsagePlanKeyRequest>
        Model::DeleteUsagePlanKeyOutcomeCallable DeleteUsagePlanKeyCallable(const DeleteUsagePlanKeyRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteUsagePlanKey, request);
        }

        /**
         * An Async wrapper for DeleteUsagePlanKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUsagePlanKeyRequestT = Model::DeleteUsagePlanKeyRequest>
        void DeleteUsagePlanKeyAsync(const DeleteUsagePlanKeyRequestT& request, const DeleteUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteUsagePlanKey, request, handler, context);
        }

        /**
         * <p>Deletes an existing VpcLink of a specified identifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcLinkOutcome DeleteVpcLink(const Model::DeleteVpcLinkRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVpcLinkRequestT = Model::DeleteVpcLinkRequest>
        Model::DeleteVpcLinkOutcomeCallable DeleteVpcLinkCallable(const DeleteVpcLinkRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::DeleteVpcLink, request);
        }

        /**
         * An Async wrapper for DeleteVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVpcLinkRequestT = Model::DeleteVpcLinkRequest>
        void DeleteVpcLinkAsync(const DeleteVpcLinkRequestT& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::DeleteVpcLink, request, handler, context);
        }

        /**
         * <p>Flushes all authorizer cache entries on a stage.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/FlushStageAuthorizersCache">AWS
         * API Reference</a></p>
         */
        virtual Model::FlushStageAuthorizersCacheOutcome FlushStageAuthorizersCache(const Model::FlushStageAuthorizersCacheRequest& request) const;

        /**
         * A Callable wrapper for FlushStageAuthorizersCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FlushStageAuthorizersCacheRequestT = Model::FlushStageAuthorizersCacheRequest>
        Model::FlushStageAuthorizersCacheOutcomeCallable FlushStageAuthorizersCacheCallable(const FlushStageAuthorizersCacheRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::FlushStageAuthorizersCache, request);
        }

        /**
         * An Async wrapper for FlushStageAuthorizersCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FlushStageAuthorizersCacheRequestT = Model::FlushStageAuthorizersCacheRequest>
        void FlushStageAuthorizersCacheAsync(const FlushStageAuthorizersCacheRequestT& request, const FlushStageAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::FlushStageAuthorizersCache, request, handler, context);
        }

        /**
         * <p>Flushes a stage's cache.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/FlushStageCache">AWS
         * API Reference</a></p>
         */
        virtual Model::FlushStageCacheOutcome FlushStageCache(const Model::FlushStageCacheRequest& request) const;

        /**
         * A Callable wrapper for FlushStageCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FlushStageCacheRequestT = Model::FlushStageCacheRequest>
        Model::FlushStageCacheOutcomeCallable FlushStageCacheCallable(const FlushStageCacheRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::FlushStageCache, request);
        }

        /**
         * An Async wrapper for FlushStageCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FlushStageCacheRequestT = Model::FlushStageCacheRequest>
        void FlushStageCacheAsync(const FlushStageCacheRequestT& request, const FlushStageCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::FlushStageCache, request, handler, context);
        }

        /**
         * <p>Generates a ClientCertificate resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GenerateClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateClientCertificateOutcome GenerateClientCertificate(const Model::GenerateClientCertificateRequest& request) const;

        /**
         * A Callable wrapper for GenerateClientCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateClientCertificateRequestT = Model::GenerateClientCertificateRequest>
        Model::GenerateClientCertificateOutcomeCallable GenerateClientCertificateCallable(const GenerateClientCertificateRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GenerateClientCertificate, request);
        }

        /**
         * An Async wrapper for GenerateClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateClientCertificateRequestT = Model::GenerateClientCertificateRequest>
        void GenerateClientCertificateAsync(const GenerateClientCertificateRequestT& request, const GenerateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GenerateClientCertificate, request, handler, context);
        }

        /**
         * <p>Gets information about the current Account resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountOutcome GetAccount(const Model::GetAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountRequestT = Model::GetAccountRequest>
        Model::GetAccountOutcomeCallable GetAccountCallable(const GetAccountRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetAccount, request);
        }

        /**
         * An Async wrapper for GetAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountRequestT = Model::GetAccountRequest>
        void GetAccountAsync(const GetAccountRequestT& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetAccount, request, handler, context);
        }

        /**
         * <p>Gets information about the current ApiKey resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiKeyOutcome GetApiKey(const Model::GetApiKeyRequest& request) const;

        /**
         * A Callable wrapper for GetApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApiKeyRequestT = Model::GetApiKeyRequest>
        Model::GetApiKeyOutcomeCallable GetApiKeyCallable(const GetApiKeyRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetApiKey, request);
        }

        /**
         * An Async wrapper for GetApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApiKeyRequestT = Model::GetApiKeyRequest>
        void GetApiKeyAsync(const GetApiKeyRequestT& request, const GetApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetApiKey, request, handler, context);
        }

        /**
         * <p>Gets information about the current ApiKeys resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetApiKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiKeysOutcome GetApiKeys(const Model::GetApiKeysRequest& request) const;

        /**
         * A Callable wrapper for GetApiKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApiKeysRequestT = Model::GetApiKeysRequest>
        Model::GetApiKeysOutcomeCallable GetApiKeysCallable(const GetApiKeysRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetApiKeys, request);
        }

        /**
         * An Async wrapper for GetApiKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApiKeysRequestT = Model::GetApiKeysRequest>
        void GetApiKeysAsync(const GetApiKeysRequestT& request, const GetApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetApiKeys, request, handler, context);
        }

        /**
         * <p>Describe an existing Authorizer resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizerOutcome GetAuthorizer(const Model::GetAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for GetAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAuthorizerRequestT = Model::GetAuthorizerRequest>
        Model::GetAuthorizerOutcomeCallable GetAuthorizerCallable(const GetAuthorizerRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetAuthorizer, request);
        }

        /**
         * An Async wrapper for GetAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAuthorizerRequestT = Model::GetAuthorizerRequest>
        void GetAuthorizerAsync(const GetAuthorizerRequestT& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetAuthorizer, request, handler, context);
        }

        /**
         * <p>Describe an existing Authorizers resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetAuthorizers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizersOutcome GetAuthorizers(const Model::GetAuthorizersRequest& request) const;

        /**
         * A Callable wrapper for GetAuthorizers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAuthorizersRequestT = Model::GetAuthorizersRequest>
        Model::GetAuthorizersOutcomeCallable GetAuthorizersCallable(const GetAuthorizersRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetAuthorizers, request);
        }

        /**
         * An Async wrapper for GetAuthorizers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAuthorizersRequestT = Model::GetAuthorizersRequest>
        void GetAuthorizersAsync(const GetAuthorizersRequestT& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetAuthorizers, request, handler, context);
        }

        /**
         * <p>Describe a BasePathMapping resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBasePathMappingOutcome GetBasePathMapping(const Model::GetBasePathMappingRequest& request) const;

        /**
         * A Callable wrapper for GetBasePathMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBasePathMappingRequestT = Model::GetBasePathMappingRequest>
        Model::GetBasePathMappingOutcomeCallable GetBasePathMappingCallable(const GetBasePathMappingRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetBasePathMapping, request);
        }

        /**
         * An Async wrapper for GetBasePathMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBasePathMappingRequestT = Model::GetBasePathMappingRequest>
        void GetBasePathMappingAsync(const GetBasePathMappingRequestT& request, const GetBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetBasePathMapping, request, handler, context);
        }

        /**
         * <p>Represents a collection of BasePathMapping resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetBasePathMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBasePathMappingsOutcome GetBasePathMappings(const Model::GetBasePathMappingsRequest& request) const;

        /**
         * A Callable wrapper for GetBasePathMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBasePathMappingsRequestT = Model::GetBasePathMappingsRequest>
        Model::GetBasePathMappingsOutcomeCallable GetBasePathMappingsCallable(const GetBasePathMappingsRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetBasePathMappings, request);
        }

        /**
         * An Async wrapper for GetBasePathMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBasePathMappingsRequestT = Model::GetBasePathMappingsRequest>
        void GetBasePathMappingsAsync(const GetBasePathMappingsRequestT& request, const GetBasePathMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetBasePathMappings, request, handler, context);
        }

        /**
         * <p>Gets information about the current ClientCertificate resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClientCertificateOutcome GetClientCertificate(const Model::GetClientCertificateRequest& request) const;

        /**
         * A Callable wrapper for GetClientCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClientCertificateRequestT = Model::GetClientCertificateRequest>
        Model::GetClientCertificateOutcomeCallable GetClientCertificateCallable(const GetClientCertificateRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetClientCertificate, request);
        }

        /**
         * An Async wrapper for GetClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClientCertificateRequestT = Model::GetClientCertificateRequest>
        void GetClientCertificateAsync(const GetClientCertificateRequestT& request, const GetClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetClientCertificate, request, handler, context);
        }

        /**
         * <p>Gets a collection of ClientCertificate resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetClientCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClientCertificatesOutcome GetClientCertificates(const Model::GetClientCertificatesRequest& request) const;

        /**
         * A Callable wrapper for GetClientCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClientCertificatesRequestT = Model::GetClientCertificatesRequest>
        Model::GetClientCertificatesOutcomeCallable GetClientCertificatesCallable(const GetClientCertificatesRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetClientCertificates, request);
        }

        /**
         * An Async wrapper for GetClientCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClientCertificatesRequestT = Model::GetClientCertificatesRequest>
        void GetClientCertificatesAsync(const GetClientCertificatesRequestT& request, const GetClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetClientCertificates, request, handler, context);
        }

        /**
         * <p>Gets information about a Deployment resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const GetDeploymentRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetDeployment, request);
        }

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        void GetDeploymentAsync(const GetDeploymentRequestT& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetDeployment, request, handler, context);
        }

        /**
         * <p>Gets information about a Deployments collection.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentsOutcome GetDeployments(const Model::GetDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for GetDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentsRequestT = Model::GetDeploymentsRequest>
        Model::GetDeploymentsOutcomeCallable GetDeploymentsCallable(const GetDeploymentsRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetDeployments, request);
        }

        /**
         * An Async wrapper for GetDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentsRequestT = Model::GetDeploymentsRequest>
        void GetDeploymentsAsync(const GetDeploymentsRequestT& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetDeployments, request, handler, context);
        }

        /**
         * <p>Gets a documentation part.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationPartOutcome GetDocumentationPart(const Model::GetDocumentationPartRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentationPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDocumentationPartRequestT = Model::GetDocumentationPartRequest>
        Model::GetDocumentationPartOutcomeCallable GetDocumentationPartCallable(const GetDocumentationPartRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetDocumentationPart, request);
        }

        /**
         * An Async wrapper for GetDocumentationPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDocumentationPartRequestT = Model::GetDocumentationPartRequest>
        void GetDocumentationPartAsync(const GetDocumentationPartRequestT& request, const GetDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetDocumentationPart, request, handler, context);
        }

        /**
         * <p>Gets documentation parts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationParts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationPartsOutcome GetDocumentationParts(const Model::GetDocumentationPartsRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentationParts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDocumentationPartsRequestT = Model::GetDocumentationPartsRequest>
        Model::GetDocumentationPartsOutcomeCallable GetDocumentationPartsCallable(const GetDocumentationPartsRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetDocumentationParts, request);
        }

        /**
         * An Async wrapper for GetDocumentationParts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDocumentationPartsRequestT = Model::GetDocumentationPartsRequest>
        void GetDocumentationPartsAsync(const GetDocumentationPartsRequestT& request, const GetDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetDocumentationParts, request, handler, context);
        }

        /**
         * <p>Gets a documentation version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationVersionOutcome GetDocumentationVersion(const Model::GetDocumentationVersionRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDocumentationVersionRequestT = Model::GetDocumentationVersionRequest>
        Model::GetDocumentationVersionOutcomeCallable GetDocumentationVersionCallable(const GetDocumentationVersionRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetDocumentationVersion, request);
        }

        /**
         * An Async wrapper for GetDocumentationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDocumentationVersionRequestT = Model::GetDocumentationVersionRequest>
        void GetDocumentationVersionAsync(const GetDocumentationVersionRequestT& request, const GetDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetDocumentationVersion, request, handler, context);
        }

        /**
         * <p>Gets documentation versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationVersionsOutcome GetDocumentationVersions(const Model::GetDocumentationVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDocumentationVersionsRequestT = Model::GetDocumentationVersionsRequest>
        Model::GetDocumentationVersionsOutcomeCallable GetDocumentationVersionsCallable(const GetDocumentationVersionsRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetDocumentationVersions, request);
        }

        /**
         * An Async wrapper for GetDocumentationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDocumentationVersionsRequestT = Model::GetDocumentationVersionsRequest>
        void GetDocumentationVersionsAsync(const GetDocumentationVersionsRequestT& request, const GetDocumentationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetDocumentationVersions, request, handler, context);
        }

        /**
         * <p>Represents a domain name that is contained in a simpler, more intuitive URL
         * that can be called.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNameOutcome GetDomainName(const Model::GetDomainNameRequest& request) const;

        /**
         * A Callable wrapper for GetDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainNameRequestT = Model::GetDomainNameRequest>
        Model::GetDomainNameOutcomeCallable GetDomainNameCallable(const GetDomainNameRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetDomainName, request);
        }

        /**
         * An Async wrapper for GetDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainNameRequestT = Model::GetDomainNameRequest>
        void GetDomainNameAsync(const GetDomainNameRequestT& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetDomainName, request, handler, context);
        }

        /**
         * <p>Represents a collection of DomainName resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNamesOutcome GetDomainNames(const Model::GetDomainNamesRequest& request) const;

        /**
         * A Callable wrapper for GetDomainNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainNamesRequestT = Model::GetDomainNamesRequest>
        Model::GetDomainNamesOutcomeCallable GetDomainNamesCallable(const GetDomainNamesRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetDomainNames, request);
        }

        /**
         * An Async wrapper for GetDomainNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainNamesRequestT = Model::GetDomainNamesRequest>
        void GetDomainNamesAsync(const GetDomainNamesRequestT& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetDomainNames, request, handler, context);
        }

        /**
         * <p>Exports a deployed version of a RestApi in a specified format.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetExport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportOutcome GetExport(const Model::GetExportRequest& request) const;

        /**
         * A Callable wrapper for GetExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExportRequestT = Model::GetExportRequest>
        Model::GetExportOutcomeCallable GetExportCallable(const GetExportRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetExport, request);
        }

        /**
         * An Async wrapper for GetExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExportRequestT = Model::GetExportRequest>
        void GetExportAsync(const GetExportRequestT& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetExport, request, handler, context);
        }

        /**
         * <p>Gets a GatewayResponse of a specified response type on the given
         * RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetGatewayResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayResponseOutcome GetGatewayResponse(const Model::GetGatewayResponseRequest& request) const;

        /**
         * A Callable wrapper for GetGatewayResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGatewayResponseRequestT = Model::GetGatewayResponseRequest>
        Model::GetGatewayResponseOutcomeCallable GetGatewayResponseCallable(const GetGatewayResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetGatewayResponse, request);
        }

        /**
         * An Async wrapper for GetGatewayResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGatewayResponseRequestT = Model::GetGatewayResponseRequest>
        void GetGatewayResponseAsync(const GetGatewayResponseRequestT& request, const GetGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetGatewayResponse, request, handler, context);
        }

        /**
         * <p>Gets the GatewayResponses collection on the given RestApi. If an API
         * developer has not added any definitions for gateway responses, the result will
         * be the API Gateway-generated default GatewayResponses collection for the
         * supported response types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetGatewayResponses">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayResponsesOutcome GetGatewayResponses(const Model::GetGatewayResponsesRequest& request) const;

        /**
         * A Callable wrapper for GetGatewayResponses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGatewayResponsesRequestT = Model::GetGatewayResponsesRequest>
        Model::GetGatewayResponsesOutcomeCallable GetGatewayResponsesCallable(const GetGatewayResponsesRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetGatewayResponses, request);
        }

        /**
         * An Async wrapper for GetGatewayResponses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGatewayResponsesRequestT = Model::GetGatewayResponsesRequest>
        void GetGatewayResponsesAsync(const GetGatewayResponsesRequestT& request, const GetGatewayResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetGatewayResponses, request, handler, context);
        }

        /**
         * <p>Get the integration settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

        /**
         * A Callable wrapper for GetIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntegrationRequestT = Model::GetIntegrationRequest>
        Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const GetIntegrationRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetIntegration, request);
        }

        /**
         * An Async wrapper for GetIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntegrationRequestT = Model::GetIntegrationRequest>
        void GetIntegrationAsync(const GetIntegrationRequestT& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetIntegration, request, handler, context);
        }

        /**
         * <p>Represents a get integration response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationResponseOutcome GetIntegrationResponse(const Model::GetIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for GetIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntegrationResponseRequestT = Model::GetIntegrationResponseRequest>
        Model::GetIntegrationResponseOutcomeCallable GetIntegrationResponseCallable(const GetIntegrationResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetIntegrationResponse, request);
        }

        /**
         * An Async wrapper for GetIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntegrationResponseRequestT = Model::GetIntegrationResponseRequest>
        void GetIntegrationResponseAsync(const GetIntegrationResponseRequestT& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetIntegrationResponse, request, handler, context);
        }

        /**
         * <p>Describe an existing Method resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMethodOutcome GetMethod(const Model::GetMethodRequest& request) const;

        /**
         * A Callable wrapper for GetMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMethodRequestT = Model::GetMethodRequest>
        Model::GetMethodOutcomeCallable GetMethodCallable(const GetMethodRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetMethod, request);
        }

        /**
         * An Async wrapper for GetMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMethodRequestT = Model::GetMethodRequest>
        void GetMethodAsync(const GetMethodRequestT& request, const GetMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetMethod, request, handler, context);
        }

        /**
         * <p>Describes a MethodResponse resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMethodResponseOutcome GetMethodResponse(const Model::GetMethodResponseRequest& request) const;

        /**
         * A Callable wrapper for GetMethodResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMethodResponseRequestT = Model::GetMethodResponseRequest>
        Model::GetMethodResponseOutcomeCallable GetMethodResponseCallable(const GetMethodResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetMethodResponse, request);
        }

        /**
         * An Async wrapper for GetMethodResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMethodResponseRequestT = Model::GetMethodResponseRequest>
        void GetMethodResponseAsync(const GetMethodResponseRequestT& request, const GetMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetMethodResponse, request, handler, context);
        }

        /**
         * <p>Describes an existing model defined for a RestApi resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelOutcome GetModel(const Model::GetModelRequest& request) const;

        /**
         * A Callable wrapper for GetModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelRequestT = Model::GetModelRequest>
        Model::GetModelOutcomeCallable GetModelCallable(const GetModelRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetModel, request);
        }

        /**
         * An Async wrapper for GetModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelRequestT = Model::GetModelRequest>
        void GetModelAsync(const GetModelRequestT& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetModel, request, handler, context);
        }

        /**
         * <p>Generates a sample mapping template that can be used to transform a payload
         * into the structure of a model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetModelTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelTemplateOutcome GetModelTemplate(const Model::GetModelTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetModelTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelTemplateRequestT = Model::GetModelTemplateRequest>
        Model::GetModelTemplateOutcomeCallable GetModelTemplateCallable(const GetModelTemplateRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetModelTemplate, request);
        }

        /**
         * An Async wrapper for GetModelTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelTemplateRequestT = Model::GetModelTemplateRequest>
        void GetModelTemplateAsync(const GetModelTemplateRequestT& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetModelTemplate, request, handler, context);
        }

        /**
         * <p>Describes existing Models defined for a RestApi resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelsOutcome GetModels(const Model::GetModelsRequest& request) const;

        /**
         * A Callable wrapper for GetModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelsRequestT = Model::GetModelsRequest>
        Model::GetModelsOutcomeCallable GetModelsCallable(const GetModelsRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetModels, request);
        }

        /**
         * An Async wrapper for GetModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelsRequestT = Model::GetModelsRequest>
        void GetModelsAsync(const GetModelsRequestT& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetModels, request, handler, context);
        }

        /**
         * <p>Gets a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRequestValidatorOutcome GetRequestValidator(const Model::GetRequestValidatorRequest& request) const;

        /**
         * A Callable wrapper for GetRequestValidator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRequestValidatorRequestT = Model::GetRequestValidatorRequest>
        Model::GetRequestValidatorOutcomeCallable GetRequestValidatorCallable(const GetRequestValidatorRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetRequestValidator, request);
        }

        /**
         * An Async wrapper for GetRequestValidator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRequestValidatorRequestT = Model::GetRequestValidatorRequest>
        void GetRequestValidatorAsync(const GetRequestValidatorRequestT& request, const GetRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetRequestValidator, request, handler, context);
        }

        /**
         * <p>Gets the RequestValidators collection of a given RestApi.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRequestValidators">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRequestValidatorsOutcome GetRequestValidators(const Model::GetRequestValidatorsRequest& request) const;

        /**
         * A Callable wrapper for GetRequestValidators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRequestValidatorsRequestT = Model::GetRequestValidatorsRequest>
        Model::GetRequestValidatorsOutcomeCallable GetRequestValidatorsCallable(const GetRequestValidatorsRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetRequestValidators, request);
        }

        /**
         * An Async wrapper for GetRequestValidators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRequestValidatorsRequestT = Model::GetRequestValidatorsRequest>
        void GetRequestValidatorsAsync(const GetRequestValidatorsRequestT& request, const GetRequestValidatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetRequestValidators, request, handler, context);
        }

        /**
         * <p>Lists information about a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceOutcome GetResource(const Model::GetResourceRequest& request) const;

        /**
         * A Callable wrapper for GetResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceRequestT = Model::GetResourceRequest>
        Model::GetResourceOutcomeCallable GetResourceCallable(const GetResourceRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetResource, request);
        }

        /**
         * An Async wrapper for GetResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceRequestT = Model::GetResourceRequest>
        void GetResourceAsync(const GetResourceRequestT& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetResource, request, handler, context);
        }

        /**
         * <p>Lists information about a collection of Resource resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcesOutcome GetResources(const Model::GetResourcesRequest& request) const;

        /**
         * A Callable wrapper for GetResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcesRequestT = Model::GetResourcesRequest>
        Model::GetResourcesOutcomeCallable GetResourcesCallable(const GetResourcesRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetResources, request);
        }

        /**
         * An Async wrapper for GetResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcesRequestT = Model::GetResourcesRequest>
        void GetResourcesAsync(const GetResourcesRequestT& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetResources, request, handler, context);
        }

        /**
         * <p>Lists the RestApi resource in the collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRestApiOutcome GetRestApi(const Model::GetRestApiRequest& request) const;

        /**
         * A Callable wrapper for GetRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRestApiRequestT = Model::GetRestApiRequest>
        Model::GetRestApiOutcomeCallable GetRestApiCallable(const GetRestApiRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetRestApi, request);
        }

        /**
         * An Async wrapper for GetRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRestApiRequestT = Model::GetRestApiRequest>
        void GetRestApiAsync(const GetRestApiRequestT& request, const GetRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetRestApi, request, handler, context);
        }

        /**
         * <p>Lists the RestApis resources for your collection.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRestApis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRestApisOutcome GetRestApis(const Model::GetRestApisRequest& request) const;

        /**
         * A Callable wrapper for GetRestApis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRestApisRequestT = Model::GetRestApisRequest>
        Model::GetRestApisOutcomeCallable GetRestApisCallable(const GetRestApisRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetRestApis, request);
        }

        /**
         * An Async wrapper for GetRestApis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRestApisRequestT = Model::GetRestApisRequest>
        void GetRestApisAsync(const GetRestApisRequestT& request, const GetRestApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetRestApis, request, handler, context);
        }

        /**
         * <p>Generates a client SDK for a RestApi and Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdk">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSdkOutcome GetSdk(const Model::GetSdkRequest& request) const;

        /**
         * A Callable wrapper for GetSdk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSdkRequestT = Model::GetSdkRequest>
        Model::GetSdkOutcomeCallable GetSdkCallable(const GetSdkRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetSdk, request);
        }

        /**
         * An Async wrapper for GetSdk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSdkRequestT = Model::GetSdkRequest>
        void GetSdkAsync(const GetSdkRequestT& request, const GetSdkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetSdk, request, handler, context);
        }

        /**
         * <p>Gets an SDK type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdkType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSdkTypeOutcome GetSdkType(const Model::GetSdkTypeRequest& request) const;

        /**
         * A Callable wrapper for GetSdkType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSdkTypeRequestT = Model::GetSdkTypeRequest>
        Model::GetSdkTypeOutcomeCallable GetSdkTypeCallable(const GetSdkTypeRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetSdkType, request);
        }

        /**
         * An Async wrapper for GetSdkType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSdkTypeRequestT = Model::GetSdkTypeRequest>
        void GetSdkTypeAsync(const GetSdkTypeRequestT& request, const GetSdkTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetSdkType, request, handler, context);
        }

        /**
         * <p>Gets SDK types</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdkTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSdkTypesOutcome GetSdkTypes(const Model::GetSdkTypesRequest& request) const;

        /**
         * A Callable wrapper for GetSdkTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSdkTypesRequestT = Model::GetSdkTypesRequest>
        Model::GetSdkTypesOutcomeCallable GetSdkTypesCallable(const GetSdkTypesRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetSdkTypes, request);
        }

        /**
         * An Async wrapper for GetSdkTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSdkTypesRequestT = Model::GetSdkTypesRequest>
        void GetSdkTypesAsync(const GetSdkTypesRequestT& request, const GetSdkTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetSdkTypes, request, handler, context);
        }

        /**
         * <p>Gets information about a Stage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetStage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageOutcome GetStage(const Model::GetStageRequest& request) const;

        /**
         * A Callable wrapper for GetStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStageRequestT = Model::GetStageRequest>
        Model::GetStageOutcomeCallable GetStageCallable(const GetStageRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetStage, request);
        }

        /**
         * An Async wrapper for GetStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStageRequestT = Model::GetStageRequest>
        void GetStageAsync(const GetStageRequestT& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetStage, request, handler, context);
        }

        /**
         * <p>Gets information about one or more Stage resources.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetStages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStagesOutcome GetStages(const Model::GetStagesRequest& request) const;

        /**
         * A Callable wrapper for GetStages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStagesRequestT = Model::GetStagesRequest>
        Model::GetStagesOutcomeCallable GetStagesCallable(const GetStagesRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetStages, request);
        }

        /**
         * An Async wrapper for GetStages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStagesRequestT = Model::GetStagesRequest>
        void GetStagesAsync(const GetStagesRequestT& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetStages, request, handler, context);
        }

        /**
         * <p>Gets the Tags collection for a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * A Callable wrapper for GetTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        Model::GetTagsOutcomeCallable GetTagsCallable(const GetTagsRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetTags, request);
        }

        /**
         * An Async wrapper for GetTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        void GetTagsAsync(const GetTagsRequestT& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetTags, request, handler, context);
        }

        /**
         * <p>Gets the usage data of a usage plan in a specified time
         * interval.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageOutcome GetUsage(const Model::GetUsageRequest& request) const;

        /**
         * A Callable wrapper for GetUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUsageRequestT = Model::GetUsageRequest>
        Model::GetUsageOutcomeCallable GetUsageCallable(const GetUsageRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetUsage, request);
        }

        /**
         * An Async wrapper for GetUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsageRequestT = Model::GetUsageRequest>
        void GetUsageAsync(const GetUsageRequestT& request, const GetUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetUsage, request, handler, context);
        }

        /**
         * <p>Gets a usage plan of a given plan identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsagePlanOutcome GetUsagePlan(const Model::GetUsagePlanRequest& request) const;

        /**
         * A Callable wrapper for GetUsagePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUsagePlanRequestT = Model::GetUsagePlanRequest>
        Model::GetUsagePlanOutcomeCallable GetUsagePlanCallable(const GetUsagePlanRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetUsagePlan, request);
        }

        /**
         * An Async wrapper for GetUsagePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsagePlanRequestT = Model::GetUsagePlanRequest>
        void GetUsagePlanAsync(const GetUsagePlanRequestT& request, const GetUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetUsagePlan, request, handler, context);
        }

        /**
         * <p>Gets a usage plan key of a given key identifier.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlanKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsagePlanKeyOutcome GetUsagePlanKey(const Model::GetUsagePlanKeyRequest& request) const;

        /**
         * A Callable wrapper for GetUsagePlanKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUsagePlanKeyRequestT = Model::GetUsagePlanKeyRequest>
        Model::GetUsagePlanKeyOutcomeCallable GetUsagePlanKeyCallable(const GetUsagePlanKeyRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetUsagePlanKey, request);
        }

        /**
         * An Async wrapper for GetUsagePlanKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsagePlanKeyRequestT = Model::GetUsagePlanKeyRequest>
        void GetUsagePlanKeyAsync(const GetUsagePlanKeyRequestT& request, const GetUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetUsagePlanKey, request, handler, context);
        }

        /**
         * <p>Gets all the usage plan keys representing the API keys added to a specified
         * usage plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlanKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsagePlanKeysOutcome GetUsagePlanKeys(const Model::GetUsagePlanKeysRequest& request) const;

        /**
         * A Callable wrapper for GetUsagePlanKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUsagePlanKeysRequestT = Model::GetUsagePlanKeysRequest>
        Model::GetUsagePlanKeysOutcomeCallable GetUsagePlanKeysCallable(const GetUsagePlanKeysRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetUsagePlanKeys, request);
        }

        /**
         * An Async wrapper for GetUsagePlanKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsagePlanKeysRequestT = Model::GetUsagePlanKeysRequest>
        void GetUsagePlanKeysAsync(const GetUsagePlanKeysRequestT& request, const GetUsagePlanKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetUsagePlanKeys, request, handler, context);
        }

        /**
         * <p>Gets all the usage plans of the caller's account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlans">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsagePlansOutcome GetUsagePlans(const Model::GetUsagePlansRequest& request) const;

        /**
         * A Callable wrapper for GetUsagePlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUsagePlansRequestT = Model::GetUsagePlansRequest>
        Model::GetUsagePlansOutcomeCallable GetUsagePlansCallable(const GetUsagePlansRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetUsagePlans, request);
        }

        /**
         * An Async wrapper for GetUsagePlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsagePlansRequestT = Model::GetUsagePlansRequest>
        void GetUsagePlansAsync(const GetUsagePlansRequestT& request, const GetUsagePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetUsagePlans, request, handler, context);
        }

        /**
         * <p>Gets a specified VPC link under the caller's account in a
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcLinkOutcome GetVpcLink(const Model::GetVpcLinkRequest& request) const;

        /**
         * A Callable wrapper for GetVpcLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVpcLinkRequestT = Model::GetVpcLinkRequest>
        Model::GetVpcLinkOutcomeCallable GetVpcLinkCallable(const GetVpcLinkRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetVpcLink, request);
        }

        /**
         * An Async wrapper for GetVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVpcLinkRequestT = Model::GetVpcLinkRequest>
        void GetVpcLinkAsync(const GetVpcLinkRequestT& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetVpcLink, request, handler, context);
        }

        /**
         * <p>Gets the VpcLinks collection under the caller's account in a selected
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetVpcLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcLinksOutcome GetVpcLinks(const Model::GetVpcLinksRequest& request) const;

        /**
         * A Callable wrapper for GetVpcLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVpcLinksRequestT = Model::GetVpcLinksRequest>
        Model::GetVpcLinksOutcomeCallable GetVpcLinksCallable(const GetVpcLinksRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::GetVpcLinks, request);
        }

        /**
         * An Async wrapper for GetVpcLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVpcLinksRequestT = Model::GetVpcLinksRequest>
        void GetVpcLinksAsync(const GetVpcLinksRequestT& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::GetVpcLinks, request, handler, context);
        }

        /**
         * <p>Import API keys from an external source, such as a CSV-formatted
         * file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportApiKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportApiKeysOutcome ImportApiKeys(const Model::ImportApiKeysRequest& request) const;

        /**
         * A Callable wrapper for ImportApiKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportApiKeysRequestT = Model::ImportApiKeysRequest>
        Model::ImportApiKeysOutcomeCallable ImportApiKeysCallable(const ImportApiKeysRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::ImportApiKeys, request);
        }

        /**
         * An Async wrapper for ImportApiKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportApiKeysRequestT = Model::ImportApiKeysRequest>
        void ImportApiKeysAsync(const ImportApiKeysRequestT& request, const ImportApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::ImportApiKeys, request, handler, context);
        }

        /**
         * <p>Imports documentation parts</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportDocumentationParts">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportDocumentationPartsOutcome ImportDocumentationParts(const Model::ImportDocumentationPartsRequest& request) const;

        /**
         * A Callable wrapper for ImportDocumentationParts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportDocumentationPartsRequestT = Model::ImportDocumentationPartsRequest>
        Model::ImportDocumentationPartsOutcomeCallable ImportDocumentationPartsCallable(const ImportDocumentationPartsRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::ImportDocumentationParts, request);
        }

        /**
         * An Async wrapper for ImportDocumentationParts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportDocumentationPartsRequestT = Model::ImportDocumentationPartsRequest>
        void ImportDocumentationPartsAsync(const ImportDocumentationPartsRequestT& request, const ImportDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::ImportDocumentationParts, request, handler, context);
        }

        /**
         * <p>A feature of the API Gateway control service for creating a new API from an
         * external API definition file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportRestApiOutcome ImportRestApi(const Model::ImportRestApiRequest& request) const;

        /**
         * A Callable wrapper for ImportRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportRestApiRequestT = Model::ImportRestApiRequest>
        Model::ImportRestApiOutcomeCallable ImportRestApiCallable(const ImportRestApiRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::ImportRestApi, request);
        }

        /**
         * An Async wrapper for ImportRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportRestApiRequestT = Model::ImportRestApiRequest>
        void ImportRestApiAsync(const ImportRestApiRequestT& request, const ImportRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::ImportRestApi, request, handler, context);
        }

        /**
         * <p>Creates a customization of a GatewayResponse of a specified response type and
         * status code on the given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutGatewayResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGatewayResponseOutcome PutGatewayResponse(const Model::PutGatewayResponseRequest& request) const;

        /**
         * A Callable wrapper for PutGatewayResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutGatewayResponseRequestT = Model::PutGatewayResponseRequest>
        Model::PutGatewayResponseOutcomeCallable PutGatewayResponseCallable(const PutGatewayResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::PutGatewayResponse, request);
        }

        /**
         * An Async wrapper for PutGatewayResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutGatewayResponseRequestT = Model::PutGatewayResponseRequest>
        void PutGatewayResponseAsync(const PutGatewayResponseRequestT& request, const PutGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::PutGatewayResponse, request, handler, context);
        }

        /**
         * <p>Sets up a method's integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntegrationOutcome PutIntegration(const Model::PutIntegrationRequest& request) const;

        /**
         * A Callable wrapper for PutIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutIntegrationRequestT = Model::PutIntegrationRequest>
        Model::PutIntegrationOutcomeCallable PutIntegrationCallable(const PutIntegrationRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::PutIntegration, request);
        }

        /**
         * An Async wrapper for PutIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutIntegrationRequestT = Model::PutIntegrationRequest>
        void PutIntegrationAsync(const PutIntegrationRequestT& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::PutIntegration, request, handler, context);
        }

        /**
         * <p>Represents a put integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntegrationResponseOutcome PutIntegrationResponse(const Model::PutIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for PutIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutIntegrationResponseRequestT = Model::PutIntegrationResponseRequest>
        Model::PutIntegrationResponseOutcomeCallable PutIntegrationResponseCallable(const PutIntegrationResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::PutIntegrationResponse, request);
        }

        /**
         * An Async wrapper for PutIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutIntegrationResponseRequestT = Model::PutIntegrationResponseRequest>
        void PutIntegrationResponseAsync(const PutIntegrationResponseRequestT& request, const PutIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::PutIntegrationResponse, request, handler, context);
        }

        /**
         * <p>Add a method to an existing Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMethodOutcome PutMethod(const Model::PutMethodRequest& request) const;

        /**
         * A Callable wrapper for PutMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMethodRequestT = Model::PutMethodRequest>
        Model::PutMethodOutcomeCallable PutMethodCallable(const PutMethodRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::PutMethod, request);
        }

        /**
         * An Async wrapper for PutMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMethodRequestT = Model::PutMethodRequest>
        void PutMethodAsync(const PutMethodRequestT& request, const PutMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::PutMethod, request, handler, context);
        }

        /**
         * <p>Adds a MethodResponse to an existing Method resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMethodResponseOutcome PutMethodResponse(const Model::PutMethodResponseRequest& request) const;

        /**
         * A Callable wrapper for PutMethodResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMethodResponseRequestT = Model::PutMethodResponseRequest>
        Model::PutMethodResponseOutcomeCallable PutMethodResponseCallable(const PutMethodResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::PutMethodResponse, request);
        }

        /**
         * An Async wrapper for PutMethodResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMethodResponseRequestT = Model::PutMethodResponseRequest>
        void PutMethodResponseAsync(const PutMethodResponseRequestT& request, const PutMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::PutMethodResponse, request, handler, context);
        }

        /**
         * <p>A feature of the API Gateway control service for updating an existing API
         * with an input of external API definitions. The update can take the form of
         * merging the supplied definition into the existing API or overwriting the
         * existing API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRestApiOutcome PutRestApi(const Model::PutRestApiRequest& request) const;

        /**
         * A Callable wrapper for PutRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRestApiRequestT = Model::PutRestApiRequest>
        Model::PutRestApiOutcomeCallable PutRestApiCallable(const PutRestApiRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::PutRestApi, request);
        }

        /**
         * An Async wrapper for PutRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRestApiRequestT = Model::PutRestApiRequest>
        void PutRestApiAsync(const PutRestApiRequestT& request, const PutRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::PutRestApi, request, handler, context);
        }

        /**
         * <p>Adds or updates a tag on a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::TagResource, request, handler, context);
        }

        /**
         * <p>Simulate the execution of an Authorizer in your RestApi with headers,
         * parameters, and an incoming request body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TestInvokeAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::TestInvokeAuthorizerOutcome TestInvokeAuthorizer(const Model::TestInvokeAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for TestInvokeAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestInvokeAuthorizerRequestT = Model::TestInvokeAuthorizerRequest>
        Model::TestInvokeAuthorizerOutcomeCallable TestInvokeAuthorizerCallable(const TestInvokeAuthorizerRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::TestInvokeAuthorizer, request);
        }

        /**
         * An Async wrapper for TestInvokeAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestInvokeAuthorizerRequestT = Model::TestInvokeAuthorizerRequest>
        void TestInvokeAuthorizerAsync(const TestInvokeAuthorizerRequestT& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::TestInvokeAuthorizer, request, handler, context);
        }

        /**
         * <p>Simulate the invocation of a Method in your RestApi with headers, parameters,
         * and an incoming request body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TestInvokeMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::TestInvokeMethodOutcome TestInvokeMethod(const Model::TestInvokeMethodRequest& request) const;

        /**
         * A Callable wrapper for TestInvokeMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestInvokeMethodRequestT = Model::TestInvokeMethodRequest>
        Model::TestInvokeMethodOutcomeCallable TestInvokeMethodCallable(const TestInvokeMethodRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::TestInvokeMethod, request);
        }

        /**
         * An Async wrapper for TestInvokeMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestInvokeMethodRequestT = Model::TestInvokeMethodRequest>
        void TestInvokeMethodAsync(const TestInvokeMethodRequestT& request, const TestInvokeMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::TestInvokeMethod, request, handler, context);
        }

        /**
         * <p>Removes a tag from a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Changes information about the current Account resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountOutcome UpdateAccount(const Model::UpdateAccountRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountRequestT = Model::UpdateAccountRequest>
        Model::UpdateAccountOutcomeCallable UpdateAccountCallable(const UpdateAccountRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateAccount, request);
        }

        /**
         * An Async wrapper for UpdateAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountRequestT = Model::UpdateAccountRequest>
        void UpdateAccountAsync(const UpdateAccountRequestT& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateAccount, request, handler, context);
        }

        /**
         * <p>Changes information about an ApiKey resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiKeyOutcome UpdateApiKey(const Model::UpdateApiKeyRequest& request) const;

        /**
         * A Callable wrapper for UpdateApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApiKeyRequestT = Model::UpdateApiKeyRequest>
        Model::UpdateApiKeyOutcomeCallable UpdateApiKeyCallable(const UpdateApiKeyRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateApiKey, request);
        }

        /**
         * An Async wrapper for UpdateApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApiKeyRequestT = Model::UpdateApiKeyRequest>
        void UpdateApiKeyAsync(const UpdateApiKeyRequestT& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateApiKey, request, handler, context);
        }

        /**
         * <p>Updates an existing Authorizer resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthorizerOutcome UpdateAuthorizer(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for UpdateAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAuthorizerRequestT = Model::UpdateAuthorizerRequest>
        Model::UpdateAuthorizerOutcomeCallable UpdateAuthorizerCallable(const UpdateAuthorizerRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateAuthorizer, request);
        }

        /**
         * An Async wrapper for UpdateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAuthorizerRequestT = Model::UpdateAuthorizerRequest>
        void UpdateAuthorizerAsync(const UpdateAuthorizerRequestT& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateAuthorizer, request, handler, context);
        }

        /**
         * <p>Changes information about the BasePathMapping resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBasePathMappingOutcome UpdateBasePathMapping(const Model::UpdateBasePathMappingRequest& request) const;

        /**
         * A Callable wrapper for UpdateBasePathMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBasePathMappingRequestT = Model::UpdateBasePathMappingRequest>
        Model::UpdateBasePathMappingOutcomeCallable UpdateBasePathMappingCallable(const UpdateBasePathMappingRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateBasePathMapping, request);
        }

        /**
         * An Async wrapper for UpdateBasePathMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBasePathMappingRequestT = Model::UpdateBasePathMappingRequest>
        void UpdateBasePathMappingAsync(const UpdateBasePathMappingRequestT& request, const UpdateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateBasePathMapping, request, handler, context);
        }

        /**
         * <p>Changes information about an ClientCertificate resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClientCertificateOutcome UpdateClientCertificate(const Model::UpdateClientCertificateRequest& request) const;

        /**
         * A Callable wrapper for UpdateClientCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClientCertificateRequestT = Model::UpdateClientCertificateRequest>
        Model::UpdateClientCertificateOutcomeCallable UpdateClientCertificateCallable(const UpdateClientCertificateRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateClientCertificate, request);
        }

        /**
         * An Async wrapper for UpdateClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClientCertificateRequestT = Model::UpdateClientCertificateRequest>
        void UpdateClientCertificateAsync(const UpdateClientCertificateRequestT& request, const UpdateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateClientCertificate, request, handler, context);
        }

        /**
         * <p>Changes information about a Deployment resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeploymentOutcome UpdateDeployment(const Model::UpdateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeploymentRequestT = Model::UpdateDeploymentRequest>
        Model::UpdateDeploymentOutcomeCallable UpdateDeploymentCallable(const UpdateDeploymentRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateDeployment, request);
        }

        /**
         * An Async wrapper for UpdateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeploymentRequestT = Model::UpdateDeploymentRequest>
        void UpdateDeploymentAsync(const UpdateDeploymentRequestT& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateDeployment, request, handler, context);
        }

        /**
         * <p>Updates a documentation part.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentationPartOutcome UpdateDocumentationPart(const Model::UpdateDocumentationPartRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocumentationPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDocumentationPartRequestT = Model::UpdateDocumentationPartRequest>
        Model::UpdateDocumentationPartOutcomeCallable UpdateDocumentationPartCallable(const UpdateDocumentationPartRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateDocumentationPart, request);
        }

        /**
         * An Async wrapper for UpdateDocumentationPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDocumentationPartRequestT = Model::UpdateDocumentationPartRequest>
        void UpdateDocumentationPartAsync(const UpdateDocumentationPartRequestT& request, const UpdateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateDocumentationPart, request, handler, context);
        }

        /**
         * <p>Updates a documentation version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentationVersionOutcome UpdateDocumentationVersion(const Model::UpdateDocumentationVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocumentationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDocumentationVersionRequestT = Model::UpdateDocumentationVersionRequest>
        Model::UpdateDocumentationVersionOutcomeCallable UpdateDocumentationVersionCallable(const UpdateDocumentationVersionRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateDocumentationVersion, request);
        }

        /**
         * An Async wrapper for UpdateDocumentationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDocumentationVersionRequestT = Model::UpdateDocumentationVersionRequest>
        void UpdateDocumentationVersionAsync(const UpdateDocumentationVersionRequestT& request, const UpdateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateDocumentationVersion, request, handler, context);
        }

        /**
         * <p>Changes information about the DomainName resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainNameOutcome UpdateDomainName(const Model::UpdateDomainNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainNameRequestT = Model::UpdateDomainNameRequest>
        Model::UpdateDomainNameOutcomeCallable UpdateDomainNameCallable(const UpdateDomainNameRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateDomainName, request);
        }

        /**
         * An Async wrapper for UpdateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainNameRequestT = Model::UpdateDomainNameRequest>
        void UpdateDomainNameAsync(const UpdateDomainNameRequestT& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateDomainName, request, handler, context);
        }

        /**
         * <p>Updates a GatewayResponse of a specified response type on the given
         * RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateGatewayResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayResponseOutcome UpdateGatewayResponse(const Model::UpdateGatewayResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewayResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGatewayResponseRequestT = Model::UpdateGatewayResponseRequest>
        Model::UpdateGatewayResponseOutcomeCallable UpdateGatewayResponseCallable(const UpdateGatewayResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateGatewayResponse, request);
        }

        /**
         * An Async wrapper for UpdateGatewayResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGatewayResponseRequestT = Model::UpdateGatewayResponseRequest>
        void UpdateGatewayResponseAsync(const UpdateGatewayResponseRequestT& request, const UpdateGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateGatewayResponse, request, handler, context);
        }

        /**
         * <p>Represents an update integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationOutcome UpdateIntegration(const Model::UpdateIntegrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIntegrationRequestT = Model::UpdateIntegrationRequest>
        Model::UpdateIntegrationOutcomeCallable UpdateIntegrationCallable(const UpdateIntegrationRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateIntegration, request);
        }

        /**
         * An Async wrapper for UpdateIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIntegrationRequestT = Model::UpdateIntegrationRequest>
        void UpdateIntegrationAsync(const UpdateIntegrationRequestT& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateIntegration, request, handler, context);
        }

        /**
         * <p>Represents an update integration response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationResponseOutcome UpdateIntegrationResponse(const Model::UpdateIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIntegrationResponseRequestT = Model::UpdateIntegrationResponseRequest>
        Model::UpdateIntegrationResponseOutcomeCallable UpdateIntegrationResponseCallable(const UpdateIntegrationResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateIntegrationResponse, request);
        }

        /**
         * An Async wrapper for UpdateIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIntegrationResponseRequestT = Model::UpdateIntegrationResponseRequest>
        void UpdateIntegrationResponseAsync(const UpdateIntegrationResponseRequestT& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateIntegrationResponse, request, handler, context);
        }

        /**
         * <p>Updates an existing Method resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMethodOutcome UpdateMethod(const Model::UpdateMethodRequest& request) const;

        /**
         * A Callable wrapper for UpdateMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMethodRequestT = Model::UpdateMethodRequest>
        Model::UpdateMethodOutcomeCallable UpdateMethodCallable(const UpdateMethodRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateMethod, request);
        }

        /**
         * An Async wrapper for UpdateMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMethodRequestT = Model::UpdateMethodRequest>
        void UpdateMethodAsync(const UpdateMethodRequestT& request, const UpdateMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateMethod, request, handler, context);
        }

        /**
         * <p>Updates an existing MethodResponse resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMethodResponseOutcome UpdateMethodResponse(const Model::UpdateMethodResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateMethodResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMethodResponseRequestT = Model::UpdateMethodResponseRequest>
        Model::UpdateMethodResponseOutcomeCallable UpdateMethodResponseCallable(const UpdateMethodResponseRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateMethodResponse, request);
        }

        /**
         * An Async wrapper for UpdateMethodResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMethodResponseRequestT = Model::UpdateMethodResponseRequest>
        void UpdateMethodResponseAsync(const UpdateMethodResponseRequestT& request, const UpdateMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateMethodResponse, request, handler, context);
        }

        /**
         * <p>Changes information about a model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateModelRequestT = Model::UpdateModelRequest>
        Model::UpdateModelOutcomeCallable UpdateModelCallable(const UpdateModelRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateModel, request);
        }

        /**
         * An Async wrapper for UpdateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateModelRequestT = Model::UpdateModelRequest>
        void UpdateModelAsync(const UpdateModelRequestT& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateModel, request, handler, context);
        }

        /**
         * <p>Updates a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRequestValidatorOutcome UpdateRequestValidator(const Model::UpdateRequestValidatorRequest& request) const;

        /**
         * A Callable wrapper for UpdateRequestValidator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRequestValidatorRequestT = Model::UpdateRequestValidatorRequest>
        Model::UpdateRequestValidatorOutcomeCallable UpdateRequestValidatorCallable(const UpdateRequestValidatorRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateRequestValidator, request);
        }

        /**
         * An Async wrapper for UpdateRequestValidator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRequestValidatorRequestT = Model::UpdateRequestValidatorRequest>
        void UpdateRequestValidatorAsync(const UpdateRequestValidatorRequestT& request, const UpdateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateRequestValidator, request, handler, context);
        }

        /**
         * <p>Changes information about a Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourceRequestT = Model::UpdateResourceRequest>
        Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const UpdateResourceRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateResource, request);
        }

        /**
         * An Async wrapper for UpdateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceRequestT = Model::UpdateResourceRequest>
        void UpdateResourceAsync(const UpdateResourceRequestT& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateResource, request, handler, context);
        }

        /**
         * <p>Changes information about the specified API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRestApiOutcome UpdateRestApi(const Model::UpdateRestApiRequest& request) const;

        /**
         * A Callable wrapper for UpdateRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRestApiRequestT = Model::UpdateRestApiRequest>
        Model::UpdateRestApiOutcomeCallable UpdateRestApiCallable(const UpdateRestApiRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateRestApi, request);
        }

        /**
         * An Async wrapper for UpdateRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRestApiRequestT = Model::UpdateRestApiRequest>
        void UpdateRestApiAsync(const UpdateRestApiRequestT& request, const UpdateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateRestApi, request, handler, context);
        }

        /**
         * <p>Changes information about a Stage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStageOutcome UpdateStage(const Model::UpdateStageRequest& request) const;

        /**
         * A Callable wrapper for UpdateStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStageRequestT = Model::UpdateStageRequest>
        Model::UpdateStageOutcomeCallable UpdateStageCallable(const UpdateStageRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateStage, request);
        }

        /**
         * An Async wrapper for UpdateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStageRequestT = Model::UpdateStageRequest>
        void UpdateStageAsync(const UpdateStageRequestT& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateStage, request, handler, context);
        }

        /**
         * <p>Grants a temporary extension to the remaining quota of a usage plan
         * associated with a specified API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUsageOutcome UpdateUsage(const Model::UpdateUsageRequest& request) const;

        /**
         * A Callable wrapper for UpdateUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUsageRequestT = Model::UpdateUsageRequest>
        Model::UpdateUsageOutcomeCallable UpdateUsageCallable(const UpdateUsageRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateUsage, request);
        }

        /**
         * An Async wrapper for UpdateUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUsageRequestT = Model::UpdateUsageRequest>
        void UpdateUsageAsync(const UpdateUsageRequestT& request, const UpdateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateUsage, request, handler, context);
        }

        /**
         * <p>Updates a usage plan of a given plan Id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUsagePlanOutcome UpdateUsagePlan(const Model::UpdateUsagePlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateUsagePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUsagePlanRequestT = Model::UpdateUsagePlanRequest>
        Model::UpdateUsagePlanOutcomeCallable UpdateUsagePlanCallable(const UpdateUsagePlanRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateUsagePlan, request);
        }

        /**
         * An Async wrapper for UpdateUsagePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUsagePlanRequestT = Model::UpdateUsagePlanRequest>
        void UpdateUsagePlanAsync(const UpdateUsagePlanRequestT& request, const UpdateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateUsagePlan, request, handler, context);
        }

        /**
         * <p>Updates an existing VpcLink of a specified identifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcLinkOutcome UpdateVpcLink(const Model::UpdateVpcLinkRequest& request) const;

        /**
         * A Callable wrapper for UpdateVpcLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVpcLinkRequestT = Model::UpdateVpcLinkRequest>
        Model::UpdateVpcLinkOutcomeCallable UpdateVpcLinkCallable(const UpdateVpcLinkRequestT& request) const
        {
            return SubmitCallable(&APIGatewayClient::UpdateVpcLink, request);
        }

        /**
         * An Async wrapper for UpdateVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVpcLinkRequestT = Model::UpdateVpcLinkRequest>
        void UpdateVpcLinkAsync(const UpdateVpcLinkRequestT& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&APIGatewayClient::UpdateVpcLink, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<APIGatewayEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<APIGatewayClient>;
      void init(const APIGatewayClientConfiguration& clientConfiguration);

      APIGatewayClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<APIGatewayEndpointProviderBase> m_endpointProvider;
  };

} // namespace APIGateway
} // namespace Aws
