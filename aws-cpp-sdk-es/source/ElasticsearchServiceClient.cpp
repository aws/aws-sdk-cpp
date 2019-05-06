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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/es/ElasticsearchServiceClient.h>
#include <aws/es/ElasticsearchServiceEndpoint.h>
#include <aws/es/ElasticsearchServiceErrorMarshaller.h>
#include <aws/es/model/AddTagsRequest.h>
#include <aws/es/model/CancelElasticsearchServiceSoftwareUpdateRequest.h>
#include <aws/es/model/CreateElasticsearchDomainRequest.h>
#include <aws/es/model/DeleteElasticsearchDomainRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainConfigRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainsRequest.h>
#include <aws/es/model/DescribeElasticsearchInstanceTypeLimitsRequest.h>
#include <aws/es/model/DescribeReservedElasticsearchInstanceOfferingsRequest.h>
#include <aws/es/model/DescribeReservedElasticsearchInstancesRequest.h>
#include <aws/es/model/GetCompatibleElasticsearchVersionsRequest.h>
#include <aws/es/model/GetUpgradeHistoryRequest.h>
#include <aws/es/model/GetUpgradeStatusRequest.h>
#include <aws/es/model/ListElasticsearchInstanceTypesRequest.h>
#include <aws/es/model/ListElasticsearchVersionsRequest.h>
#include <aws/es/model/ListTagsRequest.h>
#include <aws/es/model/PurchaseReservedElasticsearchInstanceOfferingRequest.h>
#include <aws/es/model/RemoveTagsRequest.h>
#include <aws/es/model/StartElasticsearchServiceSoftwareUpdateRequest.h>
#include <aws/es/model/UpdateElasticsearchDomainConfigRequest.h>
#include <aws/es/model/UpgradeElasticsearchDomainRequest.h>

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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ElasticsearchServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ElasticsearchServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddTagsOutcome ElasticsearchServiceClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

CancelElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdate(const CancelElasticsearchServiceSoftwareUpdateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/serviceSoftwareUpdate/cancel";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelElasticsearchServiceSoftwareUpdateOutcome(CancelElasticsearchServiceSoftwareUpdateResult(outcome.GetResult()));
  }
  else
  {
    return CancelElasticsearchServiceSoftwareUpdateOutcome(outcome.GetError());
  }
}

CancelElasticsearchServiceSoftwareUpdateOutcomeCallable ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdateCallable(const CancelElasticsearchServiceSoftwareUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelElasticsearchServiceSoftwareUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelElasticsearchServiceSoftwareUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdateAsync(const CancelElasticsearchServiceSoftwareUpdateRequest& request, const CancelElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelElasticsearchServiceSoftwareUpdateAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdateAsyncHelper(const CancelElasticsearchServiceSoftwareUpdateRequest& request, const CancelElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelElasticsearchServiceSoftwareUpdate(request), context);
}

CreateElasticsearchDomainOutcome ElasticsearchServiceClient::CreateElasticsearchDomain(const CreateElasticsearchDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteElasticsearchDomain", "Required field: DomainName, is not set");
    return DeleteElasticsearchDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
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

DeleteElasticsearchServiceRoleOutcome ElasticsearchServiceClient::DeleteElasticsearchServiceRole() const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/es/role";
  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, "DeleteElasticsearchServiceRole");
  if(outcome.IsSuccess())
  {
    return DeleteElasticsearchServiceRoleOutcome(NoResult());
  }
  else
  {
    return DeleteElasticsearchServiceRoleOutcome(outcome.GetError());
  }
}

DeleteElasticsearchServiceRoleOutcomeCallable ElasticsearchServiceClient::DeleteElasticsearchServiceRoleCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteElasticsearchServiceRoleOutcome() > >(ALLOCATION_TAG, [this](){ return this->DeleteElasticsearchServiceRole(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DeleteElasticsearchServiceRoleAsync(const DeleteElasticsearchServiceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->DeleteElasticsearchServiceRoleAsyncHelper( handler, context ); } );
}

void ElasticsearchServiceClient::DeleteElasticsearchServiceRoleAsyncHelper(const DeleteElasticsearchServiceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, DeleteElasticsearchServiceRole(), context);
}

