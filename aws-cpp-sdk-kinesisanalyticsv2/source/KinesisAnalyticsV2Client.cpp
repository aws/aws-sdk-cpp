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

#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Client.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Endpoint.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2ErrorMarshaller.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationInputRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationOutputRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationVpcConfigurationRequest.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationPresignedUrlRequest.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationSnapshotRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationOutputRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationSnapshotRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationVpcConfigurationRequest.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationSnapshotRequest.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationVersionRequest.h>
#include <aws/kinesisanalyticsv2/model/DiscoverInputSchemaRequest.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsRequest.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsRequest.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationsRequest.h>
#include <aws/kinesisanalyticsv2/model/ListTagsForResourceRequest.h>
#include <aws/kinesisanalyticsv2/model/RollbackApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/StartApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/StopApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/TagResourceRequest.h>
#include <aws/kinesisanalyticsv2/model/UntagResourceRequest.h>
#include <aws/kinesisanalyticsv2/model/UpdateApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/UpdateApplicationMaintenanceConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisAnalyticsV2;
using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "kinesisanalytics";
static const char* ALLOCATION_TAG = "KinesisAnalyticsV2Client";

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisAnalyticsV2Client::~KinesisAnalyticsV2Client()
{
}

void KinesisAnalyticsV2Client::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis Analytics V2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + KinesisAnalyticsV2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void KinesisAnalyticsV2Client::OverrideEndpoint(const Aws::String& endpoint)
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

AddApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOption(const AddApplicationCloudWatchLoggingOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationCloudWatchLoggingOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationCloudWatchLoggingOptionOutcomeCallable KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOptionCallable(const AddApplicationCloudWatchLoggingOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationCloudWatchLoggingOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationCloudWatchLoggingOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientAddApplicationCloudWatchLoggingOptionAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddApplicationCloudWatchLoggingOption(request), context);
}

void KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOptionAsync(const AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientAddApplicationCloudWatchLoggingOptionAsyncHelper( this, request, handler, context ); } );
}

AddApplicationInputOutcome KinesisAnalyticsV2Client::AddApplicationInput(const AddApplicationInputRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationInputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationInputOutcomeCallable KinesisAnalyticsV2Client::AddApplicationInputCallable(const AddApplicationInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientAddApplicationInputAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddApplicationInput(request), context);
}

void KinesisAnalyticsV2Client::AddApplicationInputAsync(const AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientAddApplicationInputAsyncHelper( this, request, handler, context ); } );
}

AddApplicationInputProcessingConfigurationOutcome KinesisAnalyticsV2Client::AddApplicationInputProcessingConfiguration(const AddApplicationInputProcessingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationInputProcessingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationInputProcessingConfigurationOutcomeCallable KinesisAnalyticsV2Client::AddApplicationInputProcessingConfigurationCallable(const AddApplicationInputProcessingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationInputProcessingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationInputProcessingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientAddApplicationInputProcessingConfigurationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddApplicationInputProcessingConfiguration(request), context);
}

void KinesisAnalyticsV2Client::AddApplicationInputProcessingConfigurationAsync(const AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientAddApplicationInputProcessingConfigurationAsyncHelper( this, request, handler, context ); } );
}

AddApplicationOutputOutcome KinesisAnalyticsV2Client::AddApplicationOutput(const AddApplicationOutputRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationOutputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationOutputOutcomeCallable KinesisAnalyticsV2Client::AddApplicationOutputCallable(const AddApplicationOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientAddApplicationOutputAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddApplicationOutput(request), context);
}

void KinesisAnalyticsV2Client::AddApplicationOutputAsync(const AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientAddApplicationOutputAsyncHelper( this, request, handler, context ); } );
}

AddApplicationReferenceDataSourceOutcome KinesisAnalyticsV2Client::AddApplicationReferenceDataSource(const AddApplicationReferenceDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationReferenceDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationReferenceDataSourceOutcomeCallable KinesisAnalyticsV2Client::AddApplicationReferenceDataSourceCallable(const AddApplicationReferenceDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationReferenceDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationReferenceDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientAddApplicationReferenceDataSourceAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddApplicationReferenceDataSource(request), context);
}

