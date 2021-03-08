/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/AddLayerVersionPermissionResult.h>
#include <aws/lambda/model/AddPermissionResult.h>
#include <aws/lambda/model/CreateAliasResult.h>
#include <aws/lambda/model/CreateCodeSigningConfigResult.h>
#include <aws/lambda/model/CreateEventSourceMappingResult.h>
#include <aws/lambda/model/CreateFunctionResult.h>
#include <aws/lambda/model/DeleteCodeSigningConfigResult.h>
#include <aws/lambda/model/DeleteEventSourceMappingResult.h>
#include <aws/lambda/model/GetAccountSettingsResult.h>
#include <aws/lambda/model/GetAliasResult.h>
#include <aws/lambda/model/GetCodeSigningConfigResult.h>
#include <aws/lambda/model/GetEventSourceMappingResult.h>
#include <aws/lambda/model/GetFunctionResult.h>
#include <aws/lambda/model/GetFunctionCodeSigningConfigResult.h>
#include <aws/lambda/model/GetFunctionConcurrencyResult.h>
#include <aws/lambda/model/GetFunctionConfigurationResult.h>
#include <aws/lambda/model/GetFunctionEventInvokeConfigResult.h>
#include <aws/lambda/model/GetLayerVersionResult.h>
#include <aws/lambda/model/GetLayerVersionByArnResult.h>
#include <aws/lambda/model/GetLayerVersionPolicyResult.h>
#include <aws/lambda/model/GetPolicyResult.h>
#include <aws/lambda/model/GetProvisionedConcurrencyConfigResult.h>
#include <aws/lambda/model/InvokeResult.h>
#include <aws/lambda/model/ListAliasesResult.h>
#include <aws/lambda/model/ListCodeSigningConfigsResult.h>
#include <aws/lambda/model/ListEventSourceMappingsResult.h>
#include <aws/lambda/model/ListFunctionEventInvokeConfigsResult.h>
#include <aws/lambda/model/ListFunctionsResult.h>
#include <aws/lambda/model/ListFunctionsByCodeSigningConfigResult.h>
#include <aws/lambda/model/ListLayerVersionsResult.h>
#include <aws/lambda/model/ListLayersResult.h>
#include <aws/lambda/model/ListProvisionedConcurrencyConfigsResult.h>
#include <aws/lambda/model/ListTagsResult.h>
#include <aws/lambda/model/ListVersionsByFunctionResult.h>
#include <aws/lambda/model/PublishLayerVersionResult.h>
#include <aws/lambda/model/PublishVersionResult.h>
#include <aws/lambda/model/PutFunctionCodeSigningConfigResult.h>
#include <aws/lambda/model/PutFunctionConcurrencyResult.h>
#include <aws/lambda/model/PutFunctionEventInvokeConfigResult.h>
#include <aws/lambda/model/PutProvisionedConcurrencyConfigResult.h>
#include <aws/lambda/model/UpdateAliasResult.h>
#include <aws/lambda/model/UpdateCodeSigningConfigResult.h>
#include <aws/lambda/model/UpdateEventSourceMappingResult.h>
#include <aws/lambda/model/UpdateFunctionCodeResult.h>
#include <aws/lambda/model/UpdateFunctionConfigurationResult.h>
#include <aws/lambda/model/UpdateFunctionEventInvokeConfigResult.h>
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

namespace Lambda
{

namespace Model
{
        class AddLayerVersionPermissionRequest;
        class AddPermissionRequest;
        class CreateAliasRequest;
        class CreateCodeSigningConfigRequest;
        class CreateEventSourceMappingRequest;
        class CreateFunctionRequest;
        class DeleteAliasRequest;
        class DeleteCodeSigningConfigRequest;
        class DeleteEventSourceMappingRequest;
        class DeleteFunctionRequest;
        class DeleteFunctionCodeSigningConfigRequest;
        class DeleteFunctionConcurrencyRequest;
        class DeleteFunctionEventInvokeConfigRequest;
        class DeleteLayerVersionRequest;
        class DeleteProvisionedConcurrencyConfigRequest;
        class GetAccountSettingsRequest;
        class GetAliasRequest;
        class GetCodeSigningConfigRequest;
        class GetEventSourceMappingRequest;
        class GetFunctionRequest;
        class GetFunctionCodeSigningConfigRequest;
        class GetFunctionConcurrencyRequest;
        class GetFunctionConfigurationRequest;
        class GetFunctionEventInvokeConfigRequest;
        class GetLayerVersionRequest;
        class GetLayerVersionByArnRequest;
        class GetLayerVersionPolicyRequest;
        class GetPolicyRequest;
        class GetProvisionedConcurrencyConfigRequest;
        class InvokeRequest;
        class ListAliasesRequest;
        class ListCodeSigningConfigsRequest;
        class ListEventSourceMappingsRequest;
        class ListFunctionEventInvokeConfigsRequest;
        class ListFunctionsRequest;
        class ListFunctionsByCodeSigningConfigRequest;
        class ListLayerVersionsRequest;
        class ListLayersRequest;
        class ListProvisionedConcurrencyConfigsRequest;
        class ListTagsRequest;
        class ListVersionsByFunctionRequest;
        class PublishLayerVersionRequest;
        class PublishVersionRequest;
        class PutFunctionCodeSigningConfigRequest;
        class PutFunctionConcurrencyRequest;
        class PutFunctionEventInvokeConfigRequest;
        class PutProvisionedConcurrencyConfigRequest;
        class RemoveLayerVersionPermissionRequest;
        class RemovePermissionRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAliasRequest;
        class UpdateCodeSigningConfigRequest;
        class UpdateEventSourceMappingRequest;
        class UpdateFunctionCodeRequest;
        class UpdateFunctionConfigurationRequest;
        class UpdateFunctionEventInvokeConfigRequest;

        typedef Aws::Utils::Outcome<AddLayerVersionPermissionResult, LambdaError> AddLayerVersionPermissionOutcome;
        typedef Aws::Utils::Outcome<AddPermissionResult, LambdaError> AddPermissionOutcome;
        typedef Aws::Utils::Outcome<CreateAliasResult, LambdaError> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateCodeSigningConfigResult, LambdaError> CreateCodeSigningConfigOutcome;
        typedef Aws::Utils::Outcome<CreateEventSourceMappingResult, LambdaError> CreateEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<CreateFunctionResult, LambdaError> CreateFunctionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteCodeSigningConfigResult, LambdaError> DeleteCodeSigningConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteEventSourceMappingResult, LambdaError> DeleteEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> DeleteFunctionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> DeleteFunctionCodeSigningConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> DeleteFunctionConcurrencyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> DeleteFunctionEventInvokeConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> DeleteLayerVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> DeleteProvisionedConcurrencyConfigOutcome;
        typedef Aws::Utils::Outcome<GetAccountSettingsResult, LambdaError> GetAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<GetAliasResult, LambdaError> GetAliasOutcome;
        typedef Aws::Utils::Outcome<GetCodeSigningConfigResult, LambdaError> GetCodeSigningConfigOutcome;
        typedef Aws::Utils::Outcome<GetEventSourceMappingResult, LambdaError> GetEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<GetFunctionResult, LambdaError> GetFunctionOutcome;
        typedef Aws::Utils::Outcome<GetFunctionCodeSigningConfigResult, LambdaError> GetFunctionCodeSigningConfigOutcome;
        typedef Aws::Utils::Outcome<GetFunctionConcurrencyResult, LambdaError> GetFunctionConcurrencyOutcome;
        typedef Aws::Utils::Outcome<GetFunctionConfigurationResult, LambdaError> GetFunctionConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetFunctionEventInvokeConfigResult, LambdaError> GetFunctionEventInvokeConfigOutcome;
        typedef Aws::Utils::Outcome<GetLayerVersionResult, LambdaError> GetLayerVersionOutcome;
        typedef Aws::Utils::Outcome<GetLayerVersionByArnResult, LambdaError> GetLayerVersionByArnOutcome;
        typedef Aws::Utils::Outcome<GetLayerVersionPolicyResult, LambdaError> GetLayerVersionPolicyOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, LambdaError> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<GetProvisionedConcurrencyConfigResult, LambdaError> GetProvisionedConcurrencyConfigOutcome;
        typedef Aws::Utils::Outcome<InvokeResult, LambdaError> InvokeOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, LambdaError> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListCodeSigningConfigsResult, LambdaError> ListCodeSigningConfigsOutcome;
        typedef Aws::Utils::Outcome<ListEventSourceMappingsResult, LambdaError> ListEventSourceMappingsOutcome;
        typedef Aws::Utils::Outcome<ListFunctionEventInvokeConfigsResult, LambdaError> ListFunctionEventInvokeConfigsOutcome;
        typedef Aws::Utils::Outcome<ListFunctionsResult, LambdaError> ListFunctionsOutcome;
        typedef Aws::Utils::Outcome<ListFunctionsByCodeSigningConfigResult, LambdaError> ListFunctionsByCodeSigningConfigOutcome;
        typedef Aws::Utils::Outcome<ListLayerVersionsResult, LambdaError> ListLayerVersionsOutcome;
        typedef Aws::Utils::Outcome<ListLayersResult, LambdaError> ListLayersOutcome;
        typedef Aws::Utils::Outcome<ListProvisionedConcurrencyConfigsResult, LambdaError> ListProvisionedConcurrencyConfigsOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, LambdaError> ListTagsOutcome;
        typedef Aws::Utils::Outcome<ListVersionsByFunctionResult, LambdaError> ListVersionsByFunctionOutcome;
        typedef Aws::Utils::Outcome<PublishLayerVersionResult, LambdaError> PublishLayerVersionOutcome;
        typedef Aws::Utils::Outcome<PublishVersionResult, LambdaError> PublishVersionOutcome;
        typedef Aws::Utils::Outcome<PutFunctionCodeSigningConfigResult, LambdaError> PutFunctionCodeSigningConfigOutcome;
        typedef Aws::Utils::Outcome<PutFunctionConcurrencyResult, LambdaError> PutFunctionConcurrencyOutcome;
        typedef Aws::Utils::Outcome<PutFunctionEventInvokeConfigResult, LambdaError> PutFunctionEventInvokeConfigOutcome;
        typedef Aws::Utils::Outcome<PutProvisionedConcurrencyConfigResult, LambdaError> PutProvisionedConcurrencyConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> RemoveLayerVersionPermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LambdaError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAliasResult, LambdaError> UpdateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateCodeSigningConfigResult, LambdaError> UpdateCodeSigningConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateEventSourceMappingResult, LambdaError> UpdateEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionCodeResult, LambdaError> UpdateFunctionCodeOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionConfigurationResult, LambdaError> UpdateFunctionConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionEventInvokeConfigResult, LambdaError> UpdateFunctionEventInvokeConfigOutcome;