DescribeElasticsearchDomainOutcome ElasticsearchServiceClient::DescribeElasticsearchDomain(const DescribeElasticsearchDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchDomain", "Required field: DomainName, is not set");
    return DescribeElasticsearchDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchDomainConfig", "Required field: DomainName, is not set");
    return DescribeElasticsearchDomainConfigOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain-info";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

DescribeElasticsearchInstanceTypeLimitsOutcome ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimits(const DescribeElasticsearchInstanceTypeLimitsRequest& request) const
{
  if (!request.InstanceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchInstanceTypeLimits", "Required field: InstanceType, is not set");
    return DescribeElasticsearchInstanceTypeLimitsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceType]", false));
  }
  if (!request.ElasticsearchVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchInstanceTypeLimits", "Required field: ElasticsearchVersion, is not set");
    return DescribeElasticsearchInstanceTypeLimitsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ElasticsearchVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/instanceTypeLimits/";
  ss << request.GetElasticsearchVersion();
  ss << "/";
  ss << ESPartitionInstanceTypeMapper::GetNameForESPartitionInstanceType(request.GetInstanceType());
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeElasticsearchInstanceTypeLimitsOutcome(DescribeElasticsearchInstanceTypeLimitsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeElasticsearchInstanceTypeLimitsOutcome(outcome.GetError());
  }
}

DescribeElasticsearchInstanceTypeLimitsOutcomeCallable ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimitsCallable(const DescribeElasticsearchInstanceTypeLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticsearchInstanceTypeLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticsearchInstanceTypeLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimitsAsync(const DescribeElasticsearchInstanceTypeLimitsRequest& request, const DescribeElasticsearchInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticsearchInstanceTypeLimitsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimitsAsyncHelper(const DescribeElasticsearchInstanceTypeLimitsRequest& request, const DescribeElasticsearchInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticsearchInstanceTypeLimits(request), context);
}

DescribeReservedElasticsearchInstanceOfferingsOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferings(const DescribeReservedElasticsearchInstanceOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/reservedInstanceOfferings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeReservedElasticsearchInstanceOfferingsOutcome(DescribeReservedElasticsearchInstanceOfferingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedElasticsearchInstanceOfferingsOutcome(outcome.GetError());
  }
}

DescribeReservedElasticsearchInstanceOfferingsOutcomeCallable ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferingsCallable(const DescribeReservedElasticsearchInstanceOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedElasticsearchInstanceOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedElasticsearchInstanceOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferingsAsync(const DescribeReservedElasticsearchInstanceOfferingsRequest& request, const DescribeReservedElasticsearchInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedElasticsearchInstanceOfferingsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferingsAsyncHelper(const DescribeReservedElasticsearchInstanceOfferingsRequest& request, const DescribeReservedElasticsearchInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedElasticsearchInstanceOfferings(request), context);
}

DescribeReservedElasticsearchInstancesOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstances(const DescribeReservedElasticsearchInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/reservedInstances";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeReservedElasticsearchInstancesOutcome(DescribeReservedElasticsearchInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedElasticsearchInstancesOutcome(outcome.GetError());
  }
}

DescribeReservedElasticsearchInstancesOutcomeCallable ElasticsearchServiceClient::DescribeReservedElasticsearchInstancesCallable(const DescribeReservedElasticsearchInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedElasticsearchInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedElasticsearchInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeReservedElasticsearchInstancesAsync(const DescribeReservedElasticsearchInstancesRequest& request, const DescribeReservedElasticsearchInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedElasticsearchInstancesAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeReservedElasticsearchInstancesAsyncHelper(const DescribeReservedElasticsearchInstancesRequest& request, const DescribeReservedElasticsearchInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedElasticsearchInstances(request), context);
}

GetCompatibleElasticsearchVersionsOutcome ElasticsearchServiceClient::GetCompatibleElasticsearchVersions(const GetCompatibleElasticsearchVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/compatibleVersions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCompatibleElasticsearchVersionsOutcome(GetCompatibleElasticsearchVersionsResult(outcome.GetResult()));
  }
  else
  {
    return GetCompatibleElasticsearchVersionsOutcome(outcome.GetError());
  }
}

GetCompatibleElasticsearchVersionsOutcomeCallable ElasticsearchServiceClient::GetCompatibleElasticsearchVersionsCallable(const GetCompatibleElasticsearchVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCompatibleElasticsearchVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCompatibleElasticsearchVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::GetCompatibleElasticsearchVersionsAsync(const GetCompatibleElasticsearchVersionsRequest& request, const GetCompatibleElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCompatibleElasticsearchVersionsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::GetCompatibleElasticsearchVersionsAsyncHelper(const GetCompatibleElasticsearchVersionsRequest& request, const GetCompatibleElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCompatibleElasticsearchVersions(request), context);
}

GetUpgradeHistoryOutcome ElasticsearchServiceClient::GetUpgradeHistory(const GetUpgradeHistoryRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeHistory", "Required field: DomainName, is not set");
    return GetUpgradeHistoryOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/upgradeDomain/";
  ss << request.GetDomainName();
  ss << "/history";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUpgradeHistoryOutcome(GetUpgradeHistoryResult(outcome.GetResult()));
  }
  else
  {
    return GetUpgradeHistoryOutcome(outcome.GetError());
  }
}

GetUpgradeHistoryOutcomeCallable ElasticsearchServiceClient::GetUpgradeHistoryCallable(const GetUpgradeHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUpgradeHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpgradeHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::GetUpgradeHistoryAsync(const GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUpgradeHistoryAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::GetUpgradeHistoryAsyncHelper(const GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUpgradeHistory(request), context);
}

GetUpgradeStatusOutcome ElasticsearchServiceClient::GetUpgradeStatus(const GetUpgradeStatusRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeStatus", "Required field: DomainName, is not set");
    return GetUpgradeStatusOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/upgradeDomain/";
  ss << request.GetDomainName();
  ss << "/status";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUpgradeStatusOutcome(GetUpgradeStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetUpgradeStatusOutcome(outcome.GetError());
  }
}

GetUpgradeStatusOutcomeCallable ElasticsearchServiceClient::GetUpgradeStatusCallable(const GetUpgradeStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUpgradeStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpgradeStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::GetUpgradeStatusAsync(const GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUpgradeStatusAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::GetUpgradeStatusAsyncHelper(const GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUpgradeStatus(request), context);
}

ListDomainNamesOutcome ElasticsearchServiceClient::ListDomainNames() const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/domain";
  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "ListDomainNames");
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

ListElasticsearchInstanceTypesOutcome ElasticsearchServiceClient::ListElasticsearchInstanceTypes(const ListElasticsearchInstanceTypesRequest& request) const
{
  if (!request.ElasticsearchVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListElasticsearchInstanceTypes", "Required field: ElasticsearchVersion, is not set");
    return ListElasticsearchInstanceTypesOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ElasticsearchVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/instanceTypes/";
  ss << request.GetElasticsearchVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListElasticsearchInstanceTypesOutcome(ListElasticsearchInstanceTypesResult(outcome.GetResult()));
  }
  else
  {
    return ListElasticsearchInstanceTypesOutcome(outcome.GetError());
  }
}

ListElasticsearchInstanceTypesOutcomeCallable ElasticsearchServiceClient::ListElasticsearchInstanceTypesCallable(const ListElasticsearchInstanceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListElasticsearchInstanceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListElasticsearchInstanceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListElasticsearchInstanceTypesAsync(const ListElasticsearchInstanceTypesRequest& request, const ListElasticsearchInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListElasticsearchInstanceTypesAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::ListElasticsearchInstanceTypesAsyncHelper(const ListElasticsearchInstanceTypesRequest& request, const ListElasticsearchInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListElasticsearchInstanceTypes(request), context);
}

ListElasticsearchVersionsOutcome ElasticsearchServiceClient::ListElasticsearchVersions(const ListElasticsearchVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListElasticsearchVersionsOutcome(ListElasticsearchVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListElasticsearchVersionsOutcome(outcome.GetError());
  }
}

ListElasticsearchVersionsOutcomeCallable ElasticsearchServiceClient::ListElasticsearchVersionsCallable(const ListElasticsearchVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListElasticsearchVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListElasticsearchVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListElasticsearchVersionsAsync(const ListElasticsearchVersionsRequest& request, const ListElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListElasticsearchVersionsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::ListElasticsearchVersionsAsyncHelper(const ListElasticsearchVersionsRequest& request, const ListElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListElasticsearchVersions(request), context);
}

ListTagsOutcome ElasticsearchServiceClient::ListTags(const ListTagsRequest& request) const
{
  if (!request.ARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ARN, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ARN]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/tags/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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

PurchaseReservedElasticsearchInstanceOfferingOutcome ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOffering(const PurchaseReservedElasticsearchInstanceOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/purchaseReservedInstanceOffering";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PurchaseReservedElasticsearchInstanceOfferingOutcome(PurchaseReservedElasticsearchInstanceOfferingResult(outcome.GetResult()));
  }
  else
  {
    return PurchaseReservedElasticsearchInstanceOfferingOutcome(outcome.GetError());
  }
}

PurchaseReservedElasticsearchInstanceOfferingOutcomeCallable ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOfferingCallable(const PurchaseReservedElasticsearchInstanceOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedElasticsearchInstanceOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedElasticsearchInstanceOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOfferingAsync(const PurchaseReservedElasticsearchInstanceOfferingRequest& request, const PurchaseReservedElasticsearchInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseReservedElasticsearchInstanceOfferingAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOfferingAsyncHelper(const PurchaseReservedElasticsearchInstanceOfferingRequest& request, const PurchaseReservedElasticsearchInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseReservedElasticsearchInstanceOffering(request), context);
}

RemoveTagsOutcome ElasticsearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/tags-removal";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

StartElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdate(const StartElasticsearchServiceSoftwareUpdateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/serviceSoftwareUpdate/start";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartElasticsearchServiceSoftwareUpdateOutcome(StartElasticsearchServiceSoftwareUpdateResult(outcome.GetResult()));
  }
  else
  {
    return StartElasticsearchServiceSoftwareUpdateOutcome(outcome.GetError());
  }
}

StartElasticsearchServiceSoftwareUpdateOutcomeCallable ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdateCallable(const StartElasticsearchServiceSoftwareUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartElasticsearchServiceSoftwareUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartElasticsearchServiceSoftwareUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdateAsync(const StartElasticsearchServiceSoftwareUpdateRequest& request, const StartElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartElasticsearchServiceSoftwareUpdateAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdateAsyncHelper(const StartElasticsearchServiceSoftwareUpdateRequest& request, const StartElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartElasticsearchServiceSoftwareUpdate(request), context);
}

UpdateElasticsearchDomainConfigOutcome ElasticsearchServiceClient::UpdateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateElasticsearchDomainConfig", "Required field: DomainName, is not set");
    return UpdateElasticsearchDomainConfigOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

UpgradeElasticsearchDomainOutcome ElasticsearchServiceClient::UpgradeElasticsearchDomain(const UpgradeElasticsearchDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/upgradeDomain";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpgradeElasticsearchDomainOutcome(UpgradeElasticsearchDomainResult(outcome.GetResult()));
  }
  else
  {
    return UpgradeElasticsearchDomainOutcome(outcome.GetError());
  }
}

UpgradeElasticsearchDomainOutcomeCallable ElasticsearchServiceClient::UpgradeElasticsearchDomainCallable(const UpgradeElasticsearchDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpgradeElasticsearchDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpgradeElasticsearchDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::UpgradeElasticsearchDomainAsync(const UpgradeElasticsearchDomainRequest& request, const UpgradeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpgradeElasticsearchDomainAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::UpgradeElasticsearchDomainAsyncHelper(const UpgradeElasticsearchDomainRequest& request, const UpgradeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpgradeElasticsearchDomain(request), context);
}

