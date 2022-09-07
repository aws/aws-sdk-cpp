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

#include <aws/mediaconvert/MediaConvertClient.h>
#include <aws/mediaconvert/MediaConvertEndpoint.h>
#include <aws/mediaconvert/MediaConvertErrorMarshaller.h>
#include <aws/mediaconvert/model/AssociateCertificateRequest.h>
#include <aws/mediaconvert/model/CancelJobRequest.h>
#include <aws/mediaconvert/model/CreateJobRequest.h>
#include <aws/mediaconvert/model/CreateJobTemplateRequest.h>
#include <aws/mediaconvert/model/CreatePresetRequest.h>
#include <aws/mediaconvert/model/CreateQueueRequest.h>
#include <aws/mediaconvert/model/DeleteJobTemplateRequest.h>
#include <aws/mediaconvert/model/DeletePolicyRequest.h>
#include <aws/mediaconvert/model/DeletePresetRequest.h>
#include <aws/mediaconvert/model/DeleteQueueRequest.h>
#include <aws/mediaconvert/model/DescribeEndpointsRequest.h>
#include <aws/mediaconvert/model/DisassociateCertificateRequest.h>
#include <aws/mediaconvert/model/GetJobRequest.h>
#include <aws/mediaconvert/model/GetJobTemplateRequest.h>
#include <aws/mediaconvert/model/GetPolicyRequest.h>
#include <aws/mediaconvert/model/GetPresetRequest.h>
#include <aws/mediaconvert/model/GetQueueRequest.h>
#include <aws/mediaconvert/model/ListJobTemplatesRequest.h>
#include <aws/mediaconvert/model/ListJobsRequest.h>
#include <aws/mediaconvert/model/ListPresetsRequest.h>
#include <aws/mediaconvert/model/ListQueuesRequest.h>
#include <aws/mediaconvert/model/ListTagsForResourceRequest.h>
#include <aws/mediaconvert/model/PutPolicyRequest.h>
#include <aws/mediaconvert/model/TagResourceRequest.h>
#include <aws/mediaconvert/model/UntagResourceRequest.h>
#include <aws/mediaconvert/model/UpdateJobTemplateRequest.h>
#include <aws/mediaconvert/model/UpdatePresetRequest.h>
#include <aws/mediaconvert/model/UpdateQueueRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaConvert;
using namespace Aws::MediaConvert::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mediaconvert";
static const char* ALLOCATION_TAG = "MediaConvertClient";

MediaConvertClient::MediaConvertClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaConvertClient::~MediaConvertClient()
{
}

void MediaConvertClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MediaConvert");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaConvertEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaConvertClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateCertificateOutcome MediaConvertClient::AssociateCertificate(const AssociateCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/certificates");
  return AssociateCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateCertificateOutcomeCallable MediaConvertClient::AssociateCertificateCallable(const AssociateCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientAssociateCertificateAsyncHelper(MediaConvertClient const * const clientThis, const AssociateCertificateRequest& request, const AssociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateCertificate(request), context);
}

void MediaConvertClient::AssociateCertificateAsync(const AssociateCertificateRequest& request, const AssociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientAssociateCertificateAsyncHelper( this, request, handler, context ); } );
}

CancelJobOutcome MediaConvertClient::CancelJob(const CancelJobRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: Id, is not set");
    return CancelJobOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/jobs/");
  uri.AddPathSegment(request.GetId());
  return CancelJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelJobOutcomeCallable MediaConvertClient::CancelJobCallable(const CancelJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientCancelJobAsyncHelper(MediaConvertClient const * const clientThis, const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelJob(request), context);
}

void MediaConvertClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientCancelJobAsyncHelper( this, request, handler, context ); } );
}

CreateJobOutcome MediaConvertClient::CreateJob(const CreateJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/jobs");
  return CreateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcomeCallable MediaConvertClient::CreateJobCallable(const CreateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientCreateJobAsyncHelper(MediaConvertClient const * const clientThis, const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateJob(request), context);
}

void MediaConvertClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientCreateJobAsyncHelper( this, request, handler, context ); } );
}

