/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SimpleDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SimpleDBClient::SimpleDBClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SimpleDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SimpleDBClient::SimpleDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << SimpleDBEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

BatchDeleteAttributesOutcome SimpleDBClient::BatchDeleteAttributes(const BatchDeleteAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::BatchDeleteAttributes, this, request);
}

void SimpleDBClient::BatchDeleteAttributesAsync(const BatchDeleteAttributesRequest& request, const BatchDeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::BatchDeleteAttributesAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::BatchDeleteAttributesAsyncHelper(const BatchDeleteAttributesRequest& request, const BatchDeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteAttributes(request), context);
}

BatchPutAttributesOutcome SimpleDBClient::BatchPutAttributes(const BatchPutAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::BatchPutAttributes, this, request);
}

void SimpleDBClient::BatchPutAttributesAsync(const BatchPutAttributesRequest& request, const BatchPutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::BatchPutAttributesAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::BatchPutAttributesAsyncHelper(const BatchPutAttributesRequest& request, const BatchPutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchPutAttributes(request), context);
}

CreateDomainOutcome SimpleDBClient::CreateDomain(const CreateDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::CreateDomain, this, request);
}

void SimpleDBClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::CreateDomainAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::CreateDomainAsyncHelper(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomain(request), context);
}

DeleteAttributesOutcome SimpleDBClient::DeleteAttributes(const DeleteAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::DeleteAttributes, this, request);
}

void SimpleDBClient::DeleteAttributesAsync(const DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::DeleteAttributesAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::DeleteAttributesAsyncHelper(const DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAttributes(request), context);
}

DeleteDomainOutcome SimpleDBClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::DeleteDomain, this, request);
}

void SimpleDBClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::DeleteDomainAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::DeleteDomainAsyncHelper(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomain(request), context);
}

DomainMetadataOutcome SimpleDBClient::DomainMetadata(const DomainMetadataRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::DomainMetadata, this, request);
}

void SimpleDBClient::DomainMetadataAsync(const DomainMetadataRequest& request, const DomainMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::DomainMetadataAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::DomainMetadataAsyncHelper(const DomainMetadataRequest& request, const DomainMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DomainMetadata(request), context);
}

GetAttributesOutcome SimpleDBClient::GetAttributes(const GetAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::GetAttributes, this, request);
}

void SimpleDBClient::GetAttributesAsync(const GetAttributesRequest& request, const GetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::GetAttributesAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::GetAttributesAsyncHelper(const GetAttributesRequest& request, const GetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAttributes(request), context);
}

ListDomainsOutcome SimpleDBClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::ListDomains, this, request);
}

void SimpleDBClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::ListDomainsAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

PutAttributesOutcome SimpleDBClient::PutAttributes(const PutAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::PutAttributes, this, request);
}

void SimpleDBClient::PutAttributesAsync(const PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::PutAttributesAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::PutAttributesAsyncHelper(const PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAttributes(request), context);
}

SelectOutcome SimpleDBClient::Select(const SelectRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &SimpleDBClient::Select, this, request);
}

void SimpleDBClient::SelectAsync(const SelectRequest& request, const SelectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SimpleDBClient::SelectAsyncHelper, this, request, handler, context);
}

void SimpleDBClient::SelectAsyncHelper(const SelectRequest& request, const SelectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Select(request), context);
}

