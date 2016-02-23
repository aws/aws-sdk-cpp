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
#include <aws/ssm/SSMClient.h>
#include <aws/ssm/SSMEndpoint.h>
#include <aws/ssm/SSMErrorMarshaller.h>
#include <aws/ssm/model/CancelCommandRequest.h>
#include <aws/ssm/model/CreateAssociationRequest.h>
#include <aws/ssm/model/CreateAssociationBatchRequest.h>
#include <aws/ssm/model/CreateDocumentRequest.h>
#include <aws/ssm/model/DeleteAssociationRequest.h>
#include <aws/ssm/model/DeleteDocumentRequest.h>
#include <aws/ssm/model/DescribeAssociationRequest.h>
#include <aws/ssm/model/DescribeDocumentRequest.h>
#include <aws/ssm/model/DescribeInstanceInformationRequest.h>
#include <aws/ssm/model/GetDocumentRequest.h>
#include <aws/ssm/model/ListAssociationsRequest.h>
#include <aws/ssm/model/ListCommandInvocationsRequest.h>
#include <aws/ssm/model/ListCommandsRequest.h>
#include <aws/ssm/model/ListDocumentsRequest.h>
#include <aws/ssm/model/SendCommandRequest.h>
#include <aws/ssm/model/UpdateAssociationStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSM;
using namespace Aws::SSM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ssm";
static const char* ALLOCATION_TAG = "SSMClient";

SSMClient::SSMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMClient::SSMClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMClient::SSMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMClient::~SSMClient()
{
}

void SSMClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << SSMEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
CancelCommandOutcome SSMClient::CancelCommand(const CancelCommandRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelCommandOutcome(CancelCommandResult(outcome.GetResult()));
  }
  else
  {
    return CancelCommandOutcome(outcome.GetError());
  }
}

CancelCommandOutcomeCallable SSMClient::CancelCommandCallable(const CancelCommandRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::CancelCommand, this, request);
}

void SSMClient::CancelCommandAsync(const CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::CancelCommandAsyncHelper, this, request, handler, context);
}

void SSMClient::CancelCommandAsyncHelper(const CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelCommand(request), context);
}

CreateAssociationOutcome SSMClient::CreateAssociation(const CreateAssociationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAssociationOutcome(CreateAssociationResult(outcome.GetResult()));
  }
  else
  {
    return CreateAssociationOutcome(outcome.GetError());
  }
}

CreateAssociationOutcomeCallable SSMClient::CreateAssociationCallable(const CreateAssociationRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::CreateAssociation, this, request);
}

void SSMClient::CreateAssociationAsync(const CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::CreateAssociationAsyncHelper, this, request, handler, context);
}

void SSMClient::CreateAssociationAsyncHelper(const CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAssociation(request), context);
}

CreateAssociationBatchOutcome SSMClient::CreateAssociationBatch(const CreateAssociationBatchRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAssociationBatchOutcome(CreateAssociationBatchResult(outcome.GetResult()));
  }
  else
  {
    return CreateAssociationBatchOutcome(outcome.GetError());
  }
}

CreateAssociationBatchOutcomeCallable SSMClient::CreateAssociationBatchCallable(const CreateAssociationBatchRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::CreateAssociationBatch, this, request);
}

void SSMClient::CreateAssociationBatchAsync(const CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::CreateAssociationBatchAsyncHelper, this, request, handler, context);
}

void SSMClient::CreateAssociationBatchAsyncHelper(const CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAssociationBatch(request), context);
}

CreateDocumentOutcome SSMClient::CreateDocument(const CreateDocumentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDocumentOutcome(CreateDocumentResult(outcome.GetResult()));
  }
  else
  {
    return CreateDocumentOutcome(outcome.GetError());
  }
}

CreateDocumentOutcomeCallable SSMClient::CreateDocumentCallable(const CreateDocumentRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::CreateDocument, this, request);
}

void SSMClient::CreateDocumentAsync(const CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::CreateDocumentAsyncHelper, this, request, handler, context);
}

void SSMClient::CreateDocumentAsyncHelper(const CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDocument(request), context);
}

DeleteAssociationOutcome SSMClient::DeleteAssociation(const DeleteAssociationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAssociationOutcome(DeleteAssociationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAssociationOutcome(outcome.GetError());
  }
}

DeleteAssociationOutcomeCallable SSMClient::DeleteAssociationCallable(const DeleteAssociationRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::DeleteAssociation, this, request);
}

void SSMClient::DeleteAssociationAsync(const DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::DeleteAssociationAsyncHelper, this, request, handler, context);
}

void SSMClient::DeleteAssociationAsyncHelper(const DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAssociation(request), context);
}

DeleteDocumentOutcome SSMClient::DeleteDocument(const DeleteDocumentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDocumentOutcome(DeleteDocumentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDocumentOutcome(outcome.GetError());
  }
}

DeleteDocumentOutcomeCallable SSMClient::DeleteDocumentCallable(const DeleteDocumentRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::DeleteDocument, this, request);
}

void SSMClient::DeleteDocumentAsync(const DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::DeleteDocumentAsyncHelper, this, request, handler, context);
}

void SSMClient::DeleteDocumentAsyncHelper(const DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDocument(request), context);
}

DescribeAssociationOutcome SSMClient::DescribeAssociation(const DescribeAssociationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAssociationOutcome(DescribeAssociationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAssociationOutcome(outcome.GetError());
  }
}

DescribeAssociationOutcomeCallable SSMClient::DescribeAssociationCallable(const DescribeAssociationRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::DescribeAssociation, this, request);
}

void SSMClient::DescribeAssociationAsync(const DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::DescribeAssociationAsyncHelper, this, request, handler, context);
}

