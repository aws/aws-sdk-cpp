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
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/lambda/LambdaClient.h>
#include <aws/lambda/LambdaEndpoint.h>
#include <aws/lambda/LambdaErrorMarshaller.h>
#include <aws/lambda/model/AddPermissionRequest.h>
#include <aws/lambda/model/CreateAliasRequest.h>
#include <aws/lambda/model/CreateEventSourceMappingRequest.h>
#include <aws/lambda/model/CreateFunctionRequest.h>
#include <aws/lambda/model/DeleteAliasRequest.h>
#include <aws/lambda/model/DeleteEventSourceMappingRequest.h>
#include <aws/lambda/model/DeleteFunctionRequest.h>
#include <aws/lambda/model/GetAliasRequest.h>
#include <aws/lambda/model/GetEventSourceMappingRequest.h>
#include <aws/lambda/model/GetFunctionRequest.h>
#include <aws/lambda/model/GetFunctionConfigurationRequest.h>
#include <aws/lambda/model/GetPolicyRequest.h>
#include <aws/lambda/model/InvokeRequest.h>
#include <aws/lambda/model/ListAliasesRequest.h>
#include <aws/lambda/model/ListEventSourceMappingsRequest.h>
#include <aws/lambda/model/ListFunctionsRequest.h>
#include <aws/lambda/model/ListVersionsByFunctionRequest.h>
#include <aws/lambda/model/PublishVersionRequest.h>
#include <aws/lambda/model/RemovePermissionRequest.h>
#include <aws/lambda/model/UpdateAliasRequest.h>
#include <aws/lambda/model/UpdateEventSourceMappingRequest.h>
#include <aws/lambda/model/UpdateFunctionCodeRequest.h>
#include <aws/lambda/model/UpdateFunctionConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Lambda;
using namespace Aws::Lambda::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "lambda";
static const char* ALLOCATION_TAG = "LambdaClient";

LambdaClient::LambdaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LambdaClient::LambdaClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LambdaClient::LambdaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LambdaClient::~LambdaClient()
{
}

void LambdaClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << LambdaEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddPermissionOutcome LambdaClient::AddPermission(const AddPermissionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/policy";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddPermissionOutcome(AddPermissionResult(outcome.GetResult()));
  }
  else
  {
    return AddPermissionOutcome(outcome.GetError());
  }
}

AddPermissionOutcomeCallable LambdaClient::AddPermissionCallable(const AddPermissionRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::AddPermission, this, request);
}

void LambdaClient::AddPermissionAsync(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::AddPermissionAsyncHelper, this, request, handler, context);
}

void LambdaClient::AddPermissionAsyncHelper(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddPermission(request), context);
}

CreateAliasOutcome LambdaClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/aliases";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAliasOutcome(CreateAliasResult(outcome.GetResult()));
  }
  else
  {
    return CreateAliasOutcome(outcome.GetError());
  }
}

CreateAliasOutcomeCallable LambdaClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::CreateAlias, this, request);
}

void LambdaClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::CreateAliasAsyncHelper, this, request, handler, context);
}

void LambdaClient::CreateAliasAsyncHelper(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlias(request), context);
}

CreateEventSourceMappingOutcome LambdaClient::CreateEventSourceMapping(const CreateEventSourceMappingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/event-source-mappings/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateEventSourceMappingOutcome(CreateEventSourceMappingResult(outcome.GetResult()));
  }
  else
  {
    return CreateEventSourceMappingOutcome(outcome.GetError());
  }
}

CreateEventSourceMappingOutcomeCallable LambdaClient::CreateEventSourceMappingCallable(const CreateEventSourceMappingRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::CreateEventSourceMapping, this, request);
}

void LambdaClient::CreateEventSourceMappingAsync(const CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::CreateEventSourceMappingAsyncHelper, this, request, handler, context);
}

void LambdaClient::CreateEventSourceMappingAsyncHelper(const CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventSourceMapping(request), context);
}

CreateFunctionOutcome LambdaClient::CreateFunction(const CreateFunctionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFunctionOutcome(CreateFunctionResult(outcome.GetResult()));
  }
  else
  {
    return CreateFunctionOutcome(outcome.GetError());
  }
}

