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
#include <aws/ds/DirectoryServiceClient.h>
#include <aws/ds/DirectoryServiceEndpoint.h>
#include <aws/ds/DirectoryServiceErrorMarshaller.h>
#include <aws/ds/model/ConnectDirectoryRequest.h>
#include <aws/ds/model/CreateAliasRequest.h>
#include <aws/ds/model/CreateComputerRequest.h>
#include <aws/ds/model/CreateConditionalForwarderRequest.h>
#include <aws/ds/model/CreateDirectoryRequest.h>
#include <aws/ds/model/CreateMicrosoftADRequest.h>
#include <aws/ds/model/CreateSnapshotRequest.h>
#include <aws/ds/model/CreateTrustRequest.h>
#include <aws/ds/model/DeleteConditionalForwarderRequest.h>
#include <aws/ds/model/DeleteDirectoryRequest.h>
#include <aws/ds/model/DeleteSnapshotRequest.h>
#include <aws/ds/model/DeleteTrustRequest.h>
#include <aws/ds/model/DeregisterEventTopicRequest.h>
#include <aws/ds/model/DescribeConditionalForwardersRequest.h>
#include <aws/ds/model/DescribeDirectoriesRequest.h>
#include <aws/ds/model/DescribeEventTopicsRequest.h>
#include <aws/ds/model/DescribeSnapshotsRequest.h>
#include <aws/ds/model/DescribeTrustsRequest.h>
#include <aws/ds/model/DisableRadiusRequest.h>
#include <aws/ds/model/DisableSsoRequest.h>
#include <aws/ds/model/EnableRadiusRequest.h>
#include <aws/ds/model/EnableSsoRequest.h>
#include <aws/ds/model/GetDirectoryLimitsRequest.h>
#include <aws/ds/model/GetSnapshotLimitsRequest.h>
#include <aws/ds/model/RegisterEventTopicRequest.h>
#include <aws/ds/model/RestoreFromSnapshotRequest.h>
#include <aws/ds/model/UpdateConditionalForwarderRequest.h>
#include <aws/ds/model/UpdateRadiusRequest.h>
#include <aws/ds/model/VerifyTrustRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DirectoryService;
using namespace Aws::DirectoryService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ds";
static const char* ALLOCATION_TAG = "DirectoryServiceClient";

DirectoryServiceClient::DirectoryServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectoryServiceClient::~DirectoryServiceClient()
{
}

void DirectoryServiceClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << DirectoryServiceEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
ConnectDirectoryOutcome DirectoryServiceClient::ConnectDirectory(const ConnectDirectoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ConnectDirectoryOutcome(ConnectDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return ConnectDirectoryOutcome(outcome.GetError());
  }
}

ConnectDirectoryOutcomeCallable DirectoryServiceClient::ConnectDirectoryCallable(const ConnectDirectoryRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::ConnectDirectory, this, request);
}

void DirectoryServiceClient::ConnectDirectoryAsync(const ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::ConnectDirectoryAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::ConnectDirectoryAsyncHelper(const ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConnectDirectory(request), context);
}

CreateAliasOutcome DirectoryServiceClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

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

CreateAliasOutcomeCallable DirectoryServiceClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::CreateAlias, this, request);
}

void DirectoryServiceClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::CreateAliasAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::CreateAliasAsyncHelper(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlias(request), context);
}

CreateComputerOutcome DirectoryServiceClient::CreateComputer(const CreateComputerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateComputerOutcome(CreateComputerResult(outcome.GetResult()));
  }
  else
  {
    return CreateComputerOutcome(outcome.GetError());
  }
}

CreateComputerOutcomeCallable DirectoryServiceClient::CreateComputerCallable(const CreateComputerRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::CreateComputer, this, request);
}

void DirectoryServiceClient::CreateComputerAsync(const CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::CreateComputerAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::CreateComputerAsyncHelper(const CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateComputer(request), context);
}