        typedef std::future<AddLayerVersionPermissionOutcome> AddLayerVersionPermissionOutcomeCallable;
        typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateCodeSigningConfigOutcome> CreateCodeSigningConfigOutcomeCallable;
        typedef std::future<CreateEventSourceMappingOutcome> CreateEventSourceMappingOutcomeCallable;
        typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteCodeSigningConfigOutcome> DeleteCodeSigningConfigOutcomeCallable;
        typedef std::future<DeleteEventSourceMappingOutcome> DeleteEventSourceMappingOutcomeCallable;
        typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
        typedef std::future<DeleteFunctionCodeSigningConfigOutcome> DeleteFunctionCodeSigningConfigOutcomeCallable;
        typedef std::future<DeleteFunctionConcurrencyOutcome> DeleteFunctionConcurrencyOutcomeCallable;
        typedef std::future<DeleteFunctionEventInvokeConfigOutcome> DeleteFunctionEventInvokeConfigOutcomeCallable;
        typedef std::future<DeleteLayerVersionOutcome> DeleteLayerVersionOutcomeCallable;
        typedef std::future<DeleteProvisionedConcurrencyConfigOutcome> DeleteProvisionedConcurrencyConfigOutcomeCallable;
        typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
        typedef std::future<GetAliasOutcome> GetAliasOutcomeCallable;
        typedef std::future<GetCodeSigningConfigOutcome> GetCodeSigningConfigOutcomeCallable;
        typedef std::future<GetEventSourceMappingOutcome> GetEventSourceMappingOutcomeCallable;
        typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
        typedef std::future<GetFunctionCodeSigningConfigOutcome> GetFunctionCodeSigningConfigOutcomeCallable;
        typedef std::future<GetFunctionConcurrencyOutcome> GetFunctionConcurrencyOutcomeCallable;
        typedef std::future<GetFunctionConfigurationOutcome> GetFunctionConfigurationOutcomeCallable;
        typedef std::future<GetFunctionEventInvokeConfigOutcome> GetFunctionEventInvokeConfigOutcomeCallable;
        typedef std::future<GetLayerVersionOutcome> GetLayerVersionOutcomeCallable;
        typedef std::future<GetLayerVersionByArnOutcome> GetLayerVersionByArnOutcomeCallable;
        typedef std::future<GetLayerVersionPolicyOutcome> GetLayerVersionPolicyOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<GetProvisionedConcurrencyConfigOutcome> GetProvisionedConcurrencyConfigOutcomeCallable;
        typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListCodeSigningConfigsOutcome> ListCodeSigningConfigsOutcomeCallable;
        typedef std::future<ListEventSourceMappingsOutcome> ListEventSourceMappingsOutcomeCallable;
        typedef std::future<ListFunctionEventInvokeConfigsOutcome> ListFunctionEventInvokeConfigsOutcomeCallable;
        typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
        typedef std::future<ListFunctionsByCodeSigningConfigOutcome> ListFunctionsByCodeSigningConfigOutcomeCallable;
        typedef std::future<ListLayerVersionsOutcome> ListLayerVersionsOutcomeCallable;
        typedef std::future<ListLayersOutcome> ListLayersOutcomeCallable;
        typedef std::future<ListProvisionedConcurrencyConfigsOutcome> ListProvisionedConcurrencyConfigsOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<ListVersionsByFunctionOutcome> ListVersionsByFunctionOutcomeCallable;
        typedef std::future<PublishLayerVersionOutcome> PublishLayerVersionOutcomeCallable;
        typedef std::future<PublishVersionOutcome> PublishVersionOutcomeCallable;
        typedef std::future<PutFunctionCodeSigningConfigOutcome> PutFunctionCodeSigningConfigOutcomeCallable;
        typedef std::future<PutFunctionConcurrencyOutcome> PutFunctionConcurrencyOutcomeCallable;
        typedef std::future<PutFunctionEventInvokeConfigOutcome> PutFunctionEventInvokeConfigOutcomeCallable;
        typedef std::future<PutProvisionedConcurrencyConfigOutcome> PutProvisionedConcurrencyConfigOutcomeCallable;
        typedef std::future<RemoveLayerVersionPermissionOutcome> RemoveLayerVersionPermissionOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
        typedef std::future<UpdateCodeSigningConfigOutcome> UpdateCodeSigningConfigOutcomeCallable;
        typedef std::future<UpdateEventSourceMappingOutcome> UpdateEventSourceMappingOutcomeCallable;
        typedef std::future<UpdateFunctionCodeOutcome> UpdateFunctionCodeOutcomeCallable;
        typedef std::future<UpdateFunctionConfigurationOutcome> UpdateFunctionConfigurationOutcomeCallable;
        typedef std::future<UpdateFunctionEventInvokeConfigOutcome> UpdateFunctionEventInvokeConfigOutcomeCallable;
} // namespace Model

  class LambdaClient;

