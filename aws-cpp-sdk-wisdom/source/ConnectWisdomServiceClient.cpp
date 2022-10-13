/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/wisdom/ConnectWisdomServiceClient.h>
#include <aws/wisdom/ConnectWisdomServiceEndpoint.h>
#include <aws/wisdom/ConnectWisdomServiceErrorMarshaller.h>
#include <aws/wisdom/model/CreateAssistantRequest.h>
#include <aws/wisdom/model/CreateAssistantAssociationRequest.h>
#include <aws/wisdom/model/CreateContentRequest.h>
#include <aws/wisdom/model/CreateKnowledgeBaseRequest.h>
#include <aws/wisdom/model/CreateSessionRequest.h>
#include <aws/wisdom/model/DeleteAssistantRequest.h>
#include <aws/wisdom/model/DeleteAssistantAssociationRequest.h>
#include <aws/wisdom/model/DeleteContentRequest.h>
#include <aws/wisdom/model/DeleteKnowledgeBaseRequest.h>
#include <aws/wisdom/model/GetAssistantRequest.h>
#include <aws/wisdom/model/GetAssistantAssociationRequest.h>
#include <aws/wisdom/model/GetContentRequest.h>
#include <aws/wisdom/model/GetContentSummaryRequest.h>
#include <aws/wisdom/model/GetKnowledgeBaseRequest.h>
#include <aws/wisdom/model/GetRecommendationsRequest.h>
#include <aws/wisdom/model/GetSessionRequest.h>
#include <aws/wisdom/model/ListAssistantAssociationsRequest.h>
#include <aws/wisdom/model/ListAssistantsRequest.h>
#include <aws/wisdom/model/ListContentsRequest.h>
#include <aws/wisdom/model/ListKnowledgeBasesRequest.h>
#include <aws/wisdom/model/ListTagsForResourceRequest.h>
#include <aws/wisdom/model/NotifyRecommendationsReceivedRequest.h>
#include <aws/wisdom/model/QueryAssistantRequest.h>
#include <aws/wisdom/model/RemoveKnowledgeBaseTemplateUriRequest.h>
#include <aws/wisdom/model/SearchContentRequest.h>
#include <aws/wisdom/model/SearchSessionsRequest.h>
#include <aws/wisdom/model/StartContentUploadRequest.h>
#include <aws/wisdom/model/TagResourceRequest.h>
#include <aws/wisdom/model/UntagResourceRequest.h>
#include <aws/wisdom/model/UpdateContentRequest.h>
#include <aws/wisdom/model/UpdateKnowledgeBaseTemplateUriRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConnectWisdomService;
using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "wisdom";
static const char* ALLOCATION_TAG = "ConnectWisdomServiceClient";

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectWisdomServiceClient::~ConnectWisdomServiceClient()
{
}

void ConnectWisdomServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Wisdom");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ConnectWisdomServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ConnectWisdomServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateAssistantOutcome ConnectWisdomServiceClient::CreateAssistant(const CreateAssistantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants");
  return CreateAssistantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssistantOutcomeCallable ConnectWisdomServiceClient::CreateAssistantCallable(const CreateAssistantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssistantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssistant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::CreateAssistantAsync(const CreateAssistantRequest& request, const CreateAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAssistant(request), context);
    } );
}

CreateAssistantAssociationOutcome ConnectWisdomServiceClient::CreateAssistantAssociation(const CreateAssistantAssociationRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssistantAssociation", "Required field: AssistantId, is not set");
    return CreateAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/associations");
  return CreateAssistantAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssistantAssociationOutcomeCallable ConnectWisdomServiceClient::CreateAssistantAssociationCallable(const CreateAssistantAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssistantAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssistantAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::CreateAssistantAssociationAsync(const CreateAssistantAssociationRequest& request, const CreateAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAssistantAssociation(request), context);
    } );
}

CreateContentOutcome ConnectWisdomServiceClient::CreateContent(const CreateContentRequest& request) const
{
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContent", "Required field: KnowledgeBaseId, is not set");
    return CreateContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/contents");
  return CreateContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContentOutcomeCallable ConnectWisdomServiceClient::CreateContentCallable(const CreateContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::CreateContentAsync(const CreateContentRequest& request, const CreateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContent(request), context);
    } );
}

CreateKnowledgeBaseOutcome ConnectWisdomServiceClient::CreateKnowledgeBase(const CreateKnowledgeBaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases");
  return CreateKnowledgeBaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateKnowledgeBaseOutcomeCallable ConnectWisdomServiceClient::CreateKnowledgeBaseCallable(const CreateKnowledgeBaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKnowledgeBaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKnowledgeBase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::CreateKnowledgeBaseAsync(const CreateKnowledgeBaseRequest& request, const CreateKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateKnowledgeBase(request), context);
    } );
}