CreateConditionalForwarderOutcome DirectoryServiceClient::CreateConditionalForwarder(const CreateConditionalForwarderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateConditionalForwarderOutcome(CreateConditionalForwarderResult(outcome.GetResult()));
  }
  else
  {
    return CreateConditionalForwarderOutcome(outcome.GetError());
  }
}

CreateConditionalForwarderOutcomeCallable DirectoryServiceClient::CreateConditionalForwarderCallable(const CreateConditionalForwarderRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::CreateConditionalForwarder, this, request);
}

void DirectoryServiceClient::CreateConditionalForwarderAsync(const CreateConditionalForwarderRequest& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::CreateConditionalForwarderAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::CreateConditionalForwarderAsyncHelper(const CreateConditionalForwarderRequest& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConditionalForwarder(request), context);
}

CreateDirectoryOutcome DirectoryServiceClient::CreateDirectory(const CreateDirectoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDirectoryOutcome(CreateDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return CreateDirectoryOutcome(outcome.GetError());
  }
}

CreateDirectoryOutcomeCallable DirectoryServiceClient::CreateDirectoryCallable(const CreateDirectoryRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::CreateDirectory, this, request);
}

void DirectoryServiceClient::CreateDirectoryAsync(const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::CreateDirectoryAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::CreateDirectoryAsyncHelper(const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDirectory(request), context);
}

CreateMicrosoftADOutcome DirectoryServiceClient::CreateMicrosoftAD(const CreateMicrosoftADRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateMicrosoftADOutcome(CreateMicrosoftADResult(outcome.GetResult()));
  }
  else
  {
    return CreateMicrosoftADOutcome(outcome.GetError());
  }
}

CreateMicrosoftADOutcomeCallable DirectoryServiceClient::CreateMicrosoftADCallable(const CreateMicrosoftADRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::CreateMicrosoftAD, this, request);
}

void DirectoryServiceClient::CreateMicrosoftADAsync(const CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::CreateMicrosoftADAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::CreateMicrosoftADAsyncHelper(const CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMicrosoftAD(request), context);
}

CreateSnapshotOutcome DirectoryServiceClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSnapshotOutcome(CreateSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateSnapshotOutcome(outcome.GetError());
  }
}

CreateSnapshotOutcomeCallable DirectoryServiceClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::CreateSnapshot, this, request);
}

void DirectoryServiceClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::CreateSnapshotAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

CreateTrustOutcome DirectoryServiceClient::CreateTrust(const CreateTrustRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTrustOutcome(CreateTrustResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrustOutcome(outcome.GetError());
  }
}

CreateTrustOutcomeCallable DirectoryServiceClient::CreateTrustCallable(const CreateTrustRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::CreateTrust, this, request);
}

void DirectoryServiceClient::CreateTrustAsync(const CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::CreateTrustAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::CreateTrustAsyncHelper(const CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrust(request), context);
}

DeleteConditionalForwarderOutcome DirectoryServiceClient::DeleteConditionalForwarder(const DeleteConditionalForwarderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteConditionalForwarderOutcome(DeleteConditionalForwarderResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConditionalForwarderOutcome(outcome.GetError());
  }
}

DeleteConditionalForwarderOutcomeCallable DirectoryServiceClient::DeleteConditionalForwarderCallable(const DeleteConditionalForwarderRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DeleteConditionalForwarder, this, request);
}

void DirectoryServiceClient::DeleteConditionalForwarderAsync(const DeleteConditionalForwarderRequest& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DeleteConditionalForwarderAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DeleteConditionalForwarderAsyncHelper(const DeleteConditionalForwarderRequest& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConditionalForwarder(request), context);
}

DeleteDirectoryOutcome DirectoryServiceClient::DeleteDirectory(const DeleteDirectoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDirectoryOutcome(DeleteDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDirectoryOutcome(outcome.GetError());
  }
}

DeleteDirectoryOutcomeCallable DirectoryServiceClient::DeleteDirectoryCallable(const DeleteDirectoryRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DeleteDirectory, this, request);
}

