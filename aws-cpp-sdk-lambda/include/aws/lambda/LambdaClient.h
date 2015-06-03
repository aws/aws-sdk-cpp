/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/AddPermissionResult.h>
#include <aws/lambda/model/CreateEventSourceMappingResult.h>
#include <aws/lambda/model/CreateFunctionResult.h>
#include <aws/lambda/model/DeleteEventSourceMappingResult.h>
#include <aws/lambda/model/GetEventSourceMappingResult.h>
#include <aws/lambda/model/GetFunctionResult.h>
#include <aws/lambda/model/GetFunctionConfigurationResult.h>
#include <aws/lambda/model/GetPolicyResult.h>
#include <aws/lambda/model/InvokeResult.h>
#include <aws/lambda/model/ListEventSourceMappingsResult.h>
#include <aws/lambda/model/ListFunctionsResult.h>
#include <aws/lambda/model/UpdateEventSourceMappingResult.h>
#include <aws/lambda/model/UpdateFunctionCodeResult.h>
#include <aws/lambda/model/UpdateFunctionConfigurationResult.h>
#include <aws/core/NoResult.h>
#include <future>

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
  class CreateEventSourceMappingRequest;
  class CreateFunctionRequest;
  class DeleteEventSourceMappingRequest;
  class DeleteFunctionRequest;
  class GetEventSourceMappingRequest;
  class GetFunctionRequest;
  class GetFunctionConfigurationRequest;
  class GetPolicyRequest;
  class InvokeRequest;
  class ListEventSourceMappingsRequest;
  class ListFunctionsRequest;
  class RemovePermissionRequest;
  class UpdateEventSourceMappingRequest;
  class UpdateFunctionCodeRequest;
  class UpdateFunctionConfigurationRequest;

  typedef Utils::Outcome<AddPermissionResult, Client::AWSError<LambdaErrors>> AddPermissionOutcome;
  typedef Utils::Outcome<CreateEventSourceMappingResult, Client::AWSError<LambdaErrors>> CreateEventSourceMappingOutcome;
  typedef Utils::Outcome<CreateFunctionResult, Client::AWSError<LambdaErrors>> CreateFunctionOutcome;
  typedef Utils::Outcome<DeleteEventSourceMappingResult, Client::AWSError<LambdaErrors>> DeleteEventSourceMappingOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<LambdaErrors>> DeleteFunctionOutcome;
  typedef Utils::Outcome<GetEventSourceMappingResult, Client::AWSError<LambdaErrors>> GetEventSourceMappingOutcome;
  typedef Utils::Outcome<GetFunctionResult, Client::AWSError<LambdaErrors>> GetFunctionOutcome;
  typedef Utils::Outcome<GetFunctionConfigurationResult, Client::AWSError<LambdaErrors>> GetFunctionConfigurationOutcome;
  typedef Utils::Outcome<GetPolicyResult, Client::AWSError<LambdaErrors>> GetPolicyOutcome;
  typedef Utils::Outcome<InvokeResult, Client::AWSError<LambdaErrors>> InvokeOutcome;
  typedef Utils::Outcome<ListEventSourceMappingsResult, Client::AWSError<LambdaErrors>> ListEventSourceMappingsOutcome;
  typedef Utils::Outcome<ListFunctionsResult, Client::AWSError<LambdaErrors>> ListFunctionsOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<LambdaErrors>> RemovePermissionOutcome;
  typedef Utils::Outcome<UpdateEventSourceMappingResult, Client::AWSError<LambdaErrors>> UpdateEventSourceMappingOutcome;
  typedef Utils::Outcome<UpdateFunctionCodeResult, Client::AWSError<LambdaErrors>> UpdateFunctionCodeOutcome;
  typedef Utils::Outcome<UpdateFunctionConfigurationResult, Client::AWSError<LambdaErrors>> UpdateFunctionConfigurationOutcome;

  typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
  typedef std::future<CreateEventSourceMappingOutcome> CreateEventSourceMappingOutcomeCallable;
  typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
  typedef std::future<DeleteEventSourceMappingOutcome> DeleteEventSourceMappingOutcomeCallable;
  typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
  typedef std::future<GetEventSourceMappingOutcome> GetEventSourceMappingOutcomeCallable;
  typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
  typedef std::future<GetFunctionConfigurationOutcome> GetFunctionConfigurationOutcomeCallable;
  typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
  typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
  typedef std::future<ListEventSourceMappingsOutcome> ListEventSourceMappingsOutcomeCallable;
  typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
  typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
  typedef std::future<UpdateEventSourceMappingOutcome> UpdateEventSourceMappingOutcomeCallable;
  typedef std::future<UpdateFunctionCodeOutcome> UpdateFunctionCodeOutcomeCallable;
  typedef std::future<UpdateFunctionConfigurationOutcome> UpdateFunctionConfigurationOutcomeCallable;
} // namespace Model

  class LambdaClient;

  typedef Aws::Utils::Event<LambdaClient, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&> AddPermissionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::CreateEventSourceMappingRequest&, const Model::CreateEventSourceMappingOutcome&> CreateEventSourceMappingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::CreateFunctionRequest&, const Model::CreateFunctionOutcome&> CreateFunctionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::DeleteEventSourceMappingRequest&, const Model::DeleteEventSourceMappingOutcome&> DeleteEventSourceMappingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::DeleteFunctionRequest&, const Model::DeleteFunctionOutcome&> DeleteFunctionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::GetEventSourceMappingRequest&, const Model::GetEventSourceMappingOutcome&> GetEventSourceMappingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::GetFunctionRequest&, const Model::GetFunctionOutcome&> GetFunctionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::GetFunctionConfigurationRequest&, const Model::GetFunctionConfigurationOutcome&> GetFunctionConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&> GetPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::InvokeRequest&, const Model::InvokeOutcome&> InvokeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::ListEventSourceMappingsRequest&, const Model::ListEventSourceMappingsOutcome&> ListEventSourceMappingsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::ListFunctionsRequest&, const Model::ListFunctionsOutcome&> ListFunctionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&> RemovePermissionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::UpdateEventSourceMappingRequest&, const Model::UpdateEventSourceMappingOutcome&> UpdateEventSourceMappingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::UpdateFunctionCodeRequest&, const Model::UpdateFunctionCodeOutcome&> UpdateFunctionCodeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<LambdaClient, const Model::UpdateFunctionConfigurationRequest&, const Model::UpdateFunctionConfigurationOutcome&> UpdateFunctionConfigurationOutcomeReceivedEvent;

  /*
    <fullname>AWS Lambda</fullname> <p><b>Overview</b></p> <p>This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the service overview, go to <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for information about how the service works, go to <a href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <i>AWS Lambda Developer Guide</i>.</p>
  */
  class AWS_LAMBDA_API LambdaClient : public Aws::Client::AWSJsonRestClient
  {
    public:
      typedef Aws::Client::AWSJsonRestClient BASECLASS;

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
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~LambdaClient();

     /*
       <p>Adds a permission to the access policy associated with the specified AWS Lambda function. In a "push event" model, the access policy attached to the Lambda function grants Amazon S3 or a user application permission for the Lambda <code>lambda:Invoke</code> action. For information about the push model, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a>. Each Lambda function has one access policy associated with it. You can use the <code>AddPermission</code> API to add a permission to the policy. You have one access policy but it can have multiple permission statements.</p> <p>This operation requires permission for the <code>lambda:AddPermission</code> action.</p>
     */
     Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

     /*
       <p>Adds a permission to the access policy associated with the specified AWS Lambda function. In a "push event" model, the access policy attached to the Lambda function grants Amazon S3 or a user application permission for the Lambda <code>lambda:Invoke</code> action. For information about the push model, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a>. Each Lambda function has one access policy associated with it. You can use the <code>AddPermission</code> API to add a permission to the policy. You have one access policy but it can have multiple permission statements.</p> <p>This operation requires permission for the <code>lambda:AddPermission</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

     /*
       <p>Adds a permission to the access policy associated with the specified AWS Lambda function. In a "push event" model, the access policy attached to the Lambda function grants Amazon S3 or a user application permission for the Lambda <code>lambda:Invoke</code> action. For information about the push model, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a>. Each Lambda function has one access policy associated with it. You can use the <code>AddPermission</code> API to add a permission to the policy. You have one access policy but it can have multiple permission statements.</p> <p>This operation requires permission for the <code>lambda:AddPermission</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddPermissionAsync(const Model::AddPermissionRequest& request) const;

     /*
       <p>Identifies a stream as an event source for a Lambda function. It can be either an Amazon Kinesis stream or an Amazon DynamoDB stream. AWS Lambda invokes the specified function when records are posted to the stream.</p> <p>This is the pull model, where AWS Lambda invokes the function. For more information, go to <a href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <i>AWS Lambda Developer Guide</i>.</p> <p>This association between an Amazon Kinesis stream and a Lambda function is called the event source mapping. You provide the configuration information (for example, which stream to read from and which Lambda function to invoke) for the event source mapping in the request body.</p> <p> Each event source, such as an Amazon Kinesis or a DynamoDB stream, can be associated with multiple AWS Lambda function. A given Lambda function can be associated with multiple AWS event sources. </p> <p>This operation requires permission for the <code>lambda:CreateEventSourceMapping</code> action.</p>
     */
     Model::CreateEventSourceMappingOutcome CreateEventSourceMapping(const Model::CreateEventSourceMappingRequest& request) const;

     /*
       <p>Identifies a stream as an event source for a Lambda function. It can be either an Amazon Kinesis stream or an Amazon DynamoDB stream. AWS Lambda invokes the specified function when records are posted to the stream.</p> <p>This is the pull model, where AWS Lambda invokes the function. For more information, go to <a href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <i>AWS Lambda Developer Guide</i>.</p> <p>This association between an Amazon Kinesis stream and a Lambda function is called the event source mapping. You provide the configuration information (for example, which stream to read from and which Lambda function to invoke) for the event source mapping in the request body.</p> <p> Each event source, such as an Amazon Kinesis or a DynamoDB stream, can be associated with multiple AWS Lambda function. A given Lambda function can be associated with multiple AWS event sources. </p> <p>This operation requires permission for the <code>lambda:CreateEventSourceMapping</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateEventSourceMappingOutcomeCallable CreateEventSourceMappingCallable(const Model::CreateEventSourceMappingRequest& request) const;

     /*
       <p>Identifies a stream as an event source for a Lambda function. It can be either an Amazon Kinesis stream or an Amazon DynamoDB stream. AWS Lambda invokes the specified function when records are posted to the stream.</p> <p>This is the pull model, where AWS Lambda invokes the function. For more information, go to <a href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <i>AWS Lambda Developer Guide</i>.</p> <p>This association between an Amazon Kinesis stream and a Lambda function is called the event source mapping. You provide the configuration information (for example, which stream to read from and which Lambda function to invoke) for the event source mapping in the request body.</p> <p> Each event source, such as an Amazon Kinesis or a DynamoDB stream, can be associated with multiple AWS Lambda function. A given Lambda function can be associated with multiple AWS event sources. </p> <p>This operation requires permission for the <code>lambda:CreateEventSourceMapping</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateEventSourceMappingAsync(const Model::CreateEventSourceMappingRequest& request) const;

     /*
       <p>Creates a new Lambda function. The function metadata is created from the request parameters, and the code for the function is provided by a .zip file in the request body. If the function name already exists, the operation will fail. Note that the function name is case-sensitive. </p> <p>This operation requires permission for the <code>lambda:CreateFunction</code> action.</p>
     */
     Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;

     /*
       <p>Creates a new Lambda function. The function metadata is created from the request parameters, and the code for the function is provided by a .zip file in the request body. If the function name already exists, the operation will fail. Note that the function name is case-sensitive. </p> <p>This operation requires permission for the <code>lambda:CreateFunction</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request) const;

     /*
       <p>Creates a new Lambda function. The function metadata is created from the request parameters, and the code for the function is provided by a .zip file in the request body. If the function name already exists, the operation will fail. Note that the function name is case-sensitive. </p> <p>This operation requires permission for the <code>lambda:CreateFunction</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateFunctionAsync(const Model::CreateFunctionRequest& request) const;

     /*
       <p>Removes an event source mapping. This means AWS Lambda will no longer invoke the function for events in the associated source.</p> <p>This operation requires permission for the <code>lambda:DeleteEventSourceMapping</code> action.</p>
     */
     Model::DeleteEventSourceMappingOutcome DeleteEventSourceMapping(const Model::DeleteEventSourceMappingRequest& request) const;

     /*
       <p>Removes an event source mapping. This means AWS Lambda will no longer invoke the function for events in the associated source.</p> <p>This operation requires permission for the <code>lambda:DeleteEventSourceMapping</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteEventSourceMappingOutcomeCallable DeleteEventSourceMappingCallable(const Model::DeleteEventSourceMappingRequest& request) const;

     /*
       <p>Removes an event source mapping. This means AWS Lambda will no longer invoke the function for events in the associated source.</p> <p>This operation requires permission for the <code>lambda:DeleteEventSourceMapping</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteEventSourceMappingAsync(const Model::DeleteEventSourceMappingRequest& request) const;

     /*
       <p>Deletes the specified Lambda function code and configuration.</p> <p>When you delete a function the associated access policy is also deleted. You will need to delete the event source mappings explicitly.</p> <p>This operation requires permission for the <code>lambda:DeleteFunction</code> action.</p>
     */
     Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;

     /*
       <p>Deletes the specified Lambda function code and configuration.</p> <p>When you delete a function the associated access policy is also deleted. You will need to delete the event source mappings explicitly.</p> <p>This operation requires permission for the <code>lambda:DeleteFunction</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request) const;

     /*
       <p>Deletes the specified Lambda function code and configuration.</p> <p>When you delete a function the associated access policy is also deleted. You will need to delete the event source mappings explicitly.</p> <p>This operation requires permission for the <code>lambda:DeleteFunction</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request) const;

     /*
       <p>Returns configuration information for the specified event source mapping (see <a>CreateEventSourceMapping</a>).</p> <p>This operation requires permission for the <code>lambda:GetEventSourceMapping</code> action.</p>
     */
     Model::GetEventSourceMappingOutcome GetEventSourceMapping(const Model::GetEventSourceMappingRequest& request) const;

     /*
       <p>Returns configuration information for the specified event source mapping (see <a>CreateEventSourceMapping</a>).</p> <p>This operation requires permission for the <code>lambda:GetEventSourceMapping</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetEventSourceMappingOutcomeCallable GetEventSourceMappingCallable(const Model::GetEventSourceMappingRequest& request) const;

     /*
       <p>Returns configuration information for the specified event source mapping (see <a>CreateEventSourceMapping</a>).</p> <p>This operation requires permission for the <code>lambda:GetEventSourceMapping</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetEventSourceMappingAsync(const Model::GetEventSourceMappingRequest& request) const;

     /*
       <p>Returns the configuration information of the Lambda function and a presigned URL link to the .zip file you uploaded with <a>CreateFunction</a> so you can download the .zip file. Note that the URL is valid for up to 10 minutes. The configuration information is the same information you provided as parameters when uploading the function.</p> <p>This operation requires permission for the <code>lambda:GetFunction</code> action.</p>
     */
     Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;

     /*
       <p>Returns the configuration information of the Lambda function and a presigned URL link to the .zip file you uploaded with <a>CreateFunction</a> so you can download the .zip file. Note that the URL is valid for up to 10 minutes. The configuration information is the same information you provided as parameters when uploading the function.</p> <p>This operation requires permission for the <code>lambda:GetFunction</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetFunctionOutcomeCallable GetFunctionCallable(const Model::GetFunctionRequest& request) const;

     /*
       <p>Returns the configuration information of the Lambda function and a presigned URL link to the .zip file you uploaded with <a>CreateFunction</a> so you can download the .zip file. Note that the URL is valid for up to 10 minutes. The configuration information is the same information you provided as parameters when uploading the function.</p> <p>This operation requires permission for the <code>lambda:GetFunction</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetFunctionAsync(const Model::GetFunctionRequest& request) const;

     /*
       <p>Returns the configuration information of the Lambda function. This the same information you provided as parameters when uploading the function by using <a>CreateFunction</a>.</p> <p>This operation requires permission for the <code>lambda:GetFunctionConfiguration</code> operation.</p>
     */
     Model::GetFunctionConfigurationOutcome GetFunctionConfiguration(const Model::GetFunctionConfigurationRequest& request) const;

     /*
       <p>Returns the configuration information of the Lambda function. This the same information you provided as parameters when uploading the function by using <a>CreateFunction</a>.</p> <p>This operation requires permission for the <code>lambda:GetFunctionConfiguration</code> operation.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetFunctionConfigurationOutcomeCallable GetFunctionConfigurationCallable(const Model::GetFunctionConfigurationRequest& request) const;

     /*
       <p>Returns the configuration information of the Lambda function. This the same information you provided as parameters when uploading the function by using <a>CreateFunction</a>.</p> <p>This operation requires permission for the <code>lambda:GetFunctionConfiguration</code> operation.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetFunctionConfigurationAsync(const Model::GetFunctionConfigurationRequest& request) const;

     /*
       <p>Returns the access policy, containing a list of permissions granted via the <code>AddPermission</code> API, associated with the specified bucket.</p> <p>You need permission for the <code>lambda:GetPolicy action.</code></p>
     */
     Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

     /*
       <p>Returns the access policy, containing a list of permissions granted via the <code>AddPermission</code> API, associated with the specified bucket.</p> <p>You need permission for the <code>lambda:GetPolicy action.</code></p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

     /*
       <p>Returns the access policy, containing a list of permissions granted via the <code>AddPermission</code> API, associated with the specified bucket.</p> <p>You need permission for the <code>lambda:GetPolicy action.</code></p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetPolicyAsync(const Model::GetPolicyRequest& request) const;

     /*
       <p> Invokes a specified Lambda function. </p> <p>This operation requires permission for the <code>lambda:InvokeFunction</code> action.</p>
     */
     Model::InvokeOutcome Invoke(const Model::InvokeRequest& request) const;

     /*
       <p> Invokes a specified Lambda function. </p> <p>This operation requires permission for the <code>lambda:InvokeFunction</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request) const;

     /*
       <p> Invokes a specified Lambda function. </p> <p>This operation requires permission for the <code>lambda:InvokeFunction</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void InvokeAsync(const Model::InvokeRequest& request) const;

     /*
       <p>Returns a list of event source mappings you created using the <code>CreateEventSourceMapping</code> (see <a>CreateEventSourceMapping</a>), where you identify a stream as an event source. This list does not include Amazon S3 event sources. </p> <p>For each mapping, the API returns configuration information. You can optionally specify filters to retrieve specific event source mappings.</p> <p>This operation requires permission for the <code>lambda:ListEventSourceMappings</code> action.</p>
     */
     Model::ListEventSourceMappingsOutcome ListEventSourceMappings(const Model::ListEventSourceMappingsRequest& request) const;

     /*
       <p>Returns a list of event source mappings you created using the <code>CreateEventSourceMapping</code> (see <a>CreateEventSourceMapping</a>), where you identify a stream as an event source. This list does not include Amazon S3 event sources. </p> <p>For each mapping, the API returns configuration information. You can optionally specify filters to retrieve specific event source mappings.</p> <p>This operation requires permission for the <code>lambda:ListEventSourceMappings</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListEventSourceMappingsOutcomeCallable ListEventSourceMappingsCallable(const Model::ListEventSourceMappingsRequest& request) const;

     /*
       <p>Returns a list of event source mappings you created using the <code>CreateEventSourceMapping</code> (see <a>CreateEventSourceMapping</a>), where you identify a stream as an event source. This list does not include Amazon S3 event sources. </p> <p>For each mapping, the API returns configuration information. You can optionally specify filters to retrieve specific event source mappings.</p> <p>This operation requires permission for the <code>lambda:ListEventSourceMappings</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListEventSourceMappingsAsync(const Model::ListEventSourceMappingsRequest& request) const;

     /*
       <p>Returns a list of your Lambda functions. For each function, the response includes the function configuration information. You must use <a>GetFunction</a> to retrieve the code for your function.</p> <p>This operation requires permission for the <code>lambda:ListFunctions</code> action.</p>
     */
     Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;

     /*
       <p>Returns a list of your Lambda functions. For each function, the response includes the function configuration information. You must use <a>GetFunction</a> to retrieve the code for your function.</p> <p>This operation requires permission for the <code>lambda:ListFunctions</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request) const;

     /*
       <p>Returns a list of your Lambda functions. For each function, the response includes the function configuration information. You must use <a>GetFunction</a> to retrieve the code for your function.</p> <p>This operation requires permission for the <code>lambda:ListFunctions</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListFunctionsAsync(const Model::ListFunctionsRequest& request) const;

     /*
       <p>You can remove individual permissions from an access policy associated with a Lambda function by providing a Statement ID. </p> <p>Note that removal of a permission will cause an active event source to lose permission to the function. </p> <p>You need permission for the <code>lambda:RemovePermission</code> action.</p>
     */
     Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

     /*
       <p>You can remove individual permissions from an access policy associated with a Lambda function by providing a Statement ID. </p> <p>Note that removal of a permission will cause an active event source to lose permission to the function. </p> <p>You need permission for the <code>lambda:RemovePermission</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

     /*
       <p>You can remove individual permissions from an access policy associated with a Lambda function by providing a Statement ID. </p> <p>Note that removal of a permission will cause an active event source to lose permission to the function. </p> <p>You need permission for the <code>lambda:RemovePermission</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemovePermissionAsync(const Model::RemovePermissionRequest& request) const;

     /*
       <p>You can update an event source mapping. This is useful if you want to change the parameters of the existing mapping without losing your position in the stream. You can change which function will receive the stream records, but to change the stream itself, you must create a new mapping. </p> <p>This operation requires permission for the <code>lambda:UpdateEventSourceMapping</code> action.</p>
     */
     Model::UpdateEventSourceMappingOutcome UpdateEventSourceMapping(const Model::UpdateEventSourceMappingRequest& request) const;

     /*
       <p>You can update an event source mapping. This is useful if you want to change the parameters of the existing mapping without losing your position in the stream. You can change which function will receive the stream records, but to change the stream itself, you must create a new mapping. </p> <p>This operation requires permission for the <code>lambda:UpdateEventSourceMapping</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateEventSourceMappingOutcomeCallable UpdateEventSourceMappingCallable(const Model::UpdateEventSourceMappingRequest& request) const;

     /*
       <p>You can update an event source mapping. This is useful if you want to change the parameters of the existing mapping without losing your position in the stream. You can change which function will receive the stream records, but to change the stream itself, you must create a new mapping. </p> <p>This operation requires permission for the <code>lambda:UpdateEventSourceMapping</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateEventSourceMappingAsync(const Model::UpdateEventSourceMappingRequest& request) const;

     /*
       <p> Updates the code for the specified Lambda function. This operation must only be used on an existing Lambda function and cannot be used to update the function configuration. </p> <p>This operation requires permission for the <code>lambda:UpdateFunctionCode</code> action.</p>
     */
     Model::UpdateFunctionCodeOutcome UpdateFunctionCode(const Model::UpdateFunctionCodeRequest& request) const;

     /*
       <p> Updates the code for the specified Lambda function. This operation must only be used on an existing Lambda function and cannot be used to update the function configuration. </p> <p>This operation requires permission for the <code>lambda:UpdateFunctionCode</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateFunctionCodeOutcomeCallable UpdateFunctionCodeCallable(const Model::UpdateFunctionCodeRequest& request) const;

     /*
       <p> Updates the code for the specified Lambda function. This operation must only be used on an existing Lambda function and cannot be used to update the function configuration. </p> <p>This operation requires permission for the <code>lambda:UpdateFunctionCode</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateFunctionCodeAsync(const Model::UpdateFunctionCodeRequest& request) const;

     /*
       <p>Updates the configuration parameters for the specified Lambda function by using the values provided in the request. You provide only the parameters you want to change. This operation must only be used on an existing Lambda function and cannot be used to update the function's code. </p> <p>This operation requires permission for the <code>lambda:UpdateFunctionConfiguration</code> action.</p>
     */
     Model::UpdateFunctionConfigurationOutcome UpdateFunctionConfiguration(const Model::UpdateFunctionConfigurationRequest& request) const;

     /*
       <p>Updates the configuration parameters for the specified Lambda function by using the values provided in the request. You provide only the parameters you want to change. This operation must only be used on an existing Lambda function and cannot be used to update the function's code. </p> <p>This operation requires permission for the <code>lambda:UpdateFunctionConfiguration</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateFunctionConfigurationOutcomeCallable UpdateFunctionConfigurationCallable(const Model::UpdateFunctionConfigurationRequest& request) const;

     /*
       <p>Updates the configuration parameters for the specified Lambda function by using the values provided in the request. You provide only the parameters you want to change. This operation must only be used on an existing Lambda function and cannot be used to update the function's code. </p> <p>This operation requires permission for the <code>lambda:UpdateFunctionConfiguration</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateFunctionConfigurationAsync(const Model::UpdateFunctionConfigurationRequest& request) const;

   /**
    * Adds an event handler for AddPermissionAsync to call upon completion to the handler chain. You need to call this to
    * use AddPermissionAsync.
    */
    inline void RegisterAddPermissionOutcomeReceivedHandler(const AddPermissionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddPermissionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddPermission.
    */
    inline void ClearAllAddPermissionOutcomeReceivedHandlers()
    {
      m_onAddPermissionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateEventSourceMappingAsync to call upon completion to the handler chain. You need to call this to
    * use CreateEventSourceMappingAsync.
    */
    inline void RegisterCreateEventSourceMappingOutcomeReceivedHandler(const CreateEventSourceMappingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateEventSourceMappingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateEventSourceMapping.
    */
    inline void ClearAllCreateEventSourceMappingOutcomeReceivedHandlers()
    {
      m_onCreateEventSourceMappingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateFunctionAsync to call upon completion to the handler chain. You need to call this to
    * use CreateFunctionAsync.
    */
    inline void RegisterCreateFunctionOutcomeReceivedHandler(const CreateFunctionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateFunctionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateFunction.
    */
    inline void ClearAllCreateFunctionOutcomeReceivedHandlers()
    {
      m_onCreateFunctionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteEventSourceMappingAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteEventSourceMappingAsync.
    */
    inline void RegisterDeleteEventSourceMappingOutcomeReceivedHandler(const DeleteEventSourceMappingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteEventSourceMappingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteEventSourceMapping.
    */
    inline void ClearAllDeleteEventSourceMappingOutcomeReceivedHandlers()
    {
      m_onDeleteEventSourceMappingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteFunctionAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteFunctionAsync.
    */
    inline void RegisterDeleteFunctionOutcomeReceivedHandler(const DeleteFunctionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteFunctionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteFunction.
    */
    inline void ClearAllDeleteFunctionOutcomeReceivedHandlers()
    {
      m_onDeleteFunctionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetEventSourceMappingAsync to call upon completion to the handler chain. You need to call this to
    * use GetEventSourceMappingAsync.
    */
    inline void RegisterGetEventSourceMappingOutcomeReceivedHandler(const GetEventSourceMappingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetEventSourceMappingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetEventSourceMapping.
    */
    inline void ClearAllGetEventSourceMappingOutcomeReceivedHandlers()
    {
      m_onGetEventSourceMappingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetFunctionAsync to call upon completion to the handler chain. You need to call this to
    * use GetFunctionAsync.
    */
    inline void RegisterGetFunctionOutcomeReceivedHandler(const GetFunctionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetFunctionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetFunction.
    */
    inline void ClearAllGetFunctionOutcomeReceivedHandlers()
    {
      m_onGetFunctionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetFunctionConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use GetFunctionConfigurationAsync.
    */
    inline void RegisterGetFunctionConfigurationOutcomeReceivedHandler(const GetFunctionConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetFunctionConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetFunctionConfiguration.
    */
    inline void ClearAllGetFunctionConfigurationOutcomeReceivedHandlers()
    {
      m_onGetFunctionConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use GetPolicyAsync.
    */
    inline void RegisterGetPolicyOutcomeReceivedHandler(const GetPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetPolicy.
    */
    inline void ClearAllGetPolicyOutcomeReceivedHandlers()
    {
      m_onGetPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for InvokeAsync to call upon completion to the handler chain. You need to call this to
    * use InvokeAsync.
    */
    inline void RegisterInvokeOutcomeReceivedHandler(const InvokeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onInvokeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for Invoke.
    */
    inline void ClearAllInvokeOutcomeReceivedHandlers()
    {
      m_onInvokeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListEventSourceMappingsAsync to call upon completion to the handler chain. You need to call this to
    * use ListEventSourceMappingsAsync.
    */
    inline void RegisterListEventSourceMappingsOutcomeReceivedHandler(const ListEventSourceMappingsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListEventSourceMappingsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListEventSourceMappings.
    */
    inline void ClearAllListEventSourceMappingsOutcomeReceivedHandlers()
    {
      m_onListEventSourceMappingsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListFunctionsAsync to call upon completion to the handler chain. You need to call this to
    * use ListFunctionsAsync.
    */
    inline void RegisterListFunctionsOutcomeReceivedHandler(const ListFunctionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListFunctionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListFunctions.
    */
    inline void ClearAllListFunctionsOutcomeReceivedHandlers()
    {
      m_onListFunctionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemovePermissionAsync to call upon completion to the handler chain. You need to call this to
    * use RemovePermissionAsync.
    */
    inline void RegisterRemovePermissionOutcomeReceivedHandler(const RemovePermissionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemovePermissionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemovePermission.
    */
    inline void ClearAllRemovePermissionOutcomeReceivedHandlers()
    {
      m_onRemovePermissionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateEventSourceMappingAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateEventSourceMappingAsync.
    */
    inline void RegisterUpdateEventSourceMappingOutcomeReceivedHandler(const UpdateEventSourceMappingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateEventSourceMappingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateEventSourceMapping.
    */
    inline void ClearAllUpdateEventSourceMappingOutcomeReceivedHandlers()
    {
      m_onUpdateEventSourceMappingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateFunctionCodeAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateFunctionCodeAsync.
    */
    inline void RegisterUpdateFunctionCodeOutcomeReceivedHandler(const UpdateFunctionCodeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateFunctionCodeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateFunctionCode.
    */
    inline void ClearAllUpdateFunctionCodeOutcomeReceivedHandlers()
    {
      m_onUpdateFunctionCodeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateFunctionConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateFunctionConfigurationAsync.
    */
    inline void RegisterUpdateFunctionConfigurationOutcomeReceivedHandler(const UpdateFunctionConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateFunctionConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateFunctionConfiguration.
    */
    inline void ClearAllUpdateFunctionConfigurationOutcomeReceivedHandlers()
    {
      m_onUpdateFunctionConfigurationOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request) const;
    void CreateEventSourceMappingAsyncHelper(const Model::CreateEventSourceMappingRequest& request) const;
    void CreateFunctionAsyncHelper(const Model::CreateFunctionRequest& request) const;
    void DeleteEventSourceMappingAsyncHelper(const Model::DeleteEventSourceMappingRequest& request) const;
    void DeleteFunctionAsyncHelper(const Model::DeleteFunctionRequest& request) const;
    void GetEventSourceMappingAsyncHelper(const Model::GetEventSourceMappingRequest& request) const;
    void GetFunctionAsyncHelper(const Model::GetFunctionRequest& request) const;
    void GetFunctionConfigurationAsyncHelper(const Model::GetFunctionConfigurationRequest& request) const;
    void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request) const;
    void InvokeAsyncHelper(const Model::InvokeRequest& request) const;
    void ListEventSourceMappingsAsyncHelper(const Model::ListEventSourceMappingsRequest& request) const;
    void ListFunctionsAsyncHelper(const Model::ListFunctionsRequest& request) const;
    void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request) const;
    void UpdateEventSourceMappingAsyncHelper(const Model::UpdateEventSourceMappingRequest& request) const;
    void UpdateFunctionCodeAsyncHelper(const Model::UpdateFunctionCodeRequest& request) const;
    void UpdateFunctionConfigurationAsyncHelper(const Model::UpdateFunctionConfigurationRequest& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AddPermissionOutcomeReceivedEvent m_onAddPermissionOutcomeReceived;
    CreateEventSourceMappingOutcomeReceivedEvent m_onCreateEventSourceMappingOutcomeReceived;
    CreateFunctionOutcomeReceivedEvent m_onCreateFunctionOutcomeReceived;
    DeleteEventSourceMappingOutcomeReceivedEvent m_onDeleteEventSourceMappingOutcomeReceived;
    DeleteFunctionOutcomeReceivedEvent m_onDeleteFunctionOutcomeReceived;
    GetEventSourceMappingOutcomeReceivedEvent m_onGetEventSourceMappingOutcomeReceived;
    GetFunctionOutcomeReceivedEvent m_onGetFunctionOutcomeReceived;
    GetFunctionConfigurationOutcomeReceivedEvent m_onGetFunctionConfigurationOutcomeReceived;
    GetPolicyOutcomeReceivedEvent m_onGetPolicyOutcomeReceived;
    InvokeOutcomeReceivedEvent m_onInvokeOutcomeReceived;
    ListEventSourceMappingsOutcomeReceivedEvent m_onListEventSourceMappingsOutcomeReceived;
    ListFunctionsOutcomeReceivedEvent m_onListFunctionsOutcomeReceived;
    RemovePermissionOutcomeReceivedEvent m_onRemovePermissionOutcomeReceived;
    UpdateEventSourceMappingOutcomeReceivedEvent m_onUpdateEventSourceMappingOutcomeReceived;
    UpdateFunctionCodeOutcomeReceivedEvent m_onUpdateFunctionCodeOutcomeReceived;
    UpdateFunctionConfigurationOutcomeReceivedEvent m_onUpdateFunctionConfigurationOutcomeReceived;
  };

} // namespace Lambda
} // namespace Aws
