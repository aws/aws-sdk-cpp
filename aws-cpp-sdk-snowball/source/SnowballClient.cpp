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

#include <aws/snowball/SnowballClient.h>
#include <aws/snowball/SnowballEndpoint.h>
#include <aws/snowball/SnowballErrorMarshaller.h>
#include <aws/snowball/model/CancelClusterRequest.h>
#include <aws/snowball/model/CancelJobRequest.h>
#include <aws/snowball/model/CreateAddressRequest.h>
#include <aws/snowball/model/CreateClusterRequest.h>
#include <aws/snowball/model/CreateJobRequest.h>
#include <aws/snowball/model/CreateLongTermPricingRequest.h>
#include <aws/snowball/model/CreateReturnShippingLabelRequest.h>
#include <aws/snowball/model/DescribeAddressRequest.h>
#include <aws/snowball/model/DescribeAddressesRequest.h>
#include <aws/snowball/model/DescribeClusterRequest.h>
#include <aws/snowball/model/DescribeJobRequest.h>
#include <aws/snowball/model/DescribeReturnShippingLabelRequest.h>
#include <aws/snowball/model/GetJobManifestRequest.h>
#include <aws/snowball/model/GetJobUnlockCodeRequest.h>
#include <aws/snowball/model/GetSnowballUsageRequest.h>
#include <aws/snowball/model/GetSoftwareUpdatesRequest.h>
#include <aws/snowball/model/ListClusterJobsRequest.h>
#include <aws/snowball/model/ListClustersRequest.h>
#include <aws/snowball/model/ListCompatibleImagesRequest.h>
#include <aws/snowball/model/ListJobsRequest.h>
#include <aws/snowball/model/ListLongTermPricingRequest.h>
#include <aws/snowball/model/UpdateClusterRequest.h>
#include <aws/snowball/model/UpdateJobRequest.h>
#include <aws/snowball/model/UpdateJobShipmentStateRequest.h>
#include <aws/snowball/model/UpdateLongTermPricingRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Snowball;
using namespace Aws::Snowball::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "snowball";
static const char* ALLOCATION_TAG = "SnowballClient";

SnowballClient::SnowballClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowballErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SnowballClient::SnowballClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowballErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SnowballClient::SnowballClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowballErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SnowballClient::~SnowballClient()
{
}

void SnowballClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Snowball");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SnowballEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SnowballClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelClusterOutcome SnowballClient::CancelCluster(const CancelClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelClusterOutcomeCallable SnowballClient::CancelClusterCallable(const CancelClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientCancelClusterAsyncHelper(SnowballClient const * const clientThis, const CancelClusterRequest& request, const CancelClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelCluster(request), context);
}

void SnowballClient::CancelClusterAsync(const CancelClusterRequest& request, const CancelClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientCancelClusterAsyncHelper( this, request, handler, context ); } );
}

CancelJobOutcome SnowballClient::CancelJob(const CancelJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelJobOutcomeCallable SnowballClient::CancelJobCallable(const CancelJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientCancelJobAsyncHelper(SnowballClient const * const clientThis, const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelJob(request), context);
}

void SnowballClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientCancelJobAsyncHelper( this, request, handler, context ); } );
}

CreateAddressOutcome SnowballClient::CreateAddress(const CreateAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAddressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAddressOutcomeCallable SnowballClient::CreateAddressCallable(const CreateAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientCreateAddressAsyncHelper(SnowballClient const * const clientThis, const CreateAddressRequest& request, const CreateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAddress(request), context);
}

void SnowballClient::CreateAddressAsync(const CreateAddressRequest& request, const CreateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientCreateAddressAsyncHelper( this, request, handler, context ); } );
}

CreateClusterOutcome SnowballClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterOutcomeCallable SnowballClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientCreateClusterAsyncHelper(SnowballClient const * const clientThis, const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCluster(request), context);
}

void SnowballClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientCreateClusterAsyncHelper( this, request, handler, context ); } );
}

CreateJobOutcome SnowballClient::CreateJob(const CreateJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcomeCallable SnowballClient::CreateJobCallable(const CreateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientCreateJobAsyncHelper(SnowballClient const * const clientThis, const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateJob(request), context);
}

void SnowballClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientCreateJobAsyncHelper( this, request, handler, context ); } );
}

CreateLongTermPricingOutcome SnowballClient::CreateLongTermPricing(const CreateLongTermPricingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLongTermPricingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLongTermPricingOutcomeCallable SnowballClient::CreateLongTermPricingCallable(const CreateLongTermPricingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLongTermPricingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLongTermPricing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientCreateLongTermPricingAsyncHelper(SnowballClient const * const clientThis, const CreateLongTermPricingRequest& request, const CreateLongTermPricingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLongTermPricing(request), context);
}

void SnowballClient::CreateLongTermPricingAsync(const CreateLongTermPricingRequest& request, const CreateLongTermPricingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientCreateLongTermPricingAsyncHelper( this, request, handler, context ); } );
}

CreateReturnShippingLabelOutcome SnowballClient::CreateReturnShippingLabel(const CreateReturnShippingLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateReturnShippingLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReturnShippingLabelOutcomeCallable SnowballClient::CreateReturnShippingLabelCallable(const CreateReturnShippingLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReturnShippingLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReturnShippingLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientCreateReturnShippingLabelAsyncHelper(SnowballClient const * const clientThis, const CreateReturnShippingLabelRequest& request, const CreateReturnShippingLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReturnShippingLabel(request), context);
}

void SnowballClient::CreateReturnShippingLabelAsync(const CreateReturnShippingLabelRequest& request, const CreateReturnShippingLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientCreateReturnShippingLabelAsyncHelper( this, request, handler, context ); } );
}

DescribeAddressOutcome SnowballClient::DescribeAddress(const DescribeAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAddressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAddressOutcomeCallable SnowballClient::DescribeAddressCallable(const DescribeAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientDescribeAddressAsyncHelper(SnowballClient const * const clientThis, const DescribeAddressRequest& request, const DescribeAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAddress(request), context);
}

void SnowballClient::DescribeAddressAsync(const DescribeAddressRequest& request, const DescribeAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientDescribeAddressAsyncHelper( this, request, handler, context ); } );
}

DescribeAddressesOutcome SnowballClient::DescribeAddresses(const DescribeAddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAddressesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAddressesOutcomeCallable SnowballClient::DescribeAddressesCallable(const DescribeAddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAddresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientDescribeAddressesAsyncHelper(SnowballClient const * const clientThis, const DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAddresses(request), context);
}

void SnowballClient::DescribeAddressesAsync(const DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientDescribeAddressesAsyncHelper( this, request, handler, context ); } );
}

DescribeClusterOutcome SnowballClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterOutcomeCallable SnowballClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientDescribeClusterAsyncHelper(SnowballClient const * const clientThis, const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCluster(request), context);
}

void SnowballClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientDescribeClusterAsyncHelper( this, request, handler, context ); } );
}

DescribeJobOutcome SnowballClient::DescribeJob(const DescribeJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobOutcomeCallable SnowballClient::DescribeJobCallable(const DescribeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientDescribeJobAsyncHelper(SnowballClient const * const clientThis, const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeJob(request), context);
}

void SnowballClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientDescribeJobAsyncHelper( this, request, handler, context ); } );
}

DescribeReturnShippingLabelOutcome SnowballClient::DescribeReturnShippingLabel(const DescribeReturnShippingLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReturnShippingLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReturnShippingLabelOutcomeCallable SnowballClient::DescribeReturnShippingLabelCallable(const DescribeReturnShippingLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReturnShippingLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReturnShippingLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientDescribeReturnShippingLabelAsyncHelper(SnowballClient const * const clientThis, const DescribeReturnShippingLabelRequest& request, const DescribeReturnShippingLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReturnShippingLabel(request), context);
}

void SnowballClient::DescribeReturnShippingLabelAsync(const DescribeReturnShippingLabelRequest& request, const DescribeReturnShippingLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientDescribeReturnShippingLabelAsyncHelper( this, request, handler, context ); } );
}