void DirectoryServiceClient::DeleteDirectoryAsync(const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DeleteDirectoryAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DeleteDirectoryAsyncHelper(const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDirectory(request), context);
}

DeleteSnapshotOutcome DirectoryServiceClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSnapshotOutcome(DeleteSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSnapshotOutcome(outcome.GetError());
  }
}

DeleteSnapshotOutcomeCallable DirectoryServiceClient::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DeleteSnapshot, this, request);
}

void DirectoryServiceClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DeleteSnapshotAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DeleteSnapshotAsyncHelper(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSnapshot(request), context);
}

DeleteTrustOutcome DirectoryServiceClient::DeleteTrust(const DeleteTrustRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTrustOutcome(DeleteTrustResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTrustOutcome(outcome.GetError());
  }
}

DeleteTrustOutcomeCallable DirectoryServiceClient::DeleteTrustCallable(const DeleteTrustRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DeleteTrust, this, request);
}

void DirectoryServiceClient::DeleteTrustAsync(const DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DeleteTrustAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DeleteTrustAsyncHelper(const DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrust(request), context);
}

DeregisterEventTopicOutcome DirectoryServiceClient::DeregisterEventTopic(const DeregisterEventTopicRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterEventTopicOutcome(DeregisterEventTopicResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterEventTopicOutcome(outcome.GetError());
  }
}

DeregisterEventTopicOutcomeCallable DirectoryServiceClient::DeregisterEventTopicCallable(const DeregisterEventTopicRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DeregisterEventTopic, this, request);
}

void DirectoryServiceClient::DeregisterEventTopicAsync(const DeregisterEventTopicRequest& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DeregisterEventTopicAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DeregisterEventTopicAsyncHelper(const DeregisterEventTopicRequest& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterEventTopic(request), context);
}

DescribeConditionalForwardersOutcome DirectoryServiceClient::DescribeConditionalForwarders(const DescribeConditionalForwardersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConditionalForwardersOutcome(DescribeConditionalForwardersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConditionalForwardersOutcome(outcome.GetError());
  }
}

DescribeConditionalForwardersOutcomeCallable DirectoryServiceClient::DescribeConditionalForwardersCallable(const DescribeConditionalForwardersRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DescribeConditionalForwarders, this, request);
}

void DirectoryServiceClient::DescribeConditionalForwardersAsync(const DescribeConditionalForwardersRequest& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DescribeConditionalForwardersAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DescribeConditionalForwardersAsyncHelper(const DescribeConditionalForwardersRequest& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConditionalForwarders(request), context);
}

DescribeDirectoriesOutcome DirectoryServiceClient::DescribeDirectories(const DescribeDirectoriesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDirectoriesOutcome(DescribeDirectoriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDirectoriesOutcome(outcome.GetError());
  }
}

DescribeDirectoriesOutcomeCallable DirectoryServiceClient::DescribeDirectoriesCallable(const DescribeDirectoriesRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DescribeDirectories, this, request);
}

void DirectoryServiceClient::DescribeDirectoriesAsync(const DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DescribeDirectoriesAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DescribeDirectoriesAsyncHelper(const DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDirectories(request), context);
}

DescribeEventTopicsOutcome DirectoryServiceClient::DescribeEventTopics(const DescribeEventTopicsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEventTopicsOutcome(DescribeEventTopicsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventTopicsOutcome(outcome.GetError());
  }
}

DescribeEventTopicsOutcomeCallable DirectoryServiceClient::DescribeEventTopicsCallable(const DescribeEventTopicsRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DescribeEventTopics, this, request);
}

void DirectoryServiceClient::DescribeEventTopicsAsync(const DescribeEventTopicsRequest& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DescribeEventTopicsAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DescribeEventTopicsAsyncHelper(const DescribeEventTopicsRequest& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventTopics(request), context);
}

DescribeSnapshotsOutcome DirectoryServiceClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSnapshotsOutcome(DescribeSnapshotsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSnapshotsOutcome(outcome.GetError());
  }
}

DescribeSnapshotsOutcomeCallable DirectoryServiceClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DescribeSnapshots, this, request);
}

void DirectoryServiceClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DescribeSnapshotsAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DescribeSnapshotsAsyncHelper(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshots(request), context);
}

DescribeTrustsOutcome DirectoryServiceClient::DescribeTrusts(const DescribeTrustsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTrustsOutcome(DescribeTrustsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrustsOutcome(outcome.GetError());
  }
}

DescribeTrustsOutcomeCallable DirectoryServiceClient::DescribeTrustsCallable(const DescribeTrustsRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DescribeTrusts, this, request);
}

void DirectoryServiceClient::DescribeTrustsAsync(const DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DescribeTrustsAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DescribeTrustsAsyncHelper(const DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrusts(request), context);
}

DisableRadiusOutcome DirectoryServiceClient::DisableRadius(const DisableRadiusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableRadiusOutcome(DisableRadiusResult(outcome.GetResult()));
  }
  else
  {
    return DisableRadiusOutcome(outcome.GetError());
  }
}

DisableRadiusOutcomeCallable DirectoryServiceClient::DisableRadiusCallable(const DisableRadiusRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DisableRadius, this, request);
}

void DirectoryServiceClient::DisableRadiusAsync(const DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DisableRadiusAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DisableRadiusAsyncHelper(const DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableRadius(request), context);
}

DisableSsoOutcome DirectoryServiceClient::DisableSso(const DisableSsoRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableSsoOutcome(DisableSsoResult(outcome.GetResult()));
  }
  else
  {
    return DisableSsoOutcome(outcome.GetError());
  }
}

DisableSsoOutcomeCallable DirectoryServiceClient::DisableSsoCallable(const DisableSsoRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::DisableSso, this, request);
}

void DirectoryServiceClient::DisableSsoAsync(const DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::DisableSsoAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::DisableSsoAsyncHelper(const DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableSso(request), context);
}

EnableRadiusOutcome DirectoryServiceClient::EnableRadius(const EnableRadiusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableRadiusOutcome(EnableRadiusResult(outcome.GetResult()));
  }
  else
  {
    return EnableRadiusOutcome(outcome.GetError());
  }
}

EnableRadiusOutcomeCallable DirectoryServiceClient::EnableRadiusCallable(const EnableRadiusRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::EnableRadius, this, request);
}

void DirectoryServiceClient::EnableRadiusAsync(const EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::EnableRadiusAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::EnableRadiusAsyncHelper(const EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableRadius(request), context);
}

EnableSsoOutcome DirectoryServiceClient::EnableSso(const EnableSsoRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableSsoOutcome(EnableSsoResult(outcome.GetResult()));
  }
  else
  {
    return EnableSsoOutcome(outcome.GetError());
  }
}

EnableSsoOutcomeCallable DirectoryServiceClient::EnableSsoCallable(const EnableSsoRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::EnableSso, this, request);
}

void DirectoryServiceClient::EnableSsoAsync(const EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::EnableSsoAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::EnableSsoAsyncHelper(const EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableSso(request), context);
}

GetDirectoryLimitsOutcome DirectoryServiceClient::GetDirectoryLimits(const GetDirectoryLimitsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDirectoryLimitsOutcome(GetDirectoryLimitsResult(outcome.GetResult()));
  }
  else
  {
    return GetDirectoryLimitsOutcome(outcome.GetError());
  }
}

GetDirectoryLimitsOutcomeCallable DirectoryServiceClient::GetDirectoryLimitsCallable(const GetDirectoryLimitsRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::GetDirectoryLimits, this, request);
}

void DirectoryServiceClient::GetDirectoryLimitsAsync(const GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::GetDirectoryLimitsAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::GetDirectoryLimitsAsyncHelper(const GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDirectoryLimits(request), context);
}

GetSnapshotLimitsOutcome DirectoryServiceClient::GetSnapshotLimits(const GetSnapshotLimitsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSnapshotLimitsOutcome(GetSnapshotLimitsResult(outcome.GetResult()));
  }
  else
  {
    return GetSnapshotLimitsOutcome(outcome.GetError());
  }
}

