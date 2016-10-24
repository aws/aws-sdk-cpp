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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/es/ElasticsearchServiceClient.h>
#include <aws/es/ElasticsearchServiceEndpoint.h>
#include <aws/es/ElasticsearchServiceErrorMarshaller.h>
#include <aws/es/model/AddTagsRequest.h>
#include <aws/es/model/CreateElasticsearchDomainRequest.h>
#include <aws/es/model/DeleteElasticsearchDomainRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainConfigRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainsRequest.h>
#include <aws/es/model/ListTagsRequest.h>
#include <aws/es/model/RemoveTagsRequest.h>
#include <aws/es/model/UpdateElasticsearchDomainConfigRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticsearchService;
using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "es";
static const char* ALLOCATION_TAG = "ElasticsearchServiceClient";


ElasticsearchServiceClient::ElasticsearchServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticsearchServiceClient::~ElasticsearchServiceClient()
{
}

void ElasticsearchServiceClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << ElasticsearchServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddTagsOutcome ElasticsearchServiceClient::AddTags(const AddTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/tags";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(NoResult());
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable ElasticsearchServiceClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CreateElasticsearchDomainOutcome ElasticsearchServiceClient::CreateElasticsearchDomain(const CreateElasticsearchDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/es/domain";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateElasticsearchDomainOutcome(CreateElasticsearchDomainResult(outcome.GetResult()));
  }
  else
  {
    return CreateElasticsearchDomainOutcome(outcome.GetError());
  }
}

CreateElasticsearchDomainOutcomeCallable ElasticsearchServiceClient::CreateElasticsearchDomainCallable(const CreateElasticsearchDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateElasticsearchDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateElasticsearchDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::CreateElasticsearchDomainAsync(const CreateElasticsearchDomainRequest& request, const CreateElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateElasticsearchDomainAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::CreateElasticsearchDomainAsyncHelper(const CreateElasticsearchDomainRequest& request, const CreateElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateElasticsearchDomain(request), context);
}

DeleteElasticsearchDomainOutcome ElasticsearchServiceClient::DeleteElasticsearchDomain(const DeleteElasticsearchDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteElasticsearchDomainOutcome(DeleteElasticsearchDomainResult(outcome.GetResult()));
  }
  else
  {
    return DeleteElasticsearchDomainOutcome(outcome.GetError());
  }
}

DeleteElasticsearchDomainOutcomeCallable ElasticsearchServiceClient::DeleteElasticsearchDomainCallable(const DeleteElasticsearchDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteElasticsearchDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteElasticsearchDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DeleteElasticsearchDomainAsync(const DeleteElasticsearchDomainRequest& request, const DeleteElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteElasticsearchDomainAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DeleteElasticsearchDomainAsyncHelper(const DeleteElasticsearchDomainRequest& request, const DeleteElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteElasticsearchDomain(request), context);
}

DescribeElasticsearchDomainOutcome ElasticsearchServiceClient::DescribeElasticsearchDomain(const DescribeElasticsearchDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return DescribeElasticsearchDomainOutcome(DescribeElasticsearchDomainResult(outcome.GetResult()));
  }
  else
  {
    return DescribeElasticsearchDomainOutcome(outcome.GetError());
  }
}

DescribeElasticsearchDomainOutcomeCallable ElasticsearchServiceClient::DescribeElasticsearchDomainCallable(const DescribeElasticsearchDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticsearchDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticsearchDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainAsync(const DescribeElasticsearchDomainRequest& request, const DescribeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticsearchDomainAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainAsyncHelper(const DescribeElasticsearchDomainRequest& request, const DescribeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticsearchDomain(request), context);
}

DescribeElasticsearchDomainConfigOutcome ElasticsearchServiceClient::DescribeElasticsearchDomainConfig(const DescribeElasticsearchDomainConfigRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  ss << "/config";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return DescribeElasticsearchDomainConfigOutcome(DescribeElasticsearchDomainConfigResult(outcome.GetResult()));
  }
  else
  {
    return DescribeElasticsearchDomainConfigOutcome(outcome.GetError());
  }
}

DescribeElasticsearchDomainConfigOutcomeCallable ElasticsearchServiceClient::DescribeElasticsearchDomainConfigCallable(const DescribeElasticsearchDomainConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticsearchDomainConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticsearchDomainConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainConfigAsync(const DescribeElasticsearchDomainConfigRequest& request, const DescribeElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticsearchDomainConfigAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainConfigAsyncHelper(const DescribeElasticsearchDomainConfigRequest& request, const DescribeElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticsearchDomainConfig(request), context);
}

DescribeElasticsearchDomainsOutcome ElasticsearchServiceClient::DescribeElasticsearchDomains(const DescribeElasticsearchDomainsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/es/domain-info";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeElasticsearchDomainsOutcome(DescribeElasticsearchDomainsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeElasticsearchDomainsOutcome(outcome.GetError());
  }
}

DescribeElasticsearchDomainsOutcomeCallable ElasticsearchServiceClient::DescribeElasticsearchDomainsCallable(const DescribeElasticsearchDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticsearchDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticsearchDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainsAsync(const DescribeElasticsearchDomainsRequest& request, const DescribeElasticsearchDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticsearchDomainsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainsAsyncHelper(const DescribeElasticsearchDomainsRequest& request, const DescribeElasticsearchDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticsearchDomains(request), context);
}

ListDomainNamesOutcome ElasticsearchServiceClient::ListDomainNames() const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/domain";

  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDomainNamesOutcome(ListDomainNamesResult(outcome.GetResult()));
  }
  else
  {
    return ListDomainNamesOutcome(outcome.GetError());
  }
}

ListDomainNamesOutcomeCallable ElasticsearchServiceClient::ListDomainNamesCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainNamesOutcome() > >(ALLOCATION_TAG, [this](){ return this->ListDomainNames(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListDomainNamesAsync(const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->ListDomainNamesAsyncHelper( handler, context ); } );
}

void ElasticsearchServiceClient::ListDomainNamesAsyncHelper(const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, ListDomainNames(), context);
}

ListTagsOutcome ElasticsearchServiceClient::ListTags(const ListTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/tags/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTagsOutcome(ListTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOutcome(outcome.GetError());
  }
}

ListTagsOutcomeCallable ElasticsearchServiceClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

RemoveTagsOutcome ElasticsearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/tags-removal";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsOutcome(NoResult());
  }
  else
  {
    return RemoveTagsOutcome(outcome.GetError());
  }
}

RemoveTagsOutcomeCallable ElasticsearchServiceClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

UpdateElasticsearchDomainConfigOutcome ElasticsearchServiceClient::UpdateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  ss << "/config";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateElasticsearchDomainConfigOutcome(UpdateElasticsearchDomainConfigResult(outcome.GetResult()));
  }
  else
  {
    return UpdateElasticsearchDomainConfigOutcome(outcome.GetError());
  }
}

UpdateElasticsearchDomainConfigOutcomeCallable ElasticsearchServiceClient::UpdateElasticsearchDomainConfigCallable(const UpdateElasticsearchDomainConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateElasticsearchDomainConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateElasticsearchDomainConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::UpdateElasticsearchDomainConfigAsync(const UpdateElasticsearchDomainConfigRequest& request, const UpdateElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateElasticsearchDomainConfigAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::UpdateElasticsearchDomainConfigAsyncHelper(const UpdateElasticsearchDomainConfigRequest& request, const UpdateElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateElasticsearchDomainConfig(request), context);
}