void SSMClient::DescribeAssociationAsyncHelper(const DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAssociation(request), context);
}

DescribeDocumentOutcome SSMClient::DescribeDocument(const DescribeDocumentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDocumentOutcome(DescribeDocumentResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDocumentOutcome(outcome.GetError());
  }
}

DescribeDocumentOutcomeCallable SSMClient::DescribeDocumentCallable(const DescribeDocumentRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::DescribeDocument, this, request);
}

void SSMClient::DescribeDocumentAsync(const DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::DescribeDocumentAsyncHelper, this, request, handler, context);
}

void SSMClient::DescribeDocumentAsyncHelper(const DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDocument(request), context);
}

DescribeInstanceInformationOutcome SSMClient::DescribeInstanceInformation(const DescribeInstanceInformationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstanceInformationOutcome(DescribeInstanceInformationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInstanceInformationOutcome(outcome.GetError());
  }
}

DescribeInstanceInformationOutcomeCallable SSMClient::DescribeInstanceInformationCallable(const DescribeInstanceInformationRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::DescribeInstanceInformation, this, request);
}

void SSMClient::DescribeInstanceInformationAsync(const DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::DescribeInstanceInformationAsyncHelper, this, request, handler, context);
}

void SSMClient::DescribeInstanceInformationAsyncHelper(const DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceInformation(request), context);
}

GetDocumentOutcome SSMClient::GetDocument(const GetDocumentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDocumentOutcome(GetDocumentResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentOutcome(outcome.GetError());
  }
}

GetDocumentOutcomeCallable SSMClient::GetDocumentCallable(const GetDocumentRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::GetDocument, this, request);
}

void SSMClient::GetDocumentAsync(const GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::GetDocumentAsyncHelper, this, request, handler, context);
}

void SSMClient::GetDocumentAsyncHelper(const GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocument(request), context);
}

ListAssociationsOutcome SSMClient::ListAssociations(const ListAssociationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAssociationsOutcome(ListAssociationsResult(outcome.GetResult()));
  }
  else
  {
    return ListAssociationsOutcome(outcome.GetError());
  }
}

ListAssociationsOutcomeCallable SSMClient::ListAssociationsCallable(const ListAssociationsRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::ListAssociations, this, request);
}

void SSMClient::ListAssociationsAsync(const ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::ListAssociationsAsyncHelper, this, request, handler, context);
}

void SSMClient::ListAssociationsAsyncHelper(const ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssociations(request), context);
}

ListCommandInvocationsOutcome SSMClient::ListCommandInvocations(const ListCommandInvocationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListCommandInvocationsOutcome(ListCommandInvocationsResult(outcome.GetResult()));
  }
  else
  {
    return ListCommandInvocationsOutcome(outcome.GetError());
  }
}

ListCommandInvocationsOutcomeCallable SSMClient::ListCommandInvocationsCallable(const ListCommandInvocationsRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::ListCommandInvocations, this, request);
}

void SSMClient::ListCommandInvocationsAsync(const ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::ListCommandInvocationsAsyncHelper, this, request, handler, context);
}

void SSMClient::ListCommandInvocationsAsyncHelper(const ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCommandInvocations(request), context);
}

ListCommandsOutcome SSMClient::ListCommands(const ListCommandsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListCommandsOutcome(ListCommandsResult(outcome.GetResult()));
  }
  else
  {
    return ListCommandsOutcome(outcome.GetError());
  }
}

ListCommandsOutcomeCallable SSMClient::ListCommandsCallable(const ListCommandsRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::ListCommands, this, request);
}

void SSMClient::ListCommandsAsync(const ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::ListCommandsAsyncHelper, this, request, handler, context);
}

void SSMClient::ListCommandsAsyncHelper(const ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCommands(request), context);
}

ListDocumentsOutcome SSMClient::ListDocuments(const ListDocumentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDocumentsOutcome(ListDocumentsResult(outcome.GetResult()));
  }
  else
  {
    return ListDocumentsOutcome(outcome.GetError());
  }
}

ListDocumentsOutcomeCallable SSMClient::ListDocumentsCallable(const ListDocumentsRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::ListDocuments, this, request);
}

void SSMClient::ListDocumentsAsync(const ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::ListDocumentsAsyncHelper, this, request, handler, context);
}

void SSMClient::ListDocumentsAsyncHelper(const ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDocuments(request), context);
}

SendCommandOutcome SSMClient::SendCommand(const SendCommandRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SendCommandOutcome(SendCommandResult(outcome.GetResult()));
  }
  else
  {
    return SendCommandOutcome(outcome.GetError());
  }
}

SendCommandOutcomeCallable SSMClient::SendCommandCallable(const SendCommandRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::SendCommand, this, request);
}

void SSMClient::SendCommandAsync(const SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::SendCommandAsyncHelper, this, request, handler, context);
}

void SSMClient::SendCommandAsyncHelper(const SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendCommand(request), context);
}

UpdateAssociationStatusOutcome SSMClient::UpdateAssociationStatus(const UpdateAssociationStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAssociationStatusOutcome(UpdateAssociationStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAssociationStatusOutcome(outcome.GetError());
  }
}

UpdateAssociationStatusOutcomeCallable SSMClient::UpdateAssociationStatusCallable(const UpdateAssociationStatusRequest& request) const
{
  return std::async(std::launch::async, &SSMClient::UpdateAssociationStatus, this, request);
}

void SSMClient::UpdateAssociationStatusAsync(const UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SSMClient::UpdateAssociationStatusAsyncHelper, this, request, handler, context);
}

void SSMClient::UpdateAssociationStatusAsyncHelper(const UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssociationStatus(request), context);
}

