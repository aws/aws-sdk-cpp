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

#include <aws/connectcampaigns/ConnectCampaignsClient.h>
#include <aws/connectcampaigns/ConnectCampaignsEndpoint.h>
#include <aws/connectcampaigns/ConnectCampaignsErrorMarshaller.h>
#include <aws/connectcampaigns/model/CreateCampaignRequest.h>
#include <aws/connectcampaigns/model/DeleteCampaignRequest.h>
#include <aws/connectcampaigns/model/DeleteConnectInstanceConfigRequest.h>
#include <aws/connectcampaigns/model/DeleteInstanceOnboardingJobRequest.h>
#include <aws/connectcampaigns/model/DescribeCampaignRequest.h>
#include <aws/connectcampaigns/model/GetCampaignStateRequest.h>
#include <aws/connectcampaigns/model/GetCampaignStateBatchRequest.h>
#include <aws/connectcampaigns/model/GetConnectInstanceConfigRequest.h>
#include <aws/connectcampaigns/model/GetInstanceOnboardingJobStatusRequest.h>
#include <aws/connectcampaigns/model/ListCampaignsRequest.h>
#include <aws/connectcampaigns/model/ListTagsForResourceRequest.h>
#include <aws/connectcampaigns/model/PauseCampaignRequest.h>
#include <aws/connectcampaigns/model/PutDialRequestBatchRequest.h>
#include <aws/connectcampaigns/model/ResumeCampaignRequest.h>
#include <aws/connectcampaigns/model/StartCampaignRequest.h>
#include <aws/connectcampaigns/model/StartInstanceOnboardingJobRequest.h>
#include <aws/connectcampaigns/model/StopCampaignRequest.h>
#include <aws/connectcampaigns/model/TagResourceRequest.h>
#include <aws/connectcampaigns/model/UntagResourceRequest.h>
#include <aws/connectcampaigns/model/UpdateCampaignDialerConfigRequest.h>
#include <aws/connectcampaigns/model/UpdateCampaignNameRequest.h>
#include <aws/connectcampaigns/model/UpdateCampaignOutboundCallConfigRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConnectCampaigns;
using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "connect-campaigns";
static const char* ALLOCATION_TAG = "ConnectCampaignsClient";


ConnectCampaignsClient::ConnectCampaignsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ConnectCampaignsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectCampaignsClient::ConnectCampaignsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ConnectCampaignsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectCampaignsClient::ConnectCampaignsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ConnectCampaignsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectCampaignsClient::~ConnectCampaignsClient()
{
}

void ConnectCampaignsClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("ConnectCampaigns");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ConnectCampaignsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ConnectCampaignsClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateCampaignOutcome ConnectCampaignsClient::CreateCampaign(const CreateCampaignRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns");
  return CreateCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateCampaignOutcomeCallable ConnectCampaignsClient::CreateCampaignCallable(const CreateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::CreateCampaignAsync(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCampaignAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::CreateCampaignAsyncHelper(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCampaign(request), context);
}

DeleteCampaignOutcome ConnectCampaignsClient::DeleteCampaign(const DeleteCampaignRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCampaign", "Required field: Id, is not set");
    return DeleteCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  return DeleteCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCampaignOutcomeCallable ConnectCampaignsClient::DeleteCampaignCallable(const DeleteCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::DeleteCampaignAsync(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCampaignAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::DeleteCampaignAsyncHelper(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCampaign(request), context);
}

DeleteConnectInstanceConfigOutcome ConnectCampaignsClient::DeleteConnectInstanceConfig(const DeleteConnectInstanceConfigRequest& request) const
{
  if (!request.ConnectInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnectInstanceConfig", "Required field: ConnectInstanceId, is not set");
    return DeleteConnectInstanceConfigOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-instance/");
  uri.AddPathSegment(request.GetConnectInstanceId());
  uri.AddPathSegments("/config");
  return DeleteConnectInstanceConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectInstanceConfigOutcomeCallable ConnectCampaignsClient::DeleteConnectInstanceConfigCallable(const DeleteConnectInstanceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectInstanceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnectInstanceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::DeleteConnectInstanceConfigAsync(const DeleteConnectInstanceConfigRequest& request, const DeleteConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConnectInstanceConfigAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::DeleteConnectInstanceConfigAsyncHelper(const DeleteConnectInstanceConfigRequest& request, const DeleteConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConnectInstanceConfig(request), context);
}

DeleteInstanceOnboardingJobOutcome ConnectCampaignsClient::DeleteInstanceOnboardingJob(const DeleteInstanceOnboardingJobRequest& request) const
{
  if (!request.ConnectInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInstanceOnboardingJob", "Required field: ConnectInstanceId, is not set");
    return DeleteInstanceOnboardingJobOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-instance/");
  uri.AddPathSegment(request.GetConnectInstanceId());
  uri.AddPathSegments("/onboarding");
  return DeleteInstanceOnboardingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceOnboardingJobOutcomeCallable ConnectCampaignsClient::DeleteInstanceOnboardingJobCallable(const DeleteInstanceOnboardingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceOnboardingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstanceOnboardingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::DeleteInstanceOnboardingJobAsync(const DeleteInstanceOnboardingJobRequest& request, const DeleteInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInstanceOnboardingJobAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::DeleteInstanceOnboardingJobAsyncHelper(const DeleteInstanceOnboardingJobRequest& request, const DeleteInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstanceOnboardingJob(request), context);
}

DescribeCampaignOutcome ConnectCampaignsClient::DescribeCampaign(const DescribeCampaignRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCampaign", "Required field: Id, is not set");
    return DescribeCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  return DescribeCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeCampaignOutcomeCallable ConnectCampaignsClient::DescribeCampaignCallable(const DescribeCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::DescribeCampaignAsync(const DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCampaignAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::DescribeCampaignAsyncHelper(const DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCampaign(request), context);
}

GetCampaignStateOutcome ConnectCampaignsClient::GetCampaignState(const GetCampaignStateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignState", "Required field: Id, is not set");
    return GetCampaignStateOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/state");
  return GetCampaignStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignStateOutcomeCallable ConnectCampaignsClient::GetCampaignStateCallable(const GetCampaignStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::GetCampaignStateAsync(const GetCampaignStateRequest& request, const GetCampaignStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCampaignStateAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::GetCampaignStateAsyncHelper(const GetCampaignStateRequest& request, const GetCampaignStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCampaignState(request), context);
}

GetCampaignStateBatchOutcome ConnectCampaignsClient::GetCampaignStateBatch(const GetCampaignStateBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns-state");
  return GetCampaignStateBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignStateBatchOutcomeCallable ConnectCampaignsClient::GetCampaignStateBatchCallable(const GetCampaignStateBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignStateBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignStateBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::GetCampaignStateBatchAsync(const GetCampaignStateBatchRequest& request, const GetCampaignStateBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCampaignStateBatchAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::GetCampaignStateBatchAsyncHelper(const GetCampaignStateBatchRequest& request, const GetCampaignStateBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCampaignStateBatch(request), context);
}

GetConnectInstanceConfigOutcome ConnectCampaignsClient::GetConnectInstanceConfig(const GetConnectInstanceConfigRequest& request) const
{
  if (!request.ConnectInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnectInstanceConfig", "Required field: ConnectInstanceId, is not set");
    return GetConnectInstanceConfigOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-instance/");
  uri.AddPathSegment(request.GetConnectInstanceId());
  uri.AddPathSegments("/config");
  return GetConnectInstanceConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectInstanceConfigOutcomeCallable ConnectCampaignsClient::GetConnectInstanceConfigCallable(const GetConnectInstanceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectInstanceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectInstanceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::GetConnectInstanceConfigAsync(const GetConnectInstanceConfigRequest& request, const GetConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectInstanceConfigAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::GetConnectInstanceConfigAsyncHelper(const GetConnectInstanceConfigRequest& request, const GetConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnectInstanceConfig(request), context);
}

GetInstanceOnboardingJobStatusOutcome ConnectCampaignsClient::GetInstanceOnboardingJobStatus(const GetInstanceOnboardingJobStatusRequest& request) const
{
  if (!request.ConnectInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInstanceOnboardingJobStatus", "Required field: ConnectInstanceId, is not set");
    return GetInstanceOnboardingJobStatusOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-instance/");
  uri.AddPathSegment(request.GetConnectInstanceId());
  uri.AddPathSegments("/onboarding");
  return GetInstanceOnboardingJobStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceOnboardingJobStatusOutcomeCallable ConnectCampaignsClient::GetInstanceOnboardingJobStatusCallable(const GetInstanceOnboardingJobStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceOnboardingJobStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceOnboardingJobStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::GetInstanceOnboardingJobStatusAsync(const GetInstanceOnboardingJobStatusRequest& request, const GetInstanceOnboardingJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceOnboardingJobStatusAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::GetInstanceOnboardingJobStatusAsyncHelper(const GetInstanceOnboardingJobStatusRequest& request, const GetInstanceOnboardingJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceOnboardingJobStatus(request), context);
}

ListCampaignsOutcome ConnectCampaignsClient::ListCampaigns(const ListCampaignsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns-summary");
  return ListCampaignsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCampaignsOutcomeCallable ConnectCampaignsClient::ListCampaignsCallable(const ListCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::ListCampaignsAsync(const ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCampaignsAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::ListCampaignsAsyncHelper(const ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCampaigns(request), context);
}

ListTagsForResourceOutcome ConnectCampaignsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ConnectCampaignsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PauseCampaignOutcome ConnectCampaignsClient::PauseCampaign(const PauseCampaignRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PauseCampaign", "Required field: Id, is not set");
    return PauseCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/pause");
  return PauseCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PauseCampaignOutcomeCallable ConnectCampaignsClient::PauseCampaignCallable(const PauseCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PauseCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PauseCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::PauseCampaignAsync(const PauseCampaignRequest& request, const PauseCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PauseCampaignAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::PauseCampaignAsyncHelper(const PauseCampaignRequest& request, const PauseCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PauseCampaign(request), context);
}

PutDialRequestBatchOutcome ConnectCampaignsClient::PutDialRequestBatch(const PutDialRequestBatchRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDialRequestBatch", "Required field: Id, is not set");
    return PutDialRequestBatchOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/dial-requests");
  return PutDialRequestBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDialRequestBatchOutcomeCallable ConnectCampaignsClient::PutDialRequestBatchCallable(const PutDialRequestBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDialRequestBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDialRequestBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::PutDialRequestBatchAsync(const PutDialRequestBatchRequest& request, const PutDialRequestBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutDialRequestBatchAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::PutDialRequestBatchAsyncHelper(const PutDialRequestBatchRequest& request, const PutDialRequestBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDialRequestBatch(request), context);
}

ResumeCampaignOutcome ConnectCampaignsClient::ResumeCampaign(const ResumeCampaignRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ResumeCampaign", "Required field: Id, is not set");
    return ResumeCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/resume");
  return ResumeCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeCampaignOutcomeCallable ConnectCampaignsClient::ResumeCampaignCallable(const ResumeCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::ResumeCampaignAsync(const ResumeCampaignRequest& request, const ResumeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResumeCampaignAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::ResumeCampaignAsyncHelper(const ResumeCampaignRequest& request, const ResumeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResumeCampaign(request), context);
}

StartCampaignOutcome ConnectCampaignsClient::StartCampaign(const StartCampaignRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartCampaign", "Required field: Id, is not set");
    return StartCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/start");
  return StartCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartCampaignOutcomeCallable ConnectCampaignsClient::StartCampaignCallable(const StartCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::StartCampaignAsync(const StartCampaignRequest& request, const StartCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartCampaignAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::StartCampaignAsyncHelper(const StartCampaignRequest& request, const StartCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartCampaign(request), context);
}

StartInstanceOnboardingJobOutcome ConnectCampaignsClient::StartInstanceOnboardingJob(const StartInstanceOnboardingJobRequest& request) const
{
  if (!request.ConnectInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartInstanceOnboardingJob", "Required field: ConnectInstanceId, is not set");
    return StartInstanceOnboardingJobOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-instance/");
  uri.AddPathSegment(request.GetConnectInstanceId());
  uri.AddPathSegments("/onboarding");
  return StartInstanceOnboardingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartInstanceOnboardingJobOutcomeCallable ConnectCampaignsClient::StartInstanceOnboardingJobCallable(const StartInstanceOnboardingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInstanceOnboardingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInstanceOnboardingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::StartInstanceOnboardingJobAsync(const StartInstanceOnboardingJobRequest& request, const StartInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartInstanceOnboardingJobAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::StartInstanceOnboardingJobAsyncHelper(const StartInstanceOnboardingJobRequest& request, const StartInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartInstanceOnboardingJob(request), context);
}

StopCampaignOutcome ConnectCampaignsClient::StopCampaign(const StopCampaignRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopCampaign", "Required field: Id, is not set");
    return StopCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/stop");
  return StopCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopCampaignOutcomeCallable ConnectCampaignsClient::StopCampaignCallable(const StopCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::StopCampaignAsync(const StopCampaignRequest& request, const StopCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopCampaignAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::StopCampaignAsyncHelper(const StopCampaignRequest& request, const StopCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopCampaign(request), context);
}

TagResourceOutcome ConnectCampaignsClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Arn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ConnectCampaignsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ConnectCampaignsClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ConnectCampaignsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateCampaignDialerConfigOutcome ConnectCampaignsClient::UpdateCampaignDialerConfig(const UpdateCampaignDialerConfigRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCampaignDialerConfig", "Required field: Id, is not set");
    return UpdateCampaignDialerConfigOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/dialer-config");
  return UpdateCampaignDialerConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCampaignDialerConfigOutcomeCallable ConnectCampaignsClient::UpdateCampaignDialerConfigCallable(const UpdateCampaignDialerConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCampaignDialerConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCampaignDialerConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::UpdateCampaignDialerConfigAsync(const UpdateCampaignDialerConfigRequest& request, const UpdateCampaignDialerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCampaignDialerConfigAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::UpdateCampaignDialerConfigAsyncHelper(const UpdateCampaignDialerConfigRequest& request, const UpdateCampaignDialerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCampaignDialerConfig(request), context);
}

UpdateCampaignNameOutcome ConnectCampaignsClient::UpdateCampaignName(const UpdateCampaignNameRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCampaignName", "Required field: Id, is not set");
    return UpdateCampaignNameOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/name");
  return UpdateCampaignNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCampaignNameOutcomeCallable ConnectCampaignsClient::UpdateCampaignNameCallable(const UpdateCampaignNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCampaignNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCampaignName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::UpdateCampaignNameAsync(const UpdateCampaignNameRequest& request, const UpdateCampaignNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCampaignNameAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::UpdateCampaignNameAsyncHelper(const UpdateCampaignNameRequest& request, const UpdateCampaignNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCampaignName(request), context);
}

UpdateCampaignOutboundCallConfigOutcome ConnectCampaignsClient::UpdateCampaignOutboundCallConfig(const UpdateCampaignOutboundCallConfigRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCampaignOutboundCallConfig", "Required field: Id, is not set");
    return UpdateCampaignOutboundCallConfigOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/outbound-call-config");
  return UpdateCampaignOutboundCallConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCampaignOutboundCallConfigOutcomeCallable ConnectCampaignsClient::UpdateCampaignOutboundCallConfigCallable(const UpdateCampaignOutboundCallConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCampaignOutboundCallConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCampaignOutboundCallConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCampaignsClient::UpdateCampaignOutboundCallConfigAsync(const UpdateCampaignOutboundCallConfigRequest& request, const UpdateCampaignOutboundCallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCampaignOutboundCallConfigAsyncHelper( request, handler, context ); } );
}

void ConnectCampaignsClient::UpdateCampaignOutboundCallConfigAsyncHelper(const UpdateCampaignOutboundCallConfigRequest& request, const UpdateCampaignOutboundCallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCampaignOutboundCallConfig(request), context);
}

