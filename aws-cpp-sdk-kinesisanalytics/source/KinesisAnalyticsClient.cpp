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

#include <aws/kinesisanalytics/KinesisAnalyticsClient.h>
#include <aws/kinesisanalytics/KinesisAnalyticsEndpoint.h>
#include <aws/kinesisanalytics/KinesisAnalyticsErrorMarshaller.h>
#include <aws/kinesisanalytics/model/AddApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationInputRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationOutputRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalytics/model/CreateApplicationRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationOutputRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalytics/model/DescribeApplicationRequest.h>
#include <aws/kinesisanalytics/model/DiscoverInputSchemaRequest.h>
#include <aws/kinesisanalytics/model/ListApplicationsRequest.h>
#include <aws/kinesisanalytics/model/ListTagsForResourceRequest.h>
#include <aws/kinesisanalytics/model/StartApplicationRequest.h>
#include <aws/kinesisanalytics/model/StopApplicationRequest.h>
#include <aws/kinesisanalytics/model/TagResourceRequest.h>
#include <aws/kinesisanalytics/model/UntagResourceRequest.h>
#include <aws/kinesisanalytics/model/UpdateApplicationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisAnalytics;
using namespace Aws::KinesisAnalytics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "kinesisanalytics";
static const char* ALLOCATION_TAG = "KinesisAnalyticsClient";


KinesisAnalyticsClient::KinesisAnalyticsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KinesisAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisAnalyticsClient::KinesisAnalyticsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KinesisAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisAnalyticsClient::KinesisAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KinesisAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisAnalyticsClient::~KinesisAnalyticsClient()
{
}

void KinesisAnalyticsClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Kinesis Analytics");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + KinesisAnalyticsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void KinesisAnalyticsClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsClient::AddApplicationCloudWatchLoggingOption(const AddApplicationCloudWatchLoggingOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationCloudWatchLoggingOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationCloudWatchLoggingOptionOutcomeCallable KinesisAnalyticsClient::AddApplicationCloudWatchLoggingOptionCallable(const AddApplicationCloudWatchLoggingOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationCloudWatchLoggingOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationCloudWatchLoggingOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::AddApplicationCloudWatchLoggingOptionAsync(const AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationCloudWatchLoggingOptionAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::AddApplicationCloudWatchLoggingOptionAsyncHelper(const AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationCloudWatchLoggingOption(request), context);
}

