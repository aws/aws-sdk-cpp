/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/sdb/SimpleDBClient.h>
#include <aws/sdb/SimpleDBEndpoint.h>
#include <aws/sdb/SimpleDBErrorMarshaller.h>
#include <aws/sdb/model/BatchDeleteAttributesRequest.h>
#include <aws/sdb/model/BatchPutAttributesRequest.h>
#include <aws/sdb/model/CreateDomainRequest.h>
#include <aws/sdb/model/DeleteAttributesRequest.h>
#include <aws/sdb/model/DeleteDomainRequest.h>
#include <aws/sdb/model/DomainMetadataRequest.h>
#include <aws/sdb/model/GetAttributesRequest.h>
#include <aws/sdb/model/ListDomainsRequest.h>
#include <aws/sdb/model/PutAttributesRequest.h>
#include <aws/sdb/model/SelectRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SimpleDB;
using namespace Aws::SimpleDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "sdb";
static const char* ALLOCATION_TAG = "SimpleDBClient";


SimpleDBClient::SimpleDBClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SimpleDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SimpleDBClient::SimpleDBClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SimpleDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SimpleDBClient::SimpleDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SimpleDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SimpleDBClient::~SimpleDBClient()
{
}

void SimpleDBClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SimpleDBEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SimpleDBClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String SimpleDBClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << SimpleDBEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

BatchDeleteAttributesOutcome SimpleDBClient::BatchDeleteAttributes(const BatchDeleteAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchDeleteAttributesOutcome(NoResult());
  }
  else
  {
    return BatchDeleteAttributesOutcome(outcome.GetError());
  }
}

BatchDeleteAttributesOutcomeCallable SimpleDBClient::BatchDeleteAttributesCallable(const BatchDeleteAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::BatchDeleteAttributesAsync(const BatchDeleteAttributesRequest& request, const BatchDeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteAttributesAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::BatchDeleteAttributesAsyncHelper(const BatchDeleteAttributesRequest& request, const BatchDeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteAttributes(request), context);
}

BatchPutAttributesOutcome SimpleDBClient::BatchPutAttributes(const BatchPutAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchPutAttributesOutcome(NoResult());
  }
  else
  {
    return BatchPutAttributesOutcome(outcome.GetError());
  }
}

BatchPutAttributesOutcomeCallable SimpleDBClient::BatchPutAttributesCallable(const BatchPutAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::BatchPutAttributesAsync(const BatchPutAttributesRequest& request, const BatchPutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchPutAttributesAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::BatchPutAttributesAsyncHelper(const BatchPutAttributesRequest& request, const BatchPutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchPutAttributes(request), context);
}

CreateDomainOutcome SimpleDBClient::CreateDomain(const CreateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDomainOutcome(NoResult());
  }
  else
  {
    return CreateDomainOutcome(outcome.GetError());
  }
}

CreateDomainOutcomeCallable SimpleDBClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::CreateDomainAsyncHelper(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomain(request), context);
}

DeleteAttributesOutcome SimpleDBClient::DeleteAttributes(const DeleteAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAttributesOutcome(NoResult());
  }
  else
  {
    return DeleteAttributesOutcome(outcome.GetError());
  }
}

DeleteAttributesOutcomeCallable SimpleDBClient::DeleteAttributesCallable(const DeleteAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::DeleteAttributesAsync(const DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAttributesAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::DeleteAttributesAsyncHelper(const DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAttributes(request), context);
}

DeleteDomainOutcome SimpleDBClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDomainOutcome(NoResult());
  }
  else
  {
    return DeleteDomainOutcome(outcome.GetError());
  }
}

DeleteDomainOutcomeCallable SimpleDBClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::DeleteDomainAsyncHelper(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomain(request), context);
}

DomainMetadataOutcome SimpleDBClient::DomainMetadata(const DomainMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DomainMetadataOutcome(DomainMetadataResult(outcome.GetResult()));
  }
  else
  {
    return DomainMetadataOutcome(outcome.GetError());
  }
}

DomainMetadataOutcomeCallable SimpleDBClient::DomainMetadataCallable(const DomainMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DomainMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DomainMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::DomainMetadataAsync(const DomainMetadataRequest& request, const DomainMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DomainMetadataAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::DomainMetadataAsyncHelper(const DomainMetadataRequest& request, const DomainMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DomainMetadata(request), context);
}

GetAttributesOutcome SimpleDBClient::GetAttributes(const GetAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetAttributesOutcome(GetAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetAttributesOutcome(outcome.GetError());
  }
}

GetAttributesOutcomeCallable SimpleDBClient::GetAttributesCallable(const GetAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::GetAttributesAsync(const GetAttributesRequest& request, const GetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAttributesAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::GetAttributesAsyncHelper(const GetAttributesRequest& request, const GetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAttributes(request), context);
}

ListDomainsOutcome SimpleDBClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDomainsOutcome(ListDomainsResult(outcome.GetResult()));
  }
  else
  {
    return ListDomainsOutcome(outcome.GetError());
  }
}

ListDomainsOutcomeCallable SimpleDBClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainsAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

PutAttributesOutcome SimpleDBClient::PutAttributes(const PutAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutAttributesOutcome(NoResult());
  }
  else
  {
    return PutAttributesOutcome(outcome.GetError());
  }
}

PutAttributesOutcomeCallable SimpleDBClient::PutAttributesCallable(const PutAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::PutAttributesAsync(const PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAttributesAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::PutAttributesAsyncHelper(const PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAttributes(request), context);
}

SelectOutcome SimpleDBClient::Select(const SelectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SelectOutcome(SelectResult(outcome.GetResult()));
  }
  else
  {
    return SelectOutcome(outcome.GetError());
  }
}

SelectOutcomeCallable SimpleDBClient::SelectCallable(const SelectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SelectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Select(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimpleDBClient::SelectAsync(const SelectRequest& request, const SelectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SelectAsyncHelper( request, handler, context ); } );
}

void SimpleDBClient::SelectAsyncHelper(const SelectRequest& request, const SelectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Select(request), context);
}



