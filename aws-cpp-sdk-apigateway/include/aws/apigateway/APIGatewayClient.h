/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apigateway/model/CreateApiKeyResult.h>
#include <aws/apigateway/model/CreateAuthorizerResult.h>
#include <aws/apigateway/model/CreateBasePathMappingResult.h>
#include <aws/apigateway/model/CreateDeploymentResult.h>
#include <aws/apigateway/model/CreateDomainNameResult.h>
#include <aws/apigateway/model/CreateModelResult.h>
#include <aws/apigateway/model/CreateResourceResult.h>
#include <aws/apigateway/model/CreateRestApiResult.h>
#include <aws/apigateway/model/CreateStageResult.h>
#include <aws/apigateway/model/CreateUsagePlanResult.h>
#include <aws/apigateway/model/CreateUsagePlanKeyResult.h>
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
#include <aws/apigateway/model/GetDomainNameResult.h>
#include <aws/apigateway/model/GetDomainNamesResult.h>
#include <aws/apigateway/model/GetExportResult.h>
#include <aws/apigateway/model/GetIntegrationResult.h>
#include <aws/apigateway/model/GetIntegrationResponseResult.h>
#include <aws/apigateway/model/GetMethodResult.h>
#include <aws/apigateway/model/GetMethodResponseResult.h>
#include <aws/apigateway/model/GetModelResult.h>
#include <aws/apigateway/model/GetModelTemplateResult.h>
#include <aws/apigateway/model/GetModelsResult.h>
#include <aws/apigateway/model/GetResourceResult.h>
#include <aws/apigateway/model/GetResourcesResult.h>
#include <aws/apigateway/model/GetRestApiResult.h>
#include <aws/apigateway/model/GetRestApisResult.h>
#include <aws/apigateway/model/GetSdkResult.h>
#include <aws/apigateway/model/GetStageResult.h>
#include <aws/apigateway/model/GetStagesResult.h>
#include <aws/apigateway/model/GetUsageResult.h>
#include <aws/apigateway/model/GetUsagePlanResult.h>
#include <aws/apigateway/model/GetUsagePlanKeyResult.h>
#include <aws/apigateway/model/GetUsagePlanKeysResult.h>
#include <aws/apigateway/model/GetUsagePlansResult.h>
#include <aws/apigateway/model/ImportApiKeysResult.h>
#include <aws/apigateway/model/ImportRestApiResult.h>
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
#include <aws/apigateway/model/UpdateDomainNameResult.h>
#include <aws/apigateway/model/UpdateIntegrationResult.h>
#include <aws/apigateway/model/UpdateIntegrationResponseResult.h>
#include <aws/apigateway/model/UpdateMethodResult.h>
#include <aws/apigateway/model/UpdateMethodResponseResult.h>
#include <aws/apigateway/model/UpdateModelResult.h>
#include <aws/apigateway/model/UpdateResourceResult.h>
#include <aws/apigateway/model/UpdateRestApiResult.h>
#include <aws/apigateway/model/UpdateStageResult.h>
#include <aws/apigateway/model/UpdateUsageResult.h>
#include <aws/apigateway/model/UpdateUsagePlanResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace Model
{
        class CreateApiKeyRequest;
        class CreateAuthorizerRequest;
        class CreateBasePathMappingRequest;
        class CreateDeploymentRequest;
        class CreateDomainNameRequest;
        class CreateModelRequest;
        class CreateResourceRequest;
        class CreateRestApiRequest;
        class CreateStageRequest;
        class CreateUsagePlanRequest;
        class CreateUsagePlanKeyRequest;
        class DeleteApiKeyRequest;
        class DeleteAuthorizerRequest;
        class DeleteBasePathMappingRequest;
        class DeleteClientCertificateRequest;
        class DeleteDeploymentRequest;
        class DeleteDomainNameRequest;
        class DeleteIntegrationRequest;
        class DeleteIntegrationResponseRequest;
        class DeleteMethodRequest;
        class DeleteMethodResponseRequest;
        class DeleteModelRequest;
        class DeleteResourceRequest;
        class DeleteRestApiRequest;
        class DeleteStageRequest;
        class DeleteUsagePlanRequest;
        class DeleteUsagePlanKeyRequest;
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
        class GetDomainNameRequest;
        class GetDomainNamesRequest;
        class GetExportRequest;
        class GetIntegrationRequest;
        class GetIntegrationResponseRequest;
        class GetMethodRequest;
        class GetMethodResponseRequest;
        class GetModelRequest;
        class GetModelTemplateRequest;
        class GetModelsRequest;
        class GetResourceRequest;
        class GetResourcesRequest;
        class GetRestApiRequest;
        class GetRestApisRequest;
        class GetSdkRequest;
        class GetStageRequest;
        class GetStagesRequest;
        class GetUsageRequest;
        class GetUsagePlanRequest;
        class GetUsagePlanKeyRequest;
        class GetUsagePlanKeysRequest;
        class GetUsagePlansRequest;
        class ImportApiKeysRequest;
        class ImportRestApiRequest;
        class PutIntegrationRequest;
        class PutIntegrationResponseRequest;
        class PutMethodRequest;
        class PutMethodResponseRequest;
        class PutRestApiRequest;
        class TestInvokeAuthorizerRequest;
        class TestInvokeMethodRequest;
        class UpdateAccountRequest;
        class UpdateApiKeyRequest;
        class UpdateAuthorizerRequest;
        class UpdateBasePathMappingRequest;
        class UpdateClientCertificateRequest;
        class UpdateDeploymentRequest;
        class UpdateDomainNameRequest;
        class UpdateIntegrationRequest;
        class UpdateIntegrationResponseRequest;
        class UpdateMethodRequest;
        class UpdateMethodResponseRequest;
        class UpdateModelRequest;
        class UpdateResourceRequest;
        class UpdateRestApiRequest;
        class UpdateStageRequest;
        class UpdateUsageRequest;
        class UpdateUsagePlanRequest;

        typedef Aws::Utils::Outcome<CreateApiKeyResult, Aws::Client::AWSError<APIGatewayErrors>> CreateApiKeyOutcome;
        typedef Aws::Utils::Outcome<CreateAuthorizerResult, Aws::Client::AWSError<APIGatewayErrors>> CreateAuthorizerOutcome;
        typedef Aws::Utils::Outcome<CreateBasePathMappingResult, Aws::Client::AWSError<APIGatewayErrors>> CreateBasePathMappingOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentResult, Aws::Client::AWSError<APIGatewayErrors>> CreateDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateDomainNameResult, Aws::Client::AWSError<APIGatewayErrors>> CreateDomainNameOutcome;
        typedef Aws::Utils::Outcome<CreateModelResult, Aws::Client::AWSError<APIGatewayErrors>> CreateModelOutcome;
        typedef Aws::Utils::Outcome<CreateResourceResult, Aws::Client::AWSError<APIGatewayErrors>> CreateResourceOutcome;
        typedef Aws::Utils::Outcome<CreateRestApiResult, Aws::Client::AWSError<APIGatewayErrors>> CreateRestApiOutcome;
        typedef Aws::Utils::Outcome<CreateStageResult, Aws::Client::AWSError<APIGatewayErrors>> CreateStageOutcome;
        typedef Aws::Utils::Outcome<CreateUsagePlanResult, Aws::Client::AWSError<APIGatewayErrors>> CreateUsagePlanOutcome;
        typedef Aws::Utils::Outcome<CreateUsagePlanKeyResult, Aws::Client::AWSError<APIGatewayErrors>> CreateUsagePlanKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteApiKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteAuthorizerOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteBasePathMappingOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteClientCertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteDeploymentOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteDomainNameOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteIntegrationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteIntegrationResponseOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteMethodOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteMethodResponseOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteModelOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteResourceOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteRestApiOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteStageOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteUsagePlanOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> DeleteUsagePlanKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> FlushStageAuthorizersCacheOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<APIGatewayErrors>> FlushStageCacheOutcome;
        typedef Aws::Utils::Outcome<GenerateClientCertificateResult, Aws::Client::AWSError<APIGatewayErrors>> GenerateClientCertificateOutcome;
        typedef Aws::Utils::Outcome<GetAccountResult, Aws::Client::AWSError<APIGatewayErrors>> GetAccountOutcome;
        typedef Aws::Utils::Outcome<GetApiKeyResult, Aws::Client::AWSError<APIGatewayErrors>> GetApiKeyOutcome;
        typedef Aws::Utils::Outcome<GetApiKeysResult, Aws::Client::AWSError<APIGatewayErrors>> GetApiKeysOutcome;
        typedef Aws::Utils::Outcome<GetAuthorizerResult, Aws::Client::AWSError<APIGatewayErrors>> GetAuthorizerOutcome;
        typedef Aws::Utils::Outcome<GetAuthorizersResult, Aws::Client::AWSError<APIGatewayErrors>> GetAuthorizersOutcome;
        typedef Aws::Utils::Outcome<GetBasePathMappingResult, Aws::Client::AWSError<APIGatewayErrors>> GetBasePathMappingOutcome;
        typedef Aws::Utils::Outcome<GetBasePathMappingsResult, Aws::Client::AWSError<APIGatewayErrors>> GetBasePathMappingsOutcome;
        typedef Aws::Utils::Outcome<GetClientCertificateResult, Aws::Client::AWSError<APIGatewayErrors>> GetClientCertificateOutcome;
        typedef Aws::Utils::Outcome<GetClientCertificatesResult, Aws::Client::AWSError<APIGatewayErrors>> GetClientCertificatesOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentResult, Aws::Client::AWSError<APIGatewayErrors>> GetDeploymentOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentsResult, Aws::Client::AWSError<APIGatewayErrors>> GetDeploymentsOutcome;
        typedef Aws::Utils::Outcome<GetDomainNameResult, Aws::Client::AWSError<APIGatewayErrors>> GetDomainNameOutcome;
        typedef Aws::Utils::Outcome<GetDomainNamesResult, Aws::Client::AWSError<APIGatewayErrors>> GetDomainNamesOutcome;
        typedef Aws::Utils::Outcome<GetExportResult, Aws::Client::AWSError<APIGatewayErrors>> GetExportOutcome;
        typedef Aws::Utils::Outcome<GetIntegrationResult, Aws::Client::AWSError<APIGatewayErrors>> GetIntegrationOutcome;
        typedef Aws::Utils::Outcome<GetIntegrationResponseResult, Aws::Client::AWSError<APIGatewayErrors>> GetIntegrationResponseOutcome;
        typedef Aws::Utils::Outcome<GetMethodResult, Aws::Client::AWSError<APIGatewayErrors>> GetMethodOutcome;
        typedef Aws::Utils::Outcome<GetMethodResponseResult, Aws::Client::AWSError<APIGatewayErrors>> GetMethodResponseOutcome;
        typedef Aws::Utils::Outcome<GetModelResult, Aws::Client::AWSError<APIGatewayErrors>> GetModelOutcome;
        typedef Aws::Utils::Outcome<GetModelTemplateResult, Aws::Client::AWSError<APIGatewayErrors>> GetModelTemplateOutcome;
        typedef Aws::Utils::Outcome<GetModelsResult, Aws::Client::AWSError<APIGatewayErrors>> GetModelsOutcome;
        typedef Aws::Utils::Outcome<GetResourceResult, Aws::Client::AWSError<APIGatewayErrors>> GetResourceOutcome;
        typedef Aws::Utils::Outcome<GetResourcesResult, Aws::Client::AWSError<APIGatewayErrors>> GetResourcesOutcome;
        typedef Aws::Utils::Outcome<GetRestApiResult, Aws::Client::AWSError<APIGatewayErrors>> GetRestApiOutcome;
        typedef Aws::Utils::Outcome<GetRestApisResult, Aws::Client::AWSError<APIGatewayErrors>> GetRestApisOutcome;
        typedef Aws::Utils::Outcome<GetSdkResult, Aws::Client::AWSError<APIGatewayErrors>> GetSdkOutcome;
        typedef Aws::Utils::Outcome<GetStageResult, Aws::Client::AWSError<APIGatewayErrors>> GetStageOutcome;
        typedef Aws::Utils::Outcome<GetStagesResult, Aws::Client::AWSError<APIGatewayErrors>> GetStagesOutcome;
        typedef Aws::Utils::Outcome<GetUsageResult, Aws::Client::AWSError<APIGatewayErrors>> GetUsageOutcome;
        typedef Aws::Utils::Outcome<GetUsagePlanResult, Aws::Client::AWSError<APIGatewayErrors>> GetUsagePlanOutcome;
        typedef Aws::Utils::Outcome<GetUsagePlanKeyResult, Aws::Client::AWSError<APIGatewayErrors>> GetUsagePlanKeyOutcome;
        typedef Aws::Utils::Outcome<GetUsagePlanKeysResult, Aws::Client::AWSError<APIGatewayErrors>> GetUsagePlanKeysOutcome;
        typedef Aws::Utils::Outcome<GetUsagePlansResult, Aws::Client::AWSError<APIGatewayErrors>> GetUsagePlansOutcome;
        typedef Aws::Utils::Outcome<ImportApiKeysResult, Aws::Client::AWSError<APIGatewayErrors>> ImportApiKeysOutcome;
        typedef Aws::Utils::Outcome<ImportRestApiResult, Aws::Client::AWSError<APIGatewayErrors>> ImportRestApiOutcome;
        typedef Aws::Utils::Outcome<PutIntegrationResult, Aws::Client::AWSError<APIGatewayErrors>> PutIntegrationOutcome;
        typedef Aws::Utils::Outcome<PutIntegrationResponseResult, Aws::Client::AWSError<APIGatewayErrors>> PutIntegrationResponseOutcome;
        typedef Aws::Utils::Outcome<PutMethodResult, Aws::Client::AWSError<APIGatewayErrors>> PutMethodOutcome;
        typedef Aws::Utils::Outcome<PutMethodResponseResult, Aws::Client::AWSError<APIGatewayErrors>> PutMethodResponseOutcome;
        typedef Aws::Utils::Outcome<PutRestApiResult, Aws::Client::AWSError<APIGatewayErrors>> PutRestApiOutcome;
        typedef Aws::Utils::Outcome<TestInvokeAuthorizerResult, Aws::Client::AWSError<APIGatewayErrors>> TestInvokeAuthorizerOutcome;
        typedef Aws::Utils::Outcome<TestInvokeMethodResult, Aws::Client::AWSError<APIGatewayErrors>> TestInvokeMethodOutcome;
        typedef Aws::Utils::Outcome<UpdateAccountResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateAccountOutcome;
        typedef Aws::Utils::Outcome<UpdateApiKeyResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateApiKeyOutcome;
        typedef Aws::Utils::Outcome<UpdateAuthorizerResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateAuthorizerOutcome;
        typedef Aws::Utils::Outcome<UpdateBasePathMappingResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateBasePathMappingOutcome;
        typedef Aws::Utils::Outcome<UpdateClientCertificateResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateClientCertificateOutcome;
        typedef Aws::Utils::Outcome<UpdateDeploymentResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateDeploymentOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainNameResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateDomainNameOutcome;
        typedef Aws::Utils::Outcome<UpdateIntegrationResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateIntegrationOutcome;
        typedef Aws::Utils::Outcome<UpdateIntegrationResponseResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateIntegrationResponseOutcome;
        typedef Aws::Utils::Outcome<UpdateMethodResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateMethodOutcome;
        typedef Aws::Utils::Outcome<UpdateMethodResponseResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateMethodResponseOutcome;
        typedef Aws::Utils::Outcome<UpdateModelResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateModelOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateRestApiResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateRestApiOutcome;
        typedef Aws::Utils::Outcome<UpdateStageResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateStageOutcome;
        typedef Aws::Utils::Outcome<UpdateUsageResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateUsageOutcome;
        typedef Aws::Utils::Outcome<UpdateUsagePlanResult, Aws::Client::AWSError<APIGatewayErrors>> UpdateUsagePlanOutcome;

        typedef std::future<CreateApiKeyOutcome> CreateApiKeyOutcomeCallable;
        typedef std::future<CreateAuthorizerOutcome> CreateAuthorizerOutcomeCallable;
        typedef std::future<CreateBasePathMappingOutcome> CreateBasePathMappingOutcomeCallable;
        typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
        typedef std::future<CreateDomainNameOutcome> CreateDomainNameOutcomeCallable;
        typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
        typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
        typedef std::future<CreateRestApiOutcome> CreateRestApiOutcomeCallable;
        typedef std::future<CreateStageOutcome> CreateStageOutcomeCallable;
        typedef std::future<CreateUsagePlanOutcome> CreateUsagePlanOutcomeCallable;
        typedef std::future<CreateUsagePlanKeyOutcome> CreateUsagePlanKeyOutcomeCallable;
        typedef std::future<DeleteApiKeyOutcome> DeleteApiKeyOutcomeCallable;
        typedef std::future<DeleteAuthorizerOutcome> DeleteAuthorizerOutcomeCallable;
        typedef std::future<DeleteBasePathMappingOutcome> DeleteBasePathMappingOutcomeCallable;
        typedef std::future<DeleteClientCertificateOutcome> DeleteClientCertificateOutcomeCallable;
        typedef std::future<DeleteDeploymentOutcome> DeleteDeploymentOutcomeCallable;
        typedef std::future<DeleteDomainNameOutcome> DeleteDomainNameOutcomeCallable;
        typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
        typedef std::future<DeleteIntegrationResponseOutcome> DeleteIntegrationResponseOutcomeCallable;
        typedef std::future<DeleteMethodOutcome> DeleteMethodOutcomeCallable;
        typedef std::future<DeleteMethodResponseOutcome> DeleteMethodResponseOutcomeCallable;
        typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
        typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
        typedef std::future<DeleteRestApiOutcome> DeleteRestApiOutcomeCallable;
        typedef std::future<DeleteStageOutcome> DeleteStageOutcomeCallable;
        typedef std::future<DeleteUsagePlanOutcome> DeleteUsagePlanOutcomeCallable;
        typedef std::future<DeleteUsagePlanKeyOutcome> DeleteUsagePlanKeyOutcomeCallable;
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
        typedef std::future<GetDomainNameOutcome> GetDomainNameOutcomeCallable;
        typedef std::future<GetDomainNamesOutcome> GetDomainNamesOutcomeCallable;
        typedef std::future<GetExportOutcome> GetExportOutcomeCallable;
        typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
        typedef std::future<GetIntegrationResponseOutcome> GetIntegrationResponseOutcomeCallable;
        typedef std::future<GetMethodOutcome> GetMethodOutcomeCallable;
        typedef std::future<GetMethodResponseOutcome> GetMethodResponseOutcomeCallable;
        typedef std::future<GetModelOutcome> GetModelOutcomeCallable;
        typedef std::future<GetModelTemplateOutcome> GetModelTemplateOutcomeCallable;
        typedef std::future<GetModelsOutcome> GetModelsOutcomeCallable;
        typedef std::future<GetResourceOutcome> GetResourceOutcomeCallable;
        typedef std::future<GetResourcesOutcome> GetResourcesOutcomeCallable;
        typedef std::future<GetRestApiOutcome> GetRestApiOutcomeCallable;
        typedef std::future<GetRestApisOutcome> GetRestApisOutcomeCallable;
        typedef std::future<GetSdkOutcome> GetSdkOutcomeCallable;
        typedef std::future<GetStageOutcome> GetStageOutcomeCallable;
        typedef std::future<GetStagesOutcome> GetStagesOutcomeCallable;
        typedef std::future<GetUsageOutcome> GetUsageOutcomeCallable;
        typedef std::future<GetUsagePlanOutcome> GetUsagePlanOutcomeCallable;
        typedef std::future<GetUsagePlanKeyOutcome> GetUsagePlanKeyOutcomeCallable;
        typedef std::future<GetUsagePlanKeysOutcome> GetUsagePlanKeysOutcomeCallable;
        typedef std::future<GetUsagePlansOutcome> GetUsagePlansOutcomeCallable;
        typedef std::future<ImportApiKeysOutcome> ImportApiKeysOutcomeCallable;
        typedef std::future<ImportRestApiOutcome> ImportRestApiOutcomeCallable;
        typedef std::future<PutIntegrationOutcome> PutIntegrationOutcomeCallable;
        typedef std::future<PutIntegrationResponseOutcome> PutIntegrationResponseOutcomeCallable;
        typedef std::future<PutMethodOutcome> PutMethodOutcomeCallable;
        typedef std::future<PutMethodResponseOutcome> PutMethodResponseOutcomeCallable;
        typedef std::future<PutRestApiOutcome> PutRestApiOutcomeCallable;
        typedef std::future<TestInvokeAuthorizerOutcome> TestInvokeAuthorizerOutcomeCallable;
        typedef std::future<TestInvokeMethodOutcome> TestInvokeMethodOutcomeCallable;
        typedef std::future<UpdateAccountOutcome> UpdateAccountOutcomeCallable;
        typedef std::future<UpdateApiKeyOutcome> UpdateApiKeyOutcomeCallable;
        typedef std::future<UpdateAuthorizerOutcome> UpdateAuthorizerOutcomeCallable;
        typedef std::future<UpdateBasePathMappingOutcome> UpdateBasePathMappingOutcomeCallable;
        typedef std::future<UpdateClientCertificateOutcome> UpdateClientCertificateOutcomeCallable;
        typedef std::future<UpdateDeploymentOutcome> UpdateDeploymentOutcomeCallable;
        typedef std::future<UpdateDomainNameOutcome> UpdateDomainNameOutcomeCallable;
        typedef std::future<UpdateIntegrationOutcome> UpdateIntegrationOutcomeCallable;
        typedef std::future<UpdateIntegrationResponseOutcome> UpdateIntegrationResponseOutcomeCallable;
        typedef std::future<UpdateMethodOutcome> UpdateMethodOutcomeCallable;
        typedef std::future<UpdateMethodResponseOutcome> UpdateMethodResponseOutcomeCallable;
        typedef std::future<UpdateModelOutcome> UpdateModelOutcomeCallable;
        typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
        typedef std::future<UpdateRestApiOutcome> UpdateRestApiOutcomeCallable;
        typedef std::future<UpdateStageOutcome> UpdateStageOutcomeCallable;
        typedef std::future<UpdateUsageOutcome> UpdateUsageOutcomeCallable;
        typedef std::future<UpdateUsagePlanOutcome> UpdateUsagePlanOutcomeCallable;
} // namespace Model

  class APIGatewayClient;

    typedef std::function<void(const APIGatewayClient*, const Model::CreateApiKeyRequest&, const Model::CreateApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApiKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateAuthorizerRequest&, const Model::CreateAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAuthorizerResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateBasePathMappingRequest&, const Model::CreateBasePathMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBasePathMappingResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateDomainNameRequest&, const Model::CreateDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainNameResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateResourceRequest&, const Model::CreateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateRestApiRequest&, const Model::CreateRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateStageRequest&, const Model::CreateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateUsagePlanRequest&, const Model::CreateUsagePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsagePlanResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::CreateUsagePlanKeyRequest&, const Model::CreateUsagePlanKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsagePlanKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteApiKeyRequest&, const Model::DeleteApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApiKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteAuthorizerRequest&, const Model::DeleteAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAuthorizerResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteBasePathMappingRequest&, const Model::DeleteBasePathMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBasePathMappingResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteClientCertificateRequest&, const Model::DeleteClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClientCertificateResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteDeploymentRequest&, const Model::DeleteDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteDomainNameRequest&, const Model::DeleteDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainNameResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteIntegrationResponseRequest&, const Model::DeleteIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteMethodRequest&, const Model::DeleteMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteMethodResponseRequest&, const Model::DeleteMethodResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMethodResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteResourceRequest&, const Model::DeleteResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteRestApiRequest&, const Model::DeleteRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteStageRequest&, const Model::DeleteStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteUsagePlanRequest&, const Model::DeleteUsagePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsagePlanResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::DeleteUsagePlanKeyRequest&, const Model::DeleteUsagePlanKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsagePlanKeyResponseReceivedHandler;
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
    typedef std::function<void(const APIGatewayClient*, const Model::GetDomainNameRequest&, const Model::GetDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainNameResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetDomainNamesRequest&, const Model::GetDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainNamesResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetExportRequest&, const Model::GetExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetIntegrationResponseRequest&, const Model::GetIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetMethodRequest&, const Model::GetMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetMethodResponseRequest&, const Model::GetMethodResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMethodResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetModelRequest&, const Model::GetModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetModelTemplateRequest&, const Model::GetModelTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelTemplateResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetModelsRequest&, const Model::GetModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelsResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetResourceRequest&, const Model::GetResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetResourcesRequest&, const Model::GetResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcesResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetRestApiRequest&, const Model::GetRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetRestApisRequest&, const Model::GetRestApisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRestApisResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetSdkRequest&, const Model::GetSdkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSdkResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetStageRequest&, const Model::GetStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetStagesRequest&, const Model::GetStagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStagesResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsageRequest&, const Model::GetUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsagePlanRequest&, const Model::GetUsagePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsagePlanResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsagePlanKeyRequest&, const Model::GetUsagePlanKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsagePlanKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsagePlanKeysRequest&, const Model::GetUsagePlanKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsagePlanKeysResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::GetUsagePlansRequest&, const Model::GetUsagePlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsagePlansResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::ImportApiKeysRequest&, const Model::ImportApiKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportApiKeysResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::ImportRestApiRequest&, const Model::ImportRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutIntegrationRequest&, const Model::PutIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIntegrationResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutIntegrationResponseRequest&, const Model::PutIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutMethodRequest&, const Model::PutMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutMethodResponseRequest&, const Model::PutMethodResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMethodResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::PutRestApiRequest&, const Model::PutRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::TestInvokeAuthorizerRequest&, const Model::TestInvokeAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestInvokeAuthorizerResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::TestInvokeMethodRequest&, const Model::TestInvokeMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestInvokeMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateAccountRequest&, const Model::UpdateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateApiKeyRequest&, const Model::UpdateApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApiKeyResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateAuthorizerRequest&, const Model::UpdateAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAuthorizerResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateBasePathMappingRequest&, const Model::UpdateBasePathMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBasePathMappingResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateClientCertificateRequest&, const Model::UpdateClientCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClientCertificateResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateDeploymentRequest&, const Model::UpdateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeploymentResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateDomainNameRequest&, const Model::UpdateDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainNameResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateIntegrationRequest&, const Model::UpdateIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntegrationResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateIntegrationResponseRequest&, const Model::UpdateIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateMethodRequest&, const Model::UpdateMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMethodResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateMethodResponseRequest&, const Model::UpdateMethodResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMethodResponseResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateModelRequest&, const Model::UpdateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateResourceRequest&, const Model::UpdateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateRestApiRequest&, const Model::UpdateRestApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRestApiResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateStageRequest&, const Model::UpdateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateUsageRequest&, const Model::UpdateUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUsageResponseReceivedHandler;
    typedef std::function<void(const APIGatewayClient*, const Model::UpdateUsagePlanRequest&, const Model::UpdateUsagePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUsagePlanResponseReceivedHandler;

  /**
   * <fullname>Amazon API Gateway</fullname> <p>Amazon API Gateway helps developers
   * deliver robust, secure, and scalable mobile and web application back ends.
   * Amazon API Gateway allows developers to securely connect mobile and web
   * applications to APIs that run on AWS Lambda, Amazon EC2, or other publicly
   * addressable web services that are hosted outside of AWS.</p>
   */
  class AWS_APIGATEWAY_API APIGatewayClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        APIGatewayClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        APIGatewayClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        APIGatewayClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~APIGatewayClient();

        /**
         * <p>Create an <a>ApiKey</a> resource. </p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/create-api-key.html">AWS
         * CLI</a></div>
         */
        virtual Model::CreateApiKeyOutcome CreateApiKey(const Model::CreateApiKeyRequest& request) const;

        /**
         * <p>Create an <a>ApiKey</a> resource. </p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/create-api-key.html">AWS
         * CLI</a></div>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApiKeyOutcomeCallable CreateApiKeyCallable(const Model::CreateApiKeyRequest& request) const;

        /**
         * <p>Create an <a>ApiKey</a> resource. </p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/create-api-key.html">AWS
         * CLI</a></div>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApiKeyAsync(const Model::CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new <a>Authorizer</a> resource to an existing <a>RestApi</a>
         * resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/create-authorizer.html">AWS
         * CLI</a></div>
         */
        virtual Model::CreateAuthorizerOutcome CreateAuthorizer(const Model::CreateAuthorizerRequest& request) const;

        /**
         * <p>Adds a new <a>Authorizer</a> resource to an existing <a>RestApi</a>
         * resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/create-authorizer.html">AWS
         * CLI</a></div>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAuthorizerOutcomeCallable CreateAuthorizerCallable(const Model::CreateAuthorizerRequest& request) const;

        /**
         * <p>Adds a new <a>Authorizer</a> resource to an existing <a>RestApi</a>
         * resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/create-authorizer.html">AWS
         * CLI</a></div>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAuthorizerAsync(const Model::CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new <a>BasePathMapping</a> resource.</p>
         */
        virtual Model::CreateBasePathMappingOutcome CreateBasePathMapping(const Model::CreateBasePathMappingRequest& request) const;

        /**
         * <p>Creates a new <a>BasePathMapping</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBasePathMappingOutcomeCallable CreateBasePathMappingCallable(const Model::CreateBasePathMappingRequest& request) const;

        /**
         * <p>Creates a new <a>BasePathMapping</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBasePathMappingAsync(const Model::CreateBasePathMappingRequest& request, const CreateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a>Deployment</a> resource, which makes a specified <a>RestApi</a>
         * callable over the internet.</p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Creates a <a>Deployment</a> resource, which makes a specified <a>RestApi</a>
         * callable over the internet.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Creates a <a>Deployment</a> resource, which makes a specified <a>RestApi</a>
         * callable over the internet.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new domain name.</p>
         */
        virtual Model::CreateDomainNameOutcome CreateDomainName(const Model::CreateDomainNameRequest& request) const;

        /**
         * <p>Creates a new domain name.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainNameOutcomeCallable CreateDomainNameCallable(const Model::CreateDomainNameRequest& request) const;

        /**
         * <p>Creates a new domain name.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainNameAsync(const Model::CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new <a>Model</a> resource to an existing <a>RestApi</a> resource.</p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * <p>Adds a new <a>Model</a> resource to an existing <a>RestApi</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

        /**
         * <p>Adds a new <a>Model</a> resource to an existing <a>RestApi</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a>Resource</a> resource.</p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;

        /**
         * <p>Creates a <a>Resource</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request) const;

        /**
         * <p>Creates a <a>Resource</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new <a>RestApi</a> resource.</p>
         */
        virtual Model::CreateRestApiOutcome CreateRestApi(const Model::CreateRestApiRequest& request) const;

        /**
         * <p>Creates a new <a>RestApi</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRestApiOutcomeCallable CreateRestApiCallable(const Model::CreateRestApiRequest& request) const;

        /**
         * <p>Creates a new <a>RestApi</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRestApiAsync(const Model::CreateRestApiRequest& request, const CreateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new <a>Stage</a> resource that references a pre-existing
         * <a>Deployment</a> for the API. </p>
         */
        virtual Model::CreateStageOutcome CreateStage(const Model::CreateStageRequest& request) const;

        /**
         * <p>Creates a new <a>Stage</a> resource that references a pre-existing
         * <a>Deployment</a> for the API. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStageOutcomeCallable CreateStageCallable(const Model::CreateStageRequest& request) const;

        /**
         * <p>Creates a new <a>Stage</a> resource that references a pre-existing
         * <a>Deployment</a> for the API. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStageAsync(const Model::CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a usage plan with the throttle and quota limits, as well as the
         * associated API stages, specified in the payload. </p>
         */
        virtual Model::CreateUsagePlanOutcome CreateUsagePlan(const Model::CreateUsagePlanRequest& request) const;

        /**
         * <p>Creates a usage plan with the throttle and quota limits, as well as the
         * associated API stages, specified in the payload. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUsagePlanOutcomeCallable CreateUsagePlanCallable(const Model::CreateUsagePlanRequest& request) const;

        /**
         * <p>Creates a usage plan with the throttle and quota limits, as well as the
         * associated API stages, specified in the payload. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUsagePlanAsync(const Model::CreateUsagePlanRequest& request, const CreateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a usage plan key for adding an existing API key to a usage plan.</p>
         */
        virtual Model::CreateUsagePlanKeyOutcome CreateUsagePlanKey(const Model::CreateUsagePlanKeyRequest& request) const;

        /**
         * <p>Creates a usage plan key for adding an existing API key to a usage plan.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUsagePlanKeyOutcomeCallable CreateUsagePlanKeyCallable(const Model::CreateUsagePlanKeyRequest& request) const;

        /**
         * <p>Creates a usage plan key for adding an existing API key to a usage plan.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUsagePlanKeyAsync(const Model::CreateUsagePlanKeyRequest& request, const CreateUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the <a>ApiKey</a> resource.</p>
         */
        virtual Model::DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest& request) const;

        /**
         * <p>Deletes the <a>ApiKey</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApiKeyOutcomeCallable DeleteApiKeyCallable(const Model::DeleteApiKeyRequest& request) const;

        /**
         * <p>Deletes the <a>ApiKey</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApiKeyAsync(const Model::DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing <a>Authorizer</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/delete-authorizer.html">AWS
         * CLI</a></div>
         */
        virtual Model::DeleteAuthorizerOutcome DeleteAuthorizer(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * <p>Deletes an existing <a>Authorizer</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/delete-authorizer.html">AWS
         * CLI</a></div>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAuthorizerOutcomeCallable DeleteAuthorizerCallable(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * <p>Deletes an existing <a>Authorizer</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/delete-authorizer.html">AWS
         * CLI</a></div>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAuthorizerAsync(const Model::DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the <a>BasePathMapping</a> resource.</p>
         */
        virtual Model::DeleteBasePathMappingOutcome DeleteBasePathMapping(const Model::DeleteBasePathMappingRequest& request) const;

        /**
         * <p>Deletes the <a>BasePathMapping</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBasePathMappingOutcomeCallable DeleteBasePathMappingCallable(const Model::DeleteBasePathMappingRequest& request) const;

        /**
         * <p>Deletes the <a>BasePathMapping</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBasePathMappingAsync(const Model::DeleteBasePathMappingRequest& request, const DeleteBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the <a>ClientCertificate</a> resource.</p>
         */
        virtual Model::DeleteClientCertificateOutcome DeleteClientCertificate(const Model::DeleteClientCertificateRequest& request) const;

        /**
         * <p>Deletes the <a>ClientCertificate</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClientCertificateOutcomeCallable DeleteClientCertificateCallable(const Model::DeleteClientCertificateRequest& request) const;

        /**
         * <p>Deletes the <a>ClientCertificate</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClientCertificateAsync(const Model::DeleteClientCertificateRequest& request, const DeleteClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <a>Deployment</a> resource. Deleting a deployment will only succeed
         * if there are no <a>Stage</a> resources associated with it.</p>
         */
        virtual Model::DeleteDeploymentOutcome DeleteDeployment(const Model::DeleteDeploymentRequest& request) const;

        /**
         * <p>Deletes a <a>Deployment</a> resource. Deleting a deployment will only succeed
         * if there are no <a>Stage</a> resources associated with it.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeploymentOutcomeCallable DeleteDeploymentCallable(const Model::DeleteDeploymentRequest& request) const;

        /**
         * <p>Deletes a <a>Deployment</a> resource. Deleting a deployment will only succeed
         * if there are no <a>Stage</a> resources associated with it.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentAsync(const Model::DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the <a>DomainName</a> resource.</p>
         */
        virtual Model::DeleteDomainNameOutcome DeleteDomainName(const Model::DeleteDomainNameRequest& request) const;

        /**
         * <p>Deletes the <a>DomainName</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainNameOutcomeCallable DeleteDomainNameCallable(const Model::DeleteDomainNameRequest& request) const;

        /**
         * <p>Deletes the <a>DomainName</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainNameAsync(const Model::DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a delete integration.</p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

        /**
         * <p>Represents a delete integration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const Model::DeleteIntegrationRequest& request) const;

        /**
         * <p>Represents a delete integration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntegrationAsync(const Model::DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a delete integration response.</p>
         */
        virtual Model::DeleteIntegrationResponseOutcome DeleteIntegrationResponse(const Model::DeleteIntegrationResponseRequest& request) const;

        /**
         * <p>Represents a delete integration response.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntegrationResponseOutcomeCallable DeleteIntegrationResponseCallable(const Model::DeleteIntegrationResponseRequest& request) const;

        /**
         * <p>Represents a delete integration response.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntegrationResponseAsync(const Model::DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing <a>Method</a> resource.</p>
         */
        virtual Model::DeleteMethodOutcome DeleteMethod(const Model::DeleteMethodRequest& request) const;

        /**
         * <p>Deletes an existing <a>Method</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMethodOutcomeCallable DeleteMethodCallable(const Model::DeleteMethodRequest& request) const;

        /**
         * <p>Deletes an existing <a>Method</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMethodAsync(const Model::DeleteMethodRequest& request, const DeleteMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing <a>MethodResponse</a> resource.</p>
         */
        virtual Model::DeleteMethodResponseOutcome DeleteMethodResponse(const Model::DeleteMethodResponseRequest& request) const;

        /**
         * <p>Deletes an existing <a>MethodResponse</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMethodResponseOutcomeCallable DeleteMethodResponseCallable(const Model::DeleteMethodResponseRequest& request) const;

        /**
         * <p>Deletes an existing <a>MethodResponse</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMethodResponseAsync(const Model::DeleteMethodResponseRequest& request, const DeleteMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model.</p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a model.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a model.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <a>Resource</a> resource.</p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;

        /**
         * <p>Deletes a <a>Resource</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceOutcomeCallable DeleteResourceCallable(const Model::DeleteResourceRequest& request) const;

        /**
         * <p>Deletes a <a>Resource</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified API.</p>
         */
        virtual Model::DeleteRestApiOutcome DeleteRestApi(const Model::DeleteRestApiRequest& request) const;

        /**
         * <p>Deletes the specified API.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRestApiOutcomeCallable DeleteRestApiCallable(const Model::DeleteRestApiRequest& request) const;

        /**
         * <p>Deletes the specified API.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRestApiAsync(const Model::DeleteRestApiRequest& request, const DeleteRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <a>Stage</a> resource.</p>
         */
        virtual Model::DeleteStageOutcome DeleteStage(const Model::DeleteStageRequest& request) const;

        /**
         * <p>Deletes a <a>Stage</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStageOutcomeCallable DeleteStageCallable(const Model::DeleteStageRequest& request) const;

        /**
         * <p>Deletes a <a>Stage</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStageAsync(const Model::DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a usage plan of a given plan Id.</p>
         */
        virtual Model::DeleteUsagePlanOutcome DeleteUsagePlan(const Model::DeleteUsagePlanRequest& request) const;

        /**
         * <p>Deletes a usage plan of a given plan Id.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUsagePlanOutcomeCallable DeleteUsagePlanCallable(const Model::DeleteUsagePlanRequest& request) const;

        /**
         * <p>Deletes a usage plan of a given plan Id.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUsagePlanAsync(const Model::DeleteUsagePlanRequest& request, const DeleteUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a usage plan key and remove the underlying API key from the
         * associated usage plan.</p>
         */
        virtual Model::DeleteUsagePlanKeyOutcome DeleteUsagePlanKey(const Model::DeleteUsagePlanKeyRequest& request) const;

        /**
         * <p>Deletes a usage plan key and remove the underlying API key from the
         * associated usage plan.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUsagePlanKeyOutcomeCallable DeleteUsagePlanKeyCallable(const Model::DeleteUsagePlanKeyRequest& request) const;

        /**
         * <p>Deletes a usage plan key and remove the underlying API key from the
         * associated usage plan.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUsagePlanKeyAsync(const Model::DeleteUsagePlanKeyRequest& request, const DeleteUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Flushes all authorizer cache entries on a stage.</p>
         */
        virtual Model::FlushStageAuthorizersCacheOutcome FlushStageAuthorizersCache(const Model::FlushStageAuthorizersCacheRequest& request) const;

        /**
         * <p>Flushes all authorizer cache entries on a stage.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FlushStageAuthorizersCacheOutcomeCallable FlushStageAuthorizersCacheCallable(const Model::FlushStageAuthorizersCacheRequest& request) const;

        /**
         * <p>Flushes all authorizer cache entries on a stage.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FlushStageAuthorizersCacheAsync(const Model::FlushStageAuthorizersCacheRequest& request, const FlushStageAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Flushes a stage's cache.</p>
         */
        virtual Model::FlushStageCacheOutcome FlushStageCache(const Model::FlushStageCacheRequest& request) const;

        /**
         * <p>Flushes a stage's cache.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FlushStageCacheOutcomeCallable FlushStageCacheCallable(const Model::FlushStageCacheRequest& request) const;

        /**
         * <p>Flushes a stage's cache.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FlushStageCacheAsync(const Model::FlushStageCacheRequest& request, const FlushStageCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a <a>ClientCertificate</a> resource.</p>
         */
        virtual Model::GenerateClientCertificateOutcome GenerateClientCertificate(const Model::GenerateClientCertificateRequest& request) const;

        /**
         * <p>Generates a <a>ClientCertificate</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateClientCertificateOutcomeCallable GenerateClientCertificateCallable(const Model::GenerateClientCertificateRequest& request) const;

        /**
         * <p>Generates a <a>ClientCertificate</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateClientCertificateAsync(const Model::GenerateClientCertificateRequest& request, const GenerateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the current <a>Account</a> resource.</p>
         */
        virtual Model::GetAccountOutcome GetAccount(const Model::GetAccountRequest& request) const;

        /**
         * <p>Gets information about the current <a>Account</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountOutcomeCallable GetAccountCallable(const Model::GetAccountRequest& request) const;

        /**
         * <p>Gets information about the current <a>Account</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAsync(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the current <a>ApiKey</a> resource.</p>
         */
        virtual Model::GetApiKeyOutcome GetApiKey(const Model::GetApiKeyRequest& request) const;

        /**
         * <p>Gets information about the current <a>ApiKey</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApiKeyOutcomeCallable GetApiKeyCallable(const Model::GetApiKeyRequest& request) const;

        /**
         * <p>Gets information about the current <a>ApiKey</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApiKeyAsync(const Model::GetApiKeyRequest& request, const GetApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the current <a>ApiKeys</a> resource.</p>
         */
        virtual Model::GetApiKeysOutcome GetApiKeys(const Model::GetApiKeysRequest& request) const;

        /**
         * <p>Gets information about the current <a>ApiKeys</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApiKeysOutcomeCallable GetApiKeysCallable(const Model::GetApiKeysRequest& request) const;

        /**
         * <p>Gets information about the current <a>ApiKeys</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApiKeysAsync(const Model::GetApiKeysRequest& request, const GetApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an existing <a>Authorizer</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/get-authorizer.html">AWS
         * CLI</a></div>
         */
        virtual Model::GetAuthorizerOutcome GetAuthorizer(const Model::GetAuthorizerRequest& request) const;

        /**
         * <p>Describe an existing <a>Authorizer</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/get-authorizer.html">AWS
         * CLI</a></div>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizerOutcomeCallable GetAuthorizerCallable(const Model::GetAuthorizerRequest& request) const;

        /**
         * <p>Describe an existing <a>Authorizer</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/get-authorizer.html">AWS
         * CLI</a></div>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizerAsync(const Model::GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an existing <a>Authorizers</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/get-authorizers.html">AWS
         * CLI</a></div>
         */
        virtual Model::GetAuthorizersOutcome GetAuthorizers(const Model::GetAuthorizersRequest& request) const;

        /**
         * <p>Describe an existing <a>Authorizers</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/get-authorizers.html">AWS
         * CLI</a></div>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizersOutcomeCallable GetAuthorizersCallable(const Model::GetAuthorizersRequest& request) const;

        /**
         * <p>Describe an existing <a>Authorizers</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/get-authorizers.html">AWS
         * CLI</a></div>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizersAsync(const Model::GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a <a>BasePathMapping</a> resource.</p>
         */
        virtual Model::GetBasePathMappingOutcome GetBasePathMapping(const Model::GetBasePathMappingRequest& request) const;

        /**
         * <p>Describe a <a>BasePathMapping</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBasePathMappingOutcomeCallable GetBasePathMappingCallable(const Model::GetBasePathMappingRequest& request) const;

        /**
         * <p>Describe a <a>BasePathMapping</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBasePathMappingAsync(const Model::GetBasePathMappingRequest& request, const GetBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a collection of <a>BasePathMapping</a> resources.</p>
         */
        virtual Model::GetBasePathMappingsOutcome GetBasePathMappings(const Model::GetBasePathMappingsRequest& request) const;

        /**
         * <p>Represents a collection of <a>BasePathMapping</a> resources.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBasePathMappingsOutcomeCallable GetBasePathMappingsCallable(const Model::GetBasePathMappingsRequest& request) const;

        /**
         * <p>Represents a collection of <a>BasePathMapping</a> resources.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBasePathMappingsAsync(const Model::GetBasePathMappingsRequest& request, const GetBasePathMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the current <a>ClientCertificate</a> resource.</p>
         */
        virtual Model::GetClientCertificateOutcome GetClientCertificate(const Model::GetClientCertificateRequest& request) const;

        /**
         * <p>Gets information about the current <a>ClientCertificate</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClientCertificateOutcomeCallable GetClientCertificateCallable(const Model::GetClientCertificateRequest& request) const;

        /**
         * <p>Gets information about the current <a>ClientCertificate</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClientCertificateAsync(const Model::GetClientCertificateRequest& request, const GetClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a collection of <a>ClientCertificate</a> resources.</p>
         */
        virtual Model::GetClientCertificatesOutcome GetClientCertificates(const Model::GetClientCertificatesRequest& request) const;

        /**
         * <p>Gets a collection of <a>ClientCertificate</a> resources.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClientCertificatesOutcomeCallable GetClientCertificatesCallable(const Model::GetClientCertificatesRequest& request) const;

        /**
         * <p>Gets a collection of <a>ClientCertificate</a> resources.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClientCertificatesAsync(const Model::GetClientCertificatesRequest& request, const GetClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a <a>Deployment</a> resource.</p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets information about a <a>Deployment</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets information about a <a>Deployment</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a <a>Deployments</a> collection.</p>
         */
        virtual Model::GetDeploymentsOutcome GetDeployments(const Model::GetDeploymentsRequest& request) const;

        /**
         * <p>Gets information about a <a>Deployments</a> collection.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentsOutcomeCallable GetDeploymentsCallable(const Model::GetDeploymentsRequest& request) const;

        /**
         * <p>Gets information about a <a>Deployments</a> collection.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentsAsync(const Model::GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a domain name that is contained in a simpler, more intuitive URL
         * that can be called.</p>
         */
        virtual Model::GetDomainNameOutcome GetDomainName(const Model::GetDomainNameRequest& request) const;

        /**
         * <p>Represents a domain name that is contained in a simpler, more intuitive URL
         * that can be called.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainNameOutcomeCallable GetDomainNameCallable(const Model::GetDomainNameRequest& request) const;

        /**
         * <p>Represents a domain name that is contained in a simpler, more intuitive URL
         * that can be called.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainNameAsync(const Model::GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a collection of <a>DomainName</a> resources.</p>
         */
        virtual Model::GetDomainNamesOutcome GetDomainNames(const Model::GetDomainNamesRequest& request) const;

        /**
         * <p>Represents a collection of <a>DomainName</a> resources.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainNamesOutcomeCallable GetDomainNamesCallable(const Model::GetDomainNamesRequest& request) const;

        /**
         * <p>Represents a collection of <a>DomainName</a> resources.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainNamesAsync(const Model::GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports a deployed version of a <a>RestApi</a> in a specified format.</p>
         */
        virtual Model::GetExportOutcome GetExport(const Model::GetExportRequest& request) const;

        /**
         * <p>Exports a deployed version of a <a>RestApi</a> in a specified format.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportOutcomeCallable GetExportCallable(const Model::GetExportRequest& request) const;

        /**
         * <p>Exports a deployed version of a <a>RestApi</a> in a specified format.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportAsync(const Model::GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a get integration.</p>
         */
        virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

        /**
         * <p>Represents a get integration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const Model::GetIntegrationRequest& request) const;

        /**
         * <p>Represents a get integration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntegrationAsync(const Model::GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a get integration response.</p>
         */
        virtual Model::GetIntegrationResponseOutcome GetIntegrationResponse(const Model::GetIntegrationResponseRequest& request) const;

        /**
         * <p>Represents a get integration response.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntegrationResponseOutcomeCallable GetIntegrationResponseCallable(const Model::GetIntegrationResponseRequest& request) const;

        /**
         * <p>Represents a get integration response.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntegrationResponseAsync(const Model::GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an existing <a>Method</a> resource.</p>
         */
        virtual Model::GetMethodOutcome GetMethod(const Model::GetMethodRequest& request) const;

        /**
         * <p>Describe an existing <a>Method</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMethodOutcomeCallable GetMethodCallable(const Model::GetMethodRequest& request) const;

        /**
         * <p>Describe an existing <a>Method</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMethodAsync(const Model::GetMethodRequest& request, const GetMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a <a>MethodResponse</a> resource.</p>
         */
        virtual Model::GetMethodResponseOutcome GetMethodResponse(const Model::GetMethodResponseRequest& request) const;

        /**
         * <p>Describes a <a>MethodResponse</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMethodResponseOutcomeCallable GetMethodResponseCallable(const Model::GetMethodResponseRequest& request) const;

        /**
         * <p>Describes a <a>MethodResponse</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMethodResponseAsync(const Model::GetMethodResponseRequest& request, const GetMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing model defined for a <a>RestApi</a> resource.</p>
         */
        virtual Model::GetModelOutcome GetModel(const Model::GetModelRequest& request) const;

        /**
         * <p>Describes an existing model defined for a <a>RestApi</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelOutcomeCallable GetModelCallable(const Model::GetModelRequest& request) const;

        /**
         * <p>Describes an existing model defined for a <a>RestApi</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelAsync(const Model::GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a sample mapping template that can be used to transform a payload
         * into the structure of a model.</p>
         */
        virtual Model::GetModelTemplateOutcome GetModelTemplate(const Model::GetModelTemplateRequest& request) const;

        /**
         * <p>Generates a sample mapping template that can be used to transform a payload
         * into the structure of a model.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelTemplateOutcomeCallable GetModelTemplateCallable(const Model::GetModelTemplateRequest& request) const;

        /**
         * <p>Generates a sample mapping template that can be used to transform a payload
         * into the structure of a model.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelTemplateAsync(const Model::GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes existing <a>Models</a> defined for a <a>RestApi</a> resource.</p>
         */
        virtual Model::GetModelsOutcome GetModels(const Model::GetModelsRequest& request) const;

        /**
         * <p>Describes existing <a>Models</a> defined for a <a>RestApi</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelsOutcomeCallable GetModelsCallable(const Model::GetModelsRequest& request) const;

        /**
         * <p>Describes existing <a>Models</a> defined for a <a>RestApi</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelsAsync(const Model::GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about a resource.</p>
         */
        virtual Model::GetResourceOutcome GetResource(const Model::GetResourceRequest& request) const;

        /**
         * <p>Lists information about a resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceOutcomeCallable GetResourceCallable(const Model::GetResourceRequest& request) const;

        /**
         * <p>Lists information about a resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceAsync(const Model::GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about a collection of <a>Resource</a> resources.</p>
         */
        virtual Model::GetResourcesOutcome GetResources(const Model::GetResourcesRequest& request) const;

        /**
         * <p>Lists information about a collection of <a>Resource</a> resources.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcesOutcomeCallable GetResourcesCallable(const Model::GetResourcesRequest& request) const;

        /**
         * <p>Lists information about a collection of <a>Resource</a> resources.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcesAsync(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the <a>RestApi</a> resource in the collection.</p>
         */
        virtual Model::GetRestApiOutcome GetRestApi(const Model::GetRestApiRequest& request) const;

        /**
         * <p>Lists the <a>RestApi</a> resource in the collection.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRestApiOutcomeCallable GetRestApiCallable(const Model::GetRestApiRequest& request) const;

        /**
         * <p>Lists the <a>RestApi</a> resource in the collection.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRestApiAsync(const Model::GetRestApiRequest& request, const GetRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the <a>RestApis</a> resources for your collection.</p>
         */
        virtual Model::GetRestApisOutcome GetRestApis(const Model::GetRestApisRequest& request) const;

        /**
         * <p>Lists the <a>RestApis</a> resources for your collection.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRestApisOutcomeCallable GetRestApisCallable(const Model::GetRestApisRequest& request) const;

        /**
         * <p>Lists the <a>RestApis</a> resources for your collection.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRestApisAsync(const Model::GetRestApisRequest& request, const GetRestApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a client SDK for a <a>RestApi</a> and <a>Stage</a>.</p>
         */
        virtual Model::GetSdkOutcome GetSdk(const Model::GetSdkRequest& request) const;

        /**
         * <p>Generates a client SDK for a <a>RestApi</a> and <a>Stage</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSdkOutcomeCallable GetSdkCallable(const Model::GetSdkRequest& request) const;

        /**
         * <p>Generates a client SDK for a <a>RestApi</a> and <a>Stage</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSdkAsync(const Model::GetSdkRequest& request, const GetSdkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a <a>Stage</a> resource.</p>
         */
        virtual Model::GetStageOutcome GetStage(const Model::GetStageRequest& request) const;

        /**
         * <p>Gets information about a <a>Stage</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStageOutcomeCallable GetStageCallable(const Model::GetStageRequest& request) const;

        /**
         * <p>Gets information about a <a>Stage</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStageAsync(const Model::GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more <a>Stage</a> resources.</p>
         */
        virtual Model::GetStagesOutcome GetStages(const Model::GetStagesRequest& request) const;

        /**
         * <p>Gets information about one or more <a>Stage</a> resources.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStagesOutcomeCallable GetStagesCallable(const Model::GetStagesRequest& request) const;

        /**
         * <p>Gets information about one or more <a>Stage</a> resources.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStagesAsync(const Model::GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the usage data of a usage plan in a specified time interval.</p>
         */
        virtual Model::GetUsageOutcome GetUsage(const Model::GetUsageRequest& request) const;

        /**
         * <p>Gets the usage data of a usage plan in a specified time interval.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageOutcomeCallable GetUsageCallable(const Model::GetUsageRequest& request) const;

        /**
         * <p>Gets the usage data of a usage plan in a specified time interval.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageAsync(const Model::GetUsageRequest& request, const GetUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a usage plan of a given plan identifier.</p>
         */
        virtual Model::GetUsagePlanOutcome GetUsagePlan(const Model::GetUsagePlanRequest& request) const;

        /**
         * <p>Gets a usage plan of a given plan identifier.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsagePlanOutcomeCallable GetUsagePlanCallable(const Model::GetUsagePlanRequest& request) const;

        /**
         * <p>Gets a usage plan of a given plan identifier.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsagePlanAsync(const Model::GetUsagePlanRequest& request, const GetUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a usage plan key of a given key identifier.</p>
         */
        virtual Model::GetUsagePlanKeyOutcome GetUsagePlanKey(const Model::GetUsagePlanKeyRequest& request) const;

        /**
         * <p>Gets a usage plan key of a given key identifier.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsagePlanKeyOutcomeCallable GetUsagePlanKeyCallable(const Model::GetUsagePlanKeyRequest& request) const;

        /**
         * <p>Gets a usage plan key of a given key identifier.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsagePlanKeyAsync(const Model::GetUsagePlanKeyRequest& request, const GetUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all the usage plan keys representing the API keys added to a specified
         * usage plan.</p>
         */
        virtual Model::GetUsagePlanKeysOutcome GetUsagePlanKeys(const Model::GetUsagePlanKeysRequest& request) const;

        /**
         * <p>Gets all the usage plan keys representing the API keys added to a specified
         * usage plan.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsagePlanKeysOutcomeCallable GetUsagePlanKeysCallable(const Model::GetUsagePlanKeysRequest& request) const;

        /**
         * <p>Gets all the usage plan keys representing the API keys added to a specified
         * usage plan.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsagePlanKeysAsync(const Model::GetUsagePlanKeysRequest& request, const GetUsagePlanKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all the usage plans of the caller's account.</p>
         */
        virtual Model::GetUsagePlansOutcome GetUsagePlans(const Model::GetUsagePlansRequest& request) const;

        /**
         * <p>Gets all the usage plans of the caller's account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsagePlansOutcomeCallable GetUsagePlansCallable(const Model::GetUsagePlansRequest& request) const;

        /**
         * <p>Gets all the usage plans of the caller's account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsagePlansAsync(const Model::GetUsagePlansRequest& request, const GetUsagePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Import API keys from an external source, such as a CSV-formatted file.</p>
         */
        virtual Model::ImportApiKeysOutcome ImportApiKeys(const Model::ImportApiKeysRequest& request) const;

        /**
         * <p>Import API keys from an external source, such as a CSV-formatted file.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportApiKeysOutcomeCallable ImportApiKeysCallable(const Model::ImportApiKeysRequest& request) const;

        /**
         * <p>Import API keys from an external source, such as a CSV-formatted file.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportApiKeysAsync(const Model::ImportApiKeysRequest& request, const ImportApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A feature of the Amazon API Gateway control service for creating a new API
         * from an external API definition file.</p>
         */
        virtual Model::ImportRestApiOutcome ImportRestApi(const Model::ImportRestApiRequest& request) const;

        /**
         * <p>A feature of the Amazon API Gateway control service for creating a new API
         * from an external API definition file.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportRestApiOutcomeCallable ImportRestApiCallable(const Model::ImportRestApiRequest& request) const;

        /**
         * <p>A feature of the Amazon API Gateway control service for creating a new API
         * from an external API definition file.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportRestApiAsync(const Model::ImportRestApiRequest& request, const ImportRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a put integration.</p>
         */
        virtual Model::PutIntegrationOutcome PutIntegration(const Model::PutIntegrationRequest& request) const;

        /**
         * <p>Represents a put integration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutIntegrationOutcomeCallable PutIntegrationCallable(const Model::PutIntegrationRequest& request) const;

        /**
         * <p>Represents a put integration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutIntegrationAsync(const Model::PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents a put integration.</p>
         */
        virtual Model::PutIntegrationResponseOutcome PutIntegrationResponse(const Model::PutIntegrationResponseRequest& request) const;

        /**
         * <p>Represents a put integration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutIntegrationResponseOutcomeCallable PutIntegrationResponseCallable(const Model::PutIntegrationResponseRequest& request) const;

        /**
         * <p>Represents a put integration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutIntegrationResponseAsync(const Model::PutIntegrationResponseRequest& request, const PutIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add a method to an existing <a>Resource</a> resource.</p>
         */
        virtual Model::PutMethodOutcome PutMethod(const Model::PutMethodRequest& request) const;

        /**
         * <p>Add a method to an existing <a>Resource</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMethodOutcomeCallable PutMethodCallable(const Model::PutMethodRequest& request) const;

        /**
         * <p>Add a method to an existing <a>Resource</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMethodAsync(const Model::PutMethodRequest& request, const PutMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a <a>MethodResponse</a> to an existing <a>Method</a> resource.</p>
         */
        virtual Model::PutMethodResponseOutcome PutMethodResponse(const Model::PutMethodResponseRequest& request) const;

        /**
         * <p>Adds a <a>MethodResponse</a> to an existing <a>Method</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMethodResponseOutcomeCallable PutMethodResponseCallable(const Model::PutMethodResponseRequest& request) const;

        /**
         * <p>Adds a <a>MethodResponse</a> to an existing <a>Method</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMethodResponseAsync(const Model::PutMethodResponseRequest& request, const PutMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A feature of the Amazon API Gateway control service for updating an existing
         * API with an input of external API definitions. The update can take the form of
         * merging the supplied definition into the existing API or overwriting the
         * existing API.</p>
         */
        virtual Model::PutRestApiOutcome PutRestApi(const Model::PutRestApiRequest& request) const;

        /**
         * <p>A feature of the Amazon API Gateway control service for updating an existing
         * API with an input of external API definitions. The update can take the form of
         * merging the supplied definition into the existing API or overwriting the
         * existing API.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRestApiOutcomeCallable PutRestApiCallable(const Model::PutRestApiRequest& request) const;

        /**
         * <p>A feature of the Amazon API Gateway control service for updating an existing
         * API with an input of external API definitions. The update can take the form of
         * merging the supplied definition into the existing API or overwriting the
         * existing API.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRestApiAsync(const Model::PutRestApiRequest& request, const PutRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Simulate the execution of an <a>Authorizer</a> in your <a>RestApi</a> with
         * headers, parameters, and an incoming request body.</p> <div class="seeAlso"> <a
         * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/use-custom-authorizer.html">Enable
         * custom authorizers</a> </div>
         */
        virtual Model::TestInvokeAuthorizerOutcome TestInvokeAuthorizer(const Model::TestInvokeAuthorizerRequest& request) const;

        /**
         * <p>Simulate the execution of an <a>Authorizer</a> in your <a>RestApi</a> with
         * headers, parameters, and an incoming request body.</p> <div class="seeAlso"> <a
         * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/use-custom-authorizer.html">Enable
         * custom authorizers</a> </div>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestInvokeAuthorizerOutcomeCallable TestInvokeAuthorizerCallable(const Model::TestInvokeAuthorizerRequest& request) const;

        /**
         * <p>Simulate the execution of an <a>Authorizer</a> in your <a>RestApi</a> with
         * headers, parameters, and an incoming request body.</p> <div class="seeAlso"> <a
         * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/use-custom-authorizer.html">Enable
         * custom authorizers</a> </div>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestInvokeAuthorizerAsync(const Model::TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Simulate the execution of a <a>Method</a> in your <a>RestApi</a> with
         * headers, parameters, and an incoming request body.</p>
         */
        virtual Model::TestInvokeMethodOutcome TestInvokeMethod(const Model::TestInvokeMethodRequest& request) const;

        /**
         * <p>Simulate the execution of a <a>Method</a> in your <a>RestApi</a> with
         * headers, parameters, and an incoming request body.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestInvokeMethodOutcomeCallable TestInvokeMethodCallable(const Model::TestInvokeMethodRequest& request) const;

        /**
         * <p>Simulate the execution of a <a>Method</a> in your <a>RestApi</a> with
         * headers, parameters, and an incoming request body.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestInvokeMethodAsync(const Model::TestInvokeMethodRequest& request, const TestInvokeMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about the current <a>Account</a> resource.</p>
         */
        virtual Model::UpdateAccountOutcome UpdateAccount(const Model::UpdateAccountRequest& request) const;

        /**
         * <p>Changes information about the current <a>Account</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountOutcomeCallable UpdateAccountCallable(const Model::UpdateAccountRequest& request) const;

        /**
         * <p>Changes information about the current <a>Account</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountAsync(const Model::UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about an <a>ApiKey</a> resource.</p>
         */
        virtual Model::UpdateApiKeyOutcome UpdateApiKey(const Model::UpdateApiKeyRequest& request) const;

        /**
         * <p>Changes information about an <a>ApiKey</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApiKeyOutcomeCallable UpdateApiKeyCallable(const Model::UpdateApiKeyRequest& request) const;

        /**
         * <p>Changes information about an <a>ApiKey</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApiKeyAsync(const Model::UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing <a>Authorizer</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/update-authorizer.html">AWS
         * CLI</a></div>
         */
        virtual Model::UpdateAuthorizerOutcome UpdateAuthorizer(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * <p>Updates an existing <a>Authorizer</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/update-authorizer.html">AWS
         * CLI</a></div>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuthorizerOutcomeCallable UpdateAuthorizerCallable(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * <p>Updates an existing <a>Authorizer</a> resource.</p> <div class="seeAlso"><a
         * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/update-authorizer.html">AWS
         * CLI</a></div>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuthorizerAsync(const Model::UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about the <a>BasePathMapping</a> resource.</p>
         */
        virtual Model::UpdateBasePathMappingOutcome UpdateBasePathMapping(const Model::UpdateBasePathMappingRequest& request) const;

        /**
         * <p>Changes information about the <a>BasePathMapping</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBasePathMappingOutcomeCallable UpdateBasePathMappingCallable(const Model::UpdateBasePathMappingRequest& request) const;

        /**
         * <p>Changes information about the <a>BasePathMapping</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBasePathMappingAsync(const Model::UpdateBasePathMappingRequest& request, const UpdateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about an <a>ClientCertificate</a> resource.</p>
         */
        virtual Model::UpdateClientCertificateOutcome UpdateClientCertificate(const Model::UpdateClientCertificateRequest& request) const;

        /**
         * <p>Changes information about an <a>ClientCertificate</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClientCertificateOutcomeCallable UpdateClientCertificateCallable(const Model::UpdateClientCertificateRequest& request) const;

        /**
         * <p>Changes information about an <a>ClientCertificate</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClientCertificateAsync(const Model::UpdateClientCertificateRequest& request, const UpdateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a <a>Deployment</a> resource.</p>
         */
        virtual Model::UpdateDeploymentOutcome UpdateDeployment(const Model::UpdateDeploymentRequest& request) const;

        /**
         * <p>Changes information about a <a>Deployment</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeploymentOutcomeCallable UpdateDeploymentCallable(const Model::UpdateDeploymentRequest& request) const;

        /**
         * <p>Changes information about a <a>Deployment</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeploymentAsync(const Model::UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about the <a>DomainName</a> resource.</p>
         */
        virtual Model::UpdateDomainNameOutcome UpdateDomainName(const Model::UpdateDomainNameRequest& request) const;

        /**
         * <p>Changes information about the <a>DomainName</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainNameOutcomeCallable UpdateDomainNameCallable(const Model::UpdateDomainNameRequest& request) const;

        /**
         * <p>Changes information about the <a>DomainName</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainNameAsync(const Model::UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents an update integration.</p>
         */
        virtual Model::UpdateIntegrationOutcome UpdateIntegration(const Model::UpdateIntegrationRequest& request) const;

        /**
         * <p>Represents an update integration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIntegrationOutcomeCallable UpdateIntegrationCallable(const Model::UpdateIntegrationRequest& request) const;

        /**
         * <p>Represents an update integration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIntegrationAsync(const Model::UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents an update integration response.</p>
         */
        virtual Model::UpdateIntegrationResponseOutcome UpdateIntegrationResponse(const Model::UpdateIntegrationResponseRequest& request) const;

        /**
         * <p>Represents an update integration response.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIntegrationResponseOutcomeCallable UpdateIntegrationResponseCallable(const Model::UpdateIntegrationResponseRequest& request) const;

        /**
         * <p>Represents an update integration response.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIntegrationResponseAsync(const Model::UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing <a>Method</a> resource.</p>
         */
        virtual Model::UpdateMethodOutcome UpdateMethod(const Model::UpdateMethodRequest& request) const;

        /**
         * <p>Updates an existing <a>Method</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMethodOutcomeCallable UpdateMethodCallable(const Model::UpdateMethodRequest& request) const;

        /**
         * <p>Updates an existing <a>Method</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMethodAsync(const Model::UpdateMethodRequest& request, const UpdateMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing <a>MethodResponse</a> resource.</p>
         */
        virtual Model::UpdateMethodResponseOutcome UpdateMethodResponse(const Model::UpdateMethodResponseRequest& request) const;

        /**
         * <p>Updates an existing <a>MethodResponse</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMethodResponseOutcomeCallable UpdateMethodResponseCallable(const Model::UpdateMethodResponseRequest& request) const;

        /**
         * <p>Updates an existing <a>MethodResponse</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMethodResponseAsync(const Model::UpdateMethodResponseRequest& request, const UpdateMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a model.</p>
         */
        virtual Model::UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest& request) const;

        /**
         * <p>Changes information about a model.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateModelOutcomeCallable UpdateModelCallable(const Model::UpdateModelRequest& request) const;

        /**
         * <p>Changes information about a model.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateModelAsync(const Model::UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a <a>Resource</a> resource.</p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * <p>Changes information about a <a>Resource</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const Model::UpdateResourceRequest& request) const;

        /**
         * <p>Changes information about a <a>Resource</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceAsync(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about the specified API.</p>
         */
        virtual Model::UpdateRestApiOutcome UpdateRestApi(const Model::UpdateRestApiRequest& request) const;

        /**
         * <p>Changes information about the specified API.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRestApiOutcomeCallable UpdateRestApiCallable(const Model::UpdateRestApiRequest& request) const;

        /**
         * <p>Changes information about the specified API.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRestApiAsync(const Model::UpdateRestApiRequest& request, const UpdateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a <a>Stage</a> resource.</p>
         */
        virtual Model::UpdateStageOutcome UpdateStage(const Model::UpdateStageRequest& request) const;

        /**
         * <p>Changes information about a <a>Stage</a> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStageOutcomeCallable UpdateStageCallable(const Model::UpdateStageRequest& request) const;

        /**
         * <p>Changes information about a <a>Stage</a> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStageAsync(const Model::UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants a temporary extension to the reamining quota of a usage plan
         * associated with a specified API key.</p>
         */
        virtual Model::UpdateUsageOutcome UpdateUsage(const Model::UpdateUsageRequest& request) const;

        /**
         * <p>Grants a temporary extension to the reamining quota of a usage plan
         * associated with a specified API key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUsageOutcomeCallable UpdateUsageCallable(const Model::UpdateUsageRequest& request) const;

        /**
         * <p>Grants a temporary extension to the reamining quota of a usage plan
         * associated with a specified API key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUsageAsync(const Model::UpdateUsageRequest& request, const UpdateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a usage plan of a given plan Id.</p>
         */
        virtual Model::UpdateUsagePlanOutcome UpdateUsagePlan(const Model::UpdateUsagePlanRequest& request) const;

        /**
         * <p>Updates a usage plan of a given plan Id.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUsagePlanOutcomeCallable UpdateUsagePlanCallable(const Model::UpdateUsagePlanRequest& request) const;

        /**
         * <p>Updates a usage plan of a given plan Id.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUsagePlanAsync(const Model::UpdateUsagePlanRequest& request, const UpdateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateApiKeyAsyncHelper(const Model::CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAuthorizerAsyncHelper(const Model::CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBasePathMappingAsyncHelper(const Model::CreateBasePathMappingRequest& request, const CreateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainNameAsyncHelper(const Model::CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelAsyncHelper(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceAsyncHelper(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRestApiAsyncHelper(const Model::CreateRestApiRequest& request, const CreateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStageAsyncHelper(const Model::CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUsagePlanAsyncHelper(const Model::CreateUsagePlanRequest& request, const CreateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUsagePlanKeyAsyncHelper(const Model::CreateUsagePlanKeyRequest& request, const CreateUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApiKeyAsyncHelper(const Model::DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAuthorizerAsyncHelper(const Model::DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBasePathMappingAsyncHelper(const Model::DeleteBasePathMappingRequest& request, const DeleteBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClientCertificateAsyncHelper(const Model::DeleteClientCertificateRequest& request, const DeleteClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeploymentAsyncHelper(const Model::DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainNameAsyncHelper(const Model::DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIntegrationAsyncHelper(const Model::DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIntegrationResponseAsyncHelper(const Model::DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMethodAsyncHelper(const Model::DeleteMethodRequest& request, const DeleteMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMethodResponseAsyncHelper(const Model::DeleteMethodResponseRequest& request, const DeleteMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteModelAsyncHelper(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourceAsyncHelper(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRestApiAsyncHelper(const Model::DeleteRestApiRequest& request, const DeleteRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStageAsyncHelper(const Model::DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUsagePlanAsyncHelper(const Model::DeleteUsagePlanRequest& request, const DeleteUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUsagePlanKeyAsyncHelper(const Model::DeleteUsagePlanKeyRequest& request, const DeleteUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FlushStageAuthorizersCacheAsyncHelper(const Model::FlushStageAuthorizersCacheRequest& request, const FlushStageAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FlushStageCacheAsyncHelper(const Model::FlushStageCacheRequest& request, const FlushStageCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateClientCertificateAsyncHelper(const Model::GenerateClientCertificateRequest& request, const GenerateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountAsyncHelper(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApiKeyAsyncHelper(const Model::GetApiKeyRequest& request, const GetApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApiKeysAsyncHelper(const Model::GetApiKeysRequest& request, const GetApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAuthorizerAsyncHelper(const Model::GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAuthorizersAsyncHelper(const Model::GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBasePathMappingAsyncHelper(const Model::GetBasePathMappingRequest& request, const GetBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBasePathMappingsAsyncHelper(const Model::GetBasePathMappingsRequest& request, const GetBasePathMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetClientCertificateAsyncHelper(const Model::GetClientCertificateRequest& request, const GetClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetClientCertificatesAsyncHelper(const Model::GetClientCertificatesRequest& request, const GetClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentAsyncHelper(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentsAsyncHelper(const Model::GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainNameAsyncHelper(const Model::GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainNamesAsyncHelper(const Model::GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExportAsyncHelper(const Model::GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntegrationAsyncHelper(const Model::GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntegrationResponseAsyncHelper(const Model::GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMethodAsyncHelper(const Model::GetMethodRequest& request, const GetMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMethodResponseAsyncHelper(const Model::GetMethodResponseRequest& request, const GetMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetModelAsyncHelper(const Model::GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetModelTemplateAsyncHelper(const Model::GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetModelsAsyncHelper(const Model::GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceAsyncHelper(const Model::GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcesAsyncHelper(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRestApiAsyncHelper(const Model::GetRestApiRequest& request, const GetRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRestApisAsyncHelper(const Model::GetRestApisRequest& request, const GetRestApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSdkAsyncHelper(const Model::GetSdkRequest& request, const GetSdkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStageAsyncHelper(const Model::GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStagesAsyncHelper(const Model::GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsageAsyncHelper(const Model::GetUsageRequest& request, const GetUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsagePlanAsyncHelper(const Model::GetUsagePlanRequest& request, const GetUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsagePlanKeyAsyncHelper(const Model::GetUsagePlanKeyRequest& request, const GetUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsagePlanKeysAsyncHelper(const Model::GetUsagePlanKeysRequest& request, const GetUsagePlanKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsagePlansAsyncHelper(const Model::GetUsagePlansRequest& request, const GetUsagePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportApiKeysAsyncHelper(const Model::ImportApiKeysRequest& request, const ImportApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportRestApiAsyncHelper(const Model::ImportRestApiRequest& request, const ImportRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutIntegrationAsyncHelper(const Model::PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutIntegrationResponseAsyncHelper(const Model::PutIntegrationResponseRequest& request, const PutIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMethodAsyncHelper(const Model::PutMethodRequest& request, const PutMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMethodResponseAsyncHelper(const Model::PutMethodResponseRequest& request, const PutMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRestApiAsyncHelper(const Model::PutRestApiRequest& request, const PutRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestInvokeAuthorizerAsyncHelper(const Model::TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestInvokeMethodAsyncHelper(const Model::TestInvokeMethodRequest& request, const TestInvokeMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountAsyncHelper(const Model::UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApiKeyAsyncHelper(const Model::UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAuthorizerAsyncHelper(const Model::UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBasePathMappingAsyncHelper(const Model::UpdateBasePathMappingRequest& request, const UpdateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClientCertificateAsyncHelper(const Model::UpdateClientCertificateRequest& request, const UpdateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeploymentAsyncHelper(const Model::UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainNameAsyncHelper(const Model::UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIntegrationAsyncHelper(const Model::UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIntegrationResponseAsyncHelper(const Model::UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMethodAsyncHelper(const Model::UpdateMethodRequest& request, const UpdateMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMethodResponseAsyncHelper(const Model::UpdateMethodResponseRequest& request, const UpdateMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateModelAsyncHelper(const Model::UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceAsyncHelper(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRestApiAsyncHelper(const Model::UpdateRestApiRequest& request, const UpdateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStageAsyncHelper(const Model::UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUsageAsyncHelper(const Model::UpdateUsageRequest& request, const UpdateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUsagePlanAsyncHelper(const Model::UpdateUsagePlanRequest& request, const UpdateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace APIGateway
} // namespace Aws