CreateJobTemplateOutcome MediaConvertClient::CreateJobTemplate(const CreateJobTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/jobTemplates");
  return CreateJobTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobTemplateOutcomeCallable MediaConvertClient::CreateJobTemplateCallable(const CreateJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientCreateJobTemplateAsyncHelper(MediaConvertClient const * const clientThis, const CreateJobTemplateRequest& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateJobTemplate(request), context);
}

void MediaConvertClient::CreateJobTemplateAsync(const CreateJobTemplateRequest& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientCreateJobTemplateAsyncHelper( this, request, handler, context ); } );
}

CreatePresetOutcome MediaConvertClient::CreatePreset(const CreatePresetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/presets");
  return CreatePresetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePresetOutcomeCallable MediaConvertClient::CreatePresetCallable(const CreatePresetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePresetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePreset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientCreatePresetAsyncHelper(MediaConvertClient const * const clientThis, const CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePreset(request), context);
}

void MediaConvertClient::CreatePresetAsync(const CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientCreatePresetAsyncHelper( this, request, handler, context ); } );
}

CreateQueueOutcome MediaConvertClient::CreateQueue(const CreateQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/queues");
  return CreateQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateQueueOutcomeCallable MediaConvertClient::CreateQueueCallable(const CreateQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientCreateQueueAsyncHelper(MediaConvertClient const * const clientThis, const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateQueue(request), context);
}

void MediaConvertClient::CreateQueueAsync(const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientCreateQueueAsyncHelper( this, request, handler, context ); } );
}

DeleteJobTemplateOutcome MediaConvertClient::DeleteJobTemplate(const DeleteJobTemplateRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTemplate", "Required field: Name, is not set");
    return DeleteJobTemplateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/jobTemplates/");
  uri.AddPathSegment(request.GetName());
  return DeleteJobTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobTemplateOutcomeCallable MediaConvertClient::DeleteJobTemplateCallable(const DeleteJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientDeleteJobTemplateAsyncHelper(MediaConvertClient const * const clientThis, const DeleteJobTemplateRequest& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteJobTemplate(request), context);
}

void MediaConvertClient::DeleteJobTemplateAsync(const DeleteJobTemplateRequest& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientDeleteJobTemplateAsyncHelper( this, request, handler, context ); } );
}

DeletePolicyOutcome MediaConvertClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/policy");
  return DeletePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePolicyOutcomeCallable MediaConvertClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientDeletePolicyAsyncHelper(MediaConvertClient const * const clientThis, const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePolicy(request), context);
}

void MediaConvertClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientDeletePolicyAsyncHelper( this, request, handler, context ); } );
}

DeletePresetOutcome MediaConvertClient::DeletePreset(const DeletePresetRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePreset", "Required field: Name, is not set");
    return DeletePresetOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/presets/");
  uri.AddPathSegment(request.GetName());
  return DeletePresetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePresetOutcomeCallable MediaConvertClient::DeletePresetCallable(const DeletePresetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePresetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePreset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientDeletePresetAsyncHelper(MediaConvertClient const * const clientThis, const DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePreset(request), context);
}

void MediaConvertClient::DeletePresetAsync(const DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientDeletePresetAsyncHelper( this, request, handler, context ); } );
}

DeleteQueueOutcome MediaConvertClient::DeleteQueue(const DeleteQueueRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueue", "Required field: Name, is not set");
    return DeleteQueueOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/queues/");
  uri.AddPathSegment(request.GetName());
  return DeleteQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteQueueOutcomeCallable MediaConvertClient::DeleteQueueCallable(const DeleteQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientDeleteQueueAsyncHelper(MediaConvertClient const * const clientThis, const DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteQueue(request), context);
}

void MediaConvertClient::DeleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientDeleteQueueAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointsOutcome MediaConvertClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/endpoints");
  return DescribeEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointsOutcomeCallable MediaConvertClient::DescribeEndpointsCallable(const DescribeEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientDescribeEndpointsAsyncHelper(MediaConvertClient const * const clientThis, const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpoints(request), context);
}

void MediaConvertClient::DescribeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientDescribeEndpointsAsyncHelper( this, request, handler, context ); } );
}