CreateFunctionOutcomeCallable LambdaClient::CreateFunctionCallable(const CreateFunctionRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::CreateFunction, this, request);
}

void LambdaClient::CreateFunctionAsync(const CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::CreateFunctionAsyncHelper, this, request, handler, context);
}

void LambdaClient::CreateFunctionAsyncHelper(const CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFunction(request), context);
}

DeleteAliasOutcome LambdaClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/aliases/";
  ss << request.GetName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteAliasOutcome(NoResult());
  }
  else
  {
    return DeleteAliasOutcome(outcome.GetError());
  }
}

DeleteAliasOutcomeCallable LambdaClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::DeleteAlias, this, request);
}

void LambdaClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::DeleteAliasAsyncHelper, this, request, handler, context);
}

void LambdaClient::DeleteAliasAsyncHelper(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlias(request), context);
}

DeleteEventSourceMappingOutcome LambdaClient::DeleteEventSourceMapping(const DeleteEventSourceMappingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/event-source-mappings/";
  ss << request.GetUUID();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteEventSourceMappingOutcome(DeleteEventSourceMappingResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEventSourceMappingOutcome(outcome.GetError());
  }
}

DeleteEventSourceMappingOutcomeCallable LambdaClient::DeleteEventSourceMappingCallable(const DeleteEventSourceMappingRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::DeleteEventSourceMapping, this, request);
}

void LambdaClient::DeleteEventSourceMappingAsync(const DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::DeleteEventSourceMappingAsyncHelper, this, request, handler, context);
}

void LambdaClient::DeleteEventSourceMappingAsyncHelper(const DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventSourceMapping(request), context);
}

DeleteFunctionOutcome LambdaClient::DeleteFunction(const DeleteFunctionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFunctionOutcome(NoResult());
  }
  else
  {
    return DeleteFunctionOutcome(outcome.GetError());
  }
}

DeleteFunctionOutcomeCallable LambdaClient::DeleteFunctionCallable(const DeleteFunctionRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::DeleteFunction, this, request);
}

void LambdaClient::DeleteFunctionAsync(const DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::DeleteFunctionAsyncHelper, this, request, handler, context);
}

void LambdaClient::DeleteFunctionAsyncHelper(const DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFunction(request), context);
}

GetAliasOutcome LambdaClient::GetAlias(const GetAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/aliases/";
  ss << request.GetName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetAliasOutcome(GetAliasResult(outcome.GetResult()));
  }
  else
  {
    return GetAliasOutcome(outcome.GetError());
  }
}

GetAliasOutcomeCallable LambdaClient::GetAliasCallable(const GetAliasRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::GetAlias, this, request);
}

void LambdaClient::GetAliasAsync(const GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::GetAliasAsyncHelper, this, request, handler, context);
}

void LambdaClient::GetAliasAsyncHelper(const GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAlias(request), context);
}

GetEventSourceMappingOutcome LambdaClient::GetEventSourceMapping(const GetEventSourceMappingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/event-source-mappings/";
  ss << request.GetUUID();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetEventSourceMappingOutcome(GetEventSourceMappingResult(outcome.GetResult()));
  }
  else
  {
    return GetEventSourceMappingOutcome(outcome.GetError());
  }
}

GetEventSourceMappingOutcomeCallable LambdaClient::GetEventSourceMappingCallable(const GetEventSourceMappingRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::GetEventSourceMapping, this, request);
}

void LambdaClient::GetEventSourceMappingAsync(const GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::GetEventSourceMappingAsyncHelper, this, request, handler, context);
}

void LambdaClient::GetEventSourceMappingAsyncHelper(const GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEventSourceMapping(request), context);
}

GetFunctionOutcome LambdaClient::GetFunction(const GetFunctionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFunctionOutcome(GetFunctionResult(outcome.GetResult()));
  }
  else
  {
    return GetFunctionOutcome(outcome.GetError());
  }
}

GetFunctionOutcomeCallable LambdaClient::GetFunctionCallable(const GetFunctionRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::GetFunction, this, request);
}

void LambdaClient::GetFunctionAsync(const GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::GetFunctionAsyncHelper, this, request, handler, context);
}

void LambdaClient::GetFunctionAsyncHelper(const GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFunction(request), context);
}

