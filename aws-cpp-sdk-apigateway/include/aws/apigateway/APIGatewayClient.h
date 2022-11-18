/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apigateway/APIGatewayServiceClientModel.h>
#include <aws/apigateway/APIGatewayLegacyAsyncMacros.h>

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
  class AWS_APIGATEWAY_API APIGatewayClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Create an ApiKey resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiKeyOutcome CreateApiKey(const Model::CreateApiKeyRequest& request) const;


        /**
         * <p>Adds a new Authorizer resource to an existing RestApi resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAuthorizerOutcome CreateAuthorizer(const Model::CreateAuthorizerRequest& request) const;


        /**
         * <p>Creates a new BasePathMapping resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBasePathMappingOutcome CreateBasePathMapping(const Model::CreateBasePathMappingRequest& request) const;


        /**
         * <p>Creates a Deployment resource, which makes a specified RestApi callable over
         * the internet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;


        /**
         * <p>Creates a documentation part.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentationPartOutcome CreateDocumentationPart(const Model::CreateDocumentationPartRequest& request) const;


        /**
         * <p>Creates a documentation version</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentationVersionOutcome CreateDocumentationVersion(const Model::CreateDocumentationVersionRequest& request) const;


        /**
         * <p>Creates a new domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainNameOutcome CreateDomainName(const Model::CreateDomainNameRequest& request) const;


        /**
         * <p>Adds a new Model resource to an existing RestApi resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;


        /**
         * <p>Creates a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRequestValidatorOutcome CreateRequestValidator(const Model::CreateRequestValidatorRequest& request) const;


        /**
         * <p>Creates a Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;


        /**
         * <p>Creates a new RestApi resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRestApiOutcome CreateRestApi(const Model::CreateRestApiRequest& request) const;


        /**
         * <p>Creates a new Stage resource that references a pre-existing Deployment for
         * the API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStageOutcome CreateStage(const Model::CreateStageRequest& request) const;


        /**
         * <p>Creates a usage plan with the throttle and quota limits, as well as the
         * associated API stages, specified in the payload. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsagePlanOutcome CreateUsagePlan(const Model::CreateUsagePlanRequest& request) const;


        /**
         * <p>Creates a usage plan key for adding an existing API key to a usage
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateUsagePlanKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsagePlanKeyOutcome CreateUsagePlanKey(const Model::CreateUsagePlanKeyRequest& request) const;


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
         * <p>Deletes the ApiKey resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest& request) const;


        /**
         * <p>Deletes an existing Authorizer resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuthorizerOutcome DeleteAuthorizer(const Model::DeleteAuthorizerRequest& request) const;


        /**
         * <p>Deletes the BasePathMapping resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBasePathMappingOutcome DeleteBasePathMapping(const Model::DeleteBasePathMappingRequest& request) const;


        /**
         * <p>Deletes the ClientCertificate resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClientCertificateOutcome DeleteClientCertificate(const Model::DeleteClientCertificateRequest& request) const;


        /**
         * <p>Deletes a Deployment resource. Deleting a deployment will only succeed if
         * there are no Stage resources associated with it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentOutcome DeleteDeployment(const Model::DeleteDeploymentRequest& request) const;


        /**
         * <p>Deletes a documentation part</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentationPartOutcome DeleteDocumentationPart(const Model::DeleteDocumentationPartRequest& request) const;


        /**
         * <p>Deletes a documentation version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentationVersionOutcome DeleteDocumentationVersion(const Model::DeleteDocumentationVersionRequest& request) const;


        /**
         * <p>Deletes the DomainName resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainNameOutcome DeleteDomainName(const Model::DeleteDomainNameRequest& request) const;


        /**
         * <p>Clears any customization of a GatewayResponse of a specified response type on
         * the given RestApi and resets it with the default settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteGatewayResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayResponseOutcome DeleteGatewayResponse(const Model::DeleteGatewayResponseRequest& request) const;


        /**
         * <p>Represents a delete integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;


        /**
         * <p>Represents a delete integration response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationResponseOutcome DeleteIntegrationResponse(const Model::DeleteIntegrationResponseRequest& request) const;


        /**
         * <p>Deletes an existing Method resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMethodOutcome DeleteMethod(const Model::DeleteMethodRequest& request) const;


        /**
         * <p>Deletes an existing MethodResponse resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMethodResponseOutcome DeleteMethodResponse(const Model::DeleteMethodResponseRequest& request) const;


        /**
         * <p>Deletes a model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;


        /**
         * <p>Deletes a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRequestValidatorOutcome DeleteRequestValidator(const Model::DeleteRequestValidatorRequest& request) const;


        /**
         * <p>Deletes a Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;


        /**
         * <p>Deletes the specified API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRestApiOutcome DeleteRestApi(const Model::DeleteRestApiRequest& request) const;


        /**
         * <p>Deletes a Stage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStageOutcome DeleteStage(const Model::DeleteStageRequest& request) const;


        /**
         * <p>Deletes a usage plan of a given plan Id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsagePlanOutcome DeleteUsagePlan(const Model::DeleteUsagePlanRequest& request) const;


        /**
         * <p>Deletes a usage plan key and remove the underlying API key from the
         * associated usage plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteUsagePlanKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsagePlanKeyOutcome DeleteUsagePlanKey(const Model::DeleteUsagePlanKeyRequest& request) const;


        /**
         * <p>Deletes an existing VpcLink of a specified identifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcLinkOutcome DeleteVpcLink(const Model::DeleteVpcLinkRequest& request) const;


        /**
         * <p>Flushes all authorizer cache entries on a stage.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/FlushStageAuthorizersCache">AWS
         * API Reference</a></p>
         */
        virtual Model::FlushStageAuthorizersCacheOutcome FlushStageAuthorizersCache(const Model::FlushStageAuthorizersCacheRequest& request) const;


        /**
         * <p>Flushes a stage's cache.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/FlushStageCache">AWS
         * API Reference</a></p>
         */
        virtual Model::FlushStageCacheOutcome FlushStageCache(const Model::FlushStageCacheRequest& request) const;


        /**
         * <p>Generates a ClientCertificate resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GenerateClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateClientCertificateOutcome GenerateClientCertificate(const Model::GenerateClientCertificateRequest& request) const;


        /**
         * <p>Gets information about the current Account resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountOutcome GetAccount(const Model::GetAccountRequest& request) const;


        /**
         * <p>Gets information about the current ApiKey resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiKeyOutcome GetApiKey(const Model::GetApiKeyRequest& request) const;


        /**
         * <p>Gets information about the current ApiKeys resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetApiKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiKeysOutcome GetApiKeys(const Model::GetApiKeysRequest& request) const;


        /**
         * <p>Describe an existing Authorizer resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizerOutcome GetAuthorizer(const Model::GetAuthorizerRequest& request) const;


        /**
         * <p>Describe an existing Authorizers resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetAuthorizers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizersOutcome GetAuthorizers(const Model::GetAuthorizersRequest& request) const;


        /**
         * <p>Describe a BasePathMapping resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBasePathMappingOutcome GetBasePathMapping(const Model::GetBasePathMappingRequest& request) const;


        /**
         * <p>Represents a collection of BasePathMapping resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetBasePathMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBasePathMappingsOutcome GetBasePathMappings(const Model::GetBasePathMappingsRequest& request) const;


        /**
         * <p>Gets information about the current ClientCertificate resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClientCertificateOutcome GetClientCertificate(const Model::GetClientCertificateRequest& request) const;


        /**
         * <p>Gets a collection of ClientCertificate resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetClientCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClientCertificatesOutcome GetClientCertificates(const Model::GetClientCertificatesRequest& request) const;


        /**
         * <p>Gets information about a Deployment resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;


        /**
         * <p>Gets information about a Deployments collection.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentsOutcome GetDeployments(const Model::GetDeploymentsRequest& request) const;


        /**
         * <p>Gets a documentation part.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationPartOutcome GetDocumentationPart(const Model::GetDocumentationPartRequest& request) const;


        /**
         * <p>Gets documentation parts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationParts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationPartsOutcome GetDocumentationParts(const Model::GetDocumentationPartsRequest& request) const;


        /**
         * <p>Gets a documentation version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationVersionOutcome GetDocumentationVersion(const Model::GetDocumentationVersionRequest& request) const;


        /**
         * <p>Gets documentation versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentationVersionsOutcome GetDocumentationVersions(const Model::GetDocumentationVersionsRequest& request) const;


        /**
         * <p>Represents a domain name that is contained in a simpler, more intuitive URL
         * that can be called.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNameOutcome GetDomainName(const Model::GetDomainNameRequest& request) const;


        /**
         * <p>Represents a collection of DomainName resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNamesOutcome GetDomainNames(const Model::GetDomainNamesRequest& request) const;


        /**
         * <p>Exports a deployed version of a RestApi in a specified format.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetExport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportOutcome GetExport(const Model::GetExportRequest& request) const;


        /**
         * <p>Gets a GatewayResponse of a specified response type on the given
         * RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetGatewayResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayResponseOutcome GetGatewayResponse(const Model::GetGatewayResponseRequest& request) const;


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
         * <p>Get the integration settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;


        /**
         * <p>Represents a get integration response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationResponseOutcome GetIntegrationResponse(const Model::GetIntegrationResponseRequest& request) const;


        /**
         * <p>Describe an existing Method resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMethodOutcome GetMethod(const Model::GetMethodRequest& request) const;


        /**
         * <p>Describes a MethodResponse resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMethodResponseOutcome GetMethodResponse(const Model::GetMethodResponseRequest& request) const;


        /**
         * <p>Describes an existing model defined for a RestApi resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelOutcome GetModel(const Model::GetModelRequest& request) const;


        /**
         * <p>Generates a sample mapping template that can be used to transform a payload
         * into the structure of a model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetModelTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelTemplateOutcome GetModelTemplate(const Model::GetModelTemplateRequest& request) const;


        /**
         * <p>Describes existing Models defined for a RestApi resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelsOutcome GetModels(const Model::GetModelsRequest& request) const;


        /**
         * <p>Gets a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRequestValidatorOutcome GetRequestValidator(const Model::GetRequestValidatorRequest& request) const;


        /**
         * <p>Gets the RequestValidators collection of a given RestApi.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRequestValidators">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRequestValidatorsOutcome GetRequestValidators(const Model::GetRequestValidatorsRequest& request) const;


        /**
         * <p>Lists information about a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceOutcome GetResource(const Model::GetResourceRequest& request) const;


        /**
         * <p>Lists information about a collection of Resource resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcesOutcome GetResources(const Model::GetResourcesRequest& request) const;


        /**
         * <p>Lists the RestApi resource in the collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRestApiOutcome GetRestApi(const Model::GetRestApiRequest& request) const;


        /**
         * <p>Lists the RestApis resources for your collection.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRestApis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRestApisOutcome GetRestApis(const Model::GetRestApisRequest& request) const;


        /**
         * <p>Generates a client SDK for a RestApi and Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdk">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSdkOutcome GetSdk(const Model::GetSdkRequest& request) const;


        /**
         * <p>Gets an SDK type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdkType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSdkTypeOutcome GetSdkType(const Model::GetSdkTypeRequest& request) const;


        /**
         * <p>Gets SDK types</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdkTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSdkTypesOutcome GetSdkTypes(const Model::GetSdkTypesRequest& request) const;


        /**
         * <p>Gets information about a Stage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetStage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageOutcome GetStage(const Model::GetStageRequest& request) const;


        /**
         * <p>Gets information about one or more Stage resources.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetStages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStagesOutcome GetStages(const Model::GetStagesRequest& request) const;


        /**
         * <p>Gets the Tags collection for a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;


        /**
         * <p>Gets the usage data of a usage plan in a specified time
         * interval.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageOutcome GetUsage(const Model::GetUsageRequest& request) const;


        /**
         * <p>Gets a usage plan of a given plan identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsagePlanOutcome GetUsagePlan(const Model::GetUsagePlanRequest& request) const;


        /**
         * <p>Gets a usage plan key of a given key identifier.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlanKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsagePlanKeyOutcome GetUsagePlanKey(const Model::GetUsagePlanKeyRequest& request) const;


        /**
         * <p>Gets all the usage plan keys representing the API keys added to a specified
         * usage plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlanKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsagePlanKeysOutcome GetUsagePlanKeys(const Model::GetUsagePlanKeysRequest& request) const;


        /**
         * <p>Gets all the usage plans of the caller's account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlans">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsagePlansOutcome GetUsagePlans(const Model::GetUsagePlansRequest& request) const;


        /**
         * <p>Gets a specified VPC link under the caller's account in a
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcLinkOutcome GetVpcLink(const Model::GetVpcLinkRequest& request) const;


        /**
         * <p>Gets the VpcLinks collection under the caller's account in a selected
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetVpcLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcLinksOutcome GetVpcLinks(const Model::GetVpcLinksRequest& request) const;


        /**
         * <p>Import API keys from an external source, such as a CSV-formatted
         * file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportApiKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportApiKeysOutcome ImportApiKeys(const Model::ImportApiKeysRequest& request) const;


        /**
         * <p>Imports documentation parts</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportDocumentationParts">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportDocumentationPartsOutcome ImportDocumentationParts(const Model::ImportDocumentationPartsRequest& request) const;


        /**
         * <p>A feature of the API Gateway control service for creating a new API from an
         * external API definition file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportRestApiOutcome ImportRestApi(const Model::ImportRestApiRequest& request) const;


        /**
         * <p>Creates a customization of a GatewayResponse of a specified response type and
         * status code on the given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutGatewayResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGatewayResponseOutcome PutGatewayResponse(const Model::PutGatewayResponseRequest& request) const;


        /**
         * <p>Sets up a method's integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntegrationOutcome PutIntegration(const Model::PutIntegrationRequest& request) const;


        /**
         * <p>Represents a put integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntegrationResponseOutcome PutIntegrationResponse(const Model::PutIntegrationResponseRequest& request) const;


        /**
         * <p>Add a method to an existing Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMethodOutcome PutMethod(const Model::PutMethodRequest& request) const;


        /**
         * <p>Adds a MethodResponse to an existing Method resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMethodResponseOutcome PutMethodResponse(const Model::PutMethodResponseRequest& request) const;


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
         * <p>Adds or updates a tag on a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Simulate the execution of an Authorizer in your RestApi with headers,
         * parameters, and an incoming request body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TestInvokeAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::TestInvokeAuthorizerOutcome TestInvokeAuthorizer(const Model::TestInvokeAuthorizerRequest& request) const;


        /**
         * <p>Simulate the invocation of a Method in your RestApi with headers, parameters,
         * and an incoming request body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TestInvokeMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::TestInvokeMethodOutcome TestInvokeMethod(const Model::TestInvokeMethodRequest& request) const;


        /**
         * <p>Removes a tag from a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Changes information about the current Account resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountOutcome UpdateAccount(const Model::UpdateAccountRequest& request) const;


        /**
         * <p>Changes information about an ApiKey resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiKeyOutcome UpdateApiKey(const Model::UpdateApiKeyRequest& request) const;


        /**
         * <p>Updates an existing Authorizer resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthorizerOutcome UpdateAuthorizer(const Model::UpdateAuthorizerRequest& request) const;


        /**
         * <p>Changes information about the BasePathMapping resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateBasePathMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBasePathMappingOutcome UpdateBasePathMapping(const Model::UpdateBasePathMappingRequest& request) const;


        /**
         * <p>Changes information about an ClientCertificate resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClientCertificateOutcome UpdateClientCertificate(const Model::UpdateClientCertificateRequest& request) const;


        /**
         * <p>Changes information about a Deployment resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeploymentOutcome UpdateDeployment(const Model::UpdateDeploymentRequest& request) const;


        /**
         * <p>Updates a documentation part.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDocumentationPart">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentationPartOutcome UpdateDocumentationPart(const Model::UpdateDocumentationPartRequest& request) const;


        /**
         * <p>Updates a documentation version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDocumentationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentationVersionOutcome UpdateDocumentationVersion(const Model::UpdateDocumentationVersionRequest& request) const;


        /**
         * <p>Changes information about the DomainName resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainNameOutcome UpdateDomainName(const Model::UpdateDomainNameRequest& request) const;


        /**
         * <p>Updates a GatewayResponse of a specified response type on the given
         * RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateGatewayResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayResponseOutcome UpdateGatewayResponse(const Model::UpdateGatewayResponseRequest& request) const;


        /**
         * <p>Represents an update integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationOutcome UpdateIntegration(const Model::UpdateIntegrationRequest& request) const;


        /**
         * <p>Represents an update integration response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationResponseOutcome UpdateIntegrationResponse(const Model::UpdateIntegrationResponseRequest& request) const;


        /**
         * <p>Updates an existing Method resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMethodOutcome UpdateMethod(const Model::UpdateMethodRequest& request) const;


        /**
         * <p>Updates an existing MethodResponse resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateMethodResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMethodResponseOutcome UpdateMethodResponse(const Model::UpdateMethodResponseRequest& request) const;


        /**
         * <p>Changes information about a model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest& request) const;


        /**
         * <p>Updates a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateRequestValidator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRequestValidatorOutcome UpdateRequestValidator(const Model::UpdateRequestValidatorRequest& request) const;


        /**
         * <p>Changes information about a Resource resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;


        /**
         * <p>Changes information about the specified API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateRestApi">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRestApiOutcome UpdateRestApi(const Model::UpdateRestApiRequest& request) const;


        /**
         * <p>Changes information about a Stage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStageOutcome UpdateStage(const Model::UpdateStageRequest& request) const;


        /**
         * <p>Grants a temporary extension to the remaining quota of a usage plan
         * associated with a specified API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUsageOutcome UpdateUsage(const Model::UpdateUsageRequest& request) const;


        /**
         * <p>Updates a usage plan of a given plan Id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateUsagePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUsagePlanOutcome UpdateUsagePlan(const Model::UpdateUsagePlanRequest& request) const;


        /**
         * <p>Updates an existing VpcLink of a specified identifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcLinkOutcome UpdateVpcLink(const Model::UpdateVpcLinkRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<APIGatewayEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const APIGatewayClientConfiguration& clientConfiguration);

      APIGatewayClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<APIGatewayEndpointProviderBase> m_endpointProvider;
  };

} // namespace APIGateway
} // namespace Aws