GetJobManifestOutcome SnowballClient::GetJobManifest(const GetJobManifestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetJobManifestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobManifestOutcomeCallable SnowballClient::GetJobManifestCallable(const GetJobManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientGetJobManifestAsyncHelper(SnowballClient const * const clientThis, const GetJobManifestRequest& request, const GetJobManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJobManifest(request), context);
}

void SnowballClient::GetJobManifestAsync(const GetJobManifestRequest& request, const GetJobManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientGetJobManifestAsyncHelper( this, request, handler, context ); } );
}

GetJobUnlockCodeOutcome SnowballClient::GetJobUnlockCode(const GetJobUnlockCodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetJobUnlockCodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobUnlockCodeOutcomeCallable SnowballClient::GetJobUnlockCodeCallable(const GetJobUnlockCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobUnlockCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobUnlockCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientGetJobUnlockCodeAsyncHelper(SnowballClient const * const clientThis, const GetJobUnlockCodeRequest& request, const GetJobUnlockCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJobUnlockCode(request), context);
}

void SnowballClient::GetJobUnlockCodeAsync(const GetJobUnlockCodeRequest& request, const GetJobUnlockCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientGetJobUnlockCodeAsyncHelper( this, request, handler, context ); } );
}

GetSnowballUsageOutcome SnowballClient::GetSnowballUsage(const GetSnowballUsageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSnowballUsageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSnowballUsageOutcomeCallable SnowballClient::GetSnowballUsageCallable(const GetSnowballUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSnowballUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSnowballUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientGetSnowballUsageAsyncHelper(SnowballClient const * const clientThis, const GetSnowballUsageRequest& request, const GetSnowballUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSnowballUsage(request), context);
}

void SnowballClient::GetSnowballUsageAsync(const GetSnowballUsageRequest& request, const GetSnowballUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientGetSnowballUsageAsyncHelper( this, request, handler, context ); } );
}

GetSoftwareUpdatesOutcome SnowballClient::GetSoftwareUpdates(const GetSoftwareUpdatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSoftwareUpdatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSoftwareUpdatesOutcomeCallable SnowballClient::GetSoftwareUpdatesCallable(const GetSoftwareUpdatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSoftwareUpdatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSoftwareUpdates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientGetSoftwareUpdatesAsyncHelper(SnowballClient const * const clientThis, const GetSoftwareUpdatesRequest& request, const GetSoftwareUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSoftwareUpdates(request), context);
}

void SnowballClient::GetSoftwareUpdatesAsync(const GetSoftwareUpdatesRequest& request, const GetSoftwareUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientGetSoftwareUpdatesAsyncHelper( this, request, handler, context ); } );
}

ListClusterJobsOutcome SnowballClient::ListClusterJobs(const ListClusterJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListClusterJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClusterJobsOutcomeCallable SnowballClient::ListClusterJobsCallable(const ListClusterJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClusterJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusterJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientListClusterJobsAsyncHelper(SnowballClient const * const clientThis, const ListClusterJobsRequest& request, const ListClusterJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClusterJobs(request), context);
}

void SnowballClient::ListClusterJobsAsync(const ListClusterJobsRequest& request, const ListClusterJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientListClusterJobsAsyncHelper( this, request, handler, context ); } );
}

ListClustersOutcome SnowballClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable SnowballClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientListClustersAsyncHelper(SnowballClient const * const clientThis, const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClusters(request), context);
}

void SnowballClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientListClustersAsyncHelper( this, request, handler, context ); } );
}