GetFunctionConfigurationOutcome LambdaClient::GetFunctionConfiguration(const GetFunctionConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/configuration";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFunctionConfigurationOutcome(GetFunctionConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetFunctionConfigurationOutcome(outcome.GetError());
  }
}

GetFunctionConfigurationOutcomeCallable LambdaClient::GetFunctionConfigurationCallable(const GetFunctionConfigurationRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::GetFunctionConfiguration, this, request);
}

void LambdaClient::GetFunctionConfigurationAsync(const GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::GetFunctionConfigurationAsyncHelper, this, request, handler, context);
}

void LambdaClient::GetFunctionConfigurationAsyncHelper(const GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFunctionConfiguration(request), context);
}

GetPolicyOutcome LambdaClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/policy";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPolicyOutcome(GetPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetPolicyOutcome(outcome.GetError());
  }
}

GetPolicyOutcomeCallable LambdaClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::GetPolicy, this, request);
}

void LambdaClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::GetPolicyAsyncHelper, this, request, handler, context);
}

void LambdaClient::GetPolicyAsyncHelper(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicy(request), context);
}

InvokeOutcome LambdaClient::Invoke(const InvokeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/invocations";

  StreamOutcome outcome = MakeRequestWithUnparsedResponse(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return InvokeOutcome(InvokeResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return InvokeOutcome(outcome.GetError());
  }
}

InvokeOutcomeCallable LambdaClient::InvokeCallable(const InvokeRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::Invoke, this, request);
}

void LambdaClient::InvokeAsync(const InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::InvokeAsyncHelper, this, request, handler, context);
}

void LambdaClient::InvokeAsyncHelper(const InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Invoke(request), context);
}

ListAliasesOutcome LambdaClient::ListAliases(const ListAliasesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/aliases";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListAliasesOutcome(ListAliasesResult(outcome.GetResult()));
  }
  else
  {
    return ListAliasesOutcome(outcome.GetError());
  }
}

ListAliasesOutcomeCallable LambdaClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::ListAliases, this, request);
}

void LambdaClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::ListAliasesAsyncHelper, this, request, handler, context);
}

void LambdaClient::ListAliasesAsyncHelper(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAliases(request), context);
}

ListEventSourceMappingsOutcome LambdaClient::ListEventSourceMappings(const ListEventSourceMappingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/event-source-mappings/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListEventSourceMappingsOutcome(ListEventSourceMappingsResult(outcome.GetResult()));
  }
  else
  {
    return ListEventSourceMappingsOutcome(outcome.GetError());
  }
}

ListEventSourceMappingsOutcomeCallable LambdaClient::ListEventSourceMappingsCallable(const ListEventSourceMappingsRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::ListEventSourceMappings, this, request);
}

void LambdaClient::ListEventSourceMappingsAsync(const ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::ListEventSourceMappingsAsyncHelper, this, request, handler, context);
}

void LambdaClient::ListEventSourceMappingsAsyncHelper(const ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEventSourceMappings(request), context);
}

ListFunctionsOutcome LambdaClient::ListFunctions(const ListFunctionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListFunctionsOutcome(ListFunctionsResult(outcome.GetResult()));
  }
  else
  {
    return ListFunctionsOutcome(outcome.GetError());
  }
}

ListFunctionsOutcomeCallable LambdaClient::ListFunctionsCallable(const ListFunctionsRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::ListFunctions, this, request);
}

void LambdaClient::ListFunctionsAsync(const ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::ListFunctionsAsyncHelper, this, request, handler, context);
}

void LambdaClient::ListFunctionsAsyncHelper(const ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFunctions(request), context);
}

ListVersionsByFunctionOutcome LambdaClient::ListVersionsByFunction(const ListVersionsByFunctionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/versions";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListVersionsByFunctionOutcome(ListVersionsByFunctionResult(outcome.GetResult()));
  }
  else
  {
    return ListVersionsByFunctionOutcome(outcome.GetError());
  }
}

ListVersionsByFunctionOutcomeCallable LambdaClient::ListVersionsByFunctionCallable(const ListVersionsByFunctionRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::ListVersionsByFunction, this, request);
}

void LambdaClient::ListVersionsByFunctionAsync(const ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::ListVersionsByFunctionAsyncHelper, this, request, handler, context);
}