AddApplicationInputOutcome KinesisAnalyticsClient::AddApplicationInput(const AddApplicationInputRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationInputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationInputOutcomeCallable KinesisAnalyticsClient::AddApplicationInputCallable(const AddApplicationInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::AddApplicationInputAsync(const AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationInputAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::AddApplicationInputAsyncHelper(const AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationInput(request), context);
}

AddApplicationInputProcessingConfigurationOutcome KinesisAnalyticsClient::AddApplicationInputProcessingConfiguration(const AddApplicationInputProcessingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationInputProcessingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationInputProcessingConfigurationOutcomeCallable KinesisAnalyticsClient::AddApplicationInputProcessingConfigurationCallable(const AddApplicationInputProcessingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationInputProcessingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationInputProcessingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::AddApplicationInputProcessingConfigurationAsync(const AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationInputProcessingConfigurationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::AddApplicationInputProcessingConfigurationAsyncHelper(const AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationInputProcessingConfiguration(request), context);
}

AddApplicationOutputOutcome KinesisAnalyticsClient::AddApplicationOutput(const AddApplicationOutputRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationOutputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationOutputOutcomeCallable KinesisAnalyticsClient::AddApplicationOutputCallable(const AddApplicationOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::AddApplicationOutputAsync(const AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationOutputAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::AddApplicationOutputAsyncHelper(const AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationOutput(request), context);
}

AddApplicationReferenceDataSourceOutcome KinesisAnalyticsClient::AddApplicationReferenceDataSource(const AddApplicationReferenceDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddApplicationReferenceDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddApplicationReferenceDataSourceOutcomeCallable KinesisAnalyticsClient::AddApplicationReferenceDataSourceCallable(const AddApplicationReferenceDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddApplicationReferenceDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddApplicationReferenceDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::AddApplicationReferenceDataSourceAsync(const AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddApplicationReferenceDataSourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::AddApplicationReferenceDataSourceAsyncHelper(const AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddApplicationReferenceDataSource(request), context);
}

CreateApplicationOutcome KinesisAnalyticsClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable KinesisAnalyticsClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

DeleteApplicationOutcome KinesisAnalyticsClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable KinesisAnalyticsClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
}

DeleteApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsClient::DeleteApplicationCloudWatchLoggingOption(const DeleteApplicationCloudWatchLoggingOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationCloudWatchLoggingOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationCloudWatchLoggingOptionOutcomeCallable KinesisAnalyticsClient::DeleteApplicationCloudWatchLoggingOptionCallable(const DeleteApplicationCloudWatchLoggingOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationCloudWatchLoggingOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationCloudWatchLoggingOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::DeleteApplicationCloudWatchLoggingOptionAsync(const DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationCloudWatchLoggingOptionAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::DeleteApplicationCloudWatchLoggingOptionAsyncHelper(const DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationCloudWatchLoggingOption(request), context);
}

DeleteApplicationInputProcessingConfigurationOutcome KinesisAnalyticsClient::DeleteApplicationInputProcessingConfiguration(const DeleteApplicationInputProcessingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationInputProcessingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationInputProcessingConfigurationOutcomeCallable KinesisAnalyticsClient::DeleteApplicationInputProcessingConfigurationCallable(const DeleteApplicationInputProcessingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationInputProcessingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationInputProcessingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::DeleteApplicationInputProcessingConfigurationAsync(const DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationInputProcessingConfigurationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::DeleteApplicationInputProcessingConfigurationAsyncHelper(const DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationInputProcessingConfiguration(request), context);
}

DeleteApplicationOutputOutcome KinesisAnalyticsClient::DeleteApplicationOutput(const DeleteApplicationOutputRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationOutputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutputOutcomeCallable KinesisAnalyticsClient::DeleteApplicationOutputCallable(const DeleteApplicationOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::DeleteApplicationOutputAsync(const DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationOutputAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::DeleteApplicationOutputAsyncHelper(const DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationOutput(request), context);
}

DeleteApplicationReferenceDataSourceOutcome KinesisAnalyticsClient::DeleteApplicationReferenceDataSource(const DeleteApplicationReferenceDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationReferenceDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationReferenceDataSourceOutcomeCallable KinesisAnalyticsClient::DeleteApplicationReferenceDataSourceCallable(const DeleteApplicationReferenceDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationReferenceDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationReferenceDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::DeleteApplicationReferenceDataSourceAsync(const DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationReferenceDataSourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::DeleteApplicationReferenceDataSourceAsyncHelper(const DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationReferenceDataSource(request), context);
}

DescribeApplicationOutcome KinesisAnalyticsClient::DescribeApplication(const DescribeApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationOutcomeCallable KinesisAnalyticsClient::DescribeApplicationCallable(const DescribeApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::DescribeApplicationAsyncHelper(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplication(request), context);
}

DiscoverInputSchemaOutcome KinesisAnalyticsClient::DiscoverInputSchema(const DiscoverInputSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DiscoverInputSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DiscoverInputSchemaOutcomeCallable KinesisAnalyticsClient::DiscoverInputSchemaCallable(const DiscoverInputSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DiscoverInputSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DiscoverInputSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::DiscoverInputSchemaAsync(const DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DiscoverInputSchemaAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::DiscoverInputSchemaAsyncHelper(const DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DiscoverInputSchema(request), context);
}

ListApplicationsOutcome KinesisAnalyticsClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable KinesisAnalyticsClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationsAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
}

ListTagsForResourceOutcome KinesisAnalyticsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable KinesisAnalyticsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

StartApplicationOutcome KinesisAnalyticsClient::StartApplication(const StartApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartApplicationOutcomeCallable KinesisAnalyticsClient::StartApplicationCallable(const StartApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::StartApplicationAsync(const StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::StartApplicationAsyncHelper(const StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartApplication(request), context);
}

StopApplicationOutcome KinesisAnalyticsClient::StopApplication(const StopApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopApplicationOutcomeCallable KinesisAnalyticsClient::StopApplicationCallable(const StopApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::StopApplicationAsync(const StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::StopApplicationAsyncHelper(const StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopApplication(request), context);
}

TagResourceOutcome KinesisAnalyticsClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable KinesisAnalyticsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome KinesisAnalyticsClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable KinesisAnalyticsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateApplicationOutcome KinesisAnalyticsClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable KinesisAnalyticsClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisAnalyticsClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationAsyncHelper( request, handler, context ); } );
}

void KinesisAnalyticsClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
}