    typedef std::function<void(const LambdaClient*, const Model::AddLayerVersionPermissionRequest&, const Model::AddLayerVersionPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddLayerVersionPermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateCodeSigningConfigRequest&, const Model::CreateCodeSigningConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCodeSigningConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateEventSourceMappingRequest&, const Model::CreateEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateFunctionRequest&, const Model::CreateFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteCodeSigningConfigRequest&, const Model::DeleteCodeSigningConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCodeSigningConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteEventSourceMappingRequest&, const Model::DeleteEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteFunctionRequest&, const Model::DeleteFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteFunctionCodeSigningConfigRequest&, const Model::DeleteFunctionCodeSigningConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionCodeSigningConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteFunctionConcurrencyRequest&, const Model::DeleteFunctionConcurrencyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionConcurrencyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteFunctionEventInvokeConfigRequest&, const Model::DeleteFunctionEventInvokeConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionEventInvokeConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteLayerVersionRequest&, const Model::DeleteLayerVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLayerVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteProvisionedConcurrencyConfigRequest&, const Model::DeleteProvisionedConcurrencyConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisionedConcurrencyConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetAliasRequest&, const Model::GetAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetCodeSigningConfigRequest&, const Model::GetCodeSigningConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCodeSigningConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetEventSourceMappingRequest&, const Model::GetEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionRequest&, const Model::GetFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionCodeSigningConfigRequest&, const Model::GetFunctionCodeSigningConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionCodeSigningConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionConcurrencyRequest&, const Model::GetFunctionConcurrencyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionConcurrencyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionConfigurationRequest&, const Model::GetFunctionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionConfigurationResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionEventInvokeConfigRequest&, const Model::GetFunctionEventInvokeConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionEventInvokeConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetLayerVersionRequest&, const Model::GetLayerVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLayerVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetLayerVersionByArnRequest&, const Model::GetLayerVersionByArnOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLayerVersionByArnResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetLayerVersionPolicyRequest&, const Model::GetLayerVersionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLayerVersionPolicyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetProvisionedConcurrencyConfigRequest&, const Model::GetProvisionedConcurrencyConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProvisionedConcurrencyConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::InvokeRequest&, Model::InvokeOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListCodeSigningConfigsRequest&, const Model::ListCodeSigningConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCodeSigningConfigsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListEventSourceMappingsRequest&, const Model::ListEventSourceMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventSourceMappingsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListFunctionEventInvokeConfigsRequest&, const Model::ListFunctionEventInvokeConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionEventInvokeConfigsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListFunctionsRequest&, const Model::ListFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListFunctionsByCodeSigningConfigRequest&, const Model::ListFunctionsByCodeSigningConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionsByCodeSigningConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListLayerVersionsRequest&, const Model::ListLayerVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLayerVersionsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListLayersRequest&, const Model::ListLayersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLayersResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListProvisionedConcurrencyConfigsRequest&, const Model::ListProvisionedConcurrencyConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisionedConcurrencyConfigsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListVersionsByFunctionRequest&, const Model::ListVersionsByFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVersionsByFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PublishLayerVersionRequest&, const Model::PublishLayerVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishLayerVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PublishVersionRequest&, const Model::PublishVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PutFunctionCodeSigningConfigRequest&, const Model::PutFunctionCodeSigningConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFunctionCodeSigningConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PutFunctionConcurrencyRequest&, const Model::PutFunctionConcurrencyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFunctionConcurrencyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PutFunctionEventInvokeConfigRequest&, const Model::PutFunctionEventInvokeConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFunctionEventInvokeConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PutProvisionedConcurrencyConfigRequest&, const Model::PutProvisionedConcurrencyConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProvisionedConcurrencyConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::RemoveLayerVersionPermissionRequest&, const Model::RemoveLayerVersionPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveLayerVersionPermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateCodeSigningConfigRequest&, const Model::UpdateCodeSigningConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCodeSigningConfigResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateEventSourceMappingRequest&, const Model::UpdateEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateFunctionCodeRequest&, const Model::UpdateFunctionCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionCodeResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateFunctionConfigurationRequest&, const Model::UpdateFunctionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionConfigurationResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateFunctionEventInvokeConfigRequest&, const Model::UpdateFunctionEventInvokeConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionEventInvokeConfigResponseReceivedHandler;

  /**
   * <fullname>AWS Lambda</fullname> <p> <b>Overview</b> </p> <p>This is the <i>AWS
   * Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional
   * information. For the service overview, see <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS
   * Lambda</a>, and for information about how the service works, see <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
   * Lambda: How it Works</a> in the <b>AWS Lambda Developer Guide</b>.</p>
   */
  class AWS_LAMBDA_API LambdaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LambdaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LambdaClient();


        /**
         * <p>Adds permissions to the resource-based policy of a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. Use this action to grant layer usage permission to other
         * accounts. You can grant permission to a single account, all AWS accounts, or all
         * accounts in an organization.</p> <p>To revoke permission, call
         * <a>RemoveLayerVersionPermission</a> with the statement ID that you specified
         * when you added it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddLayerVersionPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddLayerVersionPermissionOutcome AddLayerVersionPermission(const Model::AddLayerVersionPermissionRequest& request) const;

        /**
         * <p>Adds permissions to the resource-based policy of a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. Use this action to grant layer usage permission to other
         * accounts. You can grant permission to a single account, all AWS accounts, or all
         * accounts in an organization.</p> <p>To revoke permission, call
         * <a>RemoveLayerVersionPermission</a> with the statement ID that you specified
         * when you added it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddLayerVersionPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddLayerVersionPermissionOutcomeCallable AddLayerVersionPermissionCallable(const Model::AddLayerVersionPermissionRequest& request) const;

        /**
         * <p>Adds permissions to the resource-based policy of a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. Use this action to grant layer usage permission to other
         * accounts. You can grant permission to a single account, all AWS accounts, or all
         * accounts in an organization.</p> <p>To revoke permission, call
         * <a>RemoveLayerVersionPermission</a> with the statement ID that you specified
         * when you added it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddLayerVersionPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddLayerVersionPermissionAsync(const Model::AddLayerVersionPermissionRequest& request, const AddLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants an AWS service or another account permission to use a function. You
         * can apply the policy at the function level, or specify a qualifier to restrict
         * access to a single version or alias. If you use a qualifier, the invoker must
         * use the full Amazon Resource Name (ARN) of that version or alias to invoke the
         * function.</p> <p>To grant permission to another account, specify the account ID
         * as the <code>Principal</code>. For AWS services, the principal is a domain-style
         * identifier defined by the service, like <code>s3.amazonaws.com</code> or
         * <code>sns.amazonaws.com</code>. For AWS services, you can also specify the ARN
         * of the associated resource as the <code>SourceArn</code>. If you grant
         * permission to a service principal without specifying the source, other accounts
         * could potentially configure resources in their account to invoke your Lambda
         * function.</p> <p>This action adds a statement to a resource-based permissions
         * policy for the function. For more information about function policies, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">Lambda
         * Function Policies</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Grants an AWS service or another account permission to use a function. You
         * can apply the policy at the function level, or specify a qualifier to restrict
         * access to a single version or alias. If you use a qualifier, the invoker must
         * use the full Amazon Resource Name (ARN) of that version or alias to invoke the
         * function.</p> <p>To grant permission to another account, specify the account ID
         * as the <code>Principal</code>. For AWS services, the principal is a domain-style
         * identifier defined by the service, like <code>s3.amazonaws.com</code> or
         * <code>sns.amazonaws.com</code>. For AWS services, you can also specify the ARN
         * of the associated resource as the <code>SourceArn</code>. If you grant
         * permission to a service principal without specifying the source, other accounts
         * could potentially configure resources in their account to invoke your Lambda
         * function.</p> <p>This action adds a statement to a resource-based permissions
         * policy for the function. For more information about function policies, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">Lambda
         * Function Policies</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Grants an AWS service or another account permission to use a function. You
         * can apply the policy at the function level, or specify a qualifier to restrict
         * access to a single version or alias. If you use a qualifier, the invoker must
         * use the full Amazon Resource Name (ARN) of that version or alias to invoke the
         * function.</p> <p>To grant permission to another account, specify the account ID
         * as the <code>Principal</code>. For AWS services, the principal is a domain-style
         * identifier defined by the service, like <code>s3.amazonaws.com</code> or
         * <code>sns.amazonaws.com</code>. For AWS services, you can also specify the ARN
         * of the associated resource as the <code>SourceArn</code>. If you grant
         * permission to a service principal without specifying the source, other accounts
         * could potentially configure resources in their account to invoke your Lambda
         * function.</p> <p>This action adds a statement to a resource-based permissions
         * policy for the function. For more information about function policies, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">Lambda
         * Function Policies</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>
         * for a Lambda function version. Use aliases to provide clients with a function
         * identifier that you can update to invoke a different version.</p> <p>You can
         * also map an alias to split invocation requests between two versions. Use the
         * <code>RoutingConfig</code> parameter to specify a second version and the
         * percentage of invocation requests that it receives.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>
         * for a Lambda function version. Use aliases to provide clients with a function
         * identifier that you can update to invoke a different version.</p> <p>You can
         * also map an alias to split invocation requests between two versions. Use the
         * <code>RoutingConfig</code> parameter to specify a second version and the
         * percentage of invocation requests that it receives.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>
         * for a Lambda function version. Use aliases to provide clients with a function
         * identifier that you can update to invoke a different version.</p> <p>You can
         * also map an alias to split invocation requests between two versions. Use the
         * <code>RoutingConfig</code> parameter to specify a second version and the
         * percentage of invocation requests that it receives.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a code signing configuration. A <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-trustedcode.html">code
         * signing configuration</a> defines a list of allowed signing profiles and defines
         * the code-signing validation policy (action to be taken if deployment validation
         * checks fail). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCodeSigningConfigOutcome CreateCodeSigningConfig(const Model::CreateCodeSigningConfigRequest& request) const;

        /**
         * <p>Creates a code signing configuration. A <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-trustedcode.html">code
         * signing configuration</a> defines a list of allowed signing profiles and defines
         * the code-signing validation policy (action to be taken if deployment validation
         * checks fail). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCodeSigningConfigOutcomeCallable CreateCodeSigningConfigCallable(const Model::CreateCodeSigningConfigRequest& request) const;

        /**
         * <p>Creates a code signing configuration. A <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-trustedcode.html">code
         * signing configuration</a> defines a list of allowed signing profiles and defines
         * the code-signing validation policy (action to be taken if deployment validation
         * checks fail). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCodeSigningConfigAsync(const Model::CreateCodeSigningConfigRequest& request, const CreateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a mapping between an event source and an AWS Lambda function. Lambda
         * reads items from the event source and triggers the function.</p> <p>For details
         * about each event source type, see the following topics.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS
         * Lambda with Amazon DynamoDB</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS
         * Lambda with Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS
         * Lambda with Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html">Using AWS
         * Lambda with Amazon MQ</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html">Using AWS
         * Lambda with Amazon MSK</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/kafka-smaa.html">Using AWS
         * Lambda with Self-Managed Apache Kafka</a> </p> </li> </ul> <p>The following
         * error handling options are only available for stream sources (DynamoDB and
         * Kinesis):</p> <ul> <li> <p> <code>BisectBatchOnFunctionError</code> - If the
         * function returns an error, split the batch in two and retry.</p> </li> <li> <p>
         * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue
         * or Amazon SNS topic.</p> </li> <li> <p> <code>MaximumRecordAgeInSeconds</code> -
         * Discard records older than the specified age. The default value is infinite
         * (-1). When set to infinite (-1), failed records are retried until the record
         * expires</p> </li> <li> <p> <code>MaximumRetryAttempts</code> - Discard records
         * after the specified number of retries. The default value is infinite (-1). When
         * set to infinite (-1), failed records are retried until the record expires.</p>
         * </li> <li> <p> <code>ParallelizationFactor</code> - Process multiple batches
         * from each shard concurrently.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSourceMappingOutcome CreateEventSourceMapping(const Model::CreateEventSourceMappingRequest& request) const;

        /**
         * <p>Creates a mapping between an event source and an AWS Lambda function. Lambda
         * reads items from the event source and triggers the function.</p> <p>For details
         * about each event source type, see the following topics.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS
         * Lambda with Amazon DynamoDB</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS
         * Lambda with Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS
         * Lambda with Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html">Using AWS
         * Lambda with Amazon MQ</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html">Using AWS
         * Lambda with Amazon MSK</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/kafka-smaa.html">Using AWS
         * Lambda with Self-Managed Apache Kafka</a> </p> </li> </ul> <p>The following
         * error handling options are only available for stream sources (DynamoDB and
         * Kinesis):</p> <ul> <li> <p> <code>BisectBatchOnFunctionError</code> - If the
         * function returns an error, split the batch in two and retry.</p> </li> <li> <p>
         * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue
         * or Amazon SNS topic.</p> </li> <li> <p> <code>MaximumRecordAgeInSeconds</code> -
         * Discard records older than the specified age. The default value is infinite
         * (-1). When set to infinite (-1), failed records are retried until the record
         * expires</p> </li> <li> <p> <code>MaximumRetryAttempts</code> - Discard records
         * after the specified number of retries. The default value is infinite (-1). When
         * set to infinite (-1), failed records are retried until the record expires.</p>
         * </li> <li> <p> <code>ParallelizationFactor</code> - Process multiple batches
         * from each shard concurrently.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSourceMappingOutcomeCallable CreateEventSourceMappingCallable(const Model::CreateEventSourceMappingRequest& request) const;

        /**
         * <p>Creates a mapping between an event source and an AWS Lambda function. Lambda
         * reads items from the event source and triggers the function.</p> <p>For details
         * about each event source type, see the following topics.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS
         * Lambda with Amazon DynamoDB</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS
         * Lambda with Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS
         * Lambda with Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html">Using AWS
         * Lambda with Amazon MQ</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html">Using AWS
         * Lambda with Amazon MSK</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/kafka-smaa.html">Using AWS
         * Lambda with Self-Managed Apache Kafka</a> </p> </li> </ul> <p>The following
         * error handling options are only available for stream sources (DynamoDB and
         * Kinesis):</p> <ul> <li> <p> <code>BisectBatchOnFunctionError</code> - If the
         * function returns an error, split the batch in two and retry.</p> </li> <li> <p>
         * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue
         * or Amazon SNS topic.</p> </li> <li> <p> <code>MaximumRecordAgeInSeconds</code> -
         * Discard records older than the specified age. The default value is infinite
         * (-1). When set to infinite (-1), failed records are retried until the record
         * expires</p> </li> <li> <p> <code>MaximumRetryAttempts</code> - Discard records
         * after the specified number of retries. The default value is infinite (-1). When
         * set to infinite (-1), failed records are retried until the record expires.</p>
         * </li> <li> <p> <code>ParallelizationFactor</code> - Process multiple batches
         * from each shard concurrently.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSourceMappingAsync(const Model::CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Lambda function. To create a function, you need a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-package.html">deployment
         * package</a> and an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
         * role</a>. The deployment package is a .zip file archive or container image that
         * contains your function code. The execution role grants the function permission
         * to use AWS services, such as Amazon CloudWatch Logs for log streaming and AWS
         * X-Ray for request tracing.</p> <p>When you create a function, Lambda provisions
         * an instance of the function and its supporting resources. If your function
         * connects to a VPC, this process can take a minute or so. During this time, you
         * can't invoke or modify the function. The <code>State</code>,
         * <code>StateReason</code>, and <code>StateReasonCode</code> fields in the
         * response from <a>GetFunctionConfiguration</a> indicate when the function is
         * ready to invoke. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Function
         * States</a>.</p> <p>A function has an unpublished version, and can have published
         * versions and aliases. The unpublished version changes when you update your
         * function's code and configuration. A published version is a snapshot of your
         * function code and configuration that can't be changed. An alias is a named
         * resource that maps to a version, and can be changed to map to a different
         * version. Use the <code>Publish</code> parameter to create version <code>1</code>
         * of your function from its initial configuration.</p> <p>The other parameters let
         * you configure version-specific and function-level settings. You can modify
         * version-specific settings later with <a>UpdateFunctionConfiguration</a>.
         * Function-level settings apply to both the unpublished and published versions of
         * the function, and include tags (<a>TagResource</a>) and per-function concurrency
         * limits (<a>PutFunctionConcurrency</a>).</p> <p>You can use code signing if your
         * deployment package is a .zip file archive. To enable code signing for this
         * function, specify the ARN of a code-signing configuration. When a user attempts
         * to deploy a code package with <a>UpdateFunctionCode</a>, Lambda checks that the
         * code package has a valid signature from a trusted publisher. The code-signing
         * configuration includes set set of signing profiles, which define the trusted
         * publishers for this function.</p> <p>If another account or an AWS service
         * invokes your function, use <a>AddPermission</a> to grant permission by creating
         * a resource-based IAM policy. You can grant permissions at the function level, on
         * a version, or on an alias.</p> <p>To invoke your function directly, use
         * <a>Invoke</a>. To invoke your function in response to events in other AWS
         * services, create an event source mapping (<a>CreateEventSourceMapping</a>), or
         * configure a function trigger in the other service. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-invocation.html">Invoking
         * Functions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a Lambda function. To create a function, you need a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-package.html">deployment
         * package</a> and an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
         * role</a>. The deployment package is a .zip file archive or container image that
         * contains your function code. The execution role grants the function permission
         * to use AWS services, such as Amazon CloudWatch Logs for log streaming and AWS
         * X-Ray for request tracing.</p> <p>When you create a function, Lambda provisions
         * an instance of the function and its supporting resources. If your function
         * connects to a VPC, this process can take a minute or so. During this time, you
         * can't invoke or modify the function. The <code>State</code>,
         * <code>StateReason</code>, and <code>StateReasonCode</code> fields in the
         * response from <a>GetFunctionConfiguration</a> indicate when the function is
         * ready to invoke. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Function
         * States</a>.</p> <p>A function has an unpublished version, and can have published
         * versions and aliases. The unpublished version changes when you update your
         * function's code and configuration. A published version is a snapshot of your
         * function code and configuration that can't be changed. An alias is a named
         * resource that maps to a version, and can be changed to map to a different
         * version. Use the <code>Publish</code> parameter to create version <code>1</code>
         * of your function from its initial configuration.</p> <p>The other parameters let
         * you configure version-specific and function-level settings. You can modify
         * version-specific settings later with <a>UpdateFunctionConfiguration</a>.
         * Function-level settings apply to both the unpublished and published versions of
         * the function, and include tags (<a>TagResource</a>) and per-function concurrency
         * limits (<a>PutFunctionConcurrency</a>).</p> <p>You can use code signing if your
         * deployment package is a .zip file archive. To enable code signing for this
         * function, specify the ARN of a code-signing configuration. When a user attempts
         * to deploy a code package with <a>UpdateFunctionCode</a>, Lambda checks that the
         * code package has a valid signature from a trusted publisher. The code-signing
         * configuration includes set set of signing profiles, which define the trusted
         * publishers for this function.</p> <p>If another account or an AWS service
         * invokes your function, use <a>AddPermission</a> to grant permission by creating
         * a resource-based IAM policy. You can grant permissions at the function level, on
         * a version, or on an alias.</p> <p>To invoke your function directly, use
         * <a>Invoke</a>. To invoke your function in response to events in other AWS
         * services, create an event source mapping (<a>CreateEventSourceMapping</a>), or
         * configure a function trigger in the other service. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-invocation.html">Invoking
         * Functions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a Lambda function. To create a function, you need a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-package.html">deployment
         * package</a> and an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
         * role</a>. The deployment package is a .zip file archive or container image that
         * contains your function code. The execution role grants the function permission
         * to use AWS services, such as Amazon CloudWatch Logs for log streaming and AWS
         * X-Ray for request tracing.</p> <p>When you create a function, Lambda provisions
         * an instance of the function and its supporting resources. If your function
         * connects to a VPC, this process can take a minute or so. During this time, you
         * can't invoke or modify the function. The <code>State</code>,
         * <code>StateReason</code>, and <code>StateReasonCode</code> fields in the
         * response from <a>GetFunctionConfiguration</a> indicate when the function is
         * ready to invoke. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Function
         * States</a>.</p> <p>A function has an unpublished version, and can have published
         * versions and aliases. The unpublished version changes when you update your
         * function's code and configuration. A published version is a snapshot of your
         * function code and configuration that can't be changed. An alias is a named
         * resource that maps to a version, and can be changed to map to a different
         * version. Use the <code>Publish</code> parameter to create version <code>1</code>
         * of your function from its initial configuration.</p> <p>The other parameters let
         * you configure version-specific and function-level settings. You can modify
         * version-specific settings later with <a>UpdateFunctionConfiguration</a>.
         * Function-level settings apply to both the unpublished and published versions of
         * the function, and include tags (<a>TagResource</a>) and per-function concurrency
         * limits (<a>PutFunctionConcurrency</a>).</p> <p>You can use code signing if your
         * deployment package is a .zip file archive. To enable code signing for this
         * function, specify the ARN of a code-signing configuration. When a user attempts
         * to deploy a code package with <a>UpdateFunctionCode</a>, Lambda checks that the
         * code package has a valid signature from a trusted publisher. The code-signing
         * configuration includes set set of signing profiles, which define the trusted
         * publishers for this function.</p> <p>If another account or an AWS service
         * invokes your function, use <a>AddPermission</a> to grant permission by creating
         * a resource-based IAM policy. You can grant permissions at the function level, on
         * a version, or on an alias.</p> <p>To invoke your function directly, use
         * <a>Invoke</a>. To invoke your function in response to events in other AWS
         * services, create an event source mapping (<a>CreateEventSourceMapping</a>), or
         * configure a function trigger in the other service. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-invocation.html">Invoking
         * Functions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the code signing configuration. You can delete the code signing
         * configuration only if no function is using it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCodeSigningConfigOutcome DeleteCodeSigningConfig(const Model::DeleteCodeSigningConfigRequest& request) const;

        /**
         * <p>Deletes the code signing configuration. You can delete the code signing
         * configuration only if no function is using it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCodeSigningConfigOutcomeCallable DeleteCodeSigningConfigCallable(const Model::DeleteCodeSigningConfigRequest& request) const;

        /**
         * <p>Deletes the code signing configuration. You can delete the code signing
         * configuration only if no function is using it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCodeSigningConfigAsync(const Model::DeleteCodeSigningConfigRequest& request, const DeleteCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-invocation-modes.html">event
         * source mapping</a>. You can get the identifier of a mapping from the output of
         * <a>ListEventSourceMappings</a>.</p> <p>When you delete an event source mapping,
         * it enters a <code>Deleting</code> state and might not be completely deleted for
         * several seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSourceMappingOutcome DeleteEventSourceMapping(const Model::DeleteEventSourceMappingRequest& request) const;

        /**
         * <p>Deletes an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-invocation-modes.html">event
         * source mapping</a>. You can get the identifier of a mapping from the output of
         * <a>ListEventSourceMappings</a>.</p> <p>When you delete an event source mapping,
         * it enters a <code>Deleting</code> state and might not be completely deleted for
         * several seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSourceMappingOutcomeCallable DeleteEventSourceMappingCallable(const Model::DeleteEventSourceMappingRequest& request) const;

        /**
         * <p>Deletes an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-invocation-modes.html">event
         * source mapping</a>. You can get the identifier of a mapping from the output of
         * <a>ListEventSourceMappings</a>.</p> <p>When you delete an event source mapping,
         * it enters a <code>Deleting</code> state and might not be completely deleted for
         * several seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSourceMappingAsync(const Model::DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Lambda function. To delete a specific function version, use the
         * <code>Qualifier</code> parameter. Otherwise, all versions and aliases are
         * deleted.</p> <p>To delete Lambda event source mappings that invoke a function,
         * use <a>DeleteEventSourceMapping</a>. For AWS services and resources that invoke
         * your function directly, delete the trigger in the service where you originally
         * configured it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;

        /**
         * <p>Deletes a Lambda function. To delete a specific function version, use the
         * <code>Qualifier</code> parameter. Otherwise, all versions and aliases are
         * deleted.</p> <p>To delete Lambda event source mappings that invoke a function,
         * use <a>DeleteEventSourceMapping</a>. For AWS services and resources that invoke
         * your function directly, delete the trigger in the service where you originally
         * configured it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request) const;

        /**
         * <p>Deletes a Lambda function. To delete a specific function version, use the
         * <code>Qualifier</code> parameter. Otherwise, all versions and aliases are
         * deleted.</p> <p>To delete Lambda event source mappings that invoke a function,
         * use <a>DeleteEventSourceMapping</a>. For AWS services and resources that invoke
         * your function directly, delete the trigger in the service where you originally
         * configured it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the code signing configuration from the function.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionCodeSigningConfigOutcome DeleteFunctionCodeSigningConfig(const Model::DeleteFunctionCodeSigningConfigRequest& request) const;

        /**
         * <p>Removes the code signing configuration from the function.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionCodeSigningConfigOutcomeCallable DeleteFunctionCodeSigningConfigCallable(const Model::DeleteFunctionCodeSigningConfigRequest& request) const;

        /**
         * <p>Removes the code signing configuration from the function.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionCodeSigningConfigAsync(const Model::DeleteFunctionCodeSigningConfigRequest& request, const DeleteFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a concurrent execution limit from a function.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionConcurrencyOutcome DeleteFunctionConcurrency(const Model::DeleteFunctionConcurrencyRequest& request) const;

        /**
         * <p>Removes a concurrent execution limit from a function.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionConcurrencyOutcomeCallable DeleteFunctionConcurrencyCallable(const Model::DeleteFunctionConcurrencyRequest& request) const;

        /**
         * <p>Removes a concurrent execution limit from a function.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionConcurrencyAsync(const Model::DeleteFunctionConcurrencyRequest& request, const DeleteFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionEventInvokeConfigOutcome DeleteFunctionEventInvokeConfig(const Model::DeleteFunctionEventInvokeConfigRequest& request) const;

        /**
         * <p>Deletes the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionEventInvokeConfigOutcomeCallable DeleteFunctionEventInvokeConfigCallable(const Model::DeleteFunctionEventInvokeConfigRequest& request) const;

        /**
         * <p>Deletes the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionEventInvokeConfigAsync(const Model::DeleteFunctionEventInvokeConfigRequest& request, const DeleteFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. Deleted versions can no longer be viewed or added to
         * functions. To avoid breaking functions, a copy of the version remains in Lambda
         * until no functions refer to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteLayerVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLayerVersionOutcome DeleteLayerVersion(const Model::DeleteLayerVersionRequest& request) const;

        /**
         * <p>Deletes a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. Deleted versions can no longer be viewed or added to
         * functions. To avoid breaking functions, a copy of the version remains in Lambda
         * until no functions refer to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteLayerVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLayerVersionOutcomeCallable DeleteLayerVersionCallable(const Model::DeleteLayerVersionRequest& request) const;

        /**
         * <p>Deletes a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. Deleted versions can no longer be viewed or added to
         * functions. To avoid breaking functions, a copy of the version remains in Lambda
         * until no functions refer to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteLayerVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLayerVersionAsync(const Model::DeleteLayerVersionRequest& request, const DeleteLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the provisioned concurrency configuration for a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisionedConcurrencyConfigOutcome DeleteProvisionedConcurrencyConfig(const Model::DeleteProvisionedConcurrencyConfigRequest& request) const;

        /**
         * <p>Deletes the provisioned concurrency configuration for a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisionedConcurrencyConfigOutcomeCallable DeleteProvisionedConcurrencyConfigCallable(const Model::DeleteProvisionedConcurrencyConfigRequest& request) const;

        /**
         * <p>Deletes the provisioned concurrency configuration for a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisionedConcurrencyConfigAsync(const Model::DeleteProvisionedConcurrencyConfigRequest& request, const DeleteProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about your account's <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
         * usage in an AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Retrieves details about your account's <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
         * usage in an AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Retrieves details about your account's <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
         * usage in an AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAlias">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAliasOutcome GetAlias(const Model::GetAliasRequest& request) const;

        /**
         * <p>Returns details about a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAlias">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAliasOutcomeCallable GetAliasCallable(const Model::GetAliasRequest& request) const;

        /**
         * <p>Returns details about a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAlias">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAliasAsync(const Model::GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified code signing
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCodeSigningConfigOutcome GetCodeSigningConfig(const Model::GetCodeSigningConfigRequest& request) const;

        /**
         * <p>Returns information about the specified code signing
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCodeSigningConfigOutcomeCallable GetCodeSigningConfigCallable(const Model::GetCodeSigningConfigRequest& request) const;

        /**
         * <p>Returns information about the specified code signing
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCodeSigningConfigAsync(const Model::GetCodeSigningConfigRequest& request, const GetCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about an event source mapping. You can get the identifier of
         * a mapping from the output of <a>ListEventSourceMappings</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventSourceMappingOutcome GetEventSourceMapping(const Model::GetEventSourceMappingRequest& request) const;

        /**
         * <p>Returns details about an event source mapping. You can get the identifier of
         * a mapping from the output of <a>ListEventSourceMappings</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventSourceMappingOutcomeCallable GetEventSourceMappingCallable(const Model::GetEventSourceMappingRequest& request) const;

        /**
         * <p>Returns details about an event source mapping. You can get the identifier of
         * a mapping from the output of <a>ListEventSourceMappings</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventSourceMappingAsync(const Model::GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the function or function version, with a link to
         * download the deployment package that's valid for 10 minutes. If you specify a
         * function version, only details that are specific to that version are
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;

        /**
         * <p>Returns information about the function or function version, with a link to
         * download the deployment package that's valid for 10 minutes. If you specify a
         * function version, only details that are specific to that version are
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionOutcomeCallable GetFunctionCallable(const Model::GetFunctionRequest& request) const;

        /**
         * <p>Returns information about the function or function version, with a link to
         * download the deployment package that's valid for 10 minutes. If you specify a
         * function version, only details that are specific to that version are
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the code signing configuration for the specified
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionCodeSigningConfigOutcome GetFunctionCodeSigningConfig(const Model::GetFunctionCodeSigningConfigRequest& request) const;

        /**
         * <p>Returns the code signing configuration for the specified
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionCodeSigningConfigOutcomeCallable GetFunctionCodeSigningConfigCallable(const Model::GetFunctionCodeSigningConfigRequest& request) const;

        /**
         * <p>Returns the code signing configuration for the specified
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionCodeSigningConfigAsync(const Model::GetFunctionCodeSigningConfigRequest& request, const GetFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about the reserved concurrency configuration for a function.
         * To set a concurrency limit for a function, use
         * <a>PutFunctionConcurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionConcurrencyOutcome GetFunctionConcurrency(const Model::GetFunctionConcurrencyRequest& request) const;

        /**
         * <p>Returns details about the reserved concurrency configuration for a function.
         * To set a concurrency limit for a function, use
         * <a>PutFunctionConcurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionConcurrencyOutcomeCallable GetFunctionConcurrencyCallable(const Model::GetFunctionConcurrencyRequest& request) const;

        /**
         * <p>Returns details about the reserved concurrency configuration for a function.
         * To set a concurrency limit for a function, use
         * <a>PutFunctionConcurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionConcurrencyAsync(const Model::GetFunctionConcurrencyRequest& request, const GetFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the version-specific settings of a Lambda function or version. The
         * output includes only options that can vary between versions of a function. To
         * modify these settings, use <a>UpdateFunctionConfiguration</a>.</p> <p>To get all
         * of a function's details, including function-level settings, use
         * <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionConfigurationOutcome GetFunctionConfiguration(const Model::GetFunctionConfigurationRequest& request) const;

        /**
         * <p>Returns the version-specific settings of a Lambda function or version. The
         * output includes only options that can vary between versions of a function. To
         * modify these settings, use <a>UpdateFunctionConfiguration</a>.</p> <p>To get all
         * of a function's details, including function-level settings, use
         * <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionConfigurationOutcomeCallable GetFunctionConfigurationCallable(const Model::GetFunctionConfigurationRequest& request) const;

        /**
         * <p>Returns the version-specific settings of a Lambda function or version. The
         * output includes only options that can vary between versions of a function. To
         * modify these settings, use <a>UpdateFunctionConfiguration</a>.</p> <p>To get all
         * of a function's details, including function-level settings, use
         * <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionConfigurationAsync(const Model::GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionEventInvokeConfigOutcome GetFunctionEventInvokeConfig(const Model::GetFunctionEventInvokeConfigRequest& request) const;

        /**
         * <p>Retrieves the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionEventInvokeConfigOutcomeCallable GetFunctionEventInvokeConfigCallable(const Model::GetFunctionEventInvokeConfigRequest& request) const;

        /**
         * <p>Retrieves the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionEventInvokeConfigAsync(const Model::GetFunctionEventInvokeConfigRequest& request, const GetFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>, with a link to download the layer archive that's valid for 10
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLayerVersionOutcome GetLayerVersion(const Model::GetLayerVersionRequest& request) const;

        /**
         * <p>Returns information about a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>, with a link to download the layer archive that's valid for 10
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLayerVersionOutcomeCallable GetLayerVersionCallable(const Model::GetLayerVersionRequest& request) const;

        /**
         * <p>Returns information about a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>, with a link to download the layer archive that's valid for 10
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLayerVersionAsync(const Model::GetLayerVersionRequest& request, const GetLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>, with a link to download the layer archive that's valid for 10
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersionByArn">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLayerVersionByArnOutcome GetLayerVersionByArn(const Model::GetLayerVersionByArnRequest& request) const;

        /**
         * <p>Returns information about a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>, with a link to download the layer archive that's valid for 10
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersionByArn">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLayerVersionByArnOutcomeCallable GetLayerVersionByArnCallable(const Model::GetLayerVersionByArnRequest& request) const;

        /**
         * <p>Returns information about a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>, with a link to download the layer archive that's valid for 10
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersionByArn">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLayerVersionByArnAsync(const Model::GetLayerVersionByArnRequest& request, const GetLayerVersionByArnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the permission policy for a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. For more information, see
         * <a>AddLayerVersionPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLayerVersionPolicyOutcome GetLayerVersionPolicy(const Model::GetLayerVersionPolicyRequest& request) const;

        /**
         * <p>Returns the permission policy for a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. For more information, see
         * <a>AddLayerVersionPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLayerVersionPolicyOutcomeCallable GetLayerVersionPolicyCallable(const Model::GetLayerVersionPolicyRequest& request) const;

        /**
         * <p>Returns the permission policy for a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. For more information, see
         * <a>AddLayerVersionPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersionPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLayerVersionPolicyAsync(const Model::GetLayerVersionPolicyRequest& request, const GetLayerVersionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">resource-based
         * IAM policy</a> for a function, version, or alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Returns the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">resource-based
         * IAM policy</a> for a function, version, or alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Returns the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">resource-based
         * IAM policy</a> for a function, version, or alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the provisioned concurrency configuration for a function's alias or
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProvisionedConcurrencyConfigOutcome GetProvisionedConcurrencyConfig(const Model::GetProvisionedConcurrencyConfigRequest& request) const;

        /**
         * <p>Retrieves the provisioned concurrency configuration for a function's alias or
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProvisionedConcurrencyConfigOutcomeCallable GetProvisionedConcurrencyConfigCallable(const Model::GetProvisionedConcurrencyConfigRequest& request) const;

        /**
         * <p>Retrieves the provisioned concurrency configuration for a function's alias or
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProvisionedConcurrencyConfigAsync(const Model::GetProvisionedConcurrencyConfigRequest& request, const GetProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Invokes a Lambda function. You can invoke a function synchronously (and wait
         * for the response), or asynchronously. To invoke a function asynchronously, set
         * <code>InvocationType</code> to <code>Event</code>.</p> <p>For <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-sync.html">synchronous
         * invocation</a>, details about the function response, including errors, are
         * included in the response body and headers. For either invocation type, you can
         * find more information in the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-functions.html">execution
         * log</a> and <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-x-ray.html">trace</a>.</p>
         * <p>When an error occurs, your function may be invoked multiple times. Retry
         * behavior varies by error type, client, event source, and invocation type. For
         * example, if you invoke a function asynchronously and it returns an error, Lambda
         * executes the function up to two more times. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/retries-on-errors.html">Retry
         * Behavior</a>.</p> <p>For <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous
         * invocation</a>, Lambda adds events to a queue before sending them to your
         * function. If your function does not have enough capacity to keep up with the
         * queue, events may be lost. Occasionally, your function may receive the same
         * event multiple times, even if no error occurs. To retain events that were not
         * processed, configure your function with a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#dlq">dead-letter
         * queue</a>.</p> <p>The status code in the API response doesn't reflect function
         * errors. Error codes are reserved for errors that prevent your function from
         * executing, such as permissions errors, <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limit
         * errors</a>, or issues with your function's code and configuration. For example,
         * Lambda returns <code>TooManyRequestsException</code> if executing the function
         * would cause you to exceed a concurrency limit at either the account level
         * (<code>ConcurrentInvocationLimitExceeded</code>) or function level
         * (<code>ReservedFunctionConcurrentInvocationLimitExceeded</code>).</p> <p>For
         * functions with a long timeout, your client might be disconnected during
         * synchronous invocation while it waits for a response. Configure your HTTP
         * client, SDK, firewall, proxy, or operating system to allow for long connections
         * with timeout or keep-alive settings.</p> <p>This operation requires permission
         * for the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_awslambda.html">lambda:InvokeFunction</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Invoke">AWS API
         * Reference</a></p>
         */
        virtual Model::InvokeOutcome Invoke(const Model::InvokeRequest& request) const;

        /**
         * <p>Invokes a Lambda function. You can invoke a function synchronously (and wait
         * for the response), or asynchronously. To invoke a function asynchronously, set
         * <code>InvocationType</code> to <code>Event</code>.</p> <p>For <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-sync.html">synchronous
         * invocation</a>, details about the function response, including errors, are
         * included in the response body and headers. For either invocation type, you can
         * find more information in the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-functions.html">execution
         * log</a> and <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-x-ray.html">trace</a>.</p>
         * <p>When an error occurs, your function may be invoked multiple times. Retry
         * behavior varies by error type, client, event source, and invocation type. For
         * example, if you invoke a function asynchronously and it returns an error, Lambda
         * executes the function up to two more times. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/retries-on-errors.html">Retry
         * Behavior</a>.</p> <p>For <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous
         * invocation</a>, Lambda adds events to a queue before sending them to your
         * function. If your function does not have enough capacity to keep up with the
         * queue, events may be lost. Occasionally, your function may receive the same
         * event multiple times, even if no error occurs. To retain events that were not
         * processed, configure your function with a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#dlq">dead-letter
         * queue</a>.</p> <p>The status code in the API response doesn't reflect function
         * errors. Error codes are reserved for errors that prevent your function from
         * executing, such as permissions errors, <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limit
         * errors</a>, or issues with your function's code and configuration. For example,
         * Lambda returns <code>TooManyRequestsException</code> if executing the function
         * would cause you to exceed a concurrency limit at either the account level
         * (<code>ConcurrentInvocationLimitExceeded</code>) or function level
         * (<code>ReservedFunctionConcurrentInvocationLimitExceeded</code>).</p> <p>For
         * functions with a long timeout, your client might be disconnected during
         * synchronous invocation while it waits for a response. Configure your HTTP
         * client, SDK, firewall, proxy, or operating system to allow for long connections
         * with timeout or keep-alive settings.</p> <p>This operation requires permission
         * for the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_awslambda.html">lambda:InvokeFunction</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Invoke">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request) const;

        /**
         * <p>Invokes a Lambda function. You can invoke a function synchronously (and wait
         * for the response), or asynchronously. To invoke a function asynchronously, set
         * <code>InvocationType</code> to <code>Event</code>.</p> <p>For <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-sync.html">synchronous
         * invocation</a>, details about the function response, including errors, are
         * included in the response body and headers. For either invocation type, you can
         * find more information in the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-functions.html">execution
         * log</a> and <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-x-ray.html">trace</a>.</p>
         * <p>When an error occurs, your function may be invoked multiple times. Retry
         * behavior varies by error type, client, event source, and invocation type. For
         * example, if you invoke a function asynchronously and it returns an error, Lambda
         * executes the function up to two more times. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/retries-on-errors.html">Retry
         * Behavior</a>.</p> <p>For <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous
         * invocation</a>, Lambda adds events to a queue before sending them to your
         * function. If your function does not have enough capacity to keep up with the
         * queue, events may be lost. Occasionally, your function may receive the same
         * event multiple times, even if no error occurs. To retain events that were not
         * processed, configure your function with a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#dlq">dead-letter
         * queue</a>.</p> <p>The status code in the API response doesn't reflect function
         * errors. Error codes are reserved for errors that prevent your function from
         * executing, such as permissions errors, <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limit
         * errors</a>, or issues with your function's code and configuration. For example,
         * Lambda returns <code>TooManyRequestsException</code> if executing the function
         * would cause you to exceed a concurrency limit at either the account level
         * (<code>ConcurrentInvocationLimitExceeded</code>) or function level
         * (<code>ReservedFunctionConcurrentInvocationLimitExceeded</code>).</p> <p>For
         * functions with a long timeout, your client might be disconnected during
         * synchronous invocation while it waits for a response. Configure your HTTP
         * client, SDK, firewall, proxy, or operating system to allow for long connections
         * with timeout or keep-alive settings.</p> <p>This operation requires permission
         * for the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_awslambda.html">lambda:InvokeFunction</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Invoke">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InvokeAsync(const Model::InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">aliases</a>
         * for a Lambda function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">aliases</a>
         * for a Lambda function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">aliases</a>
         * for a Lambda function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuring-codesigning.html">code
         * signing configurations</a>. A request returns up to 10,000 configurations per
         * call. You can use the <code>MaxItems</code> parameter to return fewer
         * configurations per call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListCodeSigningConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCodeSigningConfigsOutcome ListCodeSigningConfigs(const Model::ListCodeSigningConfigsRequest& request) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuring-codesigning.html">code
         * signing configurations</a>. A request returns up to 10,000 configurations per
         * call. You can use the <code>MaxItems</code> parameter to return fewer
         * configurations per call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListCodeSigningConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCodeSigningConfigsOutcomeCallable ListCodeSigningConfigsCallable(const Model::ListCodeSigningConfigsRequest& request) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuring-codesigning.html">code
         * signing configurations</a>. A request returns up to 10,000 configurations per
         * call. You can use the <code>MaxItems</code> parameter to return fewer
         * configurations per call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListCodeSigningConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCodeSigningConfigsAsync(const Model::ListCodeSigningConfigsRequest& request, const ListCodeSigningConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists event source mappings. Specify an <code>EventSourceArn</code> to only
         * show event source mappings for a single event source.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListEventSourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventSourceMappingsOutcome ListEventSourceMappings(const Model::ListEventSourceMappingsRequest& request) const;

        /**
         * <p>Lists event source mappings. Specify an <code>EventSourceArn</code> to only
         * show event source mappings for a single event source.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListEventSourceMappings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventSourceMappingsOutcomeCallable ListEventSourceMappingsCallable(const Model::ListEventSourceMappingsRequest& request) const;

        /**
         * <p>Lists event source mappings. Specify an <code>EventSourceArn</code> to only
         * show event source mappings for a single event source.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListEventSourceMappings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventSourceMappingsAsync(const Model::ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of configurations for asynchronous invocation for a
         * function.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionEventInvokeConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionEventInvokeConfigsOutcome ListFunctionEventInvokeConfigs(const Model::ListFunctionEventInvokeConfigsRequest& request) const;

        /**
         * <p>Retrieves a list of configurations for asynchronous invocation for a
         * function.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionEventInvokeConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionEventInvokeConfigsOutcomeCallable ListFunctionEventInvokeConfigsCallable(const Model::ListFunctionEventInvokeConfigsRequest& request) const;

        /**
         * <p>Retrieves a list of configurations for asynchronous invocation for a
         * function.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionEventInvokeConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionEventInvokeConfigsAsync(const Model::ListFunctionEventInvokeConfigsRequest& request, const ListFunctionEventInvokeConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Lambda functions, with the version-specific configuration
         * of each. Lambda returns up to 50 functions per call.</p> <p>Set
         * <code>FunctionVersion</code> to <code>ALL</code> to include all published
         * versions of each function in addition to the unpublished version. </p> 
         * <p>The <code>ListFunctions</code> action returns a subset of the
         * <a>FunctionConfiguration</a> fields. To get the additional fields (State,
         * StateReasonCode, StateReason, LastUpdateStatus, LastUpdateStatusReason,
         * LastUpdateStatusReasonCode) for a function or version, use
         * <a>GetFunction</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>Returns a list of Lambda functions, with the version-specific configuration
         * of each. Lambda returns up to 50 functions per call.</p> <p>Set
         * <code>FunctionVersion</code> to <code>ALL</code> to include all published
         * versions of each function in addition to the unpublished version. </p> 
         * <p>The <code>ListFunctions</code> action returns a subset of the
         * <a>FunctionConfiguration</a> fields. To get the additional fields (State,
         * StateReasonCode, StateReason, LastUpdateStatus, LastUpdateStatusReason,
         * LastUpdateStatusReasonCode) for a function or version, use
         * <a>GetFunction</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>Returns a list of Lambda functions, with the version-specific configuration
         * of each. Lambda returns up to 50 functions per call.</p> <p>Set
         * <code>FunctionVersion</code> to <code>ALL</code> to include all published
         * versions of each function in addition to the unpublished version. </p> 
         * <p>The <code>ListFunctions</code> action returns a subset of the
         * <a>FunctionConfiguration</a> fields. To get the additional fields (State,
         * StateReasonCode, StateReason, LastUpdateStatus, LastUpdateStatusReason,
         * LastUpdateStatusReasonCode) for a function or version, use
         * <a>GetFunction</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the functions that use the specified code signing configuration. You can
         * use this method prior to deleting a code signing configuration, to verify that
         * no functions are using it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionsByCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsByCodeSigningConfigOutcome ListFunctionsByCodeSigningConfig(const Model::ListFunctionsByCodeSigningConfigRequest& request) const;

        /**
         * <p>List the functions that use the specified code signing configuration. You can
         * use this method prior to deleting a code signing configuration, to verify that
         * no functions are using it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionsByCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionsByCodeSigningConfigOutcomeCallable ListFunctionsByCodeSigningConfigCallable(const Model::ListFunctionsByCodeSigningConfigRequest& request) const;

        /**
         * <p>List the functions that use the specified code signing configuration. You can
         * use this method prior to deleting a code signing configuration, to verify that
         * no functions are using it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionsByCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionsByCodeSigningConfigAsync(const Model::ListFunctionsByCodeSigningConfigRequest& request, const ListFunctionsByCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the versions of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. Versions that have been deleted aren't listed. Specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime
         * identifier</a> to list only versions that indicate that they're compatible with
         * that runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListLayerVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLayerVersionsOutcome ListLayerVersions(const Model::ListLayerVersionsRequest& request) const;

        /**
         * <p>Lists the versions of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. Versions that have been deleted aren't listed. Specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime
         * identifier</a> to list only versions that indicate that they're compatible with
         * that runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListLayerVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLayerVersionsOutcomeCallable ListLayerVersionsCallable(const Model::ListLayerVersionsRequest& request) const;

        /**
         * <p>Lists the versions of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. Versions that have been deleted aren't listed. Specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime
         * identifier</a> to list only versions that indicate that they're compatible with
         * that runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListLayerVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLayerVersionsAsync(const Model::ListLayerVersionsRequest& request, const ListLayerVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layers</a> and shows information about the latest version of each.
         * Specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime
         * identifier</a> to list only layers that indicate that they're compatible with
         * that runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListLayers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLayersOutcome ListLayers(const Model::ListLayersRequest& request) const;

        /**
         * <p>Lists <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layers</a> and shows information about the latest version of each.
         * Specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime
         * identifier</a> to list only layers that indicate that they're compatible with
         * that runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListLayers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLayersOutcomeCallable ListLayersCallable(const Model::ListLayersRequest& request) const;

        /**
         * <p>Lists <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layers</a> and shows information about the latest version of each.
         * Specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime
         * identifier</a> to list only layers that indicate that they're compatible with
         * that runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListLayers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLayersAsync(const Model::ListLayersRequest& request, const ListLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of provisioned concurrency configurations for a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListProvisionedConcurrencyConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisionedConcurrencyConfigsOutcome ListProvisionedConcurrencyConfigs(const Model::ListProvisionedConcurrencyConfigsRequest& request) const;

        /**
         * <p>Retrieves a list of provisioned concurrency configurations for a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListProvisionedConcurrencyConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisionedConcurrencyConfigsOutcomeCallable ListProvisionedConcurrencyConfigsCallable(const Model::ListProvisionedConcurrencyConfigsRequest& request) const;

        /**
         * <p>Retrieves a list of provisioned concurrency configurations for a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListProvisionedConcurrencyConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisionedConcurrencyConfigsAsync(const Model::ListProvisionedConcurrencyConfigsRequest& request, const ListProvisionedConcurrencyConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a function's <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>. You
         * can also view tags with <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns a function's <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>. You
         * can also view tags with <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns a function's <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>. You
         * can also view tags with <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">versions</a>,
         * with the version-specific configuration of each. Lambda returns up to 50
         * versions per call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListVersionsByFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVersionsByFunctionOutcome ListVersionsByFunction(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">versions</a>,
         * with the version-specific configuration of each. Lambda returns up to 50
         * versions per call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListVersionsByFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVersionsByFunctionOutcomeCallable ListVersionsByFunctionCallable(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">versions</a>,
         * with the version-specific configuration of each. Lambda returns up to 50
         * versions per call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListVersionsByFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVersionsByFunctionAsync(const Model::ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a> from a ZIP archive. Each time you call
         * <code>PublishLayerVersion</code> with the same layer name, a new version is
         * created.</p> <p>Add layers to your function with <a>CreateFunction</a> or
         * <a>UpdateFunctionConfiguration</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishLayerVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishLayerVersionOutcome PublishLayerVersion(const Model::PublishLayerVersionRequest& request) const;

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a> from a ZIP archive. Each time you call
         * <code>PublishLayerVersion</code> with the same layer name, a new version is
         * created.</p> <p>Add layers to your function with <a>CreateFunction</a> or
         * <a>UpdateFunctionConfiguration</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishLayerVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishLayerVersionOutcomeCallable PublishLayerVersionCallable(const Model::PublishLayerVersionRequest& request) const;

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a> from a ZIP archive. Each time you call
         * <code>PublishLayerVersion</code> with the same layer name, a new version is
         * created.</p> <p>Add layers to your function with <a>CreateFunction</a> or
         * <a>UpdateFunctionConfiguration</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishLayerVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishLayerVersionAsync(const Model::PublishLayerVersionRequest& request, const PublishLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">version</a>
         * from the current code and configuration of a function. Use versions to create a
         * snapshot of your function code and configuration that doesn't change.</p> <p>AWS
         * Lambda doesn't publish a version if the function's configuration and code
         * haven't changed since the last version. Use <a>UpdateFunctionCode</a> or
         * <a>UpdateFunctionConfiguration</a> to update the function before publishing a
         * version.</p> <p>Clients can invoke versions directly or with an alias. To create
         * an alias, use <a>CreateAlias</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishVersionOutcome PublishVersion(const Model::PublishVersionRequest& request) const;

        /**
         * <p>Creates a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">version</a>
         * from the current code and configuration of a function. Use versions to create a
         * snapshot of your function code and configuration that doesn't change.</p> <p>AWS
         * Lambda doesn't publish a version if the function's configuration and code
         * haven't changed since the last version. Use <a>UpdateFunctionCode</a> or
         * <a>UpdateFunctionConfiguration</a> to update the function before publishing a
         * version.</p> <p>Clients can invoke versions directly or with an alias. To create
         * an alias, use <a>CreateAlias</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishVersionOutcomeCallable PublishVersionCallable(const Model::PublishVersionRequest& request) const;

        /**
         * <p>Creates a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">version</a>
         * from the current code and configuration of a function. Use versions to create a
         * snapshot of your function code and configuration that doesn't change.</p> <p>AWS
         * Lambda doesn't publish a version if the function's configuration and code
         * haven't changed since the last version. Use <a>UpdateFunctionCode</a> or
         * <a>UpdateFunctionConfiguration</a> to update the function before publishing a
         * version.</p> <p>Clients can invoke versions directly or with an alias. To create
         * an alias, use <a>CreateAlias</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishVersionAsync(const Model::PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the code signing configuration for the function. Changes to the code
         * signing configuration take effect the next time a user tries to deploy a code
         * package to the function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFunctionCodeSigningConfigOutcome PutFunctionCodeSigningConfig(const Model::PutFunctionCodeSigningConfigRequest& request) const;

        /**
         * <p>Update the code signing configuration for the function. Changes to the code
         * signing configuration take effect the next time a user tries to deploy a code
         * package to the function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFunctionCodeSigningConfigOutcomeCallable PutFunctionCodeSigningConfigCallable(const Model::PutFunctionCodeSigningConfigRequest& request) const;

        /**
         * <p>Update the code signing configuration for the function. Changes to the code
         * signing configuration take effect the next time a user tries to deploy a code
         * package to the function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFunctionCodeSigningConfigAsync(const Model::PutFunctionCodeSigningConfigRequest& request, const PutFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the maximum number of simultaneous executions for a function, and
         * reserves capacity for that concurrency level.</p> <p>Concurrency settings apply
         * to the function as a whole, including all published versions and the unpublished
         * version. Reserving concurrency both ensures that your function has capacity to
         * process the specified number of events simultaneously, and prevents it from
         * scaling beyond that level. Use <a>GetFunction</a> to see the current setting for
         * a function.</p> <p>Use <a>GetAccountSettings</a> to see your Regional
         * concurrency limit. You can reserve concurrency for as many functions as you
         * like, as long as you leave at least 100 simultaneous executions unreserved for
         * functions that aren't configured with a per-function limit. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
         * Concurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFunctionConcurrencyOutcome PutFunctionConcurrency(const Model::PutFunctionConcurrencyRequest& request) const;

        /**
         * <p>Sets the maximum number of simultaneous executions for a function, and
         * reserves capacity for that concurrency level.</p> <p>Concurrency settings apply
         * to the function as a whole, including all published versions and the unpublished
         * version. Reserving concurrency both ensures that your function has capacity to
         * process the specified number of events simultaneously, and prevents it from
         * scaling beyond that level. Use <a>GetFunction</a> to see the current setting for
         * a function.</p> <p>Use <a>GetAccountSettings</a> to see your Regional
         * concurrency limit. You can reserve concurrency for as many functions as you
         * like, as long as you leave at least 100 simultaneous executions unreserved for
         * functions that aren't configured with a per-function limit. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
         * Concurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFunctionConcurrencyOutcomeCallable PutFunctionConcurrencyCallable(const Model::PutFunctionConcurrencyRequest& request) const;

        /**
         * <p>Sets the maximum number of simultaneous executions for a function, and
         * reserves capacity for that concurrency level.</p> <p>Concurrency settings apply
         * to the function as a whole, including all published versions and the unpublished
         * version. Reserving concurrency both ensures that your function has capacity to
         * process the specified number of events simultaneously, and prevents it from
         * scaling beyond that level. Use <a>GetFunction</a> to see the current setting for
         * a function.</p> <p>Use <a>GetAccountSettings</a> to see your Regional
         * concurrency limit. You can reserve concurrency for as many functions as you
         * like, as long as you leave at least 100 simultaneous executions unreserved for
         * functions that aren't configured with a per-function limit. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
         * Concurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFunctionConcurrencyAsync(const Model::PutFunctionConcurrencyRequest& request, const PutFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures options for <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous
         * invocation</a> on a function, version, or alias. If a configuration already
         * exists for a function, version, or alias, this operation overwrites it. If you
         * exclude any settings, they are removed. To set one option without affecting
         * existing settings for other options, use
         * <a>UpdateFunctionEventInvokeConfig</a>.</p> <p>By default, Lambda retries an
         * asynchronous invocation twice if the function returns an error. It retains
         * events in a queue for up to six hours. When an event fails all processing
         * attempts or stays in the asynchronous invocation queue for too long, Lambda
         * discards it. To retain discarded events, configure a dead-letter queue with
         * <a>UpdateFunctionConfiguration</a>.</p> <p>To send an invocation record to a
         * queue, topic, function, or event bus, specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">destination</a>.
         * You can configure separate destinations for successful invocations (on-success)
         * and events that fail all processing attempts (on-failure). You can configure
         * destinations in addition to or instead of a dead-letter queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFunctionEventInvokeConfigOutcome PutFunctionEventInvokeConfig(const Model::PutFunctionEventInvokeConfigRequest& request) const;

        /**
         * <p>Configures options for <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous
         * invocation</a> on a function, version, or alias. If a configuration already
         * exists for a function, version, or alias, this operation overwrites it. If you
         * exclude any settings, they are removed. To set one option without affecting
         * existing settings for other options, use
         * <a>UpdateFunctionEventInvokeConfig</a>.</p> <p>By default, Lambda retries an
         * asynchronous invocation twice if the function returns an error. It retains
         * events in a queue for up to six hours. When an event fails all processing
         * attempts or stays in the asynchronous invocation queue for too long, Lambda
         * discards it. To retain discarded events, configure a dead-letter queue with
         * <a>UpdateFunctionConfiguration</a>.</p> <p>To send an invocation record to a
         * queue, topic, function, or event bus, specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">destination</a>.
         * You can configure separate destinations for successful invocations (on-success)
         * and events that fail all processing attempts (on-failure). You can configure
         * destinations in addition to or instead of a dead-letter queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFunctionEventInvokeConfigOutcomeCallable PutFunctionEventInvokeConfigCallable(const Model::PutFunctionEventInvokeConfigRequest& request) const;

        /**
         * <p>Configures options for <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous
         * invocation</a> on a function, version, or alias. If a configuration already
         * exists for a function, version, or alias, this operation overwrites it. If you
         * exclude any settings, they are removed. To set one option without affecting
         * existing settings for other options, use
         * <a>UpdateFunctionEventInvokeConfig</a>.</p> <p>By default, Lambda retries an
         * asynchronous invocation twice if the function returns an error. It retains
         * events in a queue for up to six hours. When an event fails all processing
         * attempts or stays in the asynchronous invocation queue for too long, Lambda
         * discards it. To retain discarded events, configure a dead-letter queue with
         * <a>UpdateFunctionConfiguration</a>.</p> <p>To send an invocation record to a
         * queue, topic, function, or event bus, specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">destination</a>.
         * You can configure separate destinations for successful invocations (on-success)
         * and events that fail all processing attempts (on-failure). You can configure
         * destinations in addition to or instead of a dead-letter queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFunctionEventInvokeConfigAsync(const Model::PutFunctionEventInvokeConfigRequest& request, const PutFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a provisioned concurrency configuration to a function's alias or
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProvisionedConcurrencyConfigOutcome PutProvisionedConcurrencyConfig(const Model::PutProvisionedConcurrencyConfigRequest& request) const;

        /**
         * <p>Adds a provisioned concurrency configuration to a function's alias or
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutProvisionedConcurrencyConfigOutcomeCallable PutProvisionedConcurrencyConfigCallable(const Model::PutProvisionedConcurrencyConfigRequest& request) const;

        /**
         * <p>Adds a provisioned concurrency configuration to a function's alias or
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutProvisionedConcurrencyConfigAsync(const Model::PutProvisionedConcurrencyConfigRequest& request, const PutProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a statement from the permissions policy for a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. For more information, see
         * <a>AddLayerVersionPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemoveLayerVersionPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveLayerVersionPermissionOutcome RemoveLayerVersionPermission(const Model::RemoveLayerVersionPermissionRequest& request) const;

        /**
         * <p>Removes a statement from the permissions policy for a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. For more information, see
         * <a>AddLayerVersionPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemoveLayerVersionPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveLayerVersionPermissionOutcomeCallable RemoveLayerVersionPermissionCallable(const Model::RemoveLayerVersionPermissionRequest& request) const;

        /**
         * <p>Removes a statement from the permissions policy for a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
         * Lambda layer</a>. For more information, see
         * <a>AddLayerVersionPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemoveLayerVersionPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveLayerVersionPermissionAsync(const Model::RemoveLayerVersionPermissionRequest& request, const RemoveLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes function-use permission from an AWS service or another account. You
         * can get the ID of the statement from the output of
         * <a>GetPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Revokes function-use permission from an AWS service or another account. You
         * can get the ID of the statement from the output of
         * <a>GetPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemovePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Revokes function-use permission from an AWS service or another account. You
         * can get the ID of the statement from the output of
         * <a>GetPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemovePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> to a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> to a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> to a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> from a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> from a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> from a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates the configuration of a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates the configuration of a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the code signing configuration. Changes to the code signing
         * configuration take effect the next time a user tries to deploy a code package to
         * the function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCodeSigningConfigOutcome UpdateCodeSigningConfig(const Model::UpdateCodeSigningConfigRequest& request) const;

        /**
         * <p>Update the code signing configuration. Changes to the code signing
         * configuration take effect the next time a user tries to deploy a code package to
         * the function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCodeSigningConfigOutcomeCallable UpdateCodeSigningConfigCallable(const Model::UpdateCodeSigningConfigRequest& request) const;

        /**
         * <p>Update the code signing configuration. Changes to the code signing
         * configuration take effect the next time a user tries to deploy a code package to
         * the function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateCodeSigningConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCodeSigningConfigAsync(const Model::UpdateCodeSigningConfigRequest& request, const UpdateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an event source mapping. You can change the function that AWS Lambda
         * invokes, or pause invocation and resume later from the same location.</p> <p>The
         * following error handling options are only available for stream sources (DynamoDB
         * and Kinesis):</p> <ul> <li> <p> <code>BisectBatchOnFunctionError</code> - If the
         * function returns an error, split the batch in two and retry.</p> </li> <li> <p>
         * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue
         * or Amazon SNS topic.</p> </li> <li> <p> <code>MaximumRecordAgeInSeconds</code> -
         * Discard records older than the specified age. The default value is infinite
         * (-1). When set to infinite (-1), failed records are retried until the record
         * expires</p> </li> <li> <p> <code>MaximumRetryAttempts</code> - Discard records
         * after the specified number of retries. The default value is infinite (-1). When
         * set to infinite (-1), failed records are retried until the record expires.</p>
         * </li> <li> <p> <code>ParallelizationFactor</code> - Process multiple batches
         * from each shard concurrently.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventSourceMappingOutcome UpdateEventSourceMapping(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * <p>Updates an event source mapping. You can change the function that AWS Lambda
         * invokes, or pause invocation and resume later from the same location.</p> <p>The
         * following error handling options are only available for stream sources (DynamoDB
         * and Kinesis):</p> <ul> <li> <p> <code>BisectBatchOnFunctionError</code> - If the
         * function returns an error, split the batch in two and retry.</p> </li> <li> <p>
         * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue
         * or Amazon SNS topic.</p> </li> <li> <p> <code>MaximumRecordAgeInSeconds</code> -
         * Discard records older than the specified age. The default value is infinite
         * (-1). When set to infinite (-1), failed records are retried until the record
         * expires</p> </li> <li> <p> <code>MaximumRetryAttempts</code> - Discard records
         * after the specified number of retries. The default value is infinite (-1). When
         * set to infinite (-1), failed records are retried until the record expires.</p>
         * </li> <li> <p> <code>ParallelizationFactor</code> - Process multiple batches
         * from each shard concurrently.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventSourceMappingOutcomeCallable UpdateEventSourceMappingCallable(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * <p>Updates an event source mapping. You can change the function that AWS Lambda
         * invokes, or pause invocation and resume later from the same location.</p> <p>The
         * following error handling options are only available for stream sources (DynamoDB
         * and Kinesis):</p> <ul> <li> <p> <code>BisectBatchOnFunctionError</code> - If the
         * function returns an error, split the batch in two and retry.</p> </li> <li> <p>
         * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue
         * or Amazon SNS topic.</p> </li> <li> <p> <code>MaximumRecordAgeInSeconds</code> -
         * Discard records older than the specified age. The default value is infinite
         * (-1). When set to infinite (-1), failed records are retried until the record
         * expires</p> </li> <li> <p> <code>MaximumRetryAttempts</code> - Discard records
         * after the specified number of retries. The default value is infinite (-1). When
         * set to infinite (-1), failed records are retried until the record expires.</p>
         * </li> <li> <p> <code>ParallelizationFactor</code> - Process multiple batches
         * from each shard concurrently.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventSourceMappingAsync(const Model::UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Lambda function's code. If code signing is enabled for the
         * function, the code package must be signed by a trusted publisher. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-trustedcode.html">Configuring
         * code signing</a>.</p> <p>The function's code is locked when you publish a
         * version. You can't modify the code of a published version, only the unpublished
         * version.</p>  <p>For a function defined as a container image, Lambda
         * resolves the image tag to an image digest. In Amazon ECR, if you update the
         * image tag to a new image, Lambda does not automatically update the function.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionCodeOutcome UpdateFunctionCode(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * <p>Updates a Lambda function's code. If code signing is enabled for the
         * function, the code package must be signed by a trusted publisher. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-trustedcode.html">Configuring
         * code signing</a>.</p> <p>The function's code is locked when you publish a
         * version. You can't modify the code of a published version, only the unpublished
         * version.</p>  <p>For a function defined as a container image, Lambda
         * resolves the image tag to an image digest. In Amazon ECR, if you update the
         * image tag to a new image, Lambda does not automatically update the function.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionCodeOutcomeCallable UpdateFunctionCodeCallable(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * <p>Updates a Lambda function's code. If code signing is enabled for the
         * function, the code package must be signed by a trusted publisher. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-trustedcode.html">Configuring
         * code signing</a>.</p> <p>The function's code is locked when you publish a
         * version. You can't modify the code of a published version, only the unpublished
         * version.</p>  <p>For a function defined as a container image, Lambda
         * resolves the image tag to an image digest. In Amazon ECR, if you update the
         * image tag to a new image, Lambda does not automatically update the function.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionCodeAsync(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the version-specific settings of a Lambda function.</p> <p>When you
         * update a function, Lambda provisions an instance of the function and its
         * supporting resources. If your function connects to a VPC, this process can take
         * a minute. During this time, you can't modify the function, but you can still
         * invoke it. The <code>LastUpdateStatus</code>,
         * <code>LastUpdateStatusReason</code>, and <code>LastUpdateStatusReasonCode</code>
         * fields in the response from <a>GetFunctionConfiguration</a> indicate when the
         * update is complete and the function is processing events with the new
         * configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Function
         * States</a>.</p> <p>These settings can vary between versions of a function and
         * are locked when you publish a version. You can't modify the configuration of a
         * published version, only the unpublished version.</p> <p>To configure function
         * concurrency, use <a>PutFunctionConcurrency</a>. To grant invoke permissions to
         * an account or AWS service, use <a>AddPermission</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionConfigurationOutcome UpdateFunctionConfiguration(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * <p>Modify the version-specific settings of a Lambda function.</p> <p>When you
         * update a function, Lambda provisions an instance of the function and its
         * supporting resources. If your function connects to a VPC, this process can take
         * a minute. During this time, you can't modify the function, but you can still
         * invoke it. The <code>LastUpdateStatus</code>,
         * <code>LastUpdateStatusReason</code>, and <code>LastUpdateStatusReasonCode</code>
         * fields in the response from <a>GetFunctionConfiguration</a> indicate when the
         * update is complete and the function is processing events with the new
         * configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Function
         * States</a>.</p> <p>These settings can vary between versions of a function and
         * are locked when you publish a version. You can't modify the configuration of a
         * published version, only the unpublished version.</p> <p>To configure function
         * concurrency, use <a>PutFunctionConcurrency</a>. To grant invoke permissions to
         * an account or AWS service, use <a>AddPermission</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionConfigurationOutcomeCallable UpdateFunctionConfigurationCallable(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * <p>Modify the version-specific settings of a Lambda function.</p> <p>When you
         * update a function, Lambda provisions an instance of the function and its
         * supporting resources. If your function connects to a VPC, this process can take
         * a minute. During this time, you can't modify the function, but you can still
         * invoke it. The <code>LastUpdateStatus</code>,
         * <code>LastUpdateStatusReason</code>, and <code>LastUpdateStatusReasonCode</code>
         * fields in the response from <a>GetFunctionConfiguration</a> indicate when the
         * update is complete and the function is processing events with the new
         * configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Function
         * States</a>.</p> <p>These settings can vary between versions of a function and
         * are locked when you publish a version. You can't modify the configuration of a
         * published version, only the unpublished version.</p> <p>To configure function
         * concurrency, use <a>PutFunctionConcurrency</a>. To grant invoke permissions to
         * an account or AWS service, use <a>AddPermission</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionConfigurationAsync(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionEventInvokeConfigOutcome UpdateFunctionEventInvokeConfig(const Model::UpdateFunctionEventInvokeConfigRequest& request) const;

        /**
         * <p>Updates the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionEventInvokeConfigOutcomeCallable UpdateFunctionEventInvokeConfigCallable(const Model::UpdateFunctionEventInvokeConfigRequest& request) const;

        /**
         * <p>Updates the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionEventInvokeConfigAsync(const Model::UpdateFunctionEventInvokeConfigRequest& request, const UpdateFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddLayerVersionPermissionAsyncHelper(const Model::AddLayerVersionPermissionRequest& request, const AddLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCodeSigningConfigAsyncHelper(const Model::CreateCodeSigningConfigRequest& request, const CreateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventSourceMappingAsyncHelper(const Model::CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFunctionAsyncHelper(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCodeSigningConfigAsyncHelper(const Model::DeleteCodeSigningConfigRequest& request, const DeleteCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventSourceMappingAsyncHelper(const Model::DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionAsyncHelper(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionCodeSigningConfigAsyncHelper(const Model::DeleteFunctionCodeSigningConfigRequest& request, const DeleteFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionConcurrencyAsyncHelper(const Model::DeleteFunctionConcurrencyRequest& request, const DeleteFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionEventInvokeConfigAsyncHelper(const Model::DeleteFunctionEventInvokeConfigRequest& request, const DeleteFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLayerVersionAsyncHelper(const Model::DeleteLayerVersionRequest& request, const DeleteLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProvisionedConcurrencyConfigAsyncHelper(const Model::DeleteProvisionedConcurrencyConfigRequest& request, const DeleteProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountSettingsAsyncHelper(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAliasAsyncHelper(const Model::GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCodeSigningConfigAsyncHelper(const Model::GetCodeSigningConfigRequest& request, const GetCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventSourceMappingAsyncHelper(const Model::GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionAsyncHelper(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionCodeSigningConfigAsyncHelper(const Model::GetFunctionCodeSigningConfigRequest& request, const GetFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionConcurrencyAsyncHelper(const Model::GetFunctionConcurrencyRequest& request, const GetFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionConfigurationAsyncHelper(const Model::GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionEventInvokeConfigAsyncHelper(const Model::GetFunctionEventInvokeConfigRequest& request, const GetFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLayerVersionAsyncHelper(const Model::GetLayerVersionRequest& request, const GetLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLayerVersionByArnAsyncHelper(const Model::GetLayerVersionByArnRequest& request, const GetLayerVersionByArnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLayerVersionPolicyAsyncHelper(const Model::GetLayerVersionPolicyRequest& request, const GetLayerVersionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProvisionedConcurrencyConfigAsyncHelper(const Model::GetProvisionedConcurrencyConfigRequest& request, const GetProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InvokeAsyncHelper(const Model::InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCodeSigningConfigsAsyncHelper(const Model::ListCodeSigningConfigsRequest& request, const ListCodeSigningConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventSourceMappingsAsyncHelper(const Model::ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFunctionEventInvokeConfigsAsyncHelper(const Model::ListFunctionEventInvokeConfigsRequest& request, const ListFunctionEventInvokeConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFunctionsAsyncHelper(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFunctionsByCodeSigningConfigAsyncHelper(const Model::ListFunctionsByCodeSigningConfigRequest& request, const ListFunctionsByCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLayerVersionsAsyncHelper(const Model::ListLayerVersionsRequest& request, const ListLayerVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLayersAsyncHelper(const Model::ListLayersRequest& request, const ListLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProvisionedConcurrencyConfigsAsyncHelper(const Model::ListProvisionedConcurrencyConfigsRequest& request, const ListProvisionedConcurrencyConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVersionsByFunctionAsyncHelper(const Model::ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishLayerVersionAsyncHelper(const Model::PublishLayerVersionRequest& request, const PublishLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishVersionAsyncHelper(const Model::PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFunctionCodeSigningConfigAsyncHelper(const Model::PutFunctionCodeSigningConfigRequest& request, const PutFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFunctionConcurrencyAsyncHelper(const Model::PutFunctionConcurrencyRequest& request, const PutFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFunctionEventInvokeConfigAsyncHelper(const Model::PutFunctionEventInvokeConfigRequest& request, const PutFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutProvisionedConcurrencyConfigAsyncHelper(const Model::PutProvisionedConcurrencyConfigRequest& request, const PutProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveLayerVersionPermissionAsyncHelper(const Model::RemoveLayerVersionPermissionRequest& request, const RemoveLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCodeSigningConfigAsyncHelper(const Model::UpdateCodeSigningConfigRequest& request, const UpdateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEventSourceMappingAsyncHelper(const Model::UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionCodeAsyncHelper(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionConfigurationAsyncHelper(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionEventInvokeConfigAsyncHelper(const Model::UpdateFunctionEventInvokeConfigRequest& request, const UpdateFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Lambda
} // namespace Aws