GetSnapshotLimitsOutcomeCallable DirectoryServiceClient::GetSnapshotLimitsCallable(const GetSnapshotLimitsRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::GetSnapshotLimits, this, request);
}

void DirectoryServiceClient::GetSnapshotLimitsAsync(const GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::GetSnapshotLimitsAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::GetSnapshotLimitsAsyncHelper(const GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSnapshotLimits(request), context);
}

RegisterEventTopicOutcome DirectoryServiceClient::RegisterEventTopic(const RegisterEventTopicRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterEventTopicOutcome(RegisterEventTopicResult(outcome.GetResult()));
  }
  else
  {
    return RegisterEventTopicOutcome(outcome.GetError());
  }
}

RegisterEventTopicOutcomeCallable DirectoryServiceClient::RegisterEventTopicCallable(const RegisterEventTopicRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::RegisterEventTopic, this, request);
}

void DirectoryServiceClient::RegisterEventTopicAsync(const RegisterEventTopicRequest& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::RegisterEventTopicAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::RegisterEventTopicAsyncHelper(const RegisterEventTopicRequest& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterEventTopic(request), context);
}

RestoreFromSnapshotOutcome DirectoryServiceClient::RestoreFromSnapshot(const RestoreFromSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RestoreFromSnapshotOutcome(RestoreFromSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return RestoreFromSnapshotOutcome(outcome.GetError());
  }
}

RestoreFromSnapshotOutcomeCallable DirectoryServiceClient::RestoreFromSnapshotCallable(const RestoreFromSnapshotRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::RestoreFromSnapshot, this, request);
}

void DirectoryServiceClient::RestoreFromSnapshotAsync(const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::RestoreFromSnapshotAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::RestoreFromSnapshotAsyncHelper(const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreFromSnapshot(request), context);
}

UpdateConditionalForwarderOutcome DirectoryServiceClient::UpdateConditionalForwarder(const UpdateConditionalForwarderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateConditionalForwarderOutcome(UpdateConditionalForwarderResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConditionalForwarderOutcome(outcome.GetError());
  }
}

UpdateConditionalForwarderOutcomeCallable DirectoryServiceClient::UpdateConditionalForwarderCallable(const UpdateConditionalForwarderRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::UpdateConditionalForwarder, this, request);
}

void DirectoryServiceClient::UpdateConditionalForwarderAsync(const UpdateConditionalForwarderRequest& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::UpdateConditionalForwarderAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::UpdateConditionalForwarderAsyncHelper(const UpdateConditionalForwarderRequest& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConditionalForwarder(request), context);
}

UpdateRadiusOutcome DirectoryServiceClient::UpdateRadius(const UpdateRadiusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateRadiusOutcome(UpdateRadiusResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRadiusOutcome(outcome.GetError());
  }
}

UpdateRadiusOutcomeCallable DirectoryServiceClient::UpdateRadiusCallable(const UpdateRadiusRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::UpdateRadius, this, request);
}

void DirectoryServiceClient::UpdateRadiusAsync(const UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::UpdateRadiusAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::UpdateRadiusAsyncHelper(const UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRadius(request), context);
}

VerifyTrustOutcome DirectoryServiceClient::VerifyTrust(const VerifyTrustRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return VerifyTrustOutcome(VerifyTrustResult(outcome.GetResult()));
  }
  else
  {
    return VerifyTrustOutcome(outcome.GetError());
  }
}

VerifyTrustOutcomeCallable DirectoryServiceClient::VerifyTrustCallable(const VerifyTrustRequest& request) const
{
  return std::async(std::launch::async, &DirectoryServiceClient::VerifyTrust, this, request);
}

void DirectoryServiceClient::VerifyTrustAsync(const VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectoryServiceClient::VerifyTrustAsyncHelper, this, request, handler, context);
}

void DirectoryServiceClient::VerifyTrustAsyncHelper(const VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, VerifyTrust(request), context);
}