CreateSessionOutcome ConnectWisdomServiceClient::CreateSession(const CreateSessionRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: AssistantId, is not set");
    return CreateSessionOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/sessions");
  return CreateSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSessionOutcomeCallable ConnectWisdomServiceClient::CreateSessionCallable(const CreateSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSession(request), context);
    } );
}

DeleteAssistantOutcome ConnectWisdomServiceClient::DeleteAssistant(const DeleteAssistantRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssistant", "Required field: AssistantId, is not set");
    return DeleteAssistantOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  return DeleteAssistantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssistantOutcomeCallable ConnectWisdomServiceClient::DeleteAssistantCallable(const DeleteAssistantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssistantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssistant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::DeleteAssistantAsync(const DeleteAssistantRequest& request, const DeleteAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssistant(request), context);
    } );
}

DeleteAssistantAssociationOutcome ConnectWisdomServiceClient::DeleteAssistantAssociation(const DeleteAssistantAssociationRequest& request) const
{
  if (!request.AssistantAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/associations/");
  uri.AddPathSegment(request.GetAssistantAssociationId());
  return DeleteAssistantAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssistantAssociationOutcomeCallable ConnectWisdomServiceClient::DeleteAssistantAssociationCallable(const DeleteAssistantAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssistantAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssistantAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::DeleteAssistantAssociationAsync(const DeleteAssistantAssociationRequest& request, const DeleteAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssistantAssociation(request), context);
    } );
}

DeleteContentOutcome ConnectWisdomServiceClient::DeleteContent(const DeleteContentRequest& request) const
{
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: ContentId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: KnowledgeBaseId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/contents/");
  uri.AddPathSegment(request.GetContentId());
  return DeleteContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContentOutcomeCallable ConnectWisdomServiceClient::DeleteContentCallable(const DeleteContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::DeleteContentAsync(const DeleteContentRequest& request, const DeleteContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContent(request), context);
    } );
}

DeleteKnowledgeBaseOutcome ConnectWisdomServiceClient::DeleteKnowledgeBase(const DeleteKnowledgeBaseRequest& request) const
{
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return DeleteKnowledgeBaseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  return DeleteKnowledgeBaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteKnowledgeBaseOutcomeCallable ConnectWisdomServiceClient::DeleteKnowledgeBaseCallable(const DeleteKnowledgeBaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteKnowledgeBaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteKnowledgeBase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::DeleteKnowledgeBaseAsync(const DeleteKnowledgeBaseRequest& request, const DeleteKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteKnowledgeBase(request), context);
    } );
}

GetAssistantOutcome ConnectWisdomServiceClient::GetAssistant(const GetAssistantRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssistant", "Required field: AssistantId, is not set");
    return GetAssistantOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  return GetAssistantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssistantOutcomeCallable ConnectWisdomServiceClient::GetAssistantCallable(const GetAssistantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssistantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssistant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::GetAssistantAsync(const GetAssistantRequest& request, const GetAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAssistant(request), context);
    } );
}

GetAssistantAssociationOutcome ConnectWisdomServiceClient::GetAssistantAssociation(const GetAssistantAssociationRequest& request) const
{
  if (!request.AssistantAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/associations/");
  uri.AddPathSegment(request.GetAssistantAssociationId());
  return GetAssistantAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssistantAssociationOutcomeCallable ConnectWisdomServiceClient::GetAssistantAssociationCallable(const GetAssistantAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssistantAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssistantAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::GetAssistantAssociationAsync(const GetAssistantAssociationRequest& request, const GetAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAssistantAssociation(request), context);
    } );
}

GetContentOutcome ConnectWisdomServiceClient::GetContent(const GetContentRequest& request) const
{
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: ContentId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: KnowledgeBaseId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/contents/");
  uri.AddPathSegment(request.GetContentId());
  return GetContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContentOutcomeCallable ConnectWisdomServiceClient::GetContentCallable(const GetContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::GetContentAsync(const GetContentRequest& request, const GetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContent(request), context);
    } );
}