void LambdaClient::ListVersionsByFunctionAsyncHelper(const ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVersionsByFunction(request), context);
}

PublishVersionOutcome LambdaClient::PublishVersion(const PublishVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/versions";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PublishVersionOutcome(PublishVersionResult(outcome.GetResult()));
  }
  else
  {
    return PublishVersionOutcome(outcome.GetError());
  }
}

PublishVersionOutcomeCallable LambdaClient::PublishVersionCallable(const PublishVersionRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::PublishVersion, this, request);
}

void LambdaClient::PublishVersionAsync(const PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::PublishVersionAsyncHelper, this, request, handler, context);
}

void LambdaClient::PublishVersionAsyncHelper(const PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PublishVersion(request), context);
}

RemovePermissionOutcome LambdaClient::RemovePermission(const RemovePermissionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/policy/";
  ss << request.GetStatementId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return RemovePermissionOutcome(NoResult());
  }
  else
  {
    return RemovePermissionOutcome(outcome.GetError());
  }
}

RemovePermissionOutcomeCallable LambdaClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::RemovePermission, this, request);
}

void LambdaClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::RemovePermissionAsyncHelper, this, request, handler, context);
}

void LambdaClient::RemovePermissionAsyncHelper(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemovePermission(request), context);
}

UpdateAliasOutcome LambdaClient::UpdateAlias(const UpdateAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/aliases/";
  ss << request.GetName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateAliasOutcome(UpdateAliasResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAliasOutcome(outcome.GetError());
  }
}

UpdateAliasOutcomeCallable LambdaClient::UpdateAliasCallable(const UpdateAliasRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::UpdateAlias, this, request);
}

void LambdaClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::UpdateAliasAsyncHelper, this, request, handler, context);
}

void LambdaClient::UpdateAliasAsyncHelper(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAlias(request), context);
}

UpdateEventSourceMappingOutcome LambdaClient::UpdateEventSourceMapping(const UpdateEventSourceMappingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/event-source-mappings/";
  ss << request.GetUUID();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateEventSourceMappingOutcome(UpdateEventSourceMappingResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEventSourceMappingOutcome(outcome.GetError());
  }
}

UpdateEventSourceMappingOutcomeCallable LambdaClient::UpdateEventSourceMappingCallable(const UpdateEventSourceMappingRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::UpdateEventSourceMapping, this, request);
}

void LambdaClient::UpdateEventSourceMappingAsync(const UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::UpdateEventSourceMappingAsyncHelper, this, request, handler, context);
}

void LambdaClient::UpdateEventSourceMappingAsyncHelper(const UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEventSourceMapping(request), context);
}

UpdateFunctionCodeOutcome LambdaClient::UpdateFunctionCode(const UpdateFunctionCodeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/code";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFunctionCodeOutcome(UpdateFunctionCodeResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFunctionCodeOutcome(outcome.GetError());
  }
}

UpdateFunctionCodeOutcomeCallable LambdaClient::UpdateFunctionCodeCallable(const UpdateFunctionCodeRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::UpdateFunctionCode, this, request);
}

void LambdaClient::UpdateFunctionCodeAsync(const UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::UpdateFunctionCodeAsyncHelper, this, request, handler, context);
}

void LambdaClient::UpdateFunctionCodeAsyncHelper(const UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFunctionCode(request), context);
}

UpdateFunctionConfigurationOutcome LambdaClient::UpdateFunctionConfiguration(const UpdateFunctionConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-03-31/functions/";
  ss << request.GetFunctionName();
  ss << "/configuration";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFunctionConfigurationOutcome(UpdateFunctionConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFunctionConfigurationOutcome(outcome.GetError());
  }
}

UpdateFunctionConfigurationOutcomeCallable LambdaClient::UpdateFunctionConfigurationCallable(const UpdateFunctionConfigurationRequest& request) const
{
  return std::async(std::launch::async, &LambdaClient::UpdateFunctionConfiguration, this, request);
}

void LambdaClient::UpdateFunctionConfigurationAsync(const UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&LambdaClient::UpdateFunctionConfigurationAsyncHelper, this, request, handler, context);
}

void LambdaClient::UpdateFunctionConfigurationAsyncHelper(const UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFunctionConfiguration(request), context);
}