void KinesisAnalyticsV2Client::AddApplicationReferenceDataSourceAsync(const AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientAddApplicationReferenceDataSourceAsyncHelper( this, request, handler, context ); } );
}

AddApplicationVpcConfigurationOutcome KinesisAnalyticsV2Client::AddApplicationVpcConfiguration(const AddApplicationVpcConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationVpcConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationVpcConfigurationOutcomeCallable KinesisAnalyticsV2Client::AddApplicationVpcConfigurationCallable(const AddApplicationVpcConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationVpcConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationVpcConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientAddApplicationVpcConfigurationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const AddApplicationVpcConfigurationRequest& request, const AddApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddApplicationVpcConfiguration(request), context);
}

void KinesisAnalyticsV2Client::AddApplicationVpcConfigurationAsync(const AddApplicationVpcConfigurationRequest& request, const AddApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientAddApplicationVpcConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateApplicationOutcome KinesisAnalyticsV2Client::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable KinesisAnalyticsV2Client::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientCreateApplicationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplication(request), context);
}

void KinesisAnalyticsV2Client::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientCreateApplicationAsyncHelper( this, request, handler, context ); } );
}

CreateApplicationPresignedUrlOutcome KinesisAnalyticsV2Client::CreateApplicationPresignedUrl(const CreateApplicationPresignedUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationPresignedUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationPresignedUrlOutcomeCallable KinesisAnalyticsV2Client::CreateApplicationPresignedUrlCallable(const CreateApplicationPresignedUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationPresignedUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplicationPresignedUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientCreateApplicationPresignedUrlAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const CreateApplicationPresignedUrlRequest& request, const CreateApplicationPresignedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplicationPresignedUrl(request), context);
}

void KinesisAnalyticsV2Client::CreateApplicationPresignedUrlAsync(const CreateApplicationPresignedUrlRequest& request, const CreateApplicationPresignedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientCreateApplicationPresignedUrlAsyncHelper( this, request, handler, context ); } );
}

CreateApplicationSnapshotOutcome KinesisAnalyticsV2Client::CreateApplicationSnapshot(const CreateApplicationSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationSnapshotOutcomeCallable KinesisAnalyticsV2Client::CreateApplicationSnapshotCallable(const CreateApplicationSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplicationSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientCreateApplicationSnapshotAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const CreateApplicationSnapshotRequest& request, const CreateApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplicationSnapshot(request), context);
}

void KinesisAnalyticsV2Client::CreateApplicationSnapshotAsync(const CreateApplicationSnapshotRequest& request, const CreateApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientCreateApplicationSnapshotAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationOutcome KinesisAnalyticsV2Client::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable KinesisAnalyticsV2Client::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDeleteApplicationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplication(request), context);
}

void KinesisAnalyticsV2Client::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDeleteApplicationAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOption(const DeleteApplicationCloudWatchLoggingOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationCloudWatchLoggingOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationCloudWatchLoggingOptionOutcomeCallable KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOptionCallable(const DeleteApplicationCloudWatchLoggingOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationCloudWatchLoggingOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationCloudWatchLoggingOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDeleteApplicationCloudWatchLoggingOptionAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplicationCloudWatchLoggingOption(request), context);
}

void KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOptionAsync(const DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDeleteApplicationCloudWatchLoggingOptionAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationInputProcessingConfigurationOutcome KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfiguration(const DeleteApplicationInputProcessingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationInputProcessingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationInputProcessingConfigurationOutcomeCallable KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfigurationCallable(const DeleteApplicationInputProcessingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationInputProcessingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationInputProcessingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDeleteApplicationInputProcessingConfigurationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplicationInputProcessingConfiguration(request), context);
}

void KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfigurationAsync(const DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDeleteApplicationInputProcessingConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationOutputOutcome KinesisAnalyticsV2Client::DeleteApplicationOutput(const DeleteApplicationOutputRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationOutputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutputOutcomeCallable KinesisAnalyticsV2Client::DeleteApplicationOutputCallable(const DeleteApplicationOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDeleteApplicationOutputAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplicationOutput(request), context);
}

void KinesisAnalyticsV2Client::DeleteApplicationOutputAsync(const DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDeleteApplicationOutputAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationReferenceDataSourceOutcome KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSource(const DeleteApplicationReferenceDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationReferenceDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationReferenceDataSourceOutcomeCallable KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSourceCallable(const DeleteApplicationReferenceDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationReferenceDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationReferenceDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDeleteApplicationReferenceDataSourceAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplicationReferenceDataSource(request), context);
}

void KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSourceAsync(const DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDeleteApplicationReferenceDataSourceAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationSnapshotOutcome KinesisAnalyticsV2Client::DeleteApplicationSnapshot(const DeleteApplicationSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationSnapshotOutcomeCallable KinesisAnalyticsV2Client::DeleteApplicationSnapshotCallable(const DeleteApplicationSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDeleteApplicationSnapshotAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DeleteApplicationSnapshotRequest& request, const DeleteApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplicationSnapshot(request), context);
}

void KinesisAnalyticsV2Client::DeleteApplicationSnapshotAsync(const DeleteApplicationSnapshotRequest& request, const DeleteApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDeleteApplicationSnapshotAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationVpcConfigurationOutcome KinesisAnalyticsV2Client::DeleteApplicationVpcConfiguration(const DeleteApplicationVpcConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationVpcConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationVpcConfigurationOutcomeCallable KinesisAnalyticsV2Client::DeleteApplicationVpcConfigurationCallable(const DeleteApplicationVpcConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationVpcConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationVpcConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDeleteApplicationVpcConfigurationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DeleteApplicationVpcConfigurationRequest& request, const DeleteApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplicationVpcConfiguration(request), context);
}

void KinesisAnalyticsV2Client::DeleteApplicationVpcConfigurationAsync(const DeleteApplicationVpcConfigurationRequest& request, const DeleteApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDeleteApplicationVpcConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationOutcome KinesisAnalyticsV2Client::DescribeApplication(const DescribeApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationOutcomeCallable KinesisAnalyticsV2Client::DescribeApplicationCallable(const DescribeApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDescribeApplicationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplication(request), context);
}

void KinesisAnalyticsV2Client::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDescribeApplicationAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationSnapshotOutcome KinesisAnalyticsV2Client::DescribeApplicationSnapshot(const DescribeApplicationSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicationSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationSnapshotOutcomeCallable KinesisAnalyticsV2Client::DescribeApplicationSnapshotCallable(const DescribeApplicationSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicationSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDescribeApplicationSnapshotAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DescribeApplicationSnapshotRequest& request, const DescribeApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplicationSnapshot(request), context);
}

void KinesisAnalyticsV2Client::DescribeApplicationSnapshotAsync(const DescribeApplicationSnapshotRequest& request, const DescribeApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDescribeApplicationSnapshotAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationVersionOutcome KinesisAnalyticsV2Client::DescribeApplicationVersion(const DescribeApplicationVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationVersionOutcomeCallable KinesisAnalyticsV2Client::DescribeApplicationVersionCallable(const DescribeApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDescribeApplicationVersionAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DescribeApplicationVersionRequest& request, const DescribeApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplicationVersion(request), context);
}

void KinesisAnalyticsV2Client::DescribeApplicationVersionAsync(const DescribeApplicationVersionRequest& request, const DescribeApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDescribeApplicationVersionAsyncHelper( this, request, handler, context ); } );
}

DiscoverInputSchemaOutcome KinesisAnalyticsV2Client::DiscoverInputSchema(const DiscoverInputSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DiscoverInputSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DiscoverInputSchemaOutcomeCallable KinesisAnalyticsV2Client::DiscoverInputSchemaCallable(const DiscoverInputSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DiscoverInputSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DiscoverInputSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientDiscoverInputSchemaAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DiscoverInputSchema(request), context);
}

void KinesisAnalyticsV2Client::DiscoverInputSchemaAsync(const DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientDiscoverInputSchemaAsyncHelper( this, request, handler, context ); } );
}

ListApplicationSnapshotsOutcome KinesisAnalyticsV2Client::ListApplicationSnapshots(const ListApplicationSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApplicationSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationSnapshotsOutcomeCallable KinesisAnalyticsV2Client::ListApplicationSnapshotsCallable(const ListApplicationSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientListApplicationSnapshotsAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const ListApplicationSnapshotsRequest& request, const ListApplicationSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplicationSnapshots(request), context);
}

void KinesisAnalyticsV2Client::ListApplicationSnapshotsAsync(const ListApplicationSnapshotsRequest& request, const ListApplicationSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientListApplicationSnapshotsAsyncHelper( this, request, handler, context ); } );
}

ListApplicationVersionsOutcome KinesisAnalyticsV2Client::ListApplicationVersions(const ListApplicationVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApplicationVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationVersionsOutcomeCallable KinesisAnalyticsV2Client::ListApplicationVersionsCallable(const ListApplicationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientListApplicationVersionsAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplicationVersions(request), context);
}

void KinesisAnalyticsV2Client::ListApplicationVersionsAsync(const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientListApplicationVersionsAsyncHelper( this, request, handler, context ); } );
}