GetContentSummaryOutcome ConnectWisdomServiceClient::GetContentSummary(const GetContentSummaryRequest& request) const
{
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: ContentId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: KnowledgeBaseId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/contents/");
  uri.AddPathSegment(request.GetContentId());
  uri.AddPathSegments("/summary");
  return GetContentSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContentSummaryOutcomeCallable ConnectWisdomServiceClient::GetContentSummaryCallable(const GetContentSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContentSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContentSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::GetContentSummaryAsync(const GetContentSummaryRequest& request, const GetContentSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContentSummary(request), context);
    } );
}

GetKnowledgeBaseOutcome ConnectWisdomServiceClient::GetKnowledgeBase(const GetKnowledgeBaseRequest& request) const
{
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return GetKnowledgeBaseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  return GetKnowledgeBaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetKnowledgeBaseOutcomeCallable ConnectWisdomServiceClient::GetKnowledgeBaseCallable(const GetKnowledgeBaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKnowledgeBaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKnowledgeBase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::GetKnowledgeBaseAsync(const GetKnowledgeBaseRequest& request, const GetKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetKnowledgeBase(request), context);
    } );
}

GetRecommendationsOutcome ConnectWisdomServiceClient::GetRecommendations(const GetRecommendationsRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: AssistantId, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: SessionId, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/sessions/");
  uri.AddPathSegment(request.GetSessionId());
  uri.AddPathSegments("/recommendations");
  return GetRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecommendationsOutcomeCallable ConnectWisdomServiceClient::GetRecommendationsCallable(const GetRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::GetRecommendationsAsync(const GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecommendations(request), context);
    } );
}

GetSessionOutcome ConnectWisdomServiceClient::GetSession(const GetSessionRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: AssistantId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/sessions/");
  uri.AddPathSegment(request.GetSessionId());
  return GetSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSessionOutcomeCallable ConnectWisdomServiceClient::GetSessionCallable(const GetSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::GetSessionAsync(const GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSession(request), context);
    } );
}

ListAssistantAssociationsOutcome ConnectWisdomServiceClient::ListAssistantAssociations(const ListAssistantAssociationsRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssistantAssociations", "Required field: AssistantId, is not set");
    return ListAssistantAssociationsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/associations");
  return ListAssistantAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssistantAssociationsOutcomeCallable ConnectWisdomServiceClient::ListAssistantAssociationsCallable(const ListAssistantAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssistantAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssistantAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::ListAssistantAssociationsAsync(const ListAssistantAssociationsRequest& request, const ListAssistantAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssistantAssociations(request), context);
    } );
}

ListAssistantsOutcome ConnectWisdomServiceClient::ListAssistants(const ListAssistantsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants");
  return ListAssistantsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssistantsOutcomeCallable ConnectWisdomServiceClient::ListAssistantsCallable(const ListAssistantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssistantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssistants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::ListAssistantsAsync(const ListAssistantsRequest& request, const ListAssistantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssistants(request), context);
    } );
}

ListContentsOutcome ConnectWisdomServiceClient::ListContents(const ListContentsRequest& request) const
{
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContents", "Required field: KnowledgeBaseId, is not set");
    return ListContentsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/contents");
  return ListContentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContentsOutcomeCallable ConnectWisdomServiceClient::ListContentsCallable(const ListContentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::ListContentsAsync(const ListContentsRequest& request, const ListContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListContents(request), context);
    } );
}

ListKnowledgeBasesOutcome ConnectWisdomServiceClient::ListKnowledgeBases(const ListKnowledgeBasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases");
  return ListKnowledgeBasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListKnowledgeBasesOutcomeCallable ConnectWisdomServiceClient::ListKnowledgeBasesCallable(const ListKnowledgeBasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKnowledgeBasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKnowledgeBases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::ListKnowledgeBasesAsync(const ListKnowledgeBasesRequest& request, const ListKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListKnowledgeBases(request), context);
    } );
}

ListTagsForResourceOutcome ConnectWisdomServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ConnectWisdomServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

NotifyRecommendationsReceivedOutcome ConnectWisdomServiceClient::NotifyRecommendationsReceived(const NotifyRecommendationsReceivedRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: AssistantId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: SessionId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/sessions/");
  uri.AddPathSegment(request.GetSessionId());
  uri.AddPathSegments("/recommendations/notify");
  return NotifyRecommendationsReceivedOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

NotifyRecommendationsReceivedOutcomeCallable ConnectWisdomServiceClient::NotifyRecommendationsReceivedCallable(const NotifyRecommendationsReceivedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyRecommendationsReceivedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyRecommendationsReceived(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::NotifyRecommendationsReceivedAsync(const NotifyRecommendationsReceivedRequest& request, const NotifyRecommendationsReceivedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, NotifyRecommendationsReceived(request), context);
    } );
}