ListCompatibleImagesOutcome SnowballClient::ListCompatibleImages(const ListCompatibleImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCompatibleImagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCompatibleImagesOutcomeCallable SnowballClient::ListCompatibleImagesCallable(const ListCompatibleImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCompatibleImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCompatibleImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientListCompatibleImagesAsyncHelper(SnowballClient const * const clientThis, const ListCompatibleImagesRequest& request, const ListCompatibleImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCompatibleImages(request), context);
}

void SnowballClient::ListCompatibleImagesAsync(const ListCompatibleImagesRequest& request, const ListCompatibleImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientListCompatibleImagesAsyncHelper( this, request, handler, context ); } );
}

ListJobsOutcome SnowballClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable SnowballClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientListJobsAsyncHelper(SnowballClient const * const clientThis, const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobs(request), context);
}

void SnowballClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientListJobsAsyncHelper( this, request, handler, context ); } );
}

ListLongTermPricingOutcome SnowballClient::ListLongTermPricing(const ListLongTermPricingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLongTermPricingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLongTermPricingOutcomeCallable SnowballClient::ListLongTermPricingCallable(const ListLongTermPricingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLongTermPricingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLongTermPricing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientListLongTermPricingAsyncHelper(SnowballClient const * const clientThis, const ListLongTermPricingRequest& request, const ListLongTermPricingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLongTermPricing(request), context);
}

void SnowballClient::ListLongTermPricingAsync(const ListLongTermPricingRequest& request, const ListLongTermPricingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientListLongTermPricingAsyncHelper( this, request, handler, context ); } );
}

UpdateClusterOutcome SnowballClient::UpdateCluster(const UpdateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterOutcomeCallable SnowballClient::UpdateClusterCallable(const UpdateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientUpdateClusterAsyncHelper(SnowballClient const * const clientThis, const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCluster(request), context);
}

void SnowballClient::UpdateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientUpdateClusterAsyncHelper( this, request, handler, context ); } );
}

UpdateJobOutcome SnowballClient::UpdateJob(const UpdateJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateJobOutcomeCallable SnowballClient::UpdateJobCallable(const UpdateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientUpdateJobAsyncHelper(SnowballClient const * const clientThis, const UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateJob(request), context);
}

void SnowballClient::UpdateJobAsync(const UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientUpdateJobAsyncHelper( this, request, handler, context ); } );
}

UpdateJobShipmentStateOutcome SnowballClient::UpdateJobShipmentState(const UpdateJobShipmentStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateJobShipmentStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateJobShipmentStateOutcomeCallable SnowballClient::UpdateJobShipmentStateCallable(const UpdateJobShipmentStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobShipmentStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJobShipmentState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientUpdateJobShipmentStateAsyncHelper(SnowballClient const * const clientThis, const UpdateJobShipmentStateRequest& request, const UpdateJobShipmentStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateJobShipmentState(request), context);
}

void SnowballClient::UpdateJobShipmentStateAsync(const UpdateJobShipmentStateRequest& request, const UpdateJobShipmentStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientUpdateJobShipmentStateAsyncHelper( this, request, handler, context ); } );
}

UpdateLongTermPricingOutcome SnowballClient::UpdateLongTermPricing(const UpdateLongTermPricingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateLongTermPricingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLongTermPricingOutcomeCallable SnowballClient::UpdateLongTermPricingCallable(const UpdateLongTermPricingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLongTermPricingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLongTermPricing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowballClientUpdateLongTermPricingAsyncHelper(SnowballClient const * const clientThis, const UpdateLongTermPricingRequest& request, const UpdateLongTermPricingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLongTermPricing(request), context);
}

void SnowballClient::UpdateLongTermPricingAsync(const UpdateLongTermPricingRequest& request, const UpdateLongTermPricingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SnowballClientUpdateLongTermPricingAsyncHelper( this, request, handler, context ); } );
}

