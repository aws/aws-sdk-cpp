/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/model/CreateEventSourceMappingResult.h>
#include <aws/lambda/model/CreateFunctionResult.h>
#include <aws/lambda/model/DeleteEventSourceMappingResult.h>
#include <aws/lambda/model/GetAccountSettingsResult.h>
#include <aws/lambda/model/GetAliasResult.h>
#include <aws/lambda/model/GetEventSourceMappingResult.h>
#include <aws/lambda/model/GetFunctionResult.h>
#include <aws/lambda/model/GetFunctionConfigurationResult.h>
#include <aws/lambda/model/GetLayerVersionResult.h>
#include <aws/lambda/model/GetLayerVersionByArnResult.h>
#include <aws/lambda/model/GetLayerVersionPolicyResult.h>
#include <aws/lambda/model/GetPolicyResult.h>
#include <aws/lambda/model/InvokeResult.h>
#include <aws/lambda/model/ListAliasesResult.h>
#include <aws/lambda/model/ListEventSourceMappingsResult.h>
#include <aws/lambda/model/ListFunctionsResult.h>
#include <aws/lambda/model/ListLayerVersionsResult.h>
#include <aws/lambda/model/ListLayersResult.h>
#include <aws/lambda/model/ListTagsResult.h>
#include <aws/lambda/model/ListVersionsByFunctionResult.h>
#include <aws/lambda/model/PublishLayerVersionResult.h>
#include <aws/lambda/model/PublishVersionResult.h>
#include <aws/lambda/model/PutFunctionConcurrencyResult.h>
#include <aws/lambda/model/UpdateAliasResult.h>
#include <aws/lambda/model/UpdateEventSourceMappingResult.h>
#include <aws/lambda/model/UpdateFunctionCodeResult.h>
#include <aws/lambda/model/UpdateFunctionConfigurationResult.h>
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
        class CreateEventSourceMappingRequest;
        class CreateFunctionRequest;
        class DeleteAliasRequest;
        class DeleteEventSourceMappingRequest;
        class DeleteFunctionRequest;
        class DeleteFunctionConcurrencyRequest;
        class DeleteLayerVersionRequest;
        class GetAccountSettingsRequest;
        class GetAliasRequest;
        class GetEventSourceMappingRequest;
        class GetFunctionRequest;
        class GetFunctionConfigurationRequest;
        class GetLayerVersionRequest;
        class GetLayerVersionByArnRequest;
        class GetLayerVersionPolicyRequest;
        class GetPolicyRequest;
        class InvokeRequest;
        class ListAliasesRequest;
        class ListEventSourceMappingsRequest;
        class ListFunctionsRequest;
        class ListLayerVersionsRequest;
        class ListLayersRequest;
        class ListTagsRequest;
        class ListVersionsByFunctionRequest;
        class PublishLayerVersionRequest;
        class PublishVersionRequest;
        class PutFunctionConcurrencyRequest;
        class RemoveLayerVersionPermissionRequest;
        class RemovePermissionRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAliasRequest;
        class UpdateEventSourceMappingRequest;
        class UpdateFunctionCodeRequest;
        class UpdateFunctionConfigurationRequest;

        typedef Aws::Utils::Outcome<AddLayerVersionPermissionResult, Aws::Client::AWSError<LambdaErrors>> AddLayerVersionPermissionOutcome;
        typedef Aws::Utils::Outcome<AddPermissionResult, Aws::Client::AWSError<LambdaErrors>> AddPermissionOutcome;
        typedef Aws::Utils::Outcome<CreateAliasResult, Aws::Client::AWSError<LambdaErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> CreateEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<CreateFunctionResult, Aws::Client::AWSError<LambdaErrors>> CreateFunctionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> DeleteEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> DeleteFunctionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> DeleteFunctionConcurrencyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> DeleteLayerVersionOutcome;
        typedef Aws::Utils::Outcome<GetAccountSettingsResult, Aws::Client::AWSError<LambdaErrors>> GetAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<GetAliasResult, Aws::Client::AWSError<LambdaErrors>> GetAliasOutcome;
        typedef Aws::Utils::Outcome<GetEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> GetEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<GetFunctionResult, Aws::Client::AWSError<LambdaErrors>> GetFunctionOutcome;
        typedef Aws::Utils::Outcome<GetFunctionConfigurationResult, Aws::Client::AWSError<LambdaErrors>> GetFunctionConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetLayerVersionResult, Aws::Client::AWSError<LambdaErrors>> GetLayerVersionOutcome;
        typedef Aws::Utils::Outcome<GetLayerVersionByArnResult, Aws::Client::AWSError<LambdaErrors>> GetLayerVersionByArnOutcome;
        typedef Aws::Utils::Outcome<GetLayerVersionPolicyResult, Aws::Client::AWSError<LambdaErrors>> GetLayerVersionPolicyOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, Aws::Client::AWSError<LambdaErrors>> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<InvokeResult, Aws::Client::AWSError<LambdaErrors>> InvokeOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, Aws::Client::AWSError<LambdaErrors>> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListEventSourceMappingsResult, Aws::Client::AWSError<LambdaErrors>> ListEventSourceMappingsOutcome;
        typedef Aws::Utils::Outcome<ListFunctionsResult, Aws::Client::AWSError<LambdaErrors>> ListFunctionsOutcome;
        typedef Aws::Utils::Outcome<ListLayerVersionsResult, Aws::Client::AWSError<LambdaErrors>> ListLayerVersionsOutcome;
        typedef Aws::Utils::Outcome<ListLayersResult, Aws::Client::AWSError<LambdaErrors>> ListLayersOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<LambdaErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<ListVersionsByFunctionResult, Aws::Client::AWSError<LambdaErrors>> ListVersionsByFunctionOutcome;
        typedef Aws::Utils::Outcome<PublishLayerVersionResult, Aws::Client::AWSError<LambdaErrors>> PublishLayerVersionOutcome;
        typedef Aws::Utils::Outcome<PublishVersionResult, Aws::Client::AWSError<LambdaErrors>> PublishVersionOutcome;
        typedef Aws::Utils::Outcome<PutFunctionConcurrencyResult, Aws::Client::AWSError<LambdaErrors>> PutFunctionConcurrencyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> RemoveLayerVersionPermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAliasResult, Aws::Client::AWSError<LambdaErrors>> UpdateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> UpdateEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionCodeResult, Aws::Client::AWSError<LambdaErrors>> UpdateFunctionCodeOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionConfigurationResult, Aws::Client::AWSError<LambdaErrors>> UpdateFunctionConfigurationOutcome;

        typedef std::future<AddLayerVersionPermissionOutcome> AddLayerVersionPermissionOutcomeCallable;
        typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateEventSourceMappingOutcome> CreateEventSourceMappingOutcomeCallable;
        typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteEventSourceMappingOutcome> DeleteEventSourceMappingOutcomeCallable;
        typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
        typedef std::future<DeleteFunctionConcurrencyOutcome> DeleteFunctionConcurrencyOutcomeCallable;
        typedef std::future<DeleteLayerVersionOutcome> DeleteLayerVersionOutcomeCallable;
        typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
        typedef std::future<GetAliasOutcome> GetAliasOutcomeCallable;
        typedef std::future<GetEventSourceMappingOutcome> GetEventSourceMappingOutcomeCallable;
        typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
        typedef std::future<GetFunctionConfigurationOutcome> GetFunctionConfigurationOutcomeCallable;
        typedef std::future<GetLayerVersionOutcome> GetLayerVersionOutcomeCallable;
        typedef std::future<GetLayerVersionByArnOutcome> GetLayerVersionByArnOutcomeCallable;
        typedef std::future<GetLayerVersionPolicyOutcome> GetLayerVersionPolicyOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListEventSourceMappingsOutcome> ListEventSourceMappingsOutcomeCallable;
        typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
        typedef std::future<ListLayerVersionsOutcome> ListLayerVersionsOutcomeCallable;
        typedef std::future<ListLayersOutcome> ListLayersOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<ListVersionsByFunctionOutcome> ListVersionsByFunctionOutcomeCallable;
        typedef std::future<PublishLayerVersionOutcome> PublishLayerVersionOutcomeCallable;
        typedef std::future<PublishVersionOutcome> PublishVersionOutcomeCallable;
        typedef std::future<PutFunctionConcurrencyOutcome> PutFunctionConcurrencyOutcomeCallable;
        typedef std::future<RemoveLayerVersionPermissionOutcome> RemoveLayerVersionPermissionOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
        typedef std::future<UpdateEventSourceMappingOutcome> UpdateEventSourceMappingOutcomeCallable;
        typedef std::future<UpdateFunctionCodeOutcome> UpdateFunctionCodeOutcomeCallable;
        typedef std::future<UpdateFunctionConfigurationOutcome> UpdateFunctionConfigurationOutcomeCallable;
} // namespace Model

  class LambdaClient;

    typedef std::function<void(const LambdaClient*, const Model::AddLayerVersionPermissionRequest&, const Model::AddLayerVersionPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddLayerVersionPermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateEventSourceMappingRequest&, const Model::CreateEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateFunctionRequest&, const Model::CreateFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteEventSourceMappingRequest&, const Model::DeleteEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteFunctionRequest&, const Model::DeleteFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteFunctionConcurrencyRequest&, const Model::DeleteFunctionConcurrencyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionConcurrencyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteLayerVersionRequest&, const Model::DeleteLayerVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLayerVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetAliasRequest&, const Model::GetAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetEventSourceMappingRequest&, const Model::GetEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionRequest&, const Model::GetFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionConfigurationRequest&, const Model::GetFunctionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionConfigurationResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetLayerVersionRequest&, const Model::GetLayerVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLayerVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetLayerVersionByArnRequest&, const Model::GetLayerVersionByArnOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLayerVersionByArnResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetLayerVersionPolicyRequest&, const Model::GetLayerVersionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLayerVersionPolicyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::InvokeRequest&, const Model::InvokeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListEventSourceMappingsRequest&, const Model::ListEventSourceMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventSourceMappingsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListFunctionsRequest&, const Model::ListFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListLayerVersionsRequest&, const Model::ListLayerVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLayerVersionsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListLayersRequest&, const Model::ListLayersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLayersResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListVersionsByFunctionRequest&, const Model::ListVersionsByFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVersionsByFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PublishLayerVersionRequest&, const Model::PublishLayerVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishLayerVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PublishVersionRequest&, const Model::PublishVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PutFunctionConcurrencyRequest&, const Model::PutFunctionConcurrencyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFunctionConcurrencyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::RemoveLayerVersionPermissionRequest&, const Model::RemoveLayerVersionPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveLayerVersionPermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateEventSourceMappingRequest&, const Model::UpdateEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateFunctionCodeRequest&, const Model::UpdateFunctionCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionCodeResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateFunctionConfigurationRequest&, const Model::UpdateFunctionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionConfigurationResponseReceivedHandler;

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

        inline virtual const char* GetServiceClientName() const override { return "Lambda"; }


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
         * or owning account of the associated resource as the <code>SourceArn</code> or
         * <code>SourceAccount</code>. If you grant permission to a service principal
         * without specifying the source, other accounts could potentially configure
         * resources in their account to invoke your Lambda function.</p> <p>This action
         * adds a statement to a resource-based permission policy for the function. For
         * more information about function policies, see <a
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
         * or owning account of the associated resource as the <code>SourceArn</code> or
         * <code>SourceAccount</code>. If you grant permission to a service principal
         * without specifying the source, other accounts could potentially configure
         * resources in their account to invoke your Lambda function.</p> <p>This action
         * adds a statement to a resource-based permission policy for the function. For
         * more information about function policies, see <a
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
         * or owning account of the associated resource as the <code>SourceArn</code> or
         * <code>SourceAccount</code>. If you grant permission to a service principal
         * without specifying the source, other accounts could potentially configure
         * resources in their account to invoke your Lambda function.</p> <p>This action
         * adds a statement to a resource-based permission policy for the function. For
         * more information about function policies, see <a
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
         * <p>Creates a mapping between an event source and an AWS Lambda function. Lambda
         * reads items from the event source and triggers the function.</p> <p>For details
         * about each event source type, see the following topics.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS
         * Lambda with Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS
         * Lambda with Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS
         * Lambda with Amazon DynamoDB</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSourceMappingOutcome CreateEventSourceMapping(const Model::CreateEventSourceMappingRequest& request) const;

        /**
         * <p>Creates a mapping between an event source and an AWS Lambda function. Lambda
         * reads items from the event source and triggers the function.</p> <p>For details
         * about each event source type, see the following topics.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS
         * Lambda with Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS
         * Lambda with Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS
         * Lambda with Amazon DynamoDB</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS
         * Lambda with Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS
         * Lambda with Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS
         * Lambda with Amazon DynamoDB</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSourceMappingAsync(const Model::CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Lambda function. To create a function, you need a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/deployment-package-v2.html">deployment
         * package</a> and an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
         * role</a>. The deployment package contains your function code. The execution role
         * grants the function permission to use AWS services, such as Amazon CloudWatch
         * Logs for log streaming and AWS X-Ray for request tracing.</p> <p>A function has
         * an unpublished version, and can have published versions and aliases. The
         * unpublished version changes when you update your function's code and
         * configuration. A published version is a snapshot of your function code and
         * configuration that can't be changed. An alias is a named resource that maps to a
         * version, and can be changed to map to a different version. Use the
         * <code>Publish</code> parameter to create version <code>1</code> of your function
         * from its initial configuration.</p> <p>The other parameters let you configure
         * version-specific and function-level settings. You can modify version-specific
         * settings later with <a>UpdateFunctionConfiguration</a>. Function-level settings
         * apply to both the unpublished and published versions of the function, and
         * include tags (<a>TagResource</a>) and per-function concurrency limits
         * (<a>PutFunctionConcurrency</a>).</p> <p>If another account or an AWS service
         * invokes your function, use <a>AddPermission</a> to grant permission by creating
         * a resource-based IAM policy. You can grant permissions at the function level, on
         * a version, or on an alias.</p> <p>To invoke your function directly, use
         * <a>Invoke</a>. To invoke your function in response to events in other AWS
         * services, create an event source mapping (<a>CreateEventSourceMapping</a>), or
         * configure a function trigger in the other service. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invoking-lambda-functions.html">Invoking
         * Functions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a Lambda function. To create a function, you need a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/deployment-package-v2.html">deployment
         * package</a> and an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
         * role</a>. The deployment package contains your function code. The execution role
         * grants the function permission to use AWS services, such as Amazon CloudWatch
         * Logs for log streaming and AWS X-Ray for request tracing.</p> <p>A function has
         * an unpublished version, and can have published versions and aliases. The
         * unpublished version changes when you update your function's code and
         * configuration. A published version is a snapshot of your function code and
         * configuration that can't be changed. An alias is a named resource that maps to a
         * version, and can be changed to map to a different version. Use the
         * <code>Publish</code> parameter to create version <code>1</code> of your function
         * from its initial configuration.</p> <p>The other parameters let you configure
         * version-specific and function-level settings. You can modify version-specific
         * settings later with <a>UpdateFunctionConfiguration</a>. Function-level settings
         * apply to both the unpublished and published versions of the function, and
         * include tags (<a>TagResource</a>) and per-function concurrency limits
         * (<a>PutFunctionConcurrency</a>).</p> <p>If another account or an AWS service
         * invokes your function, use <a>AddPermission</a> to grant permission by creating
         * a resource-based IAM policy. You can grant permissions at the function level, on
         * a version, or on an alias.</p> <p>To invoke your function directly, use
         * <a>Invoke</a>. To invoke your function in response to events in other AWS
         * services, create an event source mapping (<a>CreateEventSourceMapping</a>), or
         * configure a function trigger in the other service. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invoking-lambda-functions.html">Invoking
         * Functions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a Lambda function. To create a function, you need a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/deployment-package-v2.html">deployment
         * package</a> and an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
         * role</a>. The deployment package contains your function code. The execution role
         * grants the function permission to use AWS services, such as Amazon CloudWatch
         * Logs for log streaming and AWS X-Ray for request tracing.</p> <p>A function has
         * an unpublished version, and can have published versions and aliases. The
         * unpublished version changes when you update your function's code and
         * configuration. A published version is a snapshot of your function code and
         * configuration that can't be changed. An alias is a named resource that maps to a
         * version, and can be changed to map to a different version. Use the
         * <code>Publish</code> parameter to create version <code>1</code> of your function
         * from its initial configuration.</p> <p>The other parameters let you configure
         * version-specific and function-level settings. You can modify version-specific
         * settings later with <a>UpdateFunctionConfiguration</a>. Function-level settings
         * apply to both the unpublished and published versions of the function, and
         * include tags (<a>TagResource</a>) and per-function concurrency limits
         * (<a>PutFunctionConcurrency</a>).</p> <p>If another account or an AWS service
         * invokes your function, use <a>AddPermission</a> to grant permission by creating
         * a resource-based IAM policy. You can grant permissions at the function level, on
         * a version, or on an alias.</p> <p>To invoke your function directly, use
         * <a>Invoke</a>. To invoke your function in response to events in other AWS
         * services, create an event source mapping (<a>CreateEventSourceMapping</a>), or
         * configure a function trigger in the other service. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invoking-lambda-functions.html">Invoking
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
         * <p>Deletes an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-invocation-modes.html">event
         * source mapping</a>. You can get the identifier of a mapping from the output of
         * <a>ListEventSourceMappings</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSourceMappingOutcome DeleteEventSourceMapping(const Model::DeleteEventSourceMappingRequest& request) const;

        /**
         * <p>Deletes an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-invocation-modes.html">event
         * source mapping</a>. You can get the identifier of a mapping from the output of
         * <a>ListEventSourceMappings</a>.</p><p><h3>See Also:</h3>   <a
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
         * <a>ListEventSourceMappings</a>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Invokes a Lambda function. You can invoke a function synchronously (and wait
         * for the response), or asynchronously. To invoke a function asynchronously, set
         * <code>InvocationType</code> to <code>Event</code>.</p> <p>For synchronous
         * invocation, details about the function response, including errors, are included
         * in the response body and headers. For either invocation type, you can find more
         * information in the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-functions.html">execution
         * log</a> and <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/dlq.html">trace</a>. To
         * record function errors for asynchronous invocations, configure your function
         * with a <a href="https://docs.aws.amazon.com/lambda/latest/dg/dlq.html">dead
         * letter queue</a>.</p> <p>When an error occurs, your function may be invoked
         * multiple times. Retry behavior varies by error type, client, event source, and
         * invocation type. For example, if you invoke a function asynchronously and it
         * returns an error, Lambda executes the function up to two more times. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/retries-on-errors.html">Retry
         * Behavior</a>.</p> <p>The status code in the API response doesn't reflect
         * function errors. Error codes are reserved for errors that prevent your function
         * from executing, such as permissions errors, <a
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
         * for the <code>lambda:InvokeFunction</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Invoke">AWS API
         * Reference</a></p>
         */
        virtual Model::InvokeOutcome Invoke(const Model::InvokeRequest& request) const;

        /**
         * <p>Invokes a Lambda function. You can invoke a function synchronously (and wait
         * for the response), or asynchronously. To invoke a function asynchronously, set
         * <code>InvocationType</code> to <code>Event</code>.</p> <p>For synchronous
         * invocation, details about the function response, including errors, are included
         * in the response body and headers. For either invocation type, you can find more
         * information in the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-functions.html">execution
         * log</a> and <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/dlq.html">trace</a>. To
         * record function errors for asynchronous invocations, configure your function
         * with a <a href="https://docs.aws.amazon.com/lambda/latest/dg/dlq.html">dead
         * letter queue</a>.</p> <p>When an error occurs, your function may be invoked
         * multiple times. Retry behavior varies by error type, client, event source, and
         * invocation type. For example, if you invoke a function asynchronously and it
         * returns an error, Lambda executes the function up to two more times. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/retries-on-errors.html">Retry
         * Behavior</a>.</p> <p>The status code in the API response doesn't reflect
         * function errors. Error codes are reserved for errors that prevent your function
         * from executing, such as permissions errors, <a
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
         * for the <code>lambda:InvokeFunction</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Invoke">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request) const;

        /**
         * <p>Invokes a Lambda function. You can invoke a function synchronously (and wait
         * for the response), or asynchronously. To invoke a function asynchronously, set
         * <code>InvocationType</code> to <code>Event</code>.</p> <p>For synchronous
         * invocation, details about the function response, including errors, are included
         * in the response body and headers. For either invocation type, you can find more
         * information in the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-functions.html">execution
         * log</a> and <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/dlq.html">trace</a>. To
         * record function errors for asynchronous invocations, configure your function
         * with a <a href="https://docs.aws.amazon.com/lambda/latest/dg/dlq.html">dead
         * letter queue</a>.</p> <p>When an error occurs, your function may be invoked
         * multiple times. Retry behavior varies by error type, client, event source, and
         * invocation type. For example, if you invoke a function asynchronously and it
         * returns an error, Lambda executes the function up to two more times. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/retries-on-errors.html">Retry
         * Behavior</a>.</p> <p>The status code in the API response doesn't reflect
         * function errors. Error codes are reserved for errors that prevent your function
         * from executing, such as permissions errors, <a
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
         * for the <code>lambda:InvokeFunction</code> action.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of Lambda functions, with the version-specific configuration
         * of each.</p> <p>Set <code>FunctionVersion</code> to <code>ALL</code> to include
         * all published versions of each function in addition to the unpublished version.
         * To get more information about a function or version, use
         * <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>Returns a list of Lambda functions, with the version-specific configuration
         * of each.</p> <p>Set <code>FunctionVersion</code> to <code>ALL</code> to include
         * all published versions of each function in addition to the unpublished version.
         * To get more information about a function or version, use
         * <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>Returns a list of Lambda functions, with the version-specific configuration
         * of each.</p> <p>Set <code>FunctionVersion</code> to <code>ALL</code> to include
         * all published versions of each function in addition to the unpublished version.
         * To get more information about a function or version, use
         * <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * with the version-specific configuration of each. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListVersionsByFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVersionsByFunctionOutcome ListVersionsByFunction(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">versions</a>,
         * with the version-specific configuration of each. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListVersionsByFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVersionsByFunctionOutcomeCallable ListVersionsByFunctionCallable(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">versions</a>,
         * with the version-specific configuration of each. </p><p><h3>See Also:</h3>   <a
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
         * <code>PublishLayerVersion</code> with the same version name, a new version is
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
         * <code>PublishLayerVersion</code> with the same version name, a new version is
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
         * <code>PublishLayerVersion</code> with the same version name, a new version is
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
         * <p>Sets the maximum number of simultaneous executions for a function, and
         * reserves capacity for that concurrency level.</p> <p>Concurrency settings apply
         * to the function as a whole, including all published versions and the unpublished
         * version. Reserving concurrency both ensures that your function has capacity to
         * process the specified number of events simultaneously, and prevents it from
         * scaling beyond that level. Use <a>GetFunction</a> to see the current setting for
         * a function.</p> <p>Use <a>GetAccountSettings</a> to see your regional
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
         * a function.</p> <p>Use <a>GetAccountSettings</a> to see your regional
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
         * a function.</p> <p>Use <a>GetAccountSettings</a> to see your regional
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
         * <p>Updates an event source mapping. You can change the function that AWS Lambda
         * invokes, or pause invocation and resume later from the same
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventSourceMappingOutcome UpdateEventSourceMapping(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * <p>Updates an event source mapping. You can change the function that AWS Lambda
         * invokes, or pause invocation and resume later from the same
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventSourceMappingOutcomeCallable UpdateEventSourceMappingCallable(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * <p>Updates an event source mapping. You can change the function that AWS Lambda
         * invokes, or pause invocation and resume later from the same
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventSourceMappingAsync(const Model::UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Lambda function's code.</p> <p>The function's code is locked when
         * you publish a version. You can't modify the code of a published version, only
         * the unpublished version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionCodeOutcome UpdateFunctionCode(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * <p>Updates a Lambda function's code.</p> <p>The function's code is locked when
         * you publish a version. You can't modify the code of a published version, only
         * the unpublished version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionCodeOutcomeCallable UpdateFunctionCodeCallable(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * <p>Updates a Lambda function's code.</p> <p>The function's code is locked when
         * you publish a version. You can't modify the code of a published version, only
         * the unpublished version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionCodeAsync(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the version-specific settings of a Lambda function.</p> <p>These
         * settings can vary between versions of a function and are locked when you publish
         * a version. You can't modify the configuration of a published version, only the
         * unpublished version.</p> <p>To configure function concurrency, use
         * <a>PutFunctionConcurrency</a>. To grant invoke permissions to an account or AWS
         * service, use <a>AddPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionConfigurationOutcome UpdateFunctionConfiguration(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * <p>Modify the version-specific settings of a Lambda function.</p> <p>These
         * settings can vary between versions of a function and are locked when you publish
         * a version. You can't modify the configuration of a published version, only the
         * unpublished version.</p> <p>To configure function concurrency, use
         * <a>PutFunctionConcurrency</a>. To grant invoke permissions to an account or AWS
         * service, use <a>AddPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionConfigurationOutcomeCallable UpdateFunctionConfigurationCallable(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * <p>Modify the version-specific settings of a Lambda function.</p> <p>These
         * settings can vary between versions of a function and are locked when you publish
         * a version. You can't modify the configuration of a published version, only the
         * unpublished version.</p> <p>To configure function concurrency, use
         * <a>PutFunctionConcurrency</a>. To grant invoke permissions to an account or AWS
         * service, use <a>AddPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionConfigurationAsync(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddLayerVersionPermissionAsyncHelper(const Model::AddLayerVersionPermissionRequest& request, const AddLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventSourceMappingAsyncHelper(const Model::CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFunctionAsyncHelper(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventSourceMappingAsyncHelper(const Model::DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionAsyncHelper(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionConcurrencyAsyncHelper(const Model::DeleteFunctionConcurrencyRequest& request, const DeleteFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLayerVersionAsyncHelper(const Model::DeleteLayerVersionRequest& request, const DeleteLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountSettingsAsyncHelper(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAliasAsyncHelper(const Model::GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventSourceMappingAsyncHelper(const Model::GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionAsyncHelper(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionConfigurationAsyncHelper(const Model::GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLayerVersionAsyncHelper(const Model::GetLayerVersionRequest& request, const GetLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLayerVersionByArnAsyncHelper(const Model::GetLayerVersionByArnRequest& request, const GetLayerVersionByArnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLayerVersionPolicyAsyncHelper(const Model::GetLayerVersionPolicyRequest& request, const GetLayerVersionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InvokeAsyncHelper(const Model::InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventSourceMappingsAsyncHelper(const Model::ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFunctionsAsyncHelper(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLayerVersionsAsyncHelper(const Model::ListLayerVersionsRequest& request, const ListLayerVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLayersAsyncHelper(const Model::ListLayersRequest& request, const ListLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVersionsByFunctionAsyncHelper(const Model::ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishLayerVersionAsyncHelper(const Model::PublishLayerVersionRequest& request, const PublishLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishVersionAsyncHelper(const Model::PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFunctionConcurrencyAsyncHelper(const Model::PutFunctionConcurrencyRequest& request, const PutFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveLayerVersionPermissionAsyncHelper(const Model::RemoveLayerVersionPermissionRequest& request, const RemoveLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEventSourceMappingAsyncHelper(const Model::UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionCodeAsyncHelper(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionConfigurationAsyncHelper(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Lambda
} // namespace Aws
