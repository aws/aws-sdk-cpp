﻿/**
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("Kinesis Analytics V2");
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

void KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOptionAsync(const AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationCloudWatchLoggingOptionAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOptionAsyncHelper(const AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationCloudWatchLoggingOption(request), context);
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

void KinesisAnalyticsV2Client::AddApplicationInputAsync(const AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationInputAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::AddApplicationInputAsyncHelper(const AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationInput(request), context);
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

void KinesisAnalyticsV2Client::AddApplicationInputProcessingConfigurationAsync(const AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationInputProcessingConfigurationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::AddApplicationInputProcessingConfigurationAsyncHelper(const AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationInputProcessingConfiguration(request), context);
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

void KinesisAnalyticsV2Client::AddApplicationOutputAsync(const AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationOutputAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::AddApplicationOutputAsyncHelper(const AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationOutput(request), context);
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

void KinesisAnalyticsV2Client::AddApplicationReferenceDataSourceAsync(const AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationReferenceDataSourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::AddApplicationReferenceDataSourceAsyncHelper(const AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationReferenceDataSource(request), context);
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

void KinesisAnalyticsV2Client::AddApplicationVpcConfigurationAsync(const AddApplicationVpcConfigurationRequest& request, const AddApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationVpcConfigurationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::AddApplicationVpcConfigurationAsyncHelper(const AddApplicationVpcConfigurationRequest& request, const AddApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationVpcConfiguration(request), context);
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

void KinesisAnalyticsV2Client::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
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

void KinesisAnalyticsV2Client::CreateApplicationPresignedUrlAsync(const CreateApplicationPresignedUrlRequest& request, const CreateApplicationPresignedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationPresignedUrlAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::CreateApplicationPresignedUrlAsyncHelper(const CreateApplicationPresignedUrlRequest& request, const CreateApplicationPresignedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplicationPresignedUrl(request), context);
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

void KinesisAnalyticsV2Client::CreateApplicationSnapshotAsync(const CreateApplicationSnapshotRequest& request, const CreateApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationSnapshotAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::CreateApplicationSnapshotAsyncHelper(const CreateApplicationSnapshotRequest& request, const CreateApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplicationSnapshot(request), context);
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

void KinesisAnalyticsV2Client::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
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

void KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOptionAsync(const DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationCloudWatchLoggingOptionAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOptionAsyncHelper(const DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationCloudWatchLoggingOption(request), context);
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

void KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfigurationAsync(const DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationInputProcessingConfigurationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfigurationAsyncHelper(const DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationInputProcessingConfiguration(request), context);
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

void KinesisAnalyticsV2Client::DeleteApplicationOutputAsync(const DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationOutputAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DeleteApplicationOutputAsyncHelper(const DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationOutput(request), context);
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

void KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSourceAsync(const DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationReferenceDataSourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSourceAsyncHelper(const DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationReferenceDataSource(request), context);
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

void KinesisAnalyticsV2Client::DeleteApplicationSnapshotAsync(const DeleteApplicationSnapshotRequest& request, const DeleteApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationSnapshotAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DeleteApplicationSnapshotAsyncHelper(const DeleteApplicationSnapshotRequest& request, const DeleteApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationSnapshot(request), context);
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

void KinesisAnalyticsV2Client::DeleteApplicationVpcConfigurationAsync(const DeleteApplicationVpcConfigurationRequest& request, const DeleteApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationVpcConfigurationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DeleteApplicationVpcConfigurationAsyncHelper(const DeleteApplicationVpcConfigurationRequest& request, const DeleteApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationVpcConfiguration(request), context);
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

void KinesisAnalyticsV2Client::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DescribeApplicationAsyncHelper(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplication(request), context);
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

void KinesisAnalyticsV2Client::DescribeApplicationSnapshotAsync(const DescribeApplicationSnapshotRequest& request, const DescribeApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationSnapshotAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DescribeApplicationSnapshotAsyncHelper(const DescribeApplicationSnapshotRequest& request, const DescribeApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplicationSnapshot(request), context);
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

void KinesisAnalyticsV2Client::DescribeApplicationVersionAsync(const DescribeApplicationVersionRequest& request, const DescribeApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationVersionAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DescribeApplicationVersionAsyncHelper(const DescribeApplicationVersionRequest& request, const DescribeApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplicationVersion(request), context);
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

void KinesisAnalyticsV2Client::DiscoverInputSchemaAsync(const DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DiscoverInputSchemaAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::DiscoverInputSchemaAsyncHelper(const DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DiscoverInputSchema(request), context);
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

void KinesisAnalyticsV2Client::ListApplicationSnapshotsAsync(const ListApplicationSnapshotsRequest& request, const ListApplicationSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationSnapshotsAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::ListApplicationSnapshotsAsyncHelper(const ListApplicationSnapshotsRequest& request, const ListApplicationSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplicationSnapshots(request), context);
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

void KinesisAnalyticsV2Client::ListApplicationVersionsAsync(const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationVersionsAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::ListApplicationVersionsAsyncHelper(const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplicationVersions(request), context);
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

void KinesisAnalyticsV2Client::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationsAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
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

void KinesisAnalyticsV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
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

void KinesisAnalyticsV2Client::RollbackApplicationAsync(const RollbackApplicationRequest& request, const RollbackApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RollbackApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::RollbackApplicationAsyncHelper(const RollbackApplicationRequest& request, const RollbackApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RollbackApplication(request), context);
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

void KinesisAnalyticsV2Client::StartApplicationAsync(const StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::StartApplicationAsyncHelper(const StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartApplication(request), context);
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

void KinesisAnalyticsV2Client::StopApplicationAsync(const StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::StopApplicationAsyncHelper(const StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopApplication(request), context);
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

void KinesisAnalyticsV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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

void KinesisAnalyticsV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
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

void KinesisAnalyticsV2Client::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
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

void KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfigurationAsync(const UpdateApplicationMaintenanceConfigurationRequest& request, const UpdateApplicationMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationMaintenanceConfigurationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfigurationAsyncHelper(const UpdateApplicationMaintenanceConfigurationRequest& request, const UpdateApplicationMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplicationMaintenanceConfiguration(request), context);
}

