/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/apigateway/APIGatewayErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/apigateway/APIGatewayEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in APIGatewayClient header */
#include <aws/apigateway/model/CreateApiKeyResult.h>
#include <aws/apigateway/model/CreateAuthorizerResult.h>
#include <aws/apigateway/model/CreateBasePathMappingResult.h>
#include <aws/apigateway/model/CreateDeploymentResult.h>
#include <aws/apigateway/model/CreateDocumentationPartResult.h>
#include <aws/apigateway/model/CreateDocumentationVersionResult.h>
#include <aws/apigateway/model/CreateDomainNameResult.h>
#include <aws/apigateway/model/CreateModelResult.h>
#include <aws/apigateway/model/CreateRequestValidatorResult.h>
#include <aws/apigateway/model/CreateResourceResult.h>
#include <aws/apigateway/model/CreateRestApiResult.h>
#include <aws/apigateway/model/CreateStageResult.h>
#include <aws/apigateway/model/CreateUsagePlanResult.h>
#include <aws/apigateway/model/CreateUsagePlanKeyResult.h>
#include <aws/apigateway/model/CreateVpcLinkResult.h>
#include <aws/apigateway/model/GenerateClientCertificateResult.h>
#include <aws/apigateway/model/GetAccountResult.h>
#include <aws/apigateway/model/GetApiKeyResult.h>
#include <aws/apigateway/model/GetApiKeysResult.h>
#include <aws/apigateway/model/GetAuthorizerResult.h>
#include <aws/apigateway/model/GetAuthorizersResult.h>
#include <aws/apigateway/model/GetBasePathMappingResult.h>
#include <aws/apigateway/model/GetBasePathMappingsResult.h>
#include <aws/apigateway/model/GetClientCertificateResult.h>
#include <aws/apigateway/model/GetClientCertificatesResult.h>
#include <aws/apigateway/model/GetDeploymentResult.h>
#include <aws/apigateway/model/GetDeploymentsResult.h>
#include <aws/apigateway/model/GetDocumentationPartResult.h>
#include <aws/apigateway/model/GetDocumentationPartsResult.h>
#include <aws/apigateway/model/GetDocumentationVersionResult.h>
#include <aws/apigateway/model/GetDocumentationVersionsResult.h>
#include <aws/apigateway/model/GetDomainNameResult.h>
#include <aws/apigateway/model/GetDomainNamesResult.h>
#include <aws/apigateway/model/GetExportResult.h>
#include <aws/apigateway/model/GetGatewayResponseResult.h>
#include <aws/apigateway/model/GetGatewayResponsesResult.h>
#include <aws/apigateway/model/GetIntegrationResult.h>
#include <aws/apigateway/model/GetIntegrationResponseResult.h>
#include <aws/apigateway/model/GetMethodResult.h>
#include <aws/apigateway/model/GetMethodResponseResult.h>
#include <aws/apigateway/model/GetModelResult.h>
#include <aws/apigateway/model/GetModelTemplateResult.h>
#include <aws/apigateway/model/GetModelsResult.h>
#include <aws/apigateway/model/GetRequestValidatorResult.h>
#include <aws/apigateway/model/GetRequestValidatorsResult.h>
#include <aws/apigateway/model/GetResourceResult.h>
#include <aws/apigateway/model/GetResourcesResult.h>
#include <aws/apigateway/model/GetRestApiResult.h>
#include <aws/apigateway/model/GetRestApisResult.h>
#include <aws/apigateway/model/GetSdkResult.h>
#include <aws/apigateway/model/GetSdkTypeResult.h>
#include <aws/apigateway/model/GetSdkTypesResult.h>
#include <aws/apigateway/model/GetStageResult.h>
#include <aws/apigateway/model/GetStagesResult.h>
#include <aws/apigateway/model/GetTagsResult.h>
#include <aws/apigateway/model/GetUsageResult.h>
#include <aws/apigateway/model/GetUsagePlanResult.h>
#include <aws/apigateway/model/GetUsagePlanKeyResult.h>
#include <aws/apigateway/model/GetUsagePlanKeysResult.h>
#include <aws/apigateway/model/GetUsagePlansResult.h>
#include <aws/apigateway/model/GetVpcLinkResult.h>
#include <aws/apigateway/model/GetVpcLinksResult.h>
#include <aws/apigateway/model/ImportApiKeysResult.h>
#include <aws/apigateway/model/ImportDocumentationPartsResult.h>
#include <aws/apigateway/model/ImportRestApiResult.h>
#include <aws/apigateway/model/PutGatewayResponseResult.h>
#include <aws/apigateway/model/PutIntegrationResult.h>
#include <aws/apigateway/model/PutIntegrationResponseResult.h>
#include <aws/apigateway/model/PutMethodResult.h>
#include <aws/apigateway/model/PutMethodResponseResult.h>
#include <aws/apigateway/model/PutRestApiResult.h>
#include <aws/apigateway/model/TestInvokeAuthorizerResult.h>
#include <aws/apigateway/model/TestInvokeMethodResult.h>
#include <aws/apigateway/model/UpdateAccountResult.h>
#include <aws/apigateway/model/UpdateApiKeyResult.h>
#include <aws/apigateway/model/UpdateAuthorizerResult.h>
#include <aws/apigateway/model/UpdateBasePathMappingResult.h>
#include <aws/apigateway/model/UpdateClientCertificateResult.h>
#include <aws/apigateway/model/UpdateDeploymentResult.h>
#include <aws/apigateway/model/UpdateDocumentationPartResult.h>
#include <aws/apigateway/model/UpdateDocumentationVersionResult.h>
#include <aws/apigateway/model/UpdateDomainNameResult.h>
#include <aws/apigateway/model/UpdateGatewayResponseResult.h>
#include <aws/apigateway/model/UpdateIntegrationResult.h>
#include <aws/apigateway/model/UpdateIntegrationResponseResult.h>
#include <aws/apigateway/model/UpdateMethodResult.h>
#include <aws/apigateway/model/UpdateMethodResponseResult.h>
#include <aws/apigateway/model/UpdateModelResult.h>
#include <aws/apigateway/model/UpdateRequestValidatorResult.h>
#include <aws/apigateway/model/UpdateResourceResult.h>
#include <aws/apigateway/model/UpdateRestApiResult.h>
#include <aws/apigateway/model/UpdateStageResult.h>
#include <aws/apigateway/model/UpdateUsageResult.h>
#include <aws/apigateway/model/UpdateUsagePlanResult.h>
#include <aws/apigateway/model/UpdateVpcLinkResult.h>
#include <aws/apigateway/model/CreateApiKeyRequest.h>
#include <aws/apigateway/model/GetDomainNamesRequest.h>
#include <aws/apigateway/model/GetAccountRequest.h>
#include <aws/apigateway/model/GetUsagePlansRequest.h>
#include <aws/apigateway/model/GetClientCertificatesRequest.h>
#include <aws/apigateway/model/GetSdkTypesRequest.h>
#include <aws/apigateway/model/UpdateAccountRequest.h>
#include <aws/apigateway/model/GetApiKeysRequest.h>
#include <aws/apigateway/model/GetRestApisRequest.h>
#include <aws/apigateway/model/GenerateClientCertificateRequest.h>
#include <aws/apigateway/model/GetVpcLinksRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in APIGatewayClient header */

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

  namespace APIGateway
  {
    using APIGatewayClientConfiguration = Aws::Client::GenericClientConfiguration;
    using APIGatewayEndpointProviderBase = Aws::APIGateway::Endpoint::APIGatewayEndpointProviderBase;
    using APIGatewayEndpointProvider = Aws::APIGateway::Endpoint::APIGatewayEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in APIGatewayClient header */
      class CreateApiKeyRequest;
      class CreateAuthorizerRequest;
      class CreateBasePathMappingRequest;
      class CreateDeploymentRequest;
      class CreateDocumentationPartRequest;
      class CreateDocumentationVersionRequest;
      class CreateDomainNameRequest;
      class CreateModelRequest;
      class CreateRequestValidatorRequest;
      class CreateResourceRequest;
      class CreateRestApiRequest;
      class CreateStageRequest;
      class CreateUsagePlanRequest;
      class CreateUsagePlanKeyRequest;
      class CreateVpcLinkRequest;
      class DeleteApiKeyRequest;
      class DeleteAuthorizerRequest;
      class DeleteBasePathMappingRequest;
      class DeleteClientCertificateRequest;
      class DeleteDeploymentRequest;
      class DeleteDocumentationPartRequest;
      class DeleteDocumentationVersionRequest;
      class DeleteDomainNameRequest;
      class DeleteGatewayResponseRequest;
      class DeleteIntegrationRequest;
      class DeleteIntegrationResponseRequest;
      class DeleteMethodRequest;
      class DeleteMethodResponseRequest;
      class DeleteModelRequest;
      class DeleteRequestValidatorRequest;
      class DeleteResourceRequest;
      class DeleteRestApiRequest;
      class DeleteStageRequest;
      class DeleteUsagePlanRequest;
      class DeleteUsagePlanKeyRequest;
      class DeleteVpcLinkRequest;
      class FlushStageAuthorizersCacheRequest;
      class FlushStageCacheRequest;
      class GenerateClientCertificateRequest;
      class GetAccountRequest;
      class GetApiKeyRequest;
      class GetApiKeysRequest;
      class GetAuthorizerRequest;
      class GetAuthorizersRequest;
      class GetBasePathMappingRequest;
      class GetBasePathMappingsRequest;
      class GetClientCertificateRequest;
      class GetClientCertificatesRequest;
      class GetDeploymentRequest;
      class GetDeploymentsRequest;
      class GetDocumentationPartRequest;
      class GetDocumentationPartsRequest;
      class GetDocumentationVersionRequest;
      class GetDocumentationVersionsRequest;
      class GetDomainNameRequest;
      class GetDomainNamesRequest;
      class GetExportRequest;
      class GetGatewayResponseRequest;
      class GetGatewayResponsesRequest;
      class GetIntegrationRequest;
      class GetIntegrationResponseRequest;
      class GetMethodRequest;
      class GetMethodResponseRequest;
      class GetModelRequest;
      class GetModelTemplateRequest;
      class GetModelsRequest;
      class GetRequestValidatorRequest;
      class GetRequestValidatorsRequest;
      class GetResourceRequest;
      class GetResourcesRequest;
      class GetRestApiRequest;
      class GetRestApisRequest;
      class GetSdkRequest;
      class GetSdkTypeRequest;
      class GetSdkTypesRequest;
      class GetStageRequest;
      class GetStagesRequest;
      class GetTagsRequest;
      class GetUsageRequest;
      class GetUsagePlanRequest;
      class GetUsagePlanKeyRequest;
      class GetUsagePlanKeysRequest;
      class GetUsagePlansRequest;
      class GetVpcLinkRequest;
      class GetVpcLinksRequest;
      class ImportApiKeysRequest;
      class ImportDocumentationPartsRequest;
      class ImportRestApiRequest;
      class PutGatewayResponseRequest;
      class PutIntegrationRequest;
      class PutIntegrationResponseRequest;
      class PutMethodRequest;
      class PutMethodResponseRequest;
      class PutRestApiRequest;
      class TagResourceRequest;
      class TestInvokeAuthorizerRequest;
      class TestInvokeMethodRequest;
      class UntagResourceRequest;
      class UpdateAccountRequest;
      class UpdateApiKeyRequest;
      class UpdateAuthorizerRequest;
      class UpdateBasePathMappingRequest;
      class UpdateClientCertificateRequest;
      class UpdateDeploymentRequest;
      class UpdateDocumentationPartRequest;
      class UpdateDocumentationVersionRequest;
      class UpdateDomainNameRequest;
      class UpdateGatewayResponseRequest;
      class UpdateIntegrationRequest;
      class UpdateIntegrationResponseRequest;
      class UpdateMethodRequest;
      class UpdateMethodResponseRequest;
      class UpdateModelRequest;
      class UpdateRequestValidatorRequest;
      class UpdateResourceRequest;
      class UpdateRestApiRequest;
      class UpdateStageRequest;
      class UpdateUsageRequest;
      class UpdateUsagePlanRequest;
      class UpdateVpcLinkRequest;
      /* End of service model forward declarations required in APIGatewayClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateApiKeyResult, APIGatewayError> CreateApiKeyOutcome;
      typedef Aws::Utils::Outcome<CreateAuthorizerResult, APIGatewayError> CreateAuthorizerOutcome;
      typedef Aws::Utils::Outcome<CreateBasePathMappingResult, APIGatewayError> CreateBasePathMappingOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentResult, APIGatewayError> CreateDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateDocumentationPartResult, APIGatewayError> CreateDocumentationPartOutcome;
      typedef Aws::Utils::Outcome<CreateDocumentationVersionResult, APIGatewayError> CreateDocumentationVersionOutcome;
      typedef Aws::Utils::Outcome<CreateDomainNameResult, APIGatewayError> CreateDomainNameOutcome;
      typedef Aws::Utils::Outcome<CreateModelResult, APIGatewayError> CreateModelOutcome;
      typedef Aws::Utils::Outcome<CreateRequestValidatorResult, APIGatewayError> CreateRequestValidatorOutcome;
      typedef Aws::Utils::Outcome<CreateResourceResult, APIGatewayError> CreateResourceOutcome;
      typedef Aws::Utils::Outcome<CreateRestApiResult, APIGatewayError> CreateRestApiOutcome;
      typedef Aws::Utils::Outcome<CreateStageResult, APIGatewayError> CreateStageOutcome;
      typedef Aws::Utils::Outcome<CreateUsagePlanResult, APIGatewayError> CreateUsagePlanOutcome;
      typedef Aws::Utils::Outcome<CreateUsagePlanKeyResult, APIGatewayError> CreateUsagePlanKeyOutcome;
      typedef Aws::Utils::Outcome<CreateVpcLinkResult, APIGatewayError> CreateVpcLinkOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteApiKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteAuthorizerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteBasePathMappingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteClientCertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteDeploymentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteDocumentationPartOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteDocumentationVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteDomainNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteGatewayResponseOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteIntegrationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteIntegrationResponseOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteMethodOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteMethodResponseOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteRequestValidatorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteRestApiOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteStageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteUsagePlanOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteUsagePlanKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> DeleteVpcLinkOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> FlushStageAuthorizersCacheOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> FlushStageCacheOutcome;
      typedef Aws::Utils::Outcome<GenerateClientCertificateResult, APIGatewayError> GenerateClientCertificateOutcome;
      typedef Aws::Utils::Outcome<GetAccountResult, APIGatewayError> GetAccountOutcome;
      typedef Aws::Utils::Outcome<GetApiKeyResult, APIGatewayError> GetApiKeyOutcome;
      typedef Aws::Utils::Outcome<GetApiKeysResult, APIGatewayError> GetApiKeysOutcome;
      typedef Aws::Utils::Outcome<GetAuthorizerResult, APIGatewayError> GetAuthorizerOutcome;
      typedef Aws::Utils::Outcome<GetAuthorizersResult, APIGatewayError> GetAuthorizersOutcome;
      typedef Aws::Utils::Outcome<GetBasePathMappingResult, APIGatewayError> GetBasePathMappingOutcome;
      typedef Aws::Utils::Outcome<GetBasePathMappingsResult, APIGatewayError> GetBasePathMappingsOutcome;
      typedef Aws::Utils::Outcome<GetClientCertificateResult, APIGatewayError> GetClientCertificateOutcome;
      typedef Aws::Utils::Outcome<GetClientCertificatesResult, APIGatewayError> GetClientCertificatesOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentResult, APIGatewayError> GetDeploymentOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentsResult, APIGatewayError> GetDeploymentsOutcome;
      typedef Aws::Utils::Outcome<GetDocumentationPartResult, APIGatewayError> GetDocumentationPartOutcome;
      typedef Aws::Utils::Outcome<GetDocumentationPartsResult, APIGatewayError> GetDocumentationPartsOutcome;
      typedef Aws::Utils::Outcome<GetDocumentationVersionResult, APIGatewayError> GetDocumentationVersionOutcome;
      typedef Aws::Utils::Outcome<GetDocumentationVersionsResult, APIGatewayError> GetDocumentationVersionsOutcome;
      typedef Aws::Utils::Outcome<GetDomainNameResult, APIGatewayError> GetDomainNameOutcome;
      typedef Aws::Utils::Outcome<GetDomainNamesResult, APIGatewayError> GetDomainNamesOutcome;
      typedef Aws::Utils::Outcome<GetExportResult, APIGatewayError> GetExportOutcome;
      typedef Aws::Utils::Outcome<GetGatewayResponseResult, APIGatewayError> GetGatewayResponseOutcome;
      typedef Aws::Utils::Outcome<GetGatewayResponsesResult, APIGatewayError> GetGatewayResponsesOutcome;
      typedef Aws::Utils::Outcome<GetIntegrationResult, APIGatewayError> GetIntegrationOutcome;
      typedef Aws::Utils::Outcome<GetIntegrationResponseResult, APIGatewayError> GetIntegrationResponseOutcome;
      typedef Aws::Utils::Outcome<GetMethodResult, APIGatewayError> GetMethodOutcome;
      typedef Aws::Utils::Outcome<GetMethodResponseResult, APIGatewayError> GetMethodResponseOutcome;
      typedef Aws::Utils::Outcome<GetModelResult, APIGatewayError> GetModelOutcome;
      typedef Aws::Utils::Outcome<GetModelTemplateResult, APIGatewayError> GetModelTemplateOutcome;
      typedef Aws::Utils::Outcome<GetModelsResult, APIGatewayError> GetModelsOutcome;
      typedef Aws::Utils::Outcome<GetRequestValidatorResult, APIGatewayError> GetRequestValidatorOutcome;
      typedef Aws::Utils::Outcome<GetRequestValidatorsResult, APIGatewayError> GetRequestValidatorsOutcome;
      typedef Aws::Utils::Outcome<GetResourceResult, APIGatewayError> GetResourceOutcome;
      typedef Aws::Utils::Outcome<GetResourcesResult, APIGatewayError> GetResourcesOutcome;
      typedef Aws::Utils::Outcome<GetRestApiResult, APIGatewayError> GetRestApiOutcome;
      typedef Aws::Utils::Outcome<GetRestApisResult, APIGatewayError> GetRestApisOutcome;
      typedef Aws::Utils::Outcome<GetSdkResult, APIGatewayError> GetSdkOutcome;
      typedef Aws::Utils::Outcome<GetSdkTypeResult, APIGatewayError> GetSdkTypeOutcome;
      typedef Aws::Utils::Outcome<GetSdkTypesResult, APIGatewayError> GetSdkTypesOutcome;
      typedef Aws::Utils::Outcome<GetStageResult, APIGatewayError> GetStageOutcome;
      typedef Aws::Utils::Outcome<GetStagesResult, APIGatewayError> GetStagesOutcome;
      typedef Aws::Utils::Outcome<GetTagsResult, APIGatewayError> GetTagsOutcome;
      typedef Aws::Utils::Outcome<GetUsageResult, APIGatewayError> GetUsageOutcome;
      typedef Aws::Utils::Outcome<GetUsagePlanResult, APIGatewayError> GetUsagePlanOutcome;
      typedef Aws::Utils::Outcome<GetUsagePlanKeyResult, APIGatewayError> GetUsagePlanKeyOutcome;
      typedef Aws::Utils::Outcome<GetUsagePlanKeysResult, APIGatewayError> GetUsagePlanKeysOutcome;
      typedef Aws::Utils::Outcome<GetUsagePlansResult, APIGatewayError> GetUsagePlansOutcome;
      typedef Aws::Utils::Outcome<GetVpcLinkResult, APIGatewayError> GetVpcLinkOutcome;
      typedef Aws::Utils::Outcome<GetVpcLinksResult, APIGatewayError> GetVpcLinksOutcome;
      typedef Aws::Utils::Outcome<ImportApiKeysResult, APIGatewayError> ImportApiKeysOutcome;
      typedef Aws::Utils::Outcome<ImportDocumentationPartsResult, APIGatewayError> ImportDocumentationPartsOutcome;
      typedef Aws::Utils::Outcome<ImportRestApiResult, APIGatewayError> ImportRestApiOutcome;
      typedef Aws::Utils::Outcome<PutGatewayResponseResult, APIGatewayError> PutGatewayResponseOutcome;
      typedef Aws::Utils::Outcome<PutIntegrationResult, APIGatewayError> PutIntegrationOutcome;
      typedef Aws::Utils::Outcome<PutIntegrationResponseResult, APIGatewayError> PutIntegrationResponseOutcome;
      typedef Aws::Utils::Outcome<PutMethodResult, APIGatewayError> PutMethodOutcome;
      typedef Aws::Utils::Outcome<PutMethodResponseResult, APIGatewayError> PutMethodResponseOutcome;
      typedef Aws::Utils::Outcome<PutRestApiResult, APIGatewayError> PutRestApiOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestInvokeAuthorizerResult, APIGatewayError> TestInvokeAuthorizerOutcome;
      typedef Aws::Utils::Outcome<TestInvokeMethodResult, APIGatewayError> TestInvokeMethodOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, APIGatewayError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountResult, APIGatewayError> UpdateAccountOutcome;
      typedef Aws::Utils::Outcome<UpdateApiKeyResult, APIGatewayError> UpdateApiKeyOutcome;
      typedef Aws::Utils::Outcome<UpdateAuthorizerResult, APIGatewayError> UpdateAuthorizerOutcome;
      typedef Aws::Utils::Outcome<UpdateBasePathMappingResult, APIGatewayError> UpdateBasePathMappingOutcome;
      typedef Aws::Utils::Outcome<UpdateClientCertificateResult, APIGatewayError> UpdateClientCertificateOutcome;
      typedef Aws::Utils::Outcome<UpdateDeploymentResult, APIGatewayError> UpdateDeploymentOutcome;
      typedef Aws::Utils::Outcome<UpdateDocumentationPartResult, APIGatewayError> UpdateDocumentationPartOutcome;
      typedef Aws::Utils::Outcome<UpdateDocumentationVersionResult, APIGatewayError> UpdateDocumentationVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainNameResult, APIGatewayError> UpdateDomainNameOutcome;
      typedef Aws::Utils::Outcome<UpdateGatewayResponseResult, APIGatewayError> UpdateGatewayResponseOutcome;
      typedef Aws::Utils::Outcome<UpdateIntegrationResult, APIGatewayError> UpdateIntegrationOutcome;
      typedef Aws::Utils::Outcome<UpdateIntegrationResponseResult, APIGatewayError> UpdateIntegrationResponseOutcome;
      typedef Aws::Utils::Outcome<UpdateMethodResult, APIGatewayError> UpdateMethodOutcome;
      typedef Aws::Utils::Outcome<UpdateMethodResponseResult, APIGatewayError> UpdateMethodResponseOutcome;
      typedef Aws::Utils::Outcome<UpdateModelResult, APIGatewayError> UpdateModelOutcome;
      typedef Aws::Utils::Outcome<UpdateRequestValidatorResult, APIGatewayError> UpdateRequestValidatorOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceResult, APIGatewayError> UpdateResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateRestApiResult, APIGatewayError> UpdateRestApiOutcome;
      typedef Aws::Utils::Outcome<UpdateStageResult, APIGatewayError> UpdateStageOutcome;
      typedef Aws::Utils::Outcome<UpdateUsageResult, APIGatewayError> UpdateUsageOutcome;
      typedef Aws::Utils::Outcome<UpdateUsagePlanResult, APIGatewayError> UpdateUsagePlanOutcome;
      typedef Aws::Utils::Outcome<UpdateVpcLinkResult, APIGatewayError> UpdateVpcLinkOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateApiKeyOutcome> CreateApiKeyOutcomeCallable;
      typedef std::future<CreateAuthorizerOutcome> CreateAuthorizerOutcomeCallable;
      typedef std::future<CreateBasePathMappingOutcome> CreateBasePathMappingOutcomeCallable;
      typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
      typedef std::future<CreateDocumentationPartOutcome> CreateDocumentationPartOutcomeCallable;
      typedef std::future<CreateDocumentationVersionOutcome> CreateDocumentationVersionOutcomeCallable;
      typedef std::future<CreateDomainNameOutcome> CreateDomainNameOutcomeCallable;
      typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
      typedef std::future<CreateRequestValidatorOutcome> CreateRequestValidatorOutcomeCallable;
      typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
      typedef std::future<CreateRestApiOutcome> CreateRestApiOutcomeCallable;
      typedef std::future<CreateStageOutcome> CreateStageOutcomeCallable;
      typedef std::future<CreateUsagePlanOutcome> CreateUsagePlanOutcomeCallable;
      typedef std::future<CreateUsagePlanKeyOutcome> CreateUsagePlanKeyOutcomeCallable;
      typedef std::future<CreateVpcLinkOutcome> CreateVpcLinkOutcomeCallable;
      typedef std::future<DeleteApiKeyOutcome> DeleteApiKeyOutcomeCallable;
      typedef std::future<DeleteAuthorizerOutcome> DeleteAuthorizerOutcomeCallable;
      typedef std::future<DeleteBasePathMappingOutcome> DeleteBasePathMappingOutcomeCallable;
      typedef std::future<DeleteClientCertificateOutcome> DeleteClientCertificateOutcomeCallable;
      typedef std::future<DeleteDeploymentOutcome> DeleteDeploymentOutcomeCallable;
      typedef std::future<DeleteDocumentationPartOutcome> DeleteDocumentationPartOutcomeCallable;
      typedef std::future<DeleteDocumentationVersionOutcome> DeleteDocumentationVersionOutcomeCallable;
      typedef std::future<DeleteDomainNameOutcome> DeleteDomainNameOutcomeCallable;
      typedef std::future<DeleteGatewayResponseOutcome> DeleteGatewayResponseOutcomeCallable;
      typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
      typedef std::future<DeleteIntegrationResponseOutcome> DeleteIntegrationResponseOutcomeCallable;
      typedef std::future<DeleteMethodOutcome> DeleteMethodOutcomeCallable;
      typedef std::future<DeleteMethodResponseOutcome> DeleteMethodResponseOutcomeCallable;
      typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
      typedef std::future<DeleteRequestValidatorOutcome> DeleteRequestValidatorOutcomeCallable;
      typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
      typedef std::future<DeleteRestApiOutcome> DeleteRestApiOutcomeCallable;
      typedef std::future<DeleteStageOutcome> DeleteStageOutcomeCallable;
      typedef std::future<DeleteUsagePlanOutcome> DeleteUsagePlanOutcomeCallable;
      typedef std::future<DeleteUsagePlanKeyOutcome> DeleteUsagePlanKeyOutcomeCallable;
      typedef std::future<DeleteVpcLinkOutcome> DeleteVpcLinkOutcomeCallable;
      typedef std::future<FlushStageAuthorizersCacheOutcome> FlushStageAuthorizersCacheOutcomeCallable;
      typedef std::future<FlushStageCacheOutcome> FlushStageCacheOutcomeCallable;
      typedef std::future<GenerateClientCertificateOutcome> GenerateClientCertificateOutcomeCallable;
      typedef std::future<GetAccountOutcome> GetAccountOutcomeCallable;
      typedef std::future<GetApiKeyOutcome> GetApiKeyOutcomeCallable;
      typedef std::future<GetApiKeysOutcome> GetApiKeysOutcomeCallable;
      typedef std::future<GetAuthorizerOutcome> GetAuthorizerOutcomeCallable;
      typedef std::future<GetAuthorizersOutcome> GetAuthorizersOutcomeCallable;
      typedef std::future<GetBasePathMappingOutcome> GetBasePathMappingOutcomeCallable;
      typedef std::future<GetBasePathMappingsOutcome> GetBasePathMappingsOutcomeCallable;
      typedef std::future<GetClientCertificateOutcome> GetClientCertificateOutcomeCallable;
      typedef std::future<GetClientCertificatesOutcome> GetClientCertificatesOutcomeCallable;
      typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
      typedef std::future<GetDeploymentsOutcome> GetDeploymentsOutcomeCallable;
      typedef std::future<GetDocumentationPartOutcome> GetDocumentationPartOutcomeCallable;
      typedef std::future<GetDocumentationPartsOutcome> GetDocumentationPartsOutcomeCallable;
      typedef std::future<GetDocumentationVersionOutcome> GetDocumentationVersionOutcomeCallable;
      typedef std::future<GetDocumentationVersionsOutcome> GetDocumentationVersionsOutcomeCallable;
      typedef std::future<GetDomainNameOutcome> GetDomainNameOutcomeCallable;
      typedef std::future<GetDomainNamesOutcome> GetDomainNamesOutcomeCallable;
      typedef std::future<GetExportOutcome> GetExportOutcomeCallable;
      typedef std::future<GetGatewayResponseOutcome> GetGatewayResponseOutcomeCallable;
      typedef std::future<GetGatewayResponsesOutcome> GetGatewayResponsesOutcomeCallable;
      typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
      typedef std::future<GetIntegrationResponseOutcome> GetIntegrationResponseOutcomeCallable;
      typedef std::future<GetMethodOutcome> GetMethodOutcomeCallable;
      typedef std::future<GetMethodResponseOutcome> GetMethodResponseOutcomeCallable;
      typedef std::future<GetModelOutcome> GetModelOutcomeCallable;
      typedef std::future<GetModelTemplateOutcome> GetModelTemplateOutcomeCallable;
      typedef std::future<GetModelsOutcome> GetModelsOutcomeCallable;
      typedef std::future<GetRequestValidatorOutcome> GetRequestValidatorOutcomeCallable;
      typedef std::future<GetRequestValidatorsOutcome> GetRequestValidatorsOutcomeCallable;
      typedef std::future<GetResourceOutcome> GetResourceOutcomeCallable;
      typedef std::future<GetResourcesOutcome> GetResourcesOutcomeCallable;
      typedef std::future<GetRestApiOutcome> GetRestApiOutcomeCallable;
      typedef std::future<GetRestApisOutcome> GetRestApisOutcomeCallable;
      typedef std::future<GetSdkOutcome> GetSdkOutcomeCallable;
      typedef std::future<GetSdkTypeOutcome> GetSdkTypeOutcomeCallable;
      typedef std::future<GetSdkTypesOutcome> GetSdkTypesOutcomeCallable;
      typedef std::future<GetStageOutcome> GetStageOutcomeCallable;
      typedef std::future<GetStagesOutcome> GetStagesOutcomeCallable;
      typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
      typedef std::future<GetUsageOutcome> GetUsageOutcomeCallable;
      typedef std::future<GetUsagePlanOutcome> GetUsagePlanOutcomeCallable;
      typedef std::future<GetUsagePlanKeyOutcome> GetUsagePlanKeyOutcomeCallable;
      typedef std::future<GetUsagePlanKeysOutcome> GetUsagePlanKeysOutcomeCallable;
      typedef std::future<GetUsagePlansOutcome> GetUsagePlansOutcomeCallable;
      typedef std::future<GetVpcLinkOutcome> GetVpcLinkOutcomeCallable;
      typedef std::future<GetVpcLinksOutcome> GetVpcLinksOutcomeCallable;
      typedef std::future<ImportApiKeysOutcome> ImportApiKeysOutcomeCallable;
      typedef std::future<ImportDocumentationPartsOutcome> ImportDocumentationPartsOutcomeCallable;
      typedef std::future<ImportRestApiOutcome> ImportRestApiOutcomeCallable;
      typedef std::future<PutGatewayResponseOutcome> PutGatewayResponseOutcomeCallable;
      typedef std::future<PutIntegrationOutcome> PutIntegrationOutcomeCallable;
      typedef std::future<PutIntegrationResponseOutcome> PutIntegrationResponseOutcomeCallable;
      typedef std::future<PutMethodOutcome> PutMethodOutcomeCallable;
      typedef std::future<PutMethodResponseOutcome> PutMethodResponseOutcomeCallable;
      typedef std::future<PutRestApiOutcome> PutRestApiOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestInvokeAuthorizerOutcome> TestInvokeAuthorizerOutcomeCallable;
      typedef std::future<TestInvokeMethodOutcome> TestInvokeMethodOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccountOutcome> UpdateAccountOutcomeCallable;
      typedef std::future<UpdateApiKeyOutcome> UpdateApiKeyOutcomeCallable;
      typedef std::future<UpdateAuthorizerOutcome> UpdateAuthorizerOutcomeCallable;
      typedef std::future<UpdateBasePathMappingOutcome> UpdateBasePathMappingOutcomeCallable;
      typedef std::future<UpdateClientCertificateOutcome> UpdateClientCertificateOutcomeCallable;
      typedef std::future<UpdateDeploymentOutcome> UpdateDeploymentOutcomeCallable;
      typedef std::future<UpdateDocumentationPartOutcome> UpdateDocumentationPartOutcomeCallable;
      typedef std::future<UpdateDocumentationVersionOutcome> UpdateDocumentationVersionOutcomeCallable;
      typedef std::future<UpdateDomainNameOutcome> UpdateDomainNameOutcomeCallable;
      typedef std::future<UpdateGatewayResponseOutcome> UpdateGatewayResponseOutcomeCallable;
      typedef std::future<UpdateIntegrationOutcome> UpdateIntegrationOutcomeCallable;
      typedef std::future<UpdateIntegrationResponseOutcome> UpdateIntegrationResponseOutcomeCallable;
      typedef std::future<UpdateMethodOutcome> UpdateMethodOutcomeCallable;
      typedef std::future<UpdateMethodResponseOutcome> UpdateMethodResponseOutcomeCallable;
      typedef std::future<UpdateModelOutcome> UpdateModelOutcomeCallable;
      typedef std::future<UpdateRequestValidatorOutcome> UpdateRequestValidatorOutcomeCallable;
      typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
      typedef std::future<UpdateRestApiOutcome> UpdateRestApiOutcomeCallable;
      typedef std::future<UpdateStageOutcome> UpdateStageOutcomeCallable;
      typedef std::future<UpdateUsageOutcome> UpdateUsageOutcomeCallable;
      typedef std::future<UpdateUsagePlanOutcome> UpdateUsagePlanOutcomeCallable;
      typedef std::future<UpdateVpcLinkOutcome> UpdateVpcLinkOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class APIGatewayClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const APIGatewayClient*, const Model::CreateApiKeyRequest&, const Model::CreateApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApiKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateAuthorizerRequest&, const Model::CreateAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAuthorizerResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateBasePathMappingRequest&, const Model::CreateBasePathMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBasePathMappingResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateDocumentationPartRequest&, const Model::CreateDocumentationPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentationPartResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateDocumentationVersionRequest&, const Model::CreateDocumentationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentationVersionResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateDomainNameRequest&, const Model::CreateDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainNameResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateRequestValidatorRequest&, const Model::CreateRequestValidatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRequestValidatorResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateResourceRequest&, const Model::CreateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateRestApiRequest&, const Model::CreateRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateStageRequest&, const Model::CreateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateUsagePlanRequest&, const Model::CreateUsagePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsagePlanResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateUsagePlanKeyRequest&, const Model::CreateUsagePlanKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsagePlanKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateVpcLinkRequest&, const Model::CreateVpcLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcLinkResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteApiKeyRequest&, const Model::DeleteApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApiKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteAuthorizerRequest&, const Model::DeleteAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAuthorizerResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteBasePathMappingRequest&, const Model::DeleteBasePathMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBasePathMappingResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteClientCertificateRequest&, const Model::DeleteClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClientCertificateResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteDeploymentRequest&, const Model::DeleteDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteDocumentationPartRequest&, const Model::DeleteDocumentationPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentationPartResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteDocumentationVersionRequest&, const Model::DeleteDocumentationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentationVersionResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteDomainNameRequest&, const Model::DeleteDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainNameResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteGatewayResponseRequest&, const Model::DeleteGatewayResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGatewayResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteIntegrationResponseRequest&, const Model::DeleteIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteMethodRequest&, const Model::DeleteMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteMethodResponseRequest&, const Model::DeleteMethodResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMethodResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteRequestValidatorRequest&, const Model::DeleteRequestValidatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRequestValidatorResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteResourceRequest&, const Model::DeleteResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteRestApiRequest&, const Model::DeleteRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteStageRequest&, const Model::DeleteStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteUsagePlanRequest&, const Model::DeleteUsagePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsagePlanResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteUsagePlanKeyRequest&, const Model::DeleteUsagePlanKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsagePlanKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteVpcLinkRequest&, const Model::DeleteVpcLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcLinkResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::FlushStageAuthorizersCacheRequest&, const Model::FlushStageAuthorizersCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FlushStageAuthorizersCacheResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::FlushStageCacheRequest&, const Model::FlushStageCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FlushStageCacheResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GenerateClientCertificateRequest&, const Model::GenerateClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateClientCertificateResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetAccountRequest&, const Model::GetAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetApiKeyRequest&, const Model::GetApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApiKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetApiKeysRequest&, const Model::GetApiKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApiKeysResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetAuthorizerRequest&, const Model::GetAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthorizerResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetAuthorizersRequest&, const Model::GetAuthorizersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthorizersResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetBasePathMappingRequest&, const Model::GetBasePathMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBasePathMappingResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetBasePathMappingsRequest&, const Model::GetBasePathMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBasePathMappingsResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetClientCertificateRequest&, const Model::GetClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClientCertificateResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetClientCertificatesRequest&, const Model::GetClientCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClientCertificatesResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetDeploymentsRequest&, const Model::GetDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentsResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetDocumentationPartRequest&, const Model::GetDocumentationPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentationPartResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetDocumentationPartsRequest&, const Model::GetDocumentationPartsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentationPartsResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetDocumentationVersionRequest&, const Model::GetDocumentationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentationVersionResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetDocumentationVersionsRequest&, const Model::GetDocumentationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentationVersionsResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetDomainNameRequest&, const Model::GetDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainNameResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetDomainNamesRequest&, const Model::GetDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainNamesResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetExportRequest&, Model::GetExportOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetGatewayResponseRequest&, const Model::GetGatewayResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGatewayResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetGatewayResponsesRequest&, const Model::GetGatewayResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGatewayResponsesResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetIntegrationResponseRequest&, const Model::GetIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetMethodRequest&, const Model::GetMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetMethodResponseRequest&, const Model::GetMethodResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMethodResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetModelRequest&, const Model::GetModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetModelTemplateRequest&, const Model::GetModelTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelTemplateResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetModelsRequest&, const Model::GetModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelsResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetRequestValidatorRequest&, const Model::GetRequestValidatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRequestValidatorResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetRequestValidatorsRequest&, const Model::GetRequestValidatorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRequestValidatorsResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetResourceRequest&, const Model::GetResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetResourcesRequest&, const Model::GetResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcesResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetRestApiRequest&, const Model::GetRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetRestApisRequest&, const Model::GetRestApisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRestApisResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetSdkRequest&, Model::GetSdkOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSdkResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetSdkTypeRequest&, const Model::GetSdkTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSdkTypeResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetSdkTypesRequest&, const Model::GetSdkTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSdkTypesResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetStageRequest&, const Model::GetStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetStagesRequest&, const Model::GetStagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStagesResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsageRequest&, const Model::GetUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsagePlanRequest&, const Model::GetUsagePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsagePlanResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsagePlanKeyRequest&, const Model::GetUsagePlanKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsagePlanKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsagePlanKeysRequest&, const Model::GetUsagePlanKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsagePlanKeysResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsagePlansRequest&, const Model::GetUsagePlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsagePlansResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetVpcLinkRequest&, const Model::GetVpcLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVpcLinkResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetVpcLinksRequest&, const Model::GetVpcLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVpcLinksResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::ImportApiKeysRequest&, const Model::ImportApiKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportApiKeysResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::ImportDocumentationPartsRequest&, const Model::ImportDocumentationPartsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportDocumentationPartsResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::ImportRestApiRequest&, const Model::ImportRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutGatewayResponseRequest&, const Model::PutGatewayResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutGatewayResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutIntegrationRequest&, const Model::PutIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIntegrationResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutIntegrationResponseRequest&, const Model::PutIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutMethodRequest&, const Model::PutMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutMethodResponseRequest&, const Model::PutMethodResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMethodResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutRestApiRequest&, const Model::PutRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::TestInvokeAuthorizerRequest&, const Model::TestInvokeAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestInvokeAuthorizerResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::TestInvokeMethodRequest&, const Model::TestInvokeMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestInvokeMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateAccountRequest&, const Model::UpdateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateApiKeyRequest&, const Model::UpdateApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApiKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateAuthorizerRequest&, const Model::UpdateAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAuthorizerResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateBasePathMappingRequest&, const Model::UpdateBasePathMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBasePathMappingResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateClientCertificateRequest&, const Model::UpdateClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClientCertificateResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateDeploymentRequest&, const Model::UpdateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeploymentResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateDocumentationPartRequest&, const Model::UpdateDocumentationPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentationPartResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateDocumentationVersionRequest&, const Model::UpdateDocumentationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentationVersionResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateDomainNameRequest&, const Model::UpdateDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainNameResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateGatewayResponseRequest&, const Model::UpdateGatewayResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateIntegrationRequest&, const Model::UpdateIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntegrationResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateIntegrationResponseRequest&, const Model::UpdateIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateMethodRequest&, const Model::UpdateMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateMethodResponseRequest&, const Model::UpdateMethodResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMethodResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateModelRequest&, const Model::UpdateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateRequestValidatorRequest&, const Model::UpdateRequestValidatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRequestValidatorResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateResourceRequest&, const Model::UpdateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateRestApiRequest&, const Model::UpdateRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateStageRequest&, const Model::UpdateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateUsageRequest&, const Model::UpdateUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUsageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateUsagePlanRequest&, const Model::UpdateUsagePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUsagePlanResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateVpcLinkRequest&, const Model::UpdateVpcLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVpcLinkResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace APIGateway
} // namespace Aws