ListApplicationsOutcome KinesisAnalyticsV2Client::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable KinesisAnalyticsV2Client::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientListApplicationsAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplications(request), context);
}

void KinesisAnalyticsV2Client::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientListApplicationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome KinesisAnalyticsV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable KinesisAnalyticsV2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientListTagsForResourceAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void KinesisAnalyticsV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

RollbackApplicationOutcome KinesisAnalyticsV2Client::RollbackApplication(const RollbackApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RollbackApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RollbackApplicationOutcomeCallable KinesisAnalyticsV2Client::RollbackApplicationCallable(const RollbackApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RollbackApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RollbackApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientRollbackApplicationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const RollbackApplicationRequest& request, const RollbackApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RollbackApplication(request), context);
}

void KinesisAnalyticsV2Client::RollbackApplicationAsync(const RollbackApplicationRequest& request, const RollbackApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientRollbackApplicationAsyncHelper( this, request, handler, context ); } );
}

StartApplicationOutcome KinesisAnalyticsV2Client::StartApplication(const StartApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartApplicationOutcomeCallable KinesisAnalyticsV2Client::StartApplicationCallable(const StartApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientStartApplicationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartApplication(request), context);
}

void KinesisAnalyticsV2Client::StartApplicationAsync(const StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientStartApplicationAsyncHelper( this, request, handler, context ); } );
}

StopApplicationOutcome KinesisAnalyticsV2Client::StopApplication(const StopApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopApplicationOutcomeCallable KinesisAnalyticsV2Client::StopApplicationCallable(const StopApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientStopApplicationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopApplication(request), context);
}

void KinesisAnalyticsV2Client::StopApplicationAsync(const StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientStopApplicationAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome KinesisAnalyticsV2Client::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable KinesisAnalyticsV2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientTagResourceAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void KinesisAnalyticsV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome KinesisAnalyticsV2Client::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable KinesisAnalyticsV2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientUntagResourceAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void KinesisAnalyticsV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationOutcome KinesisAnalyticsV2Client::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable KinesisAnalyticsV2Client::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientUpdateApplicationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplication(request), context);
}

void KinesisAnalyticsV2Client::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientUpdateApplicationAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationMaintenanceConfigurationOutcome KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfiguration(const UpdateApplicationMaintenanceConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationMaintenanceConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationMaintenanceConfigurationOutcomeCallable KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfigurationCallable(const UpdateApplicationMaintenanceConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationMaintenanceConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationMaintenanceConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsV2ClientUpdateApplicationMaintenanceConfigurationAsyncHelper(KinesisAnalyticsV2Client const * const clientThis, const UpdateApplicationMaintenanceConfigurationRequest& request, const UpdateApplicationMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplicationMaintenanceConfiguration(request), context);
}

void KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfigurationAsync(const UpdateApplicationMaintenanceConfigurationRequest& request, const UpdateApplicationMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisAnalyticsV2ClientUpdateApplicationMaintenanceConfigurationAsyncHelper( this, request, handler, context ); } );
}

