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

#include <aws/healthlake/HealthLakeClient.h>
#include <aws/healthlake/HealthLakeEndpoint.h>
#include <aws/healthlake/HealthLakeErrorMarshaller.h>
#include <aws/healthlake/model/CreateFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DeleteFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DescribeFHIRExportJobRequest.h>
#include <aws/healthlake/model/DescribeFHIRImportJobRequest.h>
#include <aws/healthlake/model/ListFHIRDatastoresRequest.h>
#include <aws/healthlake/model/ListFHIRExportJobsRequest.h>
#include <aws/healthlake/model/ListFHIRImportJobsRequest.h>
#include <aws/healthlake/model/ListTagsForResourceRequest.h>
#include <aws/healthlake/model/StartFHIRExportJobRequest.h>
#include <aws/healthlake/model/StartFHIRImportJobRequest.h>
#include <aws/healthlake/model/TagResourceRequest.h>
#include <aws/healthlake/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::HealthLake;
using namespace Aws::HealthLake::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "healthlake";
static const char* ALLOCATION_TAG = "HealthLakeClient";

HealthLakeClient::HealthLakeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HealthLakeErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

HealthLakeClient::HealthLakeClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HealthLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

HealthLakeClient::HealthLakeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HealthLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

HealthLakeClient::~HealthLakeClient()
{
}

void HealthLakeClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("HealthLake");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + HealthLakeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void HealthLakeClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateFHIRDatastoreOutcome HealthLakeClient::CreateFHIRDatastore(const CreateFHIRDatastoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFHIRDatastoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFHIRDatastoreOutcomeCallable HealthLakeClient::CreateFHIRDatastoreCallable(const CreateFHIRDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFHIRDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFHIRDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::CreateFHIRDatastoreAsync(const CreateFHIRDatastoreRequest& request, const CreateFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFHIRDatastore(request), context);
    } );
}

DeleteFHIRDatastoreOutcome HealthLakeClient::DeleteFHIRDatastore(const DeleteFHIRDatastoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFHIRDatastoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFHIRDatastoreOutcomeCallable HealthLakeClient::DeleteFHIRDatastoreCallable(const DeleteFHIRDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFHIRDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFHIRDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::DeleteFHIRDatastoreAsync(const DeleteFHIRDatastoreRequest& request, const DeleteFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFHIRDatastore(request), context);
    } );
}

DescribeFHIRDatastoreOutcome HealthLakeClient::DescribeFHIRDatastore(const DescribeFHIRDatastoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFHIRDatastoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFHIRDatastoreOutcomeCallable HealthLakeClient::DescribeFHIRDatastoreCallable(const DescribeFHIRDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFHIRDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFHIRDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::DescribeFHIRDatastoreAsync(const DescribeFHIRDatastoreRequest& request, const DescribeFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFHIRDatastore(request), context);
    } );
}

DescribeFHIRExportJobOutcome HealthLakeClient::DescribeFHIRExportJob(const DescribeFHIRExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFHIRExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFHIRExportJobOutcomeCallable HealthLakeClient::DescribeFHIRExportJobCallable(const DescribeFHIRExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFHIRExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFHIRExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::DescribeFHIRExportJobAsync(const DescribeFHIRExportJobRequest& request, const DescribeFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFHIRExportJob(request), context);
    } );
}

DescribeFHIRImportJobOutcome HealthLakeClient::DescribeFHIRImportJob(const DescribeFHIRImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFHIRImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFHIRImportJobOutcomeCallable HealthLakeClient::DescribeFHIRImportJobCallable(const DescribeFHIRImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFHIRImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFHIRImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::DescribeFHIRImportJobAsync(const DescribeFHIRImportJobRequest& request, const DescribeFHIRImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFHIRImportJob(request), context);
    } );
}

ListFHIRDatastoresOutcome HealthLakeClient::ListFHIRDatastores(const ListFHIRDatastoresRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFHIRDatastoresOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFHIRDatastoresOutcomeCallable HealthLakeClient::ListFHIRDatastoresCallable(const ListFHIRDatastoresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFHIRDatastoresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFHIRDatastores(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::ListFHIRDatastoresAsync(const ListFHIRDatastoresRequest& request, const ListFHIRDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFHIRDatastores(request), context);
    } );
}

ListFHIRExportJobsOutcome HealthLakeClient::ListFHIRExportJobs(const ListFHIRExportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFHIRExportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFHIRExportJobsOutcomeCallable HealthLakeClient::ListFHIRExportJobsCallable(const ListFHIRExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFHIRExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFHIRExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::ListFHIRExportJobsAsync(const ListFHIRExportJobsRequest& request, const ListFHIRExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFHIRExportJobs(request), context);
    } );
}

ListFHIRImportJobsOutcome HealthLakeClient::ListFHIRImportJobs(const ListFHIRImportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFHIRImportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFHIRImportJobsOutcomeCallable HealthLakeClient::ListFHIRImportJobsCallable(const ListFHIRImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFHIRImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFHIRImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::ListFHIRImportJobsAsync(const ListFHIRImportJobsRequest& request, const ListFHIRImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFHIRImportJobs(request), context);
    } );
}

ListTagsForResourceOutcome HealthLakeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable HealthLakeClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

StartFHIRExportJobOutcome HealthLakeClient::StartFHIRExportJob(const StartFHIRExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartFHIRExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFHIRExportJobOutcomeCallable HealthLakeClient::StartFHIRExportJobCallable(const StartFHIRExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFHIRExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFHIRExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::StartFHIRExportJobAsync(const StartFHIRExportJobRequest& request, const StartFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartFHIRExportJob(request), context);
    } );
}

StartFHIRImportJobOutcome HealthLakeClient::StartFHIRImportJob(const StartFHIRImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartFHIRImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFHIRImportJobOutcomeCallable HealthLakeClient::StartFHIRImportJobCallable(const StartFHIRImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFHIRImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFHIRImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::StartFHIRImportJobAsync(const StartFHIRImportJobRequest& request, const StartFHIRImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartFHIRImportJob(request), context);
    } );
}

TagResourceOutcome HealthLakeClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable HealthLakeClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome HealthLakeClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable HealthLakeClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthLakeClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

