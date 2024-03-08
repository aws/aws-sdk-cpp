/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apigatewayv2/ApiGatewayV2ServiceClientModel.h>

namespace Aws
{
namespace ApiGatewayV2
{
  /**
   * <p>Amazon API Gateway V2</p>
   */
  class AWS_APIGATEWAYV2_API ApiGatewayV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ApiGatewayV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ApiGatewayV2ClientConfiguration ClientConfigurationType;
      typedef ApiGatewayV2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayV2Client(const Aws::ApiGatewayV2::ApiGatewayV2ClientConfiguration& clientConfiguration = Aws::ApiGatewayV2::ApiGatewayV2ClientConfiguration(),
                           std::shared_ptr<ApiGatewayV2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayV2Client(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ApiGatewayV2EndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ApiGatewayV2::ApiGatewayV2ClientConfiguration& clientConfiguration = Aws::ApiGatewayV2::ApiGatewayV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApiGatewayV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ApiGatewayV2EndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ApiGatewayV2::ApiGatewayV2ClientConfiguration& clientConfiguration = Aws::ApiGatewayV2::ApiGatewayV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayV2Client(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApiGatewayV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ApiGatewayV2Client();

        /**
         * <p>Creates an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateApi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiOutcome CreateApi(const Model::CreateApiRequest& request) const;

        /**
         * A Callable wrapper for CreateApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApiRequestT = Model::CreateApiRequest>
        Model::CreateApiOutcomeCallable CreateApiCallable(const CreateApiRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateApi, request);
        }

        /**
         * An Async wrapper for CreateApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApiRequestT = Model::CreateApiRequest>
        void CreateApiAsync(const CreateApiRequestT& request, const CreateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateApi, request, handler, context);
        }

        /**
         * <p>Creates an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateApiMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiMappingOutcome CreateApiMapping(const Model::CreateApiMappingRequest& request) const;

        /**
         * A Callable wrapper for CreateApiMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApiMappingRequestT = Model::CreateApiMappingRequest>
        Model::CreateApiMappingOutcomeCallable CreateApiMappingCallable(const CreateApiMappingRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateApiMapping, request);
        }

        /**
         * An Async wrapper for CreateApiMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApiMappingRequestT = Model::CreateApiMappingRequest>
        void CreateApiMappingAsync(const CreateApiMappingRequestT& request, const CreateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateApiMapping, request, handler, context);
        }

        /**
         * <p>Creates an Authorizer for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAuthorizerOutcome CreateAuthorizer(const Model::CreateAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for CreateAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAuthorizerRequestT = Model::CreateAuthorizerRequest>
        Model::CreateAuthorizerOutcomeCallable CreateAuthorizerCallable(const CreateAuthorizerRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateAuthorizer, request);
        }

        /**
         * An Async wrapper for CreateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAuthorizerRequestT = Model::CreateAuthorizerRequest>
        void CreateAuthorizerAsync(const CreateAuthorizerRequestT& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateAuthorizer, request, handler, context);
        }

        /**
         * <p>Creates a Deployment for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const CreateDeploymentRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateDeployment, request);
        }

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        void CreateDeploymentAsync(const CreateDeploymentRequestT& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateDeployment, request, handler, context);
        }

        /**
         * <p>Creates a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainNameOutcome CreateDomainName(const Model::CreateDomainNameRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainNameRequestT = Model::CreateDomainNameRequest>
        Model::CreateDomainNameOutcomeCallable CreateDomainNameCallable(const CreateDomainNameRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateDomainName, request);
        }

        /**
         * An Async wrapper for CreateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainNameRequestT = Model::CreateDomainNameRequest>
        void CreateDomainNameAsync(const CreateDomainNameRequestT& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateDomainName, request, handler, context);
        }

        /**
         * <p>Creates an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationOutcome CreateIntegration(const Model::CreateIntegrationRequest& request) const;

        /**
         * A Callable wrapper for CreateIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
        Model::CreateIntegrationOutcomeCallable CreateIntegrationCallable(const CreateIntegrationRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateIntegration, request);
        }

        /**
         * An Async wrapper for CreateIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
        void CreateIntegrationAsync(const CreateIntegrationRequestT& request, const CreateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateIntegration, request, handler, context);
        }

        /**
         * <p>Creates an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationResponseOutcome CreateIntegrationResponse(const Model::CreateIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for CreateIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIntegrationResponseRequestT = Model::CreateIntegrationResponseRequest>
        Model::CreateIntegrationResponseOutcomeCallable CreateIntegrationResponseCallable(const CreateIntegrationResponseRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateIntegrationResponse, request);
        }

        /**
         * An Async wrapper for CreateIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIntegrationResponseRequestT = Model::CreateIntegrationResponseRequest>
        void CreateIntegrationResponseAsync(const CreateIntegrationResponseRequestT& request, const CreateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateIntegrationResponse, request, handler, context);
        }

        /**
         * <p>Creates a Model for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * A Callable wrapper for CreateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        Model::CreateModelOutcomeCallable CreateModelCallable(const CreateModelRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateModel, request);
        }

        /**
         * An Async wrapper for CreateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        void CreateModelAsync(const CreateModelRequestT& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateModel, request, handler, context);
        }

        /**
         * <p>Creates a Route for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;

        /**
         * A Callable wrapper for CreateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRouteRequestT = Model::CreateRouteRequest>
        Model::CreateRouteOutcomeCallable CreateRouteCallable(const CreateRouteRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateRoute, request);
        }

        /**
         * An Async wrapper for CreateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRouteRequestT = Model::CreateRouteRequest>
        void CreateRouteAsync(const CreateRouteRequestT& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateRoute, request, handler, context);
        }

        /**
         * <p>Creates a RouteResponse for a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateRouteResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteResponseOutcome CreateRouteResponse(const Model::CreateRouteResponseRequest& request) const;

        /**
         * A Callable wrapper for CreateRouteResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRouteResponseRequestT = Model::CreateRouteResponseRequest>
        Model::CreateRouteResponseOutcomeCallable CreateRouteResponseCallable(const CreateRouteResponseRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateRouteResponse, request);
        }

        /**
         * An Async wrapper for CreateRouteResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRouteResponseRequestT = Model::CreateRouteResponseRequest>
        void CreateRouteResponseAsync(const CreateRouteResponseRequestT& request, const CreateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateRouteResponse, request, handler, context);
        }

        /**
         * <p>Creates a Stage for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStageOutcome CreateStage(const Model::CreateStageRequest& request) const;

        /**
         * A Callable wrapper for CreateStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStageRequestT = Model::CreateStageRequest>
        Model::CreateStageOutcomeCallable CreateStageCallable(const CreateStageRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateStage, request);
        }

        /**
         * An Async wrapper for CreateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStageRequestT = Model::CreateStageRequest>
        void CreateStageAsync(const CreateStageRequestT& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateStage, request, handler, context);
        }

        /**
         * <p>Creates a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcLinkOutcome CreateVpcLink(const Model::CreateVpcLinkRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVpcLinkRequestT = Model::CreateVpcLinkRequest>
        Model::CreateVpcLinkOutcomeCallable CreateVpcLinkCallable(const CreateVpcLinkRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::CreateVpcLink, request);
        }

        /**
         * An Async wrapper for CreateVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcLinkRequestT = Model::CreateVpcLinkRequest>
        void CreateVpcLinkAsync(const CreateVpcLinkRequestT& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::CreateVpcLink, request, handler, context);
        }

        /**
         * <p>Deletes the AccessLogSettings for a Stage. To disable access logging for a
         * Stage, delete its AccessLogSettings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteAccessLogSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessLogSettingsOutcome DeleteAccessLogSettings(const Model::DeleteAccessLogSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessLogSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccessLogSettingsRequestT = Model::DeleteAccessLogSettingsRequest>
        Model::DeleteAccessLogSettingsOutcomeCallable DeleteAccessLogSettingsCallable(const DeleteAccessLogSettingsRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteAccessLogSettings, request);
        }

        /**
         * An Async wrapper for DeleteAccessLogSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessLogSettingsRequestT = Model::DeleteAccessLogSettingsRequest>
        void DeleteAccessLogSettingsAsync(const DeleteAccessLogSettingsRequestT& request, const DeleteAccessLogSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteAccessLogSettings, request, handler, context);
        }

        /**
         * <p>Deletes an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiOutcome DeleteApi(const Model::DeleteApiRequest& request) const;

        /**
         * A Callable wrapper for DeleteApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApiRequestT = Model::DeleteApiRequest>
        Model::DeleteApiOutcomeCallable DeleteApiCallable(const DeleteApiRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteApi, request);
        }

        /**
         * An Async wrapper for DeleteApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApiRequestT = Model::DeleteApiRequest>
        void DeleteApiAsync(const DeleteApiRequestT& request, const DeleteApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteApi, request, handler, context);
        }

        /**
         * <p>Deletes an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteApiMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiMappingOutcome DeleteApiMapping(const Model::DeleteApiMappingRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApiMappingRequestT = Model::DeleteApiMappingRequest>
        Model::DeleteApiMappingOutcomeCallable DeleteApiMappingCallable(const DeleteApiMappingRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteApiMapping, request);
        }

        /**
         * An Async wrapper for DeleteApiMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApiMappingRequestT = Model::DeleteApiMappingRequest>
        void DeleteApiMappingAsync(const DeleteApiMappingRequestT& request, const DeleteApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteApiMapping, request, handler, context);
        }

        /**
         * <p>Deletes an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuthorizerOutcome DeleteAuthorizer(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for DeleteAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAuthorizerRequestT = Model::DeleteAuthorizerRequest>
        Model::DeleteAuthorizerOutcomeCallable DeleteAuthorizerCallable(const DeleteAuthorizerRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteAuthorizer, request);
        }

        /**
         * An Async wrapper for DeleteAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAuthorizerRequestT = Model::DeleteAuthorizerRequest>
        void DeleteAuthorizerAsync(const DeleteAuthorizerRequestT& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteAuthorizer, request, handler, context);
        }

        /**
         * <p>Deletes a CORS configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteCorsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCorsConfigurationOutcome DeleteCorsConfiguration(const Model::DeleteCorsConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteCorsConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCorsConfigurationRequestT = Model::DeleteCorsConfigurationRequest>
        Model::DeleteCorsConfigurationOutcomeCallable DeleteCorsConfigurationCallable(const DeleteCorsConfigurationRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteCorsConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteCorsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCorsConfigurationRequestT = Model::DeleteCorsConfigurationRequest>
        void DeleteCorsConfigurationAsync(const DeleteCorsConfigurationRequestT& request, const DeleteCorsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteCorsConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentOutcome DeleteDeployment(const Model::DeleteDeploymentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
        Model::DeleteDeploymentOutcomeCallable DeleteDeploymentCallable(const DeleteDeploymentRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteDeployment, request);
        }

        /**
         * An Async wrapper for DeleteDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
        void DeleteDeploymentAsync(const DeleteDeploymentRequestT& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteDeployment, request, handler, context);
        }

        /**
         * <p>Deletes a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainNameOutcome DeleteDomainName(const Model::DeleteDomainNameRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainNameRequestT = Model::DeleteDomainNameRequest>
        Model::DeleteDomainNameOutcomeCallable DeleteDomainNameCallable(const DeleteDomainNameRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteDomainName, request);
        }

        /**
         * An Async wrapper for DeleteDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainNameRequestT = Model::DeleteDomainNameRequest>
        void DeleteDomainNameAsync(const DeleteDomainNameRequestT& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteDomainName, request, handler, context);
        }

        /**
         * <p>Deletes an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
        Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const DeleteIntegrationRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteIntegration, request);
        }

        /**
         * An Async wrapper for DeleteIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
        void DeleteIntegrationAsync(const DeleteIntegrationRequestT& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteIntegration, request, handler, context);
        }

        /**
         * <p>Deletes an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationResponseOutcome DeleteIntegrationResponse(const Model::DeleteIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntegrationResponseRequestT = Model::DeleteIntegrationResponseRequest>
        Model::DeleteIntegrationResponseOutcomeCallable DeleteIntegrationResponseCallable(const DeleteIntegrationResponseRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteIntegrationResponse, request);
        }

        /**
         * An Async wrapper for DeleteIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntegrationResponseRequestT = Model::DeleteIntegrationResponseRequest>
        void DeleteIntegrationResponseAsync(const DeleteIntegrationResponseRequestT& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteIntegrationResponse, request, handler, context);
        }

        /**
         * <p>Deletes a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        Model::DeleteModelOutcomeCallable DeleteModelCallable(const DeleteModelRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteModel, request);
        }

        /**
         * An Async wrapper for DeleteModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        void DeleteModelAsync(const DeleteModelRequestT& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteModel, request, handler, context);
        }

        /**
         * <p>Deletes a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRouteRequestT = Model::DeleteRouteRequest>
        Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const DeleteRouteRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteRoute, request);
        }

        /**
         * An Async wrapper for DeleteRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRouteRequestT = Model::DeleteRouteRequest>
        void DeleteRouteAsync(const DeleteRouteRequestT& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteRoute, request, handler, context);
        }

        /**
         * <p>Deletes a route request parameter. Supported only for WebSocket
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteRequestParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteRequestParameterOutcome DeleteRouteRequestParameter(const Model::DeleteRouteRequestParameterRequest& request) const;

        /**
         * A Callable wrapper for DeleteRouteRequestParameter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRouteRequestParameterRequestT = Model::DeleteRouteRequestParameterRequest>
        Model::DeleteRouteRequestParameterOutcomeCallable DeleteRouteRequestParameterCallable(const DeleteRouteRequestParameterRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteRouteRequestParameter, request);
        }

        /**
         * An Async wrapper for DeleteRouteRequestParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRouteRequestParameterRequestT = Model::DeleteRouteRequestParameterRequest>
        void DeleteRouteRequestParameterAsync(const DeleteRouteRequestParameterRequestT& request, const DeleteRouteRequestParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteRouteRequestParameter, request, handler, context);
        }

        /**
         * <p>Deletes a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteResponseOutcome DeleteRouteResponse(const Model::DeleteRouteResponseRequest& request) const;

        /**
         * A Callable wrapper for DeleteRouteResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRouteResponseRequestT = Model::DeleteRouteResponseRequest>
        Model::DeleteRouteResponseOutcomeCallable DeleteRouteResponseCallable(const DeleteRouteResponseRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteRouteResponse, request);
        }

        /**
         * An Async wrapper for DeleteRouteResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRouteResponseRequestT = Model::DeleteRouteResponseRequest>
        void DeleteRouteResponseAsync(const DeleteRouteResponseRequestT& request, const DeleteRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteRouteResponse, request, handler, context);
        }

        /**
         * <p>Deletes the RouteSettings for a stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteSettingsOutcome DeleteRouteSettings(const Model::DeleteRouteSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteRouteSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRouteSettingsRequestT = Model::DeleteRouteSettingsRequest>
        Model::DeleteRouteSettingsOutcomeCallable DeleteRouteSettingsCallable(const DeleteRouteSettingsRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteRouteSettings, request);
        }

        /**
         * An Async wrapper for DeleteRouteSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRouteSettingsRequestT = Model::DeleteRouteSettingsRequest>
        void DeleteRouteSettingsAsync(const DeleteRouteSettingsRequestT& request, const DeleteRouteSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteRouteSettings, request, handler, context);
        }

        /**
         * <p>Deletes a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStageOutcome DeleteStage(const Model::DeleteStageRequest& request) const;

        /**
         * A Callable wrapper for DeleteStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStageRequestT = Model::DeleteStageRequest>
        Model::DeleteStageOutcomeCallable DeleteStageCallable(const DeleteStageRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteStage, request);
        }

        /**
         * An Async wrapper for DeleteStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStageRequestT = Model::DeleteStageRequest>
        void DeleteStageAsync(const DeleteStageRequestT& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteStage, request, handler, context);
        }

        /**
         * <p>Deletes a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcLinkOutcome DeleteVpcLink(const Model::DeleteVpcLinkRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVpcLinkRequestT = Model::DeleteVpcLinkRequest>
        Model::DeleteVpcLinkOutcomeCallable DeleteVpcLinkCallable(const DeleteVpcLinkRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::DeleteVpcLink, request);
        }

        /**
         * An Async wrapper for DeleteVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVpcLinkRequestT = Model::DeleteVpcLinkRequest>
        void DeleteVpcLinkAsync(const DeleteVpcLinkRequestT& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::DeleteVpcLink, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::ExportApiOutcome ExportApi(const Model::ExportApiRequest& request) const;

        /**
         * A Callable wrapper for ExportApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportApiRequestT = Model::ExportApiRequest>
        Model::ExportApiOutcomeCallable ExportApiCallable(const ExportApiRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::ExportApi, request);
        }

        /**
         * An Async wrapper for ExportApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportApiRequestT = Model::ExportApiRequest>
        void ExportApiAsync(const ExportApiRequestT& request, const ExportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::ExportApi, request, handler, context);
        }

        /**
         * <p>Gets an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiOutcome GetApi(const Model::GetApiRequest& request) const;

        /**
         * A Callable wrapper for GetApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApiRequestT = Model::GetApiRequest>
        Model::GetApiOutcomeCallable GetApiCallable(const GetApiRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetApi, request);
        }

        /**
         * An Async wrapper for GetApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApiRequestT = Model::GetApiRequest>
        void GetApiAsync(const GetApiRequestT& request, const GetApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetApi, request, handler, context);
        }

        /**
         * <p>Gets an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApiMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiMappingOutcome GetApiMapping(const Model::GetApiMappingRequest& request) const;

        /**
         * A Callable wrapper for GetApiMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApiMappingRequestT = Model::GetApiMappingRequest>
        Model::GetApiMappingOutcomeCallable GetApiMappingCallable(const GetApiMappingRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetApiMapping, request);
        }

        /**
         * An Async wrapper for GetApiMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApiMappingRequestT = Model::GetApiMappingRequest>
        void GetApiMappingAsync(const GetApiMappingRequestT& request, const GetApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetApiMapping, request, handler, context);
        }

        /**
         * <p>Gets API mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApiMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiMappingsOutcome GetApiMappings(const Model::GetApiMappingsRequest& request) const;

        /**
         * A Callable wrapper for GetApiMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApiMappingsRequestT = Model::GetApiMappingsRequest>
        Model::GetApiMappingsOutcomeCallable GetApiMappingsCallable(const GetApiMappingsRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetApiMappings, request);
        }

        /**
         * An Async wrapper for GetApiMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApiMappingsRequestT = Model::GetApiMappingsRequest>
        void GetApiMappingsAsync(const GetApiMappingsRequestT& request, const GetApiMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetApiMappings, request, handler, context);
        }

        /**
         * <p>Gets a collection of Api resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApisOutcome GetApis(const Model::GetApisRequest& request) const;

        /**
         * A Callable wrapper for GetApis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApisRequestT = Model::GetApisRequest>
        Model::GetApisOutcomeCallable GetApisCallable(const GetApisRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetApis, request);
        }

        /**
         * An Async wrapper for GetApis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApisRequestT = Model::GetApisRequest>
        void GetApisAsync(const GetApisRequestT& request, const GetApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetApis, request, handler, context);
        }

        /**
         * <p>Gets an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizerOutcome GetAuthorizer(const Model::GetAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for GetAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAuthorizerRequestT = Model::GetAuthorizerRequest>
        Model::GetAuthorizerOutcomeCallable GetAuthorizerCallable(const GetAuthorizerRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetAuthorizer, request);
        }

        /**
         * An Async wrapper for GetAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAuthorizerRequestT = Model::GetAuthorizerRequest>
        void GetAuthorizerAsync(const GetAuthorizerRequestT& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetAuthorizer, request, handler, context);
        }

        /**
         * <p>Gets the Authorizers for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetAuthorizers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizersOutcome GetAuthorizers(const Model::GetAuthorizersRequest& request) const;

        /**
         * A Callable wrapper for GetAuthorizers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAuthorizersRequestT = Model::GetAuthorizersRequest>
        Model::GetAuthorizersOutcomeCallable GetAuthorizersCallable(const GetAuthorizersRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetAuthorizers, request);
        }

        /**
         * An Async wrapper for GetAuthorizers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAuthorizersRequestT = Model::GetAuthorizersRequest>
        void GetAuthorizersAsync(const GetAuthorizersRequestT& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetAuthorizers, request, handler, context);
        }

        /**
         * <p>Gets a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const GetDeploymentRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetDeployment, request);
        }

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        void GetDeploymentAsync(const GetDeploymentRequestT& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetDeployment, request, handler, context);
        }

        /**
         * <p>Gets the Deployments for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentsOutcome GetDeployments(const Model::GetDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for GetDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentsRequestT = Model::GetDeploymentsRequest>
        Model::GetDeploymentsOutcomeCallable GetDeploymentsCallable(const GetDeploymentsRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetDeployments, request);
        }

        /**
         * An Async wrapper for GetDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentsRequestT = Model::GetDeploymentsRequest>
        void GetDeploymentsAsync(const GetDeploymentsRequestT& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetDeployments, request, handler, context);
        }

        /**
         * <p>Gets a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNameOutcome GetDomainName(const Model::GetDomainNameRequest& request) const;

        /**
         * A Callable wrapper for GetDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainNameRequestT = Model::GetDomainNameRequest>
        Model::GetDomainNameOutcomeCallable GetDomainNameCallable(const GetDomainNameRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetDomainName, request);
        }

        /**
         * An Async wrapper for GetDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainNameRequestT = Model::GetDomainNameRequest>
        void GetDomainNameAsync(const GetDomainNameRequestT& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetDomainName, request, handler, context);
        }

        /**
         * <p>Gets the domain names for an AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNamesOutcome GetDomainNames(const Model::GetDomainNamesRequest& request) const;

        /**
         * A Callable wrapper for GetDomainNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainNamesRequestT = Model::GetDomainNamesRequest>
        Model::GetDomainNamesOutcomeCallable GetDomainNamesCallable(const GetDomainNamesRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetDomainNames, request);
        }

        /**
         * An Async wrapper for GetDomainNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainNamesRequestT = Model::GetDomainNamesRequest>
        void GetDomainNamesAsync(const GetDomainNamesRequestT& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetDomainNames, request, handler, context);
        }

        /**
         * <p>Gets an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

        /**
         * A Callable wrapper for GetIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntegrationRequestT = Model::GetIntegrationRequest>
        Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const GetIntegrationRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetIntegration, request);
        }

        /**
         * An Async wrapper for GetIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntegrationRequestT = Model::GetIntegrationRequest>
        void GetIntegrationAsync(const GetIntegrationRequestT& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetIntegration, request, handler, context);
        }

        /**
         * <p>Gets an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationResponseOutcome GetIntegrationResponse(const Model::GetIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for GetIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntegrationResponseRequestT = Model::GetIntegrationResponseRequest>
        Model::GetIntegrationResponseOutcomeCallable GetIntegrationResponseCallable(const GetIntegrationResponseRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetIntegrationResponse, request);
        }

        /**
         * An Async wrapper for GetIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntegrationResponseRequestT = Model::GetIntegrationResponseRequest>
        void GetIntegrationResponseAsync(const GetIntegrationResponseRequestT& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetIntegrationResponse, request, handler, context);
        }

        /**
         * <p>Gets the IntegrationResponses for an Integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrationResponses">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationResponsesOutcome GetIntegrationResponses(const Model::GetIntegrationResponsesRequest& request) const;

        /**
         * A Callable wrapper for GetIntegrationResponses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntegrationResponsesRequestT = Model::GetIntegrationResponsesRequest>
        Model::GetIntegrationResponsesOutcomeCallable GetIntegrationResponsesCallable(const GetIntegrationResponsesRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetIntegrationResponses, request);
        }

        /**
         * An Async wrapper for GetIntegrationResponses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntegrationResponsesRequestT = Model::GetIntegrationResponsesRequest>
        void GetIntegrationResponsesAsync(const GetIntegrationResponsesRequestT& request, const GetIntegrationResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetIntegrationResponses, request, handler, context);
        }

        /**
         * <p>Gets the Integrations for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationsOutcome GetIntegrations(const Model::GetIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for GetIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntegrationsRequestT = Model::GetIntegrationsRequest>
        Model::GetIntegrationsOutcomeCallable GetIntegrationsCallable(const GetIntegrationsRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetIntegrations, request);
        }

        /**
         * An Async wrapper for GetIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntegrationsRequestT = Model::GetIntegrationsRequest>
        void GetIntegrationsAsync(const GetIntegrationsRequestT& request, const GetIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetIntegrations, request, handler, context);
        }

        /**
         * <p>Gets a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelOutcome GetModel(const Model::GetModelRequest& request) const;

        /**
         * A Callable wrapper for GetModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelRequestT = Model::GetModelRequest>
        Model::GetModelOutcomeCallable GetModelCallable(const GetModelRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetModel, request);
        }

        /**
         * An Async wrapper for GetModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelRequestT = Model::GetModelRequest>
        void GetModelAsync(const GetModelRequestT& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetModel, request, handler, context);
        }

        /**
         * <p>Gets a model template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModelTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelTemplateOutcome GetModelTemplate(const Model::GetModelTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetModelTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelTemplateRequestT = Model::GetModelTemplateRequest>
        Model::GetModelTemplateOutcomeCallable GetModelTemplateCallable(const GetModelTemplateRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetModelTemplate, request);
        }

        /**
         * An Async wrapper for GetModelTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelTemplateRequestT = Model::GetModelTemplateRequest>
        void GetModelTemplateAsync(const GetModelTemplateRequestT& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetModelTemplate, request, handler, context);
        }

        /**
         * <p>Gets the Models for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelsOutcome GetModels(const Model::GetModelsRequest& request) const;

        /**
         * A Callable wrapper for GetModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelsRequestT = Model::GetModelsRequest>
        Model::GetModelsOutcomeCallable GetModelsCallable(const GetModelsRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetModels, request);
        }

        /**
         * An Async wrapper for GetModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelsRequestT = Model::GetModelsRequest>
        void GetModelsAsync(const GetModelsRequestT& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetModels, request, handler, context);
        }

        /**
         * <p>Gets a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteOutcome GetRoute(const Model::GetRouteRequest& request) const;

        /**
         * A Callable wrapper for GetRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRouteRequestT = Model::GetRouteRequest>
        Model::GetRouteOutcomeCallable GetRouteCallable(const GetRouteRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetRoute, request);
        }

        /**
         * An Async wrapper for GetRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRouteRequestT = Model::GetRouteRequest>
        void GetRouteAsync(const GetRouteRequestT& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetRoute, request, handler, context);
        }

        /**
         * <p>Gets a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRouteResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteResponseOutcome GetRouteResponse(const Model::GetRouteResponseRequest& request) const;

        /**
         * A Callable wrapper for GetRouteResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRouteResponseRequestT = Model::GetRouteResponseRequest>
        Model::GetRouteResponseOutcomeCallable GetRouteResponseCallable(const GetRouteResponseRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetRouteResponse, request);
        }

        /**
         * An Async wrapper for GetRouteResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRouteResponseRequestT = Model::GetRouteResponseRequest>
        void GetRouteResponseAsync(const GetRouteResponseRequestT& request, const GetRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetRouteResponse, request, handler, context);
        }

        /**
         * <p>Gets the RouteResponses for a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRouteResponses">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteResponsesOutcome GetRouteResponses(const Model::GetRouteResponsesRequest& request) const;

        /**
         * A Callable wrapper for GetRouteResponses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRouteResponsesRequestT = Model::GetRouteResponsesRequest>
        Model::GetRouteResponsesOutcomeCallable GetRouteResponsesCallable(const GetRouteResponsesRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetRouteResponses, request);
        }

        /**
         * An Async wrapper for GetRouteResponses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRouteResponsesRequestT = Model::GetRouteResponsesRequest>
        void GetRouteResponsesAsync(const GetRouteResponsesRequestT& request, const GetRouteResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetRouteResponses, request, handler, context);
        }

        /**
         * <p>Gets the Routes for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoutesOutcome GetRoutes(const Model::GetRoutesRequest& request) const;

        /**
         * A Callable wrapper for GetRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRoutesRequestT = Model::GetRoutesRequest>
        Model::GetRoutesOutcomeCallable GetRoutesCallable(const GetRoutesRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetRoutes, request);
        }

        /**
         * An Async wrapper for GetRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRoutesRequestT = Model::GetRoutesRequest>
        void GetRoutesAsync(const GetRoutesRequestT& request, const GetRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetRoutes, request, handler, context);
        }

        /**
         * <p>Gets a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetStage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageOutcome GetStage(const Model::GetStageRequest& request) const;

        /**
         * A Callable wrapper for GetStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStageRequestT = Model::GetStageRequest>
        Model::GetStageOutcomeCallable GetStageCallable(const GetStageRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetStage, request);
        }

        /**
         * An Async wrapper for GetStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStageRequestT = Model::GetStageRequest>
        void GetStageAsync(const GetStageRequestT& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetStage, request, handler, context);
        }

        /**
         * <p>Gets the Stages for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetStages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStagesOutcome GetStages(const Model::GetStagesRequest& request) const;

        /**
         * A Callable wrapper for GetStages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStagesRequestT = Model::GetStagesRequest>
        Model::GetStagesOutcomeCallable GetStagesCallable(const GetStagesRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetStages, request);
        }

        /**
         * An Async wrapper for GetStages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStagesRequestT = Model::GetStagesRequest>
        void GetStagesAsync(const GetStagesRequestT& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetStages, request, handler, context);
        }

        /**
         * <p>Gets a collection of Tag resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * A Callable wrapper for GetTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        Model::GetTagsOutcomeCallable GetTagsCallable(const GetTagsRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetTags, request);
        }

        /**
         * An Async wrapper for GetTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        void GetTagsAsync(const GetTagsRequestT& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetTags, request, handler, context);
        }

        /**
         * <p>Gets a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcLinkOutcome GetVpcLink(const Model::GetVpcLinkRequest& request) const;

        /**
         * A Callable wrapper for GetVpcLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVpcLinkRequestT = Model::GetVpcLinkRequest>
        Model::GetVpcLinkOutcomeCallable GetVpcLinkCallable(const GetVpcLinkRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetVpcLink, request);
        }

        /**
         * An Async wrapper for GetVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVpcLinkRequestT = Model::GetVpcLinkRequest>
        void GetVpcLinkAsync(const GetVpcLinkRequestT& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetVpcLink, request, handler, context);
        }

        /**
         * <p>Gets a collection of VPC links.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetVpcLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcLinksOutcome GetVpcLinks(const Model::GetVpcLinksRequest& request) const;

        /**
         * A Callable wrapper for GetVpcLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVpcLinksRequestT = Model::GetVpcLinksRequest>
        Model::GetVpcLinksOutcomeCallable GetVpcLinksCallable(const GetVpcLinksRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::GetVpcLinks, request);
        }

        /**
         * An Async wrapper for GetVpcLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVpcLinksRequestT = Model::GetVpcLinksRequest>
        void GetVpcLinksAsync(const GetVpcLinksRequestT& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::GetVpcLinks, request, handler, context);
        }

        /**
         * <p>Imports an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ImportApi">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportApiOutcome ImportApi(const Model::ImportApiRequest& request) const;

        /**
         * A Callable wrapper for ImportApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportApiRequestT = Model::ImportApiRequest>
        Model::ImportApiOutcomeCallable ImportApiCallable(const ImportApiRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::ImportApi, request);
        }

        /**
         * An Async wrapper for ImportApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportApiRequestT = Model::ImportApiRequest>
        void ImportApiAsync(const ImportApiRequestT& request, const ImportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::ImportApi, request, handler, context);
        }

        /**
         * <p>Puts an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ReimportApi">AWS
         * API Reference</a></p>
         */
        virtual Model::ReimportApiOutcome ReimportApi(const Model::ReimportApiRequest& request) const;

        /**
         * A Callable wrapper for ReimportApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReimportApiRequestT = Model::ReimportApiRequest>
        Model::ReimportApiOutcomeCallable ReimportApiCallable(const ReimportApiRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::ReimportApi, request);
        }

        /**
         * An Async wrapper for ReimportApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReimportApiRequestT = Model::ReimportApiRequest>
        void ReimportApiAsync(const ReimportApiRequestT& request, const ReimportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::ReimportApi, request, handler, context);
        }

        /**
         * <p>Resets all authorizer cache entries on a stage. Supported only for HTTP
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ResetAuthorizersCache">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetAuthorizersCacheOutcome ResetAuthorizersCache(const Model::ResetAuthorizersCacheRequest& request) const;

        /**
         * A Callable wrapper for ResetAuthorizersCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetAuthorizersCacheRequestT = Model::ResetAuthorizersCacheRequest>
        Model::ResetAuthorizersCacheOutcomeCallable ResetAuthorizersCacheCallable(const ResetAuthorizersCacheRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::ResetAuthorizersCache, request);
        }

        /**
         * An Async wrapper for ResetAuthorizersCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetAuthorizersCacheRequestT = Model::ResetAuthorizersCacheRequest>
        void ResetAuthorizersCacheAsync(const ResetAuthorizersCacheRequestT& request, const ResetAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::ResetAuthorizersCache, request, handler, context);
        }

        /**
         * <p>Creates a new Tag resource to represent a tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes a Tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApi">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiOutcome UpdateApi(const Model::UpdateApiRequest& request) const;

        /**
         * A Callable wrapper for UpdateApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApiRequestT = Model::UpdateApiRequest>
        Model::UpdateApiOutcomeCallable UpdateApiCallable(const UpdateApiRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateApi, request);
        }

        /**
         * An Async wrapper for UpdateApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApiRequestT = Model::UpdateApiRequest>
        void UpdateApiAsync(const UpdateApiRequestT& request, const UpdateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateApi, request, handler, context);
        }

        /**
         * <p>The API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApiMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiMappingOutcome UpdateApiMapping(const Model::UpdateApiMappingRequest& request) const;

        /**
         * A Callable wrapper for UpdateApiMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApiMappingRequestT = Model::UpdateApiMappingRequest>
        Model::UpdateApiMappingOutcomeCallable UpdateApiMappingCallable(const UpdateApiMappingRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateApiMapping, request);
        }

        /**
         * An Async wrapper for UpdateApiMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApiMappingRequestT = Model::UpdateApiMappingRequest>
        void UpdateApiMappingAsync(const UpdateApiMappingRequestT& request, const UpdateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateApiMapping, request, handler, context);
        }

        /**
         * <p>Updates an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthorizerOutcome UpdateAuthorizer(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for UpdateAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAuthorizerRequestT = Model::UpdateAuthorizerRequest>
        Model::UpdateAuthorizerOutcomeCallable UpdateAuthorizerCallable(const UpdateAuthorizerRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateAuthorizer, request);
        }

        /**
         * An Async wrapper for UpdateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAuthorizerRequestT = Model::UpdateAuthorizerRequest>
        void UpdateAuthorizerAsync(const UpdateAuthorizerRequestT& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateAuthorizer, request, handler, context);
        }

        /**
         * <p>Updates a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeploymentOutcome UpdateDeployment(const Model::UpdateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeploymentRequestT = Model::UpdateDeploymentRequest>
        Model::UpdateDeploymentOutcomeCallable UpdateDeploymentCallable(const UpdateDeploymentRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateDeployment, request);
        }

        /**
         * An Async wrapper for UpdateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeploymentRequestT = Model::UpdateDeploymentRequest>
        void UpdateDeploymentAsync(const UpdateDeploymentRequestT& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateDeployment, request, handler, context);
        }

        /**
         * <p>Updates a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainNameOutcome UpdateDomainName(const Model::UpdateDomainNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainNameRequestT = Model::UpdateDomainNameRequest>
        Model::UpdateDomainNameOutcomeCallable UpdateDomainNameCallable(const UpdateDomainNameRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateDomainName, request);
        }

        /**
         * An Async wrapper for UpdateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainNameRequestT = Model::UpdateDomainNameRequest>
        void UpdateDomainNameAsync(const UpdateDomainNameRequestT& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateDomainName, request, handler, context);
        }

        /**
         * <p>Updates an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationOutcome UpdateIntegration(const Model::UpdateIntegrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIntegrationRequestT = Model::UpdateIntegrationRequest>
        Model::UpdateIntegrationOutcomeCallable UpdateIntegrationCallable(const UpdateIntegrationRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateIntegration, request);
        }

        /**
         * An Async wrapper for UpdateIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIntegrationRequestT = Model::UpdateIntegrationRequest>
        void UpdateIntegrationAsync(const UpdateIntegrationRequestT& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateIntegration, request, handler, context);
        }

        /**
         * <p>Updates an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationResponseOutcome UpdateIntegrationResponse(const Model::UpdateIntegrationResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateIntegrationResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIntegrationResponseRequestT = Model::UpdateIntegrationResponseRequest>
        Model::UpdateIntegrationResponseOutcomeCallable UpdateIntegrationResponseCallable(const UpdateIntegrationResponseRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateIntegrationResponse, request);
        }

        /**
         * An Async wrapper for UpdateIntegrationResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIntegrationResponseRequestT = Model::UpdateIntegrationResponseRequest>
        void UpdateIntegrationResponseAsync(const UpdateIntegrationResponseRequestT& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateIntegrationResponse, request, handler, context);
        }

        /**
         * <p>Updates a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateModelRequestT = Model::UpdateModelRequest>
        Model::UpdateModelOutcomeCallable UpdateModelCallable(const UpdateModelRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateModel, request);
        }

        /**
         * An Async wrapper for UpdateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateModelRequestT = Model::UpdateModelRequest>
        void UpdateModelAsync(const UpdateModelRequestT& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateModel, request, handler, context);
        }

        /**
         * <p>Updates a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteOutcome UpdateRoute(const Model::UpdateRouteRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRouteRequestT = Model::UpdateRouteRequest>
        Model::UpdateRouteOutcomeCallable UpdateRouteCallable(const UpdateRouteRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateRoute, request);
        }

        /**
         * An Async wrapper for UpdateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRouteRequestT = Model::UpdateRouteRequest>
        void UpdateRouteAsync(const UpdateRouteRequestT& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateRoute, request, handler, context);
        }

        /**
         * <p>Updates a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRouteResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteResponseOutcome UpdateRouteResponse(const Model::UpdateRouteResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateRouteResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRouteResponseRequestT = Model::UpdateRouteResponseRequest>
        Model::UpdateRouteResponseOutcomeCallable UpdateRouteResponseCallable(const UpdateRouteResponseRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateRouteResponse, request);
        }

        /**
         * An Async wrapper for UpdateRouteResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRouteResponseRequestT = Model::UpdateRouteResponseRequest>
        void UpdateRouteResponseAsync(const UpdateRouteResponseRequestT& request, const UpdateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateRouteResponse, request, handler, context);
        }

        /**
         * <p>Updates a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStageOutcome UpdateStage(const Model::UpdateStageRequest& request) const;

        /**
         * A Callable wrapper for UpdateStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStageRequestT = Model::UpdateStageRequest>
        Model::UpdateStageOutcomeCallable UpdateStageCallable(const UpdateStageRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateStage, request);
        }

        /**
         * An Async wrapper for UpdateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStageRequestT = Model::UpdateStageRequest>
        void UpdateStageAsync(const UpdateStageRequestT& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateStage, request, handler, context);
        }

        /**
         * <p>Updates a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcLinkOutcome UpdateVpcLink(const Model::UpdateVpcLinkRequest& request) const;

        /**
         * A Callable wrapper for UpdateVpcLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVpcLinkRequestT = Model::UpdateVpcLinkRequest>
        Model::UpdateVpcLinkOutcomeCallable UpdateVpcLinkCallable(const UpdateVpcLinkRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayV2Client::UpdateVpcLink, request);
        }

        /**
         * An Async wrapper for UpdateVpcLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVpcLinkRequestT = Model::UpdateVpcLinkRequest>
        void UpdateVpcLinkAsync(const UpdateVpcLinkRequestT& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayV2Client::UpdateVpcLink, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApiGatewayV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ApiGatewayV2Client>;
      void init(const ApiGatewayV2ClientConfiguration& clientConfiguration);

      ApiGatewayV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApiGatewayV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace ApiGatewayV2
} // namespace Aws
