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
   * APIs that run on AWS Lambda, Amazon EC2, or other publicly addressable web
   * services that are hosted outside of AWS.</p>
   */
  class AWS_APIGATEWAY_API APIGatewayClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<APIGatewayClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

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
        virtual Model::CreateApiKeyOutcomeCallable CreateApiKeyCallable(const Model::CreateApiKeyRequest& request) const;

        /**
         * An Async wrapper for CreateApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApiKeyAsync(const Model::CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAuthorizerOutcomeCallable CreateAuthorizerCallable(const Model::CreateAuthorizerRequest& request) const;

        /**
         * An Async wrapper for CreateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAuthorizerAsync(const Model::CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new BasePathMapping resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBasePathMappingOutcome CreateBasePathMapping(const Model::CreateBasePathMappingRequest& request) const;

        /**
         * A Callable wrapper for CreateBasePathMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBasePathMappingOutcomeCallable CreateBasePathMappingCallable(const Model::CreateBasePathMappingRequest& request) const;

        /**
         * An Async wrapper for CreateBasePathMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBasePathMappingAsync(const Model::CreateBasePathMappingRequest& request, const CreateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a documentation part.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentationPartOutcome CreateDocumentationPart(const Model::CreateDocumentationPartRequest& request) const;

        /**
         * A Callable wrapper for CreateDocumentationPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDocumentationPartOutcomeCallable CreateDocumentationPartCallable(const Model::CreateDocumentationPartRequest& request) const;

        /**
         * An Async wrapper for CreateDocumentationPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDocumentationPartAsync(const Model::CreateDocumentationPartRequest& request, const CreateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a documentation version</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentationVersionOutcome CreateDocumentationVersion(const Model::CreateDocumentationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateDocumentationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDocumentationVersionOutcomeCallable CreateDocumentationVersionCallable(const Model::CreateDocumentationVersionRequest& request) const;

        /**
         * An Async wrapper for CreateDocumentationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDocumentationVersionAsync(const Model::CreateDocumentationVersionRequest& request, const CreateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainNameOutcome CreateDomainName(const Model::CreateDomainNameRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainNameOutcomeCallable CreateDomainNameCallable(const Model::CreateDomainNameRequest& request) const;

        /**
         * An Async wrapper for CreateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainNameAsync(const Model::CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

        /**
         * An Async wrapper for CreateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRequestValidatorOutcome CreateRequestValidator(const Model::CreateRequestValidatorRequest& request) const;

        /**
         * A Callable wrapper for CreateRequestValidator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRequestValidatorOutcomeCallable CreateRequestValidatorCallable(const Model::CreateRequestValidatorRequest& request) const;

        /**
         * An Async wrapper for CreateRequestValidator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRequestValidatorAsync(const Model::CreateRequestValidatorRequest& request, const CreateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;

        /**
         * A Callable wrapper for CreateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request) const;

        /**
         * An Async wrapper for CreateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new RestApi resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRestApiOutcome CreateRestApi(const Model::CreateRestApiRequest& request) const;

        /**
         * A Callable wrapper for CreateRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRestApiOutcomeCallable CreateRestApiCallable(const Model::CreateRestApiRequest& request) const;

        /**
         * An Async wrapper for CreateRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRestApiAsync(const Model::CreateRestApiRequest& request, const CreateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateStageOutcomeCallable CreateStageCallable(const Model::CreateStageRequest& request) const;

        /**
         * An Async wrapper for CreateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStageAsync(const Model::CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateUsagePlanOutcomeCallable CreateUsagePlanCallable(const Model::CreateUsagePlanRequest& request) const;

        /**
         * An Async wrapper for CreateUsagePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUsagePlanAsync(const Model::CreateUsagePlanRequest& request, const CreateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateUsagePlanKeyOutcomeCallable CreateUsagePlanKeyCallable(const Model::CreateUsagePlanKeyRequest& request) const;

        /**
         * An Async wrapper for CreateUsagePlanKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUsagePlanKeyAsync(const Model::CreateUsagePlanKeyRequest& request, const CreateUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateVpcLinkOutcomeCallable CreateVpcLinkCallable(const Model::CreateVpcLinkRequest& request) const;

        /**
         * An Async wrapper for CreateVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcLinkAsync(const Model::CreateVpcLinkRequest& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the ApiKey resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApiKeyOutcomeCallable DeleteApiKeyCallable(const Model::DeleteApiKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApiKeyAsync(const Model::DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing Authorizer resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuthorizerOutcome DeleteAuthorizer(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for DeleteAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAuthorizerOutcomeCallable DeleteAuthorizerCallable(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * An Async wrapper for DeleteAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAuthorizerAsync(const Model::DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the BasePathMapping resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBasePathMappingOutcome DeleteBasePathMapping(const Model::DeleteBasePathMappingRequest& request) const;

        /**
         * A Callable wrapper for DeleteBasePathMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBasePathMappingOutcomeCallable DeleteBasePathMappingCallable(const Model::DeleteBasePathMappingRequest& request) const;

        /**
         * An Async wrapper for DeleteBasePathMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBasePathMappingAsync(const Model::DeleteBasePathMappingRequest& request, const DeleteBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the ClientCertificate resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClientCertificateOutcome DeleteClientCertificate(const Model::DeleteClientCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteClientCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClientCertificateOutcomeCallable DeleteClientCertificateCallable(const Model::DeleteClientCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClientCertificateAsync(const Model::DeleteClientCertificateRequest& request, const DeleteClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDeploymentOutcomeCallable DeleteDeploymentCallable(const Model::DeleteDeploymentRequest& request) const;

        /**
         * An Async wrapper for DeleteDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentAsync(const Model::DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a documentation part</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentationPartOutcome DeleteDocumentationPart(const Model::DeleteDocumentationPartRequest& request) const;

        /**
         * A Callable wrapper for DeleteDocumentationPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentationPartOutcomeCallable DeleteDocumentationPartCallable(const Model::DeleteDocumentationPartRequest& request) const;

        /**
         * An Async wrapper for DeleteDocumentationPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentationPartAsync(const Model::DeleteDocumentationPartRequest& request, const DeleteDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a documentation version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentationVersionOutcome DeleteDocumentationVersion(const Model::DeleteDocumentationVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDocumentationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentationVersionOutcomeCallable DeleteDocumentationVersionCallable(const Model::DeleteDocumentationVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteDocumentationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentationVersionAsync(const Model::DeleteDocumentationVersionRequest& request, const DeleteDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the DomainName resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainNameOutcome DeleteDomainName(const Model::DeleteDomainNameRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainNameOutcomeCallable DeleteDomainNameCallable(const Model::DeleteDomainNameRequest& request) const;

        /**
         * An Async wrapper for DeleteDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainNameAsync(const Model::DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteGatewayResponseOutcomeCallable DeleteGatewayResponseCallable(const Model::DeleteGatewayResponseRequest& request) const;

        /**
         * An Async wrapper for DeleteGatewayResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGatewayResponseAsync(const Model::DeleteGatewayResponseRequest& request, const DeleteGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a delete integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const Model::DeleteIntegrationRequest& request) const;

        /**
         * An Async wrapper for DeleteIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntegrationAsync(const Model::DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a delete integration response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationResponseOutcome DeleteIntegrationResponse(const Model::DeleteIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntegrationResponseOutcomeCallable DeleteIntegrationResponseCallable(const Model::DeleteIntegrationResponseRequest& request) const;

        /**
         * An Async wrapper for DeleteIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntegrationResponseAsync(const Model::DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing Method resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMethodOutcome DeleteMethod(const Model::DeleteMethodRequest& request) const;

        /**
         * A Callable wrapper for DeleteMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMethodOutcomeCallable DeleteMethodCallable(const Model::DeleteMethodRequest& request) const;

        /**
         * An Async wrapper for DeleteMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMethodAsync(const Model::DeleteMethodRequest& request, const DeleteMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing MethodResponse resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMethodResponseOutcome DeleteMethodResponse(const Model::DeleteMethodResponseRequest& request) const;

        /**
         * A Callable wrapper for DeleteMethodResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMethodResponseOutcomeCallable DeleteMethodResponseCallable(const Model::DeleteMethodResponseRequest& request) const;

        /**
         * An Async wrapper for DeleteMethodResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMethodResponseAsync(const Model::DeleteMethodResponseRequest& request, const DeleteMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * An Async wrapper for DeleteModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRequestValidatorOutcome DeleteRequestValidator(const Model::DeleteRequestValidatorRequest& request) const;

        /**
         * A Callable wrapper for DeleteRequestValidator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRequestValidatorOutcomeCallable DeleteRequestValidatorCallable(const Model::DeleteRequestValidatorRequest& request) const;

        /**
         * An Async wrapper for DeleteRequestValidator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRequestValidatorAsync(const Model::DeleteRequestValidatorRequest& request, const DeleteRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceOutcomeCallable DeleteResourceCallable(const Model::DeleteResourceRequest& request) const;

        /**
         * An Async wrapper for DeleteResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRestApiOutcome DeleteRestApi(const Model::DeleteRestApiRequest& request) const;

        /**
         * A Callable wrapper for DeleteRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRestApiOutcomeCallable DeleteRestApiCallable(const Model::DeleteRestApiRequest& request) const;

        /**
         * An Async wrapper for DeleteRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRestApiAsync(const Model::DeleteRestApiRequest& request, const DeleteRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Stage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStageOutcome DeleteStage(const Model::DeleteStageRequest& request) const;

        /**
         * A Callable wrapper for DeleteStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStageOutcomeCallable DeleteStageCallable(const Model::DeleteStageRequest& request) const;

        /**
         * An Async wrapper for DeleteStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStageAsync(const Model::DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a usage plan of a given plan Id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsagePlanOutcome DeleteUsagePlan(const Model::DeleteUsagePlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteUsagePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUsagePlanOutcomeCallable DeleteUsagePlanCallable(const Model::DeleteUsagePlanRequest& request) const;

        /**
         * An Async wrapper for DeleteUsagePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUsagePlanAsync(const Model::DeleteUsagePlanRequest& request, const DeleteUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteUsagePlanKeyOutcomeCallable DeleteUsagePlanKeyCallable(const Model::DeleteUsagePlanKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteUsagePlanKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUsagePlanKeyAsync(const Model::DeleteUsagePlanKeyRequest& request, const DeleteUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVpcLinkOutcomeCallable DeleteVpcLinkCallable(const Model::DeleteVpcLinkRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcLinkAsync(const Model::DeleteVpcLinkRequest& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::FlushStageAuthorizersCacheOutcomeCallable FlushStageAuthorizersCacheCallable(const Model::FlushStageAuthorizersCacheRequest& request) const;

        /**
         * An Async wrapper for FlushStageAuthorizersCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FlushStageAuthorizersCacheAsync(const Model::FlushStageAuthorizersCacheRequest& request, const FlushStageAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Flushes a stage's cache.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/FlushStageCache">AWS
         * API Reference</a></p>
         */
        virtual Model::FlushStageCacheOutcome FlushStageCache(const Model::FlushStageCacheRequest& request) const;

        /**
         * A Callable wrapper for FlushStageCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FlushStageCacheOutcomeCallable FlushStageCacheCallable(const Model::FlushStageCacheRequest& request) const;

        /**
         * An Async wrapper for FlushStageCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FlushStageCacheAsync(const Model::FlushStageCacheRequest& request, const FlushStageCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a ClientCertificate resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GenerateClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateClientCertificateOutcome GenerateClientCertificate(const Model::GenerateClientCertificateRequest& request) const;

        /**
         * A Callable wrapper for GenerateClientCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateClientCertificateOutcomeCallable GenerateClientCertificateCallable(const Model::GenerateClientCertificateRequest& request) const;

        /**
         * An Async wrapper for GenerateClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateClientCertificateAsync(const Model::GenerateClientCertificateRequest& request, const GenerateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAccountOutcomeCallable GetAccountCallable(const Model::GetAccountRequest& request) const;

        /**
         * An Async wrapper for GetAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAsync(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetApiKeyOutcomeCallable GetApiKeyCallable(const Model::GetApiKeyRequest& request) const;

        /**
         * An Async wrapper for GetApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApiKeyAsync(const Model::GetApiKeyRequest& request, const GetApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetApiKeysOutcomeCallable GetApiKeysCallable(const Model::GetApiKeysRequest& request) const;

        /**
         * An Async wrapper for GetApiKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApiKeysAsync(const Model::GetApiKeysRequest& request, const GetApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an existing Authorizer resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizerOutcome GetAuthorizer(const Model::GetAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for GetAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizerOutcomeCallable GetAuthorizerCallable(const Model::GetAuthorizerRequest& request) const;

        /**
         * An Async wrapper for GetAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizerAsync(const Model::GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an existing Authorizers resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetAuthorizers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizersOutcome GetAuthorizers(const Model::GetAuthorizersRequest& request) const;

        /**
         * A Callable wrapper for GetAuthorizers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizersOutcomeCallable GetAuthorizersCallable(const Model::GetAuthorizersRequest& request) const;

        /**
         * An Async wrapper for GetAuthorizers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizersAsync(const Model::GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a BasePathMapping resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBasePathMappingOutcome GetBasePathMapping(const Model::GetBasePathMappingRequest& request) const;

        /**
         * A Callable wrapper for GetBasePathMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBasePathMappingOutcomeCallable GetBasePathMappingCallable(const Model::GetBasePathMappingRequest& request) const;

        /**
         * An Async wrapper for GetBasePathMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBasePathMappingAsync(const Model::GetBasePathMappingRequest& request, const GetBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetBasePathMappingsOutcomeCallable GetBasePathMappingsCallable(const Model::GetBasePathMappingsRequest& request) const;

        /**
         * An Async wrapper for GetBasePathMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBasePathMappingsAsync(const Model::GetBasePathMappingsRequest& request, const GetBasePathMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetClientCertificateOutcomeCallable GetClientCertificateCallable(const Model::GetClientCertificateRequest& request) const;

        /**
         * An Async wrapper for GetClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClientCertificateAsync(const Model::GetClientCertificateRequest& request, const GetClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetClientCertificatesOutcomeCallable GetClientCertificatesCallable(const Model::GetClientCertificatesRequest& request) const;

        /**
         * An Async wrapper for GetClientCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClientCertificatesAsync(const Model::GetClientCertificatesRequest& request, const GetClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Deployment resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDeploymentsOutcomeCallable GetDeploymentsCallable(const Model::GetDeploymentsRequest& request) const;

        /**
         * An Async wrapper for GetDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentsAsync(const Model::GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a documentation part.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationPartOutcome GetDocumentationPart(const Model::GetDocumentationPartRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentationPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentationPartOutcomeCallable GetDocumentationPartCallable(const Model::GetDocumentationPartRequest& request) const;

        /**
         * An Async wrapper for GetDocumentationPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentationPartAsync(const Model::GetDocumentationPartRequest& request, const GetDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets documentation parts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationParts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationPartsOutcome GetDocumentationParts(const Model::GetDocumentationPartsRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentationParts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentationPartsOutcomeCallable GetDocumentationPartsCallable(const Model::GetDocumentationPartsRequest& request) const;

        /**
         * An Async wrapper for GetDocumentationParts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentationPartsAsync(const Model::GetDocumentationPartsRequest& request, const GetDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a documentation version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationVersionOutcome GetDocumentationVersion(const Model::GetDocumentationVersionRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentationVersionOutcomeCallable GetDocumentationVersionCallable(const Model::GetDocumentationVersionRequest& request) const;

        /**
         * An Async wrapper for GetDocumentationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentationVersionAsync(const Model::GetDocumentationVersionRequest& request, const GetDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets documentation versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationVersionsOutcome GetDocumentationVersions(const Model::GetDocumentationVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentationVersionsOutcomeCallable GetDocumentationVersionsCallable(const Model::GetDocumentationVersionsRequest& request) const;

        /**
         * An Async wrapper for GetDocumentationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentationVersionsAsync(const Model::GetDocumentationVersionsRequest& request, const GetDocumentationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDomainNameOutcomeCallable GetDomainNameCallable(const Model::GetDomainNameRequest& request) const;

        /**
         * An Async wrapper for GetDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainNameAsync(const Model::GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDomainNamesOutcomeCallable GetDomainNamesCallable(const Model::GetDomainNamesRequest& request) const;

        /**
         * An Async wrapper for GetDomainNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainNamesAsync(const Model::GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetExportOutcomeCallable GetExportCallable(const Model::GetExportRequest& request) const;

        /**
         * An Async wrapper for GetExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportAsync(const Model::GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetGatewayResponseOutcomeCallable GetGatewayResponseCallable(const Model::GetGatewayResponseRequest& request) const;

        /**
         * An Async wrapper for GetGatewayResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGatewayResponseAsync(const Model::GetGatewayResponseRequest& request, const GetGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetGatewayResponsesOutcomeCallable GetGatewayResponsesCallable(const Model::GetGatewayResponsesRequest& request) const;

        /**
         * An Async wrapper for GetGatewayResponses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGatewayResponsesAsync(const Model::GetGatewayResponsesRequest& request, const GetGatewayResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the integration settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

        /**
         * A Callable wrapper for GetIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const Model::GetIntegrationRequest& request) const;

        /**
         * An Async wrapper for GetIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntegrationAsync(const Model::GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a get integration response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationResponseOutcome GetIntegrationResponse(const Model::GetIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for GetIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntegrationResponseOutcomeCallable GetIntegrationResponseCallable(const Model::GetIntegrationResponseRequest& request) const;

        /**
         * An Async wrapper for GetIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntegrationResponseAsync(const Model::GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an existing Method resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMethodOutcome GetMethod(const Model::GetMethodRequest& request) const;

        /**
         * A Callable wrapper for GetMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMethodOutcomeCallable GetMethodCallable(const Model::GetMethodRequest& request) const;

        /**
         * An Async wrapper for GetMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMethodAsync(const Model::GetMethodRequest& request, const GetMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a MethodResponse resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMethodResponseOutcome GetMethodResponse(const Model::GetMethodResponseRequest& request) const;

        /**
         * A Callable wrapper for GetMethodResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMethodResponseOutcomeCallable GetMethodResponseCallable(const Model::GetMethodResponseRequest& request) const;

        /**
         * An Async wrapper for GetMethodResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMethodResponseAsync(const Model::GetMethodResponseRequest& request, const GetMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetModelOutcomeCallable GetModelCallable(const Model::GetModelRequest& request) const;

        /**
         * An Async wrapper for GetModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelAsync(const Model::GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetModelTemplateOutcomeCallable GetModelTemplateCallable(const Model::GetModelTemplateRequest& request) const;

        /**
         * An Async wrapper for GetModelTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelTemplateAsync(const Model::GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetModelsOutcomeCallable GetModelsCallable(const Model::GetModelsRequest& request) const;

        /**
         * An Async wrapper for GetModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelsAsync(const Model::GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRequestValidatorOutcome GetRequestValidator(const Model::GetRequestValidatorRequest& request) const;

        /**
         * A Callable wrapper for GetRequestValidator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRequestValidatorOutcomeCallable GetRequestValidatorCallable(const Model::GetRequestValidatorRequest& request) const;

        /**
         * An Async wrapper for GetRequestValidator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRequestValidatorAsync(const Model::GetRequestValidatorRequest& request, const GetRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetRequestValidatorsOutcomeCallable GetRequestValidatorsCallable(const Model::GetRequestValidatorsRequest& request) const;

        /**
         * An Async wrapper for GetRequestValidators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRequestValidatorsAsync(const Model::GetRequestValidatorsRequest& request, const GetRequestValidatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceOutcome GetResource(const Model::GetResourceRequest& request) const;

        /**
         * A Callable wrapper for GetResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceOutcomeCallable GetResourceCallable(const Model::GetResourceRequest& request) const;

        /**
         * An Async wrapper for GetResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceAsync(const Model::GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetResourcesOutcomeCallable GetResourcesCallable(const Model::GetResourcesRequest& request) const;

        /**
         * An Async wrapper for GetResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcesAsync(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the RestApi resource in the collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRestApiOutcome GetRestApi(const Model::GetRestApiRequest& request) const;

        /**
         * A Callable wrapper for GetRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRestApiOutcomeCallable GetRestApiCallable(const Model::GetRestApiRequest& request) const;

        /**
         * An Async wrapper for GetRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRestApiAsync(const Model::GetRestApiRequest& request, const GetRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetRestApisOutcomeCallable GetRestApisCallable(const Model::GetRestApisRequest& request) const;

        /**
         * An Async wrapper for GetRestApis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRestApisAsync(const Model::GetRestApisRequest& request, const GetRestApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a client SDK for a RestApi and Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdk">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSdkOutcome GetSdk(const Model::GetSdkRequest& request) const;

        /**
         * A Callable wrapper for GetSdk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSdkOutcomeCallable GetSdkCallable(const Model::GetSdkRequest& request) const;

        /**
         * An Async wrapper for GetSdk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSdkAsync(const Model::GetSdkRequest& request, const GetSdkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an SDK type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdkType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSdkTypeOutcome GetSdkType(const Model::GetSdkTypeRequest& request) const;

        /**
         * A Callable wrapper for GetSdkType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSdkTypeOutcomeCallable GetSdkTypeCallable(const Model::GetSdkTypeRequest& request) const;

        /**
         * An Async wrapper for GetSdkType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSdkTypeAsync(const Model::GetSdkTypeRequest& request, const GetSdkTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets SDK types</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdkTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSdkTypesOutcome GetSdkTypes(const Model::GetSdkTypesRequest& request) const;

        /**
         * A Callable wrapper for GetSdkTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSdkTypesOutcomeCallable GetSdkTypesCallable(const Model::GetSdkTypesRequest& request) const;

        /**
         * An Async wrapper for GetSdkTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSdkTypesAsync(const Model::GetSdkTypesRequest& request, const GetSdkTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Stage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetStage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageOutcome GetStage(const Model::GetStageRequest& request) const;

        /**
         * A Callable wrapper for GetStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStageOutcomeCallable GetStageCallable(const Model::GetStageRequest& request) const;

        /**
         * An Async wrapper for GetStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStageAsync(const Model::GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetStagesOutcomeCallable GetStagesCallable(const Model::GetStagesRequest& request) const;

        /**
         * An Async wrapper for GetStages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStagesAsync(const Model::GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Tags collection for a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * A Callable wrapper for GetTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request) const;

        /**
         * An Async wrapper for GetTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetUsageOutcomeCallable GetUsageCallable(const Model::GetUsageRequest& request) const;

        /**
         * An Async wrapper for GetUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageAsync(const Model::GetUsageRequest& request, const GetUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a usage plan of a given plan identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsagePlanOutcome GetUsagePlan(const Model::GetUsagePlanRequest& request) const;

        /**
         * A Callable wrapper for GetUsagePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsagePlanOutcomeCallable GetUsagePlanCallable(const Model::GetUsagePlanRequest& request) const;

        /**
         * An Async wrapper for GetUsagePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsagePlanAsync(const Model::GetUsagePlanRequest& request, const GetUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetUsagePlanKeyOutcomeCallable GetUsagePlanKeyCallable(const Model::GetUsagePlanKeyRequest& request) const;

        /**
         * An Async wrapper for GetUsagePlanKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsagePlanKeyAsync(const Model::GetUsagePlanKeyRequest& request, const GetUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetUsagePlanKeysOutcomeCallable GetUsagePlanKeysCallable(const Model::GetUsagePlanKeysRequest& request) const;

        /**
         * An Async wrapper for GetUsagePlanKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsagePlanKeysAsync(const Model::GetUsagePlanKeysRequest& request, const GetUsagePlanKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetUsagePlansOutcomeCallable GetUsagePlansCallable(const Model::GetUsagePlansRequest& request) const;

        /**
         * An Async wrapper for GetUsagePlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsagePlansAsync(const Model::GetUsagePlansRequest& request, const GetUsagePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVpcLinkOutcomeCallable GetVpcLinkCallable(const Model::GetVpcLinkRequest& request) const;

        /**
         * An Async wrapper for GetVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVpcLinkAsync(const Model::GetVpcLinkRequest& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVpcLinksOutcomeCallable GetVpcLinksCallable(const Model::GetVpcLinksRequest& request) const;

        /**
         * An Async wrapper for GetVpcLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVpcLinksAsync(const Model::GetVpcLinksRequest& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ImportApiKeysOutcomeCallable ImportApiKeysCallable(const Model::ImportApiKeysRequest& request) const;

        /**
         * An Async wrapper for ImportApiKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportApiKeysAsync(const Model::ImportApiKeysRequest& request, const ImportApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports documentation parts</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportDocumentationParts">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportDocumentationPartsOutcome ImportDocumentationParts(const Model::ImportDocumentationPartsRequest& request) const;

        /**
         * A Callable wrapper for ImportDocumentationParts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportDocumentationPartsOutcomeCallable ImportDocumentationPartsCallable(const Model::ImportDocumentationPartsRequest& request) const;

        /**
         * An Async wrapper for ImportDocumentationParts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportDocumentationPartsAsync(const Model::ImportDocumentationPartsRequest& request, const ImportDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ImportRestApiOutcomeCallable ImportRestApiCallable(const Model::ImportRestApiRequest& request) const;

        /**
         * An Async wrapper for ImportRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportRestApiAsync(const Model::ImportRestApiRequest& request, const ImportRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutGatewayResponseOutcomeCallable PutGatewayResponseCallable(const Model::PutGatewayResponseRequest& request) const;

        /**
         * An Async wrapper for PutGatewayResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutGatewayResponseAsync(const Model::PutGatewayResponseRequest& request, const PutGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets up a method's integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntegrationOutcome PutIntegration(const Model::PutIntegrationRequest& request) const;

        /**
         * A Callable wrapper for PutIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutIntegrationOutcomeCallable PutIntegrationCallable(const Model::PutIntegrationRequest& request) const;

        /**
         * An Async wrapper for PutIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutIntegrationAsync(const Model::PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a put integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntegrationResponseOutcome PutIntegrationResponse(const Model::PutIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for PutIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutIntegrationResponseOutcomeCallable PutIntegrationResponseCallable(const Model::PutIntegrationResponseRequest& request) const;

        /**
         * An Async wrapper for PutIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutIntegrationResponseAsync(const Model::PutIntegrationResponseRequest& request, const PutIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add a method to an existing Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMethodOutcome PutMethod(const Model::PutMethodRequest& request) const;

        /**
         * A Callable wrapper for PutMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMethodOutcomeCallable PutMethodCallable(const Model::PutMethodRequest& request) const;

        /**
         * An Async wrapper for PutMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMethodAsync(const Model::PutMethodRequest& request, const PutMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutMethodResponseOutcomeCallable PutMethodResponseCallable(const Model::PutMethodResponseRequest& request) const;

        /**
         * An Async wrapper for PutMethodResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMethodResponseAsync(const Model::PutMethodResponseRequest& request, const PutMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutRestApiOutcomeCallable PutRestApiCallable(const Model::PutRestApiRequest& request) const;

        /**
         * An Async wrapper for PutRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRestApiAsync(const Model::PutRestApiRequest& request, const PutRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates a tag on a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TestInvokeAuthorizerOutcomeCallable TestInvokeAuthorizerCallable(const Model::TestInvokeAuthorizerRequest& request) const;

        /**
         * An Async wrapper for TestInvokeAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestInvokeAuthorizerAsync(const Model::TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TestInvokeMethodOutcomeCallable TestInvokeMethodCallable(const Model::TestInvokeMethodRequest& request) const;

        /**
         * An Async wrapper for TestInvokeMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestInvokeMethodAsync(const Model::TestInvokeMethodRequest& request, const TestInvokeMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateAccountOutcomeCallable UpdateAccountCallable(const Model::UpdateAccountRequest& request) const;

        /**
         * An Async wrapper for UpdateAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountAsync(const Model::UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about an ApiKey resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiKeyOutcome UpdateApiKey(const Model::UpdateApiKeyRequest& request) const;

        /**
         * A Callable wrapper for UpdateApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApiKeyOutcomeCallable UpdateApiKeyCallable(const Model::UpdateApiKeyRequest& request) const;

        /**
         * An Async wrapper for UpdateApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApiKeyAsync(const Model::UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Authorizer resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthorizerOutcome UpdateAuthorizer(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for UpdateAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuthorizerOutcomeCallable UpdateAuthorizerCallable(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * An Async wrapper for UpdateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuthorizerAsync(const Model::UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateBasePathMappingOutcomeCallable UpdateBasePathMappingCallable(const Model::UpdateBasePathMappingRequest& request) const;

        /**
         * An Async wrapper for UpdateBasePathMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBasePathMappingAsync(const Model::UpdateBasePathMappingRequest& request, const UpdateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateClientCertificateOutcomeCallable UpdateClientCertificateCallable(const Model::UpdateClientCertificateRequest& request) const;

        /**
         * An Async wrapper for UpdateClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClientCertificateAsync(const Model::UpdateClientCertificateRequest& request, const UpdateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDeploymentOutcomeCallable UpdateDeploymentCallable(const Model::UpdateDeploymentRequest& request) const;

        /**
         * An Async wrapper for UpdateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeploymentAsync(const Model::UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a documentation part.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentationPartOutcome UpdateDocumentationPart(const Model::UpdateDocumentationPartRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocumentationPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentationPartOutcomeCallable UpdateDocumentationPartCallable(const Model::UpdateDocumentationPartRequest& request) const;

        /**
         * An Async wrapper for UpdateDocumentationPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDocumentationPartAsync(const Model::UpdateDocumentationPartRequest& request, const UpdateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a documentation version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentationVersionOutcome UpdateDocumentationVersion(const Model::UpdateDocumentationVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocumentationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentationVersionOutcomeCallable UpdateDocumentationVersionCallable(const Model::UpdateDocumentationVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateDocumentationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDocumentationVersionAsync(const Model::UpdateDocumentationVersionRequest& request, const UpdateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDomainNameOutcomeCallable UpdateDomainNameCallable(const Model::UpdateDomainNameRequest& request) const;

        /**
         * An Async wrapper for UpdateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainNameAsync(const Model::UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateGatewayResponseOutcomeCallable UpdateGatewayResponseCallable(const Model::UpdateGatewayResponseRequest& request) const;

        /**
         * An Async wrapper for UpdateGatewayResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayResponseAsync(const Model::UpdateGatewayResponseRequest& request, const UpdateGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents an update integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationOutcome UpdateIntegration(const Model::UpdateIntegrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIntegrationOutcomeCallable UpdateIntegrationCallable(const Model::UpdateIntegrationRequest& request) const;

        /**
         * An Async wrapper for UpdateIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIntegrationAsync(const Model::UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents an update integration response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationResponseOutcome UpdateIntegrationResponse(const Model::UpdateIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIntegrationResponseOutcomeCallable UpdateIntegrationResponseCallable(const Model::UpdateIntegrationResponseRequest& request) const;

        /**
         * An Async wrapper for UpdateIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIntegrationResponseAsync(const Model::UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Method resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMethodOutcome UpdateMethod(const Model::UpdateMethodRequest& request) const;

        /**
         * A Callable wrapper for UpdateMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMethodOutcomeCallable UpdateMethodCallable(const Model::UpdateMethodRequest& request) const;

        /**
         * An Async wrapper for UpdateMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMethodAsync(const Model::UpdateMethodRequest& request, const UpdateMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing MethodResponse resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMethodResponseOutcome UpdateMethodResponse(const Model::UpdateMethodResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateMethodResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMethodResponseOutcomeCallable UpdateMethodResponseCallable(const Model::UpdateMethodResponseRequest& request) const;

        /**
         * An Async wrapper for UpdateMethodResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMethodResponseAsync(const Model::UpdateMethodResponseRequest& request, const UpdateMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateModelOutcomeCallable UpdateModelCallable(const Model::UpdateModelRequest& request) const;

        /**
         * An Async wrapper for UpdateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateModelAsync(const Model::UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRequestValidatorOutcome UpdateRequestValidator(const Model::UpdateRequestValidatorRequest& request) const;

        /**
         * A Callable wrapper for UpdateRequestValidator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRequestValidatorOutcomeCallable UpdateRequestValidatorCallable(const Model::UpdateRequestValidatorRequest& request) const;

        /**
         * An Async wrapper for UpdateRequestValidator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRequestValidatorAsync(const Model::UpdateRequestValidatorRequest& request, const UpdateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const Model::UpdateResourceRequest& request) const;

        /**
         * An Async wrapper for UpdateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceAsync(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about the specified API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRestApiOutcome UpdateRestApi(const Model::UpdateRestApiRequest& request) const;

        /**
         * A Callable wrapper for UpdateRestApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRestApiOutcomeCallable UpdateRestApiCallable(const Model::UpdateRestApiRequest& request) const;

        /**
         * An Async wrapper for UpdateRestApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRestApiAsync(const Model::UpdateRestApiRequest& request, const UpdateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a Stage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStageOutcome UpdateStage(const Model::UpdateStageRequest& request) const;

        /**
         * A Callable wrapper for UpdateStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStageOutcomeCallable UpdateStageCallable(const Model::UpdateStageRequest& request) const;

        /**
         * An Async wrapper for UpdateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStageAsync(const Model::UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateUsageOutcomeCallable UpdateUsageCallable(const Model::UpdateUsageRequest& request) const;

        /**
         * An Async wrapper for UpdateUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUsageAsync(const Model::UpdateUsageRequest& request, const UpdateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a usage plan of a given plan Id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUsagePlanOutcome UpdateUsagePlan(const Model::UpdateUsagePlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateUsagePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUsagePlanOutcomeCallable UpdateUsagePlanCallable(const Model::UpdateUsagePlanRequest& request) const;

        /**
         * An Async wrapper for UpdateUsagePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUsagePlanAsync(const Model::UpdateUsagePlanRequest& request, const UpdateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateVpcLinkOutcomeCallable UpdateVpcLinkCallable(const Model::UpdateVpcLinkRequest& request) const;

        /**
         * An Async wrapper for UpdateVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVpcLinkAsync(const Model::UpdateVpcLinkRequest& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