QueryAssistantOutcome ConnectWisdomServiceClient::QueryAssistant(const QueryAssistantRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("QueryAssistant", "Required field: AssistantId, is not set");
    return QueryAssistantOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/query");
  return QueryAssistantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryAssistantOutcomeCallable ConnectWisdomServiceClient::QueryAssistantCallable(const QueryAssistantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryAssistantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->QueryAssistant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::QueryAssistantAsync(const QueryAssistantRequest& request, const QueryAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, QueryAssistant(request), context);
    } );
}

RemoveKnowledgeBaseTemplateUriOutcome ConnectWisdomServiceClient::RemoveKnowledgeBaseTemplateUri(const RemoveKnowledgeBaseTemplateUriRequest& request) const
{
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return RemoveKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/templateUri");
  return RemoveKnowledgeBaseTemplateUriOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveKnowledgeBaseTemplateUriOutcomeCallable ConnectWisdomServiceClient::RemoveKnowledgeBaseTemplateUriCallable(const RemoveKnowledgeBaseTemplateUriRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveKnowledgeBaseTemplateUriOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveKnowledgeBaseTemplateUri(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::RemoveKnowledgeBaseTemplateUriAsync(const RemoveKnowledgeBaseTemplateUriRequest& request, const RemoveKnowledgeBaseTemplateUriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveKnowledgeBaseTemplateUri(request), context);
    } );
}

SearchContentOutcome ConnectWisdomServiceClient::SearchContent(const SearchContentRequest& request) const
{
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchContent", "Required field: KnowledgeBaseId, is not set");
    return SearchContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/search");
  return SearchContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchContentOutcomeCallable ConnectWisdomServiceClient::SearchContentCallable(const SearchContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::SearchContentAsync(const SearchContentRequest& request, const SearchContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchContent(request), context);
    } );
}

SearchSessionsOutcome ConnectWisdomServiceClient::SearchSessions(const SearchSessionsRequest& request) const
{
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchSessions", "Required field: AssistantId, is not set");
    return SearchSessionsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assistants/");
  uri.AddPathSegment(request.GetAssistantId());
  uri.AddPathSegments("/searchSessions");
  return SearchSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchSessionsOutcomeCallable ConnectWisdomServiceClient::SearchSessionsCallable(const SearchSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::SearchSessionsAsync(const SearchSessionsRequest& request, const SearchSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchSessions(request), context);
    } );
}

StartContentUploadOutcome ConnectWisdomServiceClient::StartContentUpload(const StartContentUploadRequest& request) const
{
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartContentUpload", "Required field: KnowledgeBaseId, is not set");
    return StartContentUploadOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/upload");
  return StartContentUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartContentUploadOutcomeCallable ConnectWisdomServiceClient::StartContentUploadCallable(const StartContentUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartContentUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartContentUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::StartContentUploadAsync(const StartContentUploadRequest& request, const StartContentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartContentUpload(request), context);
    } );
}

TagResourceOutcome ConnectWisdomServiceClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ConnectWisdomServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ConnectWisdomServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ConnectWisdomServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateContentOutcome ConnectWisdomServiceClient::UpdateContent(const UpdateContentRequest& request) const
{
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: ContentId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: KnowledgeBaseId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/contents/");
  uri.AddPathSegment(request.GetContentId());
  return UpdateContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContentOutcomeCallable ConnectWisdomServiceClient::UpdateContentCallable(const UpdateContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::UpdateContentAsync(const UpdateContentRequest& request, const UpdateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateContent(request), context);
    } );
}

UpdateKnowledgeBaseTemplateUriOutcome ConnectWisdomServiceClient::UpdateKnowledgeBaseTemplateUri(const UpdateKnowledgeBaseTemplateUriRequest& request) const
{
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/knowledgeBases/");
  uri.AddPathSegment(request.GetKnowledgeBaseId());
  uri.AddPathSegments("/templateUri");
  return UpdateKnowledgeBaseTemplateUriOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateKnowledgeBaseTemplateUriOutcomeCallable ConnectWisdomServiceClient::UpdateKnowledgeBaseTemplateUriCallable(const UpdateKnowledgeBaseTemplateUriRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateKnowledgeBaseTemplateUriOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateKnowledgeBaseTemplateUri(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectWisdomServiceClient::UpdateKnowledgeBaseTemplateUriAsync(const UpdateKnowledgeBaseTemplateUriRequest& request, const UpdateKnowledgeBaseTemplateUriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateKnowledgeBaseTemplateUri(request), context);
    } );
}

