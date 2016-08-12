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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/AddPermissionResult.h>
#include <aws/lambda/model/CreateAliasResult.h>
#include <aws/lambda/model/CreateEventSourceMappingResult.h>
#include <aws/lambda/model/CreateFunctionResult.h>
#include <aws/lambda/model/DeleteEventSourceMappingResult.h>
#include <aws/lambda/model/GetAliasResult.h>
#include <aws/lambda/model/GetEventSourceMappingResult.h>
#include <aws/lambda/model/GetFunctionResult.h>
#include <aws/lambda/model/GetFunctionConfigurationResult.h>
#include <aws/lambda/model/GetPolicyResult.h>
#include <aws/lambda/model/InvokeResult.h>
#include <aws/lambda/model/ListAliasesResult.h>
#include <aws/lambda/model/ListEventSourceMappingsResult.h>
#include <aws/lambda/model/ListFunctionsResult.h>
#include <aws/lambda/model/ListVersionsByFunctionResult.h>
#include <aws/lambda/model/PublishVersionResult.h>
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

namespace Lambda
{

namespace Model
{
        class AddPermissionRequest;
        class CreateAliasRequest;
        class CreateEventSourceMappingRequest;
        class CreateFunctionRequest;
        class DeleteAliasRequest;
        class DeleteEventSourceMappingRequest;
        class DeleteFunctionRequest;
        class GetAliasRequest;
        class GetEventSourceMappingRequest;
        class GetFunctionRequest;
        class GetFunctionConfigurationRequest;
        class GetPolicyRequest;
        class InvokeRequest;
        class ListAliasesRequest;
        class ListEventSourceMappingsRequest;
        class ListFunctionsRequest;
        class ListVersionsByFunctionRequest;
        class PublishVersionRequest;
        class RemovePermissionRequest;
        class UpdateAliasRequest;
        class UpdateEventSourceMappingRequest;
        class UpdateFunctionCodeRequest;
        class UpdateFunctionConfigurationRequest;

        typedef Aws::Utils::Outcome<AddPermissionResult, Aws::Client::AWSError<LambdaErrors>> AddPermissionOutcome;
        typedef Aws::Utils::Outcome<CreateAliasResult, Aws::Client::AWSError<LambdaErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> CreateEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<CreateFunctionResult, Aws::Client::AWSError<LambdaErrors>> CreateFunctionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<LambdaErrors>> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> DeleteEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<LambdaErrors>> DeleteFunctionOutcome;
        typedef Aws::Utils::Outcome<GetAliasResult, Aws::Client::AWSError<LambdaErrors>> GetAliasOutcome;
        typedef Aws::Utils::Outcome<GetEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> GetEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<GetFunctionResult, Aws::Client::AWSError<LambdaErrors>> GetFunctionOutcome;
        typedef Aws::Utils::Outcome<GetFunctionConfigurationResult, Aws::Client::AWSError<LambdaErrors>> GetFunctionConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, Aws::Client::AWSError<LambdaErrors>> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<InvokeResult, Aws::Client::AWSError<LambdaErrors>> InvokeOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, Aws::Client::AWSError<LambdaErrors>> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListEventSourceMappingsResult, Aws::Client::AWSError<LambdaErrors>> ListEventSourceMappingsOutcome;
        typedef Aws::Utils::Outcome<ListFunctionsResult, Aws::Client::AWSError<LambdaErrors>> ListFunctionsOutcome;
        typedef Aws::Utils::Outcome<ListVersionsByFunctionResult, Aws::Client::AWSError<LambdaErrors>> ListVersionsByFunctionOutcome;
        typedef Aws::Utils::Outcome<PublishVersionResult, Aws::Client::AWSError<LambdaErrors>> PublishVersionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<LambdaErrors>> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<UpdateAliasResult, Aws::Client::AWSError<LambdaErrors>> UpdateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> UpdateEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionCodeResult, Aws::Client::AWSError<LambdaErrors>> UpdateFunctionCodeOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionConfigurationResult, Aws::Client::AWSError<LambdaErrors>> UpdateFunctionConfigurationOutcome;

        typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateEventSourceMappingOutcome> CreateEventSourceMappingOutcomeCallable;
        typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteEventSourceMappingOutcome> DeleteEventSourceMappingOutcomeCallable;
        typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
        typedef std::future<GetAliasOutcome> GetAliasOutcomeCallable;
        typedef std::future<GetEventSourceMappingOutcome> GetEventSourceMappingOutcomeCallable;
        typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
        typedef std::future<GetFunctionConfigurationOutcome> GetFunctionConfigurationOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListEventSourceMappingsOutcome> ListEventSourceMappingsOutcomeCallable;
        typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
        typedef std::future<ListVersionsByFunctionOutcome> ListVersionsByFunctionOutcomeCallable;
        typedef std::future<PublishVersionOutcome> PublishVersionOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
        typedef std::future<UpdateEventSourceMappingOutcome> UpdateEventSourceMappingOutcomeCallable;
        typedef std::future<UpdateFunctionCodeOutcome> UpdateFunctionCodeOutcomeCallable;
        typedef std::future<UpdateFunctionConfigurationOutcome> UpdateFunctionConfigurationOutcomeCallable;
} // namespace Model

  class LambdaClient;

    typedef std::function<void(const LambdaClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateEventSourceMappingRequest&, const Model::CreateEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateFunctionRequest&, const Model::CreateFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteEventSourceMappingRequest&, const Model::DeleteEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteFunctionRequest&, const Model::DeleteFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetAliasRequest&, const Model::GetAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetEventSourceMappingRequest&, const Model::GetEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionRequest&, const Model::GetFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionConfigurationRequest&, const Model::GetFunctionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionConfigurationResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::InvokeRequest&, const Model::InvokeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListEventSourceMappingsRequest&, const Model::ListEventSourceMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventSourceMappingsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListFunctionsRequest&, const Model::ListFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListVersionsByFunctionRequest&, const Model::ListVersionsByFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVersionsByFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PublishVersionRequest&, const Model::PublishVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateEventSourceMappingRequest&, const Model::UpdateEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateFunctionCodeRequest&, const Model::UpdateFunctionCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionCodeResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateFunctionConfigurationRequest&, const Model::UpdateFunctionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionConfigurationResponseReceivedHandler;

  /**
   * <fullname>AWS Lambda</fullname> <p> <b>Overview</b> </p> <p>This is the <i>AWS
   * Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional
   * information. For the service overview, go to <a
   * href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS
   * Lambda</a>, and for information about how the service works, go to <a
   * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
   * Lambda: How it Works</a> in the <i>AWS Lambda Developer Guide</i>.</p>
   */
  class AWS_LAMBDA_API LambdaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LambdaClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~LambdaClient();

        /**
         * <p>Adds a permission to the resource policy associated with the specified AWS
         * Lambda function. You use resource policies to grant permissions to event sources
         * that use <i>push</i> model. In a <i>push</i> model, event sources (such as
         * Amazon S3 and custom applications) invoke your Lambda function. Each permission
         * you add to the resource policy allows an event source, permission to invoke the
         * Lambda function. </p> <p>For information about the push model, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
         * Lambda: How it Works</a>. </p> <p>If you are using versioning, the permissions
         * you add are specific to the Lambda function version or alias you specify in the
         * <code>AddPermission</code> request via the <code>Qualifier</code> parameter. For
         * more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:AddPermission</code> action.</p>
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a permission to the resource policy associated with the specified AWS
         * Lambda function. You use resource policies to grant permissions to event sources
         * that use <i>push</i> model. In a <i>push</i> model, event sources (such as
         * Amazon S3 and custom applications) invoke your Lambda function. Each permission
         * you add to the resource policy allows an event source, permission to invoke the
         * Lambda function. </p> <p>For information about the push model, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
         * Lambda: How it Works</a>. </p> <p>If you are using versioning, the permissions
         * you add are specific to the Lambda function version or alias you specify in the
         * <code>AddPermission</code> request via the <code>Qualifier</code> parameter. For
         * more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:AddPermission</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a permission to the resource policy associated with the specified AWS
         * Lambda function. You use resource policies to grant permissions to event sources
         * that use <i>push</i> model. In a <i>push</i> model, event sources (such as
         * Amazon S3 and custom applications) invoke your Lambda function. Each permission
         * you add to the resource policy allows an event source, permission to invoke the
         * Lambda function. </p> <p>For information about the push model, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
         * Lambda: How it Works</a>. </p> <p>If you are using versioning, the permissions
         * you add are specific to the Lambda function version or alias you specify in the
         * <code>AddPermission</code> request via the <code>Qualifier</code> parameter. For
         * more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:AddPermission</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias that points to the specified Lambda function version. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>Alias names are unique for a given function.
         * This requires permission for the lambda:CreateAlias action.</p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias that points to the specified Lambda function version. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>Alias names are unique for a given function.
         * This requires permission for the lambda:CreateAlias action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias that points to the specified Lambda function version. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>Alias names are unique for a given function.
         * This requires permission for the lambda:CreateAlias action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Identifies a stream as an event source for a Lambda function. It can be
         * either an Amazon Kinesis stream or an Amazon DynamoDB stream. AWS Lambda invokes
         * the specified function when records are posted to the stream.</p> <p>This
         * association between a stream source and a Lambda function is called the event
         * source mapping.</p> <important><p>This event source mapping is relevant only in
         * the AWS Lambda pull model, where AWS Lambda invokes the function. For more
         * information, go to <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
         * Lambda: How it Works</a> in the <i>AWS Lambda Developer Guide</i>.</p>
         * </important> <p>You provide mapping information (for example, which stream to
         * read from and which Lambda function to invoke) in the request body.</p> <p>Each
         * event source, such as an Amazon Kinesis or a DynamoDB stream, can be associated
         * with multiple AWS Lambda function. A given Lambda function can be associated
         * with multiple AWS event sources.</p> <p>If you are using versioning, you can
         * specify a specific function version or an alias via the function name parameter.
         * For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:CreateEventSourceMapping</code> action.</p>
         */
        virtual Model::CreateEventSourceMappingOutcome CreateEventSourceMapping(const Model::CreateEventSourceMappingRequest& request) const;

        /**
         * <p>Identifies a stream as an event source for a Lambda function. It can be
         * either an Amazon Kinesis stream or an Amazon DynamoDB stream. AWS Lambda invokes
         * the specified function when records are posted to the stream.</p> <p>This
         * association between a stream source and a Lambda function is called the event
         * source mapping.</p> <important><p>This event source mapping is relevant only in
         * the AWS Lambda pull model, where AWS Lambda invokes the function. For more
         * information, go to <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
         * Lambda: How it Works</a> in the <i>AWS Lambda Developer Guide</i>.</p>
         * </important> <p>You provide mapping information (for example, which stream to
         * read from and which Lambda function to invoke) in the request body.</p> <p>Each
         * event source, such as an Amazon Kinesis or a DynamoDB stream, can be associated
         * with multiple AWS Lambda function. A given Lambda function can be associated
         * with multiple AWS event sources.</p> <p>If you are using versioning, you can
         * specify a specific function version or an alias via the function name parameter.
         * For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:CreateEventSourceMapping</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSourceMappingOutcomeCallable CreateEventSourceMappingCallable(const Model::CreateEventSourceMappingRequest& request) const;

        /**
         * <p>Identifies a stream as an event source for a Lambda function. It can be
         * either an Amazon Kinesis stream or an Amazon DynamoDB stream. AWS Lambda invokes
         * the specified function when records are posted to the stream.</p> <p>This
         * association between a stream source and a Lambda function is called the event
         * source mapping.</p> <important><p>This event source mapping is relevant only in
         * the AWS Lambda pull model, where AWS Lambda invokes the function. For more
         * information, go to <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
         * Lambda: How it Works</a> in the <i>AWS Lambda Developer Guide</i>.</p>
         * </important> <p>You provide mapping information (for example, which stream to
         * read from and which Lambda function to invoke) in the request body.</p> <p>Each
         * event source, such as an Amazon Kinesis or a DynamoDB stream, can be associated
         * with multiple AWS Lambda function. A given Lambda function can be associated
         * with multiple AWS event sources.</p> <p>If you are using versioning, you can
         * specify a specific function version or an alias via the function name parameter.
         * For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:CreateEventSourceMapping</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSourceMappingAsync(const Model::CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Lambda function. The function metadata is created from the
         * request parameters, and the code for the function is provided by a .zip file in
         * the request body. If the function name already exists, the operation will fail.
         * Note that the function name is case-sensitive.</p> <p> If you are using
         * versioning, you can also publish a version of the Lambda function you are
         * creating using the <code>Publish</code> parameter. For more information about
         * versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:CreateFunction</code> action.</p>
         */
        virtual Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a new Lambda function. The function metadata is created from the
         * request parameters, and the code for the function is provided by a .zip file in
         * the request body. If the function name already exists, the operation will fail.
         * Note that the function name is case-sensitive.</p> <p> If you are using
         * versioning, you can also publish a version of the Lambda function you are
         * creating using the <code>Publish</code> parameter. For more information about
         * versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:CreateFunction</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a new Lambda function. The function metadata is created from the
         * request parameters, and the code for the function is provided by a .zip file in
         * the request body. If the function name already exists, the operation will fail.
         * Note that the function name is case-sensitive.</p> <p> If you are using
         * versioning, you can also publish a version of the Lambda function you are
         * creating using the <code>Publish</code> parameter. For more information about
         * versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:CreateFunction</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Lambda function alias. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:DeleteAlias action.</p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes the specified Lambda function alias. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:DeleteAlias action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes the specified Lambda function alias. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:DeleteAlias action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an event source mapping. This means AWS Lambda will no longer invoke
         * the function for events in the associated source.</p> <p>This operation requires
         * permission for the <code>lambda:DeleteEventSourceMapping</code> action.</p>
         */
        virtual Model::DeleteEventSourceMappingOutcome DeleteEventSourceMapping(const Model::DeleteEventSourceMappingRequest& request) const;

        /**
         * <p>Removes an event source mapping. This means AWS Lambda will no longer invoke
         * the function for events in the associated source.</p> <p>This operation requires
         * permission for the <code>lambda:DeleteEventSourceMapping</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSourceMappingOutcomeCallable DeleteEventSourceMappingCallable(const Model::DeleteEventSourceMappingRequest& request) const;

        /**
         * <p>Removes an event source mapping. This means AWS Lambda will no longer invoke
         * the function for events in the associated source.</p> <p>This operation requires
         * permission for the <code>lambda:DeleteEventSourceMapping</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSourceMappingAsync(const Model::DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Lambda function code and configuration.</p> <p>If you
         * are using the versioning feature and you don't specify a function version in
         * your <code>DeleteFunction</code> request, AWS Lambda will delete the function,
         * including all its versions, and any aliases pointing to the function versions.
         * To delete a specific function version, you must provide the function version via
         * the <code>Qualifier</code> parameter. For information about function versioning,
         * see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>When you delete a function
         * the associated resource policy is also deleted. You will need to delete the
         * event source mappings explicitly.</p> <p>This operation requires permission for
         * the <code>lambda:DeleteFunction</code> action.</p>
         */
        virtual Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;

        /**
         * <p>Deletes the specified Lambda function code and configuration.</p> <p>If you
         * are using the versioning feature and you don't specify a function version in
         * your <code>DeleteFunction</code> request, AWS Lambda will delete the function,
         * including all its versions, and any aliases pointing to the function versions.
         * To delete a specific function version, you must provide the function version via
         * the <code>Qualifier</code> parameter. For information about function versioning,
         * see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>When you delete a function
         * the associated resource policy is also deleted. You will need to delete the
         * event source mappings explicitly.</p> <p>This operation requires permission for
         * the <code>lambda:DeleteFunction</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request) const;

        /**
         * <p>Deletes the specified Lambda function code and configuration.</p> <p>If you
         * are using the versioning feature and you don't specify a function version in
         * your <code>DeleteFunction</code> request, AWS Lambda will delete the function,
         * including all its versions, and any aliases pointing to the function versions.
         * To delete a specific function version, you must provide the function version via
         * the <code>Qualifier</code> parameter. For information about function versioning,
         * see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>When you delete a function
         * the associated resource policy is also deleted. You will need to delete the
         * event source mappings explicitly.</p> <p>This operation requires permission for
         * the <code>lambda:DeleteFunction</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the specified alias information such as the alias ARN, description,
         * and function version it is pointing to. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * <code>lambda:GetAlias</code> action.</p>
         */
        virtual Model::GetAliasOutcome GetAlias(const Model::GetAliasRequest& request) const;

        /**
         * <p>Returns the specified alias information such as the alias ARN, description,
         * and function version it is pointing to. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * <code>lambda:GetAlias</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAliasOutcomeCallable GetAliasCallable(const Model::GetAliasRequest& request) const;

        /**
         * <p>Returns the specified alias information such as the alias ARN, description,
         * and function version it is pointing to. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * <code>lambda:GetAlias</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAliasAsync(const Model::GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration information for the specified event source mapping (see
         * <a>CreateEventSourceMapping</a>).</p> <p>This operation requires permission for
         * the <code>lambda:GetEventSourceMapping</code> action.</p>
         */
        virtual Model::GetEventSourceMappingOutcome GetEventSourceMapping(const Model::GetEventSourceMappingRequest& request) const;

        /**
         * <p>Returns configuration information for the specified event source mapping (see
         * <a>CreateEventSourceMapping</a>).</p> <p>This operation requires permission for
         * the <code>lambda:GetEventSourceMapping</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventSourceMappingOutcomeCallable GetEventSourceMappingCallable(const Model::GetEventSourceMappingRequest& request) const;

        /**
         * <p>Returns configuration information for the specified event source mapping (see
         * <a>CreateEventSourceMapping</a>).</p> <p>This operation requires permission for
         * the <code>lambda:GetEventSourceMapping</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventSourceMappingAsync(const Model::GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the configuration information of the Lambda function and a presigned
         * URL link to the .zip file you uploaded with <a>CreateFunction</a> so you can
         * download the .zip file. Note that the URL is valid for up to 10 minutes. The
         * configuration information is the same information you provided as parameters
         * when uploading the function.</p> <p>Using the optional <code>Qualifier</code>
         * parameter, you can specify a specific function version for which you want this
         * information. If you don't specify this parameter, the API uses unqualified
         * function ARN which return information about the <code>$LATEST</code> version of
         * the Lambda function. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunction</code> action.</p>
         */
        virtual Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;

        /**
         * <p>Returns the configuration information of the Lambda function and a presigned
         * URL link to the .zip file you uploaded with <a>CreateFunction</a> so you can
         * download the .zip file. Note that the URL is valid for up to 10 minutes. The
         * configuration information is the same information you provided as parameters
         * when uploading the function.</p> <p>Using the optional <code>Qualifier</code>
         * parameter, you can specify a specific function version for which you want this
         * information. If you don't specify this parameter, the API uses unqualified
         * function ARN which return information about the <code>$LATEST</code> version of
         * the Lambda function. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunction</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionOutcomeCallable GetFunctionCallable(const Model::GetFunctionRequest& request) const;

        /**
         * <p>Returns the configuration information of the Lambda function and a presigned
         * URL link to the .zip file you uploaded with <a>CreateFunction</a> so you can
         * download the .zip file. Note that the URL is valid for up to 10 minutes. The
         * configuration information is the same information you provided as parameters
         * when uploading the function.</p> <p>Using the optional <code>Qualifier</code>
         * parameter, you can specify a specific function version for which you want this
         * information. If you don't specify this parameter, the API uses unqualified
         * function ARN which return information about the <code>$LATEST</code> version of
         * the Lambda function. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunction</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the configuration information of the Lambda function. This the same
         * information you provided as parameters when uploading the function by using
         * <a>CreateFunction</a>.</p> <p>If you are using the versioning feature, you can
         * retrieve this information for a specific function version by using the optional
         * <code>Qualifier</code> parameter and specifying the function version or alias
         * that points to it. If you don't provide it, the API returns information about
         * the $LATEST version of the function. For more information about versioning, see
         * <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunctionConfiguration</code> operation.</p>
         */
        virtual Model::GetFunctionConfigurationOutcome GetFunctionConfiguration(const Model::GetFunctionConfigurationRequest& request) const;

        /**
         * <p>Returns the configuration information of the Lambda function. This the same
         * information you provided as parameters when uploading the function by using
         * <a>CreateFunction</a>.</p> <p>If you are using the versioning feature, you can
         * retrieve this information for a specific function version by using the optional
         * <code>Qualifier</code> parameter and specifying the function version or alias
         * that points to it. If you don't provide it, the API returns information about
         * the $LATEST version of the function. For more information about versioning, see
         * <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunctionConfiguration</code> operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionConfigurationOutcomeCallable GetFunctionConfigurationCallable(const Model::GetFunctionConfigurationRequest& request) const;

        /**
         * <p>Returns the configuration information of the Lambda function. This the same
         * information you provided as parameters when uploading the function by using
         * <a>CreateFunction</a>.</p> <p>If you are using the versioning feature, you can
         * retrieve this information for a specific function version by using the optional
         * <code>Qualifier</code> parameter and specifying the function version or alias
         * that points to it. If you don't provide it, the API returns information about
         * the $LATEST version of the function. For more information about versioning, see
         * <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunctionConfiguration</code> operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionConfigurationAsync(const Model::GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the resource policy associated with the specified Lambda
         * function.</p> <p> If you are using the versioning feature, you can get the
         * resource policy associated with the specific Lambda function version or alias by
         * specifying the version or alias name using the <code>Qualifier</code> parameter.
         * For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>For information about adding
         * permissions, see <a>AddPermission</a>.</p> <p>You need permission for the
         * <code>lambda:GetPolicy action.</code> </p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Returns the resource policy associated with the specified Lambda
         * function.</p> <p> If you are using the versioning feature, you can get the
         * resource policy associated with the specific Lambda function version or alias by
         * specifying the version or alias name using the <code>Qualifier</code> parameter.
         * For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>For information about adding
         * permissions, see <a>AddPermission</a>.</p> <p>You need permission for the
         * <code>lambda:GetPolicy action.</code> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Returns the resource policy associated with the specified Lambda
         * function.</p> <p> If you are using the versioning feature, you can get the
         * resource policy associated with the specific Lambda function version or alias by
         * specifying the version or alias name using the <code>Qualifier</code> parameter.
         * For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>For information about adding
         * permissions, see <a>AddPermission</a>.</p> <p>You need permission for the
         * <code>lambda:GetPolicy action.</code> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Invokes a specific Lambda function.</p> <p>If you are using the versioning
         * feature, you can invoke the specific function version by providing function
         * version or alias name that is pointing to the function version using the
         * <code>Qualifier</code> parameter in the request. If you don't provide the
         * <code>Qualifier</code> parameter, the <code>$LATEST</code> version of the Lambda
         * function is invoked. Invocations occur at least once in response to an event and
         * functions must be idempotent to handle this. For information about the
         * versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:InvokeFunction</code> action.</p>
         */
        virtual Model::InvokeOutcome Invoke(const Model::InvokeRequest& request) const;

        /**
         * <p>Invokes a specific Lambda function.</p> <p>If you are using the versioning
         * feature, you can invoke the specific function version by providing function
         * version or alias name that is pointing to the function version using the
         * <code>Qualifier</code> parameter in the request. If you don't provide the
         * <code>Qualifier</code> parameter, the <code>$LATEST</code> version of the Lambda
         * function is invoked. Invocations occur at least once in response to an event and
         * functions must be idempotent to handle this. For information about the
         * versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:InvokeFunction</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request) const;

        /**
         * <p>Invokes a specific Lambda function.</p> <p>If you are using the versioning
         * feature, you can invoke the specific function version by providing function
         * version or alias name that is pointing to the function version using the
         * <code>Qualifier</code> parameter in the request. If you don't provide the
         * <code>Qualifier</code> parameter, the <code>$LATEST</code> version of the Lambda
         * function is invoked. Invocations occur at least once in response to an event and
         * functions must be idempotent to handle this. For information about the
         * versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:InvokeFunction</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InvokeAsync(const Model::InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns list of aliases created for a Lambda function. For each alias, the
         * response includes information such as the alias ARN, description, alias name,
         * and the function version to which it points. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:ListAliases action.</p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Returns list of aliases created for a Lambda function. For each alias, the
         * response includes information such as the alias ARN, description, alias name,
         * and the function version to which it points. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:ListAliases action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Returns list of aliases created for a Lambda function. For each alias, the
         * response includes information such as the alias ARN, description, alias name,
         * and the function version to which it points. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:ListAliases action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of event source mappings you created using the
         * <code>CreateEventSourceMapping</code> (see <a>CreateEventSourceMapping</a>).
         * </p> <p>For each mapping, the API returns configuration information. You can
         * optionally specify filters to retrieve specific event source mappings.</p> <p>If
         * you are using the versioning feature, you can get list of event source mappings
         * for a specific Lambda function version or an alias as described in the
         * <code>FunctionName</code> parameter. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:ListEventSourceMappings</code> action.</p>
         */
        virtual Model::ListEventSourceMappingsOutcome ListEventSourceMappings(const Model::ListEventSourceMappingsRequest& request) const;

        /**
         * <p>Returns a list of event source mappings you created using the
         * <code>CreateEventSourceMapping</code> (see <a>CreateEventSourceMapping</a>).
         * </p> <p>For each mapping, the API returns configuration information. You can
         * optionally specify filters to retrieve specific event source mappings.</p> <p>If
         * you are using the versioning feature, you can get list of event source mappings
         * for a specific Lambda function version or an alias as described in the
         * <code>FunctionName</code> parameter. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:ListEventSourceMappings</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventSourceMappingsOutcomeCallable ListEventSourceMappingsCallable(const Model::ListEventSourceMappingsRequest& request) const;

        /**
         * <p>Returns a list of event source mappings you created using the
         * <code>CreateEventSourceMapping</code> (see <a>CreateEventSourceMapping</a>).
         * </p> <p>For each mapping, the API returns configuration information. You can
         * optionally specify filters to retrieve specific event source mappings.</p> <p>If
         * you are using the versioning feature, you can get list of event source mappings
         * for a specific Lambda function version or an alias as described in the
         * <code>FunctionName</code> parameter. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:ListEventSourceMappings</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventSourceMappingsAsync(const Model::ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of your Lambda functions. For each function, the response
         * includes the function configuration information. You must use <a>GetFunction</a>
         * to retrieve the code for your function.</p> <p>This operation requires
         * permission for the <code>lambda:ListFunctions</code> action.</p> <p>If you are
         * using versioning feature, the response returns list of $LATEST versions of your
         * functions. For information about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p>
         */
        virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>Returns a list of your Lambda functions. For each function, the response
         * includes the function configuration information. You must use <a>GetFunction</a>
         * to retrieve the code for your function.</p> <p>This operation requires
         * permission for the <code>lambda:ListFunctions</code> action.</p> <p>If you are
         * using versioning feature, the response returns list of $LATEST versions of your
         * functions. For information about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>Returns a list of your Lambda functions. For each function, the response
         * includes the function configuration information. You must use <a>GetFunction</a>
         * to retrieve the code for your function.</p> <p>This operation requires
         * permission for the <code>lambda:ListFunctions</code> action.</p> <p>If you are
         * using versioning feature, the response returns list of $LATEST versions of your
         * functions. For information about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all versions of a function. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p>
         */
        virtual Model::ListVersionsByFunctionOutcome ListVersionsByFunction(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * <p>List all versions of a function. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVersionsByFunctionOutcomeCallable ListVersionsByFunctionCallable(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * <p>List all versions of a function. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVersionsByFunctionAsync(const Model::ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Publishes a version of your function from the current snapshot of $LATEST.
         * That is, AWS Lambda takes a snapshot of the function code and configuration
         * information from $LATEST and publishes a new version. The code and configuration
         * cannot be modified after publication. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p>
         */
        virtual Model::PublishVersionOutcome PublishVersion(const Model::PublishVersionRequest& request) const;

        /**
         * <p>Publishes a version of your function from the current snapshot of $LATEST.
         * That is, AWS Lambda takes a snapshot of the function code and configuration
         * information from $LATEST and publishes a new version. The code and configuration
         * cannot be modified after publication. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishVersionOutcomeCallable PublishVersionCallable(const Model::PublishVersionRequest& request) const;

        /**
         * <p>Publishes a version of your function from the current snapshot of $LATEST.
         * That is, AWS Lambda takes a snapshot of the function code and configuration
         * information from $LATEST and publishes a new version. The code and configuration
         * cannot be modified after publication. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishVersionAsync(const Model::PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can remove individual permissions from an resource policy associated with
         * a Lambda function by providing a statement ID that you provided when you added
         * the permission.</p> <p>If you are using versioning, the permissions you remove
         * are specific to the Lambda function version or alias you specify in the
         * <code>AddPermission</code> request via the <code>Qualifier</code> parameter. For
         * more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>Note that removal of a
         * permission will cause an active event source to lose permission to the
         * function.</p> <p>You need permission for the
         * <code>lambda:RemovePermission</code> action.</p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>You can remove individual permissions from an resource policy associated with
         * a Lambda function by providing a statement ID that you provided when you added
         * the permission.</p> <p>If you are using versioning, the permissions you remove
         * are specific to the Lambda function version or alias you specify in the
         * <code>AddPermission</code> request via the <code>Qualifier</code> parameter. For
         * more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>Note that removal of a
         * permission will cause an active event source to lose permission to the
         * function.</p> <p>You need permission for the
         * <code>lambda:RemovePermission</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>You can remove individual permissions from an resource policy associated with
         * a Lambda function by providing a statement ID that you provided when you added
         * the permission.</p> <p>If you are using versioning, the permissions you remove
         * are specific to the Lambda function version or alias you specify in the
         * <code>AddPermission</code> request via the <code>Qualifier</code> parameter. For
         * more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>Note that removal of a
         * permission will cause an active event source to lose permission to the
         * function.</p> <p>You need permission for the
         * <code>lambda:RemovePermission</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Using this API you can update the function version to which the alias points
         * and the alias description. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:UpdateAlias action.</p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Using this API you can update the function version to which the alias points
         * and the alias description. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:UpdateAlias action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Using this API you can update the function version to which the alias points
         * and the alias description. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:UpdateAlias action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can update an event source mapping. This is useful if you want to change
         * the parameters of the existing mapping without losing your position in the
         * stream. You can change which function will receive the stream records, but to
         * change the stream itself, you must create a new mapping.</p> <p>If you are using
         * the versioning feature, you can update the event source mapping to map to a
         * specific Lambda function version or alias as described in the
         * <code>FunctionName</code> parameter. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>If you disable the event
         * source mapping, AWS Lambda stops polling. If you enable again, it will resume
         * polling from the time it had stopped polling, so you don't lose processing of
         * any records. However, if you delete event source mapping and create it again, it
         * will reset.</p> <p>This operation requires permission for the
         * <code>lambda:UpdateEventSourceMapping</code> action.</p>
         */
        virtual Model::UpdateEventSourceMappingOutcome UpdateEventSourceMapping(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * <p>You can update an event source mapping. This is useful if you want to change
         * the parameters of the existing mapping without losing your position in the
         * stream. You can change which function will receive the stream records, but to
         * change the stream itself, you must create a new mapping.</p> <p>If you are using
         * the versioning feature, you can update the event source mapping to map to a
         * specific Lambda function version or alias as described in the
         * <code>FunctionName</code> parameter. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>If you disable the event
         * source mapping, AWS Lambda stops polling. If you enable again, it will resume
         * polling from the time it had stopped polling, so you don't lose processing of
         * any records. However, if you delete event source mapping and create it again, it
         * will reset.</p> <p>This operation requires permission for the
         * <code>lambda:UpdateEventSourceMapping</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventSourceMappingOutcomeCallable UpdateEventSourceMappingCallable(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * <p>You can update an event source mapping. This is useful if you want to change
         * the parameters of the existing mapping without losing your position in the
         * stream. You can change which function will receive the stream records, but to
         * change the stream itself, you must create a new mapping.</p> <p>If you are using
         * the versioning feature, you can update the event source mapping to map to a
         * specific Lambda function version or alias as described in the
         * <code>FunctionName</code> parameter. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>If you disable the event
         * source mapping, AWS Lambda stops polling. If you enable again, it will resume
         * polling from the time it had stopped polling, so you don't lose processing of
         * any records. However, if you delete event source mapping and create it again, it
         * will reset.</p> <p>This operation requires permission for the
         * <code>lambda:UpdateEventSourceMapping</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventSourceMappingAsync(const Model::UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the code for the specified Lambda function. This operation must only
         * be used on an existing Lambda function and cannot be used to update the function
         * configuration.</p> <p>If you are using the versioning feature, note this API
         * will always update the $LATEST version of your Lambda function. For information
         * about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionCode</code> action.</p>
         */
        virtual Model::UpdateFunctionCodeOutcome UpdateFunctionCode(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * <p>Updates the code for the specified Lambda function. This operation must only
         * be used on an existing Lambda function and cannot be used to update the function
         * configuration.</p> <p>If you are using the versioning feature, note this API
         * will always update the $LATEST version of your Lambda function. For information
         * about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionCode</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionCodeOutcomeCallable UpdateFunctionCodeCallable(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * <p>Updates the code for the specified Lambda function. This operation must only
         * be used on an existing Lambda function and cannot be used to update the function
         * configuration.</p> <p>If you are using the versioning feature, note this API
         * will always update the $LATEST version of your Lambda function. For information
         * about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionCode</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionCodeAsync(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration parameters for the specified Lambda function by
         * using the values provided in the request. You provide only the parameters you
         * want to change. This operation must only be used on an existing Lambda function
         * and cannot be used to update the function's code.</p> <p>If you are using the
         * versioning feature, note this API will always update the $LATEST version of your
         * Lambda function. For information about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionConfiguration</code> action.</p>
         */
        virtual Model::UpdateFunctionConfigurationOutcome UpdateFunctionConfiguration(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * <p>Updates the configuration parameters for the specified Lambda function by
         * using the values provided in the request. You provide only the parameters you
         * want to change. This operation must only be used on an existing Lambda function
         * and cannot be used to update the function's code.</p> <p>If you are using the
         * versioning feature, note this API will always update the $LATEST version of your
         * Lambda function. For information about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionConfiguration</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionConfigurationOutcomeCallable UpdateFunctionConfigurationCallable(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * <p>Updates the configuration parameters for the specified Lambda function by
         * using the values provided in the request. You provide only the parameters you
         * want to change. This operation must only be used on an existing Lambda function
         * and cannot be used to update the function's code.</p> <p>If you are using the
         * versioning feature, note this API will always update the $LATEST version of your
         * Lambda function. For information about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionConfiguration</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionConfigurationAsync(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventSourceMappingAsyncHelper(const Model::CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFunctionAsyncHelper(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventSourceMappingAsyncHelper(const Model::DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionAsyncHelper(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAliasAsyncHelper(const Model::GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventSourceMappingAsyncHelper(const Model::GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionAsyncHelper(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionConfigurationAsyncHelper(const Model::GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InvokeAsyncHelper(const Model::InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventSourceMappingsAsyncHelper(const Model::ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFunctionsAsyncHelper(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVersionsByFunctionAsyncHelper(const Model::ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishVersionAsyncHelper(const Model::PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEventSourceMappingAsyncHelper(const Model::UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionCodeAsyncHelper(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionConfigurationAsyncHelper(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Lambda
} // namespace Aws