DisassociateCertificateOutcome MediaConvertClient::DisassociateCertificate(const DisassociateCertificateRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateCertificate", "Required field: Arn, is not set");
    return DisassociateCertificateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/certificates/");
  uri.AddPathSegment(request.GetArn());
  return DisassociateCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateCertificateOutcomeCallable MediaConvertClient::DisassociateCertificateCallable(const DisassociateCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientDisassociateCertificateAsyncHelper(MediaConvertClient const * const clientThis, const DisassociateCertificateRequest& request, const DisassociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateCertificate(request), context);
}

void MediaConvertClient::DisassociateCertificateAsync(const DisassociateCertificateRequest& request, const DisassociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientDisassociateCertificateAsyncHelper( this, request, handler, context ); } );
}

GetJobOutcome MediaConvertClient::GetJob(const GetJobRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: Id, is not set");
    return GetJobOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/jobs/");
  uri.AddPathSegment(request.GetId());
  return GetJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJobOutcomeCallable MediaConvertClient::GetJobCallable(const GetJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientGetJobAsyncHelper(MediaConvertClient const * const clientThis, const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJob(request), context);
}

void MediaConvertClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientGetJobAsyncHelper( this, request, handler, context ); } );
}

GetJobTemplateOutcome MediaConvertClient::GetJobTemplate(const GetJobTemplateRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobTemplate", "Required field: Name, is not set");
    return GetJobTemplateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/jobTemplates/");
  uri.AddPathSegment(request.GetName());
  return GetJobTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJobTemplateOutcomeCallable MediaConvertClient::GetJobTemplateCallable(const GetJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientGetJobTemplateAsyncHelper(MediaConvertClient const * const clientThis, const GetJobTemplateRequest& request, const GetJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJobTemplate(request), context);
}

void MediaConvertClient::GetJobTemplateAsync(const GetJobTemplateRequest& request, const GetJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientGetJobTemplateAsyncHelper( this, request, handler, context ); } );
}

GetPolicyOutcome MediaConvertClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/policy");
  return GetPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPolicyOutcomeCallable MediaConvertClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientGetPolicyAsyncHelper(MediaConvertClient const * const clientThis, const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPolicy(request), context);
}

void MediaConvertClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientGetPolicyAsyncHelper( this, request, handler, context ); } );
}

GetPresetOutcome MediaConvertClient::GetPreset(const GetPresetRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPreset", "Required field: Name, is not set");
    return GetPresetOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/presets/");
  uri.AddPathSegment(request.GetName());
  return GetPresetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPresetOutcomeCallable MediaConvertClient::GetPresetCallable(const GetPresetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPresetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPreset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientGetPresetAsyncHelper(MediaConvertClient const * const clientThis, const GetPresetRequest& request, const GetPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPreset(request), context);
}

void MediaConvertClient::GetPresetAsync(const GetPresetRequest& request, const GetPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientGetPresetAsyncHelper( this, request, handler, context ); } );
}

GetQueueOutcome MediaConvertClient::GetQueue(const GetQueueRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueue", "Required field: Name, is not set");
    return GetQueueOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/queues/");
  uri.AddPathSegment(request.GetName());
  return GetQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetQueueOutcomeCallable MediaConvertClient::GetQueueCallable(const GetQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientGetQueueAsyncHelper(MediaConvertClient const * const clientThis, const GetQueueRequest& request, const GetQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueue(request), context);
}

void MediaConvertClient::GetQueueAsync(const GetQueueRequest& request, const GetQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientGetQueueAsyncHelper( this, request, handler, context ); } );
}

ListJobTemplatesOutcome MediaConvertClient::ListJobTemplates(const ListJobTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/jobTemplates");
  return ListJobTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobTemplatesOutcomeCallable MediaConvertClient::ListJobTemplatesCallable(const ListJobTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientListJobTemplatesAsyncHelper(MediaConvertClient const * const clientThis, const ListJobTemplatesRequest& request, const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobTemplates(request), context);
}

void MediaConvertClient::ListJobTemplatesAsync(const ListJobTemplatesRequest& request, const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientListJobTemplatesAsyncHelper( this, request, handler, context ); } );
}

