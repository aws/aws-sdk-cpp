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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Client.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2ErrorMarshaller.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2EndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* KinesisAnalyticsV2Client::SERVICE_NAME = "kinesisanalytics";
const char* KinesisAnalyticsV2Client::ALLOCATION_TAG = "KinesisAnalyticsV2Client";

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const AWSCredentials& credentials,
                                                   std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> endpointProvider,
                                                   const KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> endpointProvider,
                                                   const KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KinesisAnalyticsV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisAnalyticsV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisAnalyticsV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KinesisAnalyticsV2Client::~KinesisAnalyticsV2Client()
{
}

std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase>& KinesisAnalyticsV2Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void KinesisAnalyticsV2Client::init(const KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis Analytics V2");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void KinesisAnalyticsV2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOption(const AddApplicationCloudWatchLoggingOptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddApplicationCloudWatchLoggingOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddApplicationCloudWatchLoggingOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddApplicationCloudWatchLoggingOptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddApplicationCloudWatchLoggingOption(request), context);
    } );
}

AddApplicationInputOutcome KinesisAnalyticsV2Client::AddApplicationInput(const AddApplicationInputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddApplicationInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddApplicationInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddApplicationInputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddApplicationInput(request), context);
    } );
}

AddApplicationInputProcessingConfigurationOutcome KinesisAnalyticsV2Client::AddApplicationInputProcessingConfiguration(const AddApplicationInputProcessingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddApplicationInputProcessingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddApplicationInputProcessingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddApplicationInputProcessingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddApplicationInputProcessingConfiguration(request), context);
    } );
}

AddApplicationOutputOutcome KinesisAnalyticsV2Client::AddApplicationOutput(const AddApplicationOutputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddApplicationOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddApplicationOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddApplicationOutputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddApplicationOutput(request), context);
    } );
}

AddApplicationReferenceDataSourceOutcome KinesisAnalyticsV2Client::AddApplicationReferenceDataSource(const AddApplicationReferenceDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddApplicationReferenceDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddApplicationReferenceDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddApplicationReferenceDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddApplicationReferenceDataSource(request), context);
    } );
}

AddApplicationVpcConfigurationOutcome KinesisAnalyticsV2Client::AddApplicationVpcConfiguration(const AddApplicationVpcConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddApplicationVpcConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddApplicationVpcConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddApplicationVpcConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddApplicationVpcConfiguration(request), context);
    } );
}

CreateApplicationOutcome KinesisAnalyticsV2Client::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApplication(request), context);
    } );
}

CreateApplicationPresignedUrlOutcome KinesisAnalyticsV2Client::CreateApplicationPresignedUrl(const CreateApplicationPresignedUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplicationPresignedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplicationPresignedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateApplicationPresignedUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApplicationPresignedUrl(request), context);
    } );
}

CreateApplicationSnapshotOutcome KinesisAnalyticsV2Client::CreateApplicationSnapshot(const CreateApplicationSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplicationSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplicationSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateApplicationSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApplicationSnapshot(request), context);
    } );
}

DeleteApplicationOutcome KinesisAnalyticsV2Client::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplication(request), context);
    } );
}

DeleteApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOption(const DeleteApplicationCloudWatchLoggingOptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplicationCloudWatchLoggingOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplicationCloudWatchLoggingOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationCloudWatchLoggingOptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplicationCloudWatchLoggingOption(request), context);
    } );
}

DeleteApplicationInputProcessingConfigurationOutcome KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfiguration(const DeleteApplicationInputProcessingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplicationInputProcessingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplicationInputProcessingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationInputProcessingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplicationInputProcessingConfiguration(request), context);
    } );
}

DeleteApplicationOutputOutcome KinesisAnalyticsV2Client::DeleteApplicationOutput(const DeleteApplicationOutputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplicationOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplicationOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationOutputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplicationOutput(request), context);
    } );
}

DeleteApplicationReferenceDataSourceOutcome KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSource(const DeleteApplicationReferenceDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplicationReferenceDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplicationReferenceDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationReferenceDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplicationReferenceDataSource(request), context);
    } );
}

DeleteApplicationSnapshotOutcome KinesisAnalyticsV2Client::DeleteApplicationSnapshot(const DeleteApplicationSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplicationSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplicationSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplicationSnapshot(request), context);
    } );
}

DeleteApplicationVpcConfigurationOutcome KinesisAnalyticsV2Client::DeleteApplicationVpcConfiguration(const DeleteApplicationVpcConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplicationVpcConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplicationVpcConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationVpcConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplicationVpcConfiguration(request), context);
    } );
}

DescribeApplicationOutcome KinesisAnalyticsV2Client::DescribeApplication(const DescribeApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApplication(request), context);
    } );
}

DescribeApplicationSnapshotOutcome KinesisAnalyticsV2Client::DescribeApplicationSnapshot(const DescribeApplicationSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplicationSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplicationSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicationSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApplicationSnapshot(request), context);
    } );
}

DescribeApplicationVersionOutcome KinesisAnalyticsV2Client::DescribeApplicationVersion(const DescribeApplicationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApplicationVersion(request), context);
    } );
}

DiscoverInputSchemaOutcome KinesisAnalyticsV2Client::DiscoverInputSchema(const DiscoverInputSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DiscoverInputSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DiscoverInputSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DiscoverInputSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DiscoverInputSchema(request), context);
    } );
}

ListApplicationSnapshotsOutcome KinesisAnalyticsV2Client::ListApplicationSnapshots(const ListApplicationSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplicationSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplicationSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListApplicationSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApplicationSnapshots(request), context);
    } );
}

ListApplicationVersionsOutcome KinesisAnalyticsV2Client::ListApplicationVersions(const ListApplicationVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplicationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplicationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListApplicationVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApplicationVersions(request), context);
    } );
}

ListApplicationsOutcome KinesisAnalyticsV2Client::ListApplications(const ListApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApplications(request), context);
    } );
}

ListTagsForResourceOutcome KinesisAnalyticsV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

RollbackApplicationOutcome KinesisAnalyticsV2Client::RollbackApplication(const RollbackApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RollbackApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RollbackApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RollbackApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RollbackApplication(request), context);
    } );
}

StartApplicationOutcome KinesisAnalyticsV2Client::StartApplication(const StartApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartApplication(request), context);
    } );
}

StopApplicationOutcome KinesisAnalyticsV2Client::StopApplication(const StopApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopApplication(request), context);
    } );
}

TagResourceOutcome KinesisAnalyticsV2Client::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome KinesisAnalyticsV2Client::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateApplicationOutcome KinesisAnalyticsV2Client::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplication(request), context);
    } );
}

UpdateApplicationMaintenanceConfigurationOutcome KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfiguration(const UpdateApplicationMaintenanceConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplicationMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplicationMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApplicationMaintenanceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplicationMaintenanceConfiguration(request), context);
    } );
}