ListJobsOutcome MediaConvertClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/jobs");
  return ListJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable MediaConvertClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientListJobsAsyncHelper(MediaConvertClient const * const clientThis, const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobs(request), context);
}

void MediaConvertClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientListJobsAsyncHelper( this, request, handler, context ); } );
}

ListPresetsOutcome MediaConvertClient::ListPresets(const ListPresetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/presets");
  return ListPresetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPresetsOutcomeCallable MediaConvertClient::ListPresetsCallable(const ListPresetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPresetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPresets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientListPresetsAsyncHelper(MediaConvertClient const * const clientThis, const ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPresets(request), context);
}

void MediaConvertClient::ListPresetsAsync(const ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientListPresetsAsyncHelper( this, request, handler, context ); } );
}

ListQueuesOutcome MediaConvertClient::ListQueues(const ListQueuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/queues");
  return ListQueuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQueuesOutcomeCallable MediaConvertClient::ListQueuesCallable(const ListQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientListQueuesAsyncHelper(MediaConvertClient const * const clientThis, const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQueues(request), context);
}

void MediaConvertClient::ListQueuesAsync(const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientListQueuesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome MediaConvertClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/tags/");
  uri.AddPathSegment(request.GetArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MediaConvertClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientListTagsForResourceAsyncHelper(MediaConvertClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void MediaConvertClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutPolicyOutcome MediaConvertClient::PutPolicy(const PutPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/policy");
  return PutPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutPolicyOutcomeCallable MediaConvertClient::PutPolicyCallable(const PutPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientPutPolicyAsyncHelper(MediaConvertClient const * const clientThis, const PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPolicy(request), context);
}

void MediaConvertClient::PutPolicyAsync(const PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientPutPolicyAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome MediaConvertClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/tags");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MediaConvertClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientTagResourceAsyncHelper(MediaConvertClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void MediaConvertClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome MediaConvertClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/tags/");
  uri.AddPathSegment(request.GetArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MediaConvertClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientUntagResourceAsyncHelper(MediaConvertClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void MediaConvertClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateJobTemplateOutcome MediaConvertClient::UpdateJobTemplate(const UpdateJobTemplateRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobTemplate", "Required field: Name, is not set");
    return UpdateJobTemplateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/jobTemplates/");
  uri.AddPathSegment(request.GetName());
  return UpdateJobTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateJobTemplateOutcomeCallable MediaConvertClient::UpdateJobTemplateCallable(const UpdateJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientUpdateJobTemplateAsyncHelper(MediaConvertClient const * const clientThis, const UpdateJobTemplateRequest& request, const UpdateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateJobTemplate(request), context);
}

void MediaConvertClient::UpdateJobTemplateAsync(const UpdateJobTemplateRequest& request, const UpdateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientUpdateJobTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdatePresetOutcome MediaConvertClient::UpdatePreset(const UpdatePresetRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePreset", "Required field: Name, is not set");
    return UpdatePresetOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/presets/");
  uri.AddPathSegment(request.GetName());
  return UpdatePresetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePresetOutcomeCallable MediaConvertClient::UpdatePresetCallable(const UpdatePresetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePresetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePreset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientUpdatePresetAsyncHelper(MediaConvertClient const * const clientThis, const UpdatePresetRequest& request, const UpdatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePreset(request), context);
}

void MediaConvertClient::UpdatePresetAsync(const UpdatePresetRequest& request, const UpdatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientUpdatePresetAsyncHelper( this, request, handler, context ); } );
}

UpdateQueueOutcome MediaConvertClient::UpdateQueue(const UpdateQueueRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueue", "Required field: Name, is not set");
    return UpdateQueueOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-08-29/queues/");
  uri.AddPathSegment(request.GetName());
  return UpdateQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueOutcomeCallable MediaConvertClient::UpdateQueueCallable(const UpdateQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConvertClientUpdateQueueAsyncHelper(MediaConvertClient const * const clientThis, const UpdateQueueRequest& request, const UpdateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQueue(request), context);
}

void MediaConvertClient::UpdateQueueAsync(const UpdateQueueRequest& request, const UpdateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaConvertClientUpdateQueueAsyncHelper( this, request, handler, context ); } );
}

