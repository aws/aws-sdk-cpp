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

#include <aws/marketplace-catalog/MarketplaceCatalogClient.h>
#include <aws/marketplace-catalog/MarketplaceCatalogEndpoint.h>
#include <aws/marketplace-catalog/MarketplaceCatalogErrorMarshaller.h>
#include <aws/marketplace-catalog/model/CancelChangeSetRequest.h>
#include <aws/marketplace-catalog/model/DescribeChangeSetRequest.h>
#include <aws/marketplace-catalog/model/DescribeEntityRequest.h>
#include <aws/marketplace-catalog/model/ListChangeSetsRequest.h>
#include <aws/marketplace-catalog/model/ListEntitiesRequest.h>
#include <aws/marketplace-catalog/model/StartChangeSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceCatalog;
using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "aws-marketplace";
static const char* ALLOCATION_TAG = "MarketplaceCatalogClient";


MarketplaceCatalogClient::MarketplaceCatalogClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceCatalogClient::MarketplaceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceCatalogClient::~MarketplaceCatalogClient()
{
}

void MarketplaceCatalogClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Marketplace Catalog");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MarketplaceCatalogEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MarketplaceCatalogClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelChangeSetOutcome MarketplaceCatalogClient::CancelChangeSet(const CancelChangeSetRequest& request) const
{
  if (!request.CatalogHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelChangeSet", "Required field: Catalog, is not set");
    return CancelChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.ChangeSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelChangeSet", "Required field: ChangeSetId, is not set");
    return CancelChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeSetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/CancelChangeSet";
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

CancelChangeSetOutcomeCallable MarketplaceCatalogClient::CancelChangeSetCallable(const CancelChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceCatalogClient::CancelChangeSetAsync(const CancelChangeSetRequest& request, const CancelChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelChangeSetAsyncHelper( request, handler, context ); } );
}

void MarketplaceCatalogClient::CancelChangeSetAsyncHelper(const CancelChangeSetRequest& request, const CancelChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelChangeSet(request), context);
}

DescribeChangeSetOutcome MarketplaceCatalogClient::DescribeChangeSet(const DescribeChangeSetRequest& request) const
{
  if (!request.CatalogHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChangeSet", "Required field: Catalog, is not set");
    return DescribeChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.ChangeSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChangeSet", "Required field: ChangeSetId, is not set");
    return DescribeChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeSetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeChangeSet";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChangeSetOutcomeCallable MarketplaceCatalogClient::DescribeChangeSetCallable(const DescribeChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceCatalogClient::DescribeChangeSetAsync(const DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChangeSetAsyncHelper( request, handler, context ); } );
}

void MarketplaceCatalogClient::DescribeChangeSetAsyncHelper(const DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChangeSet(request), context);
}

DescribeEntityOutcome MarketplaceCatalogClient::DescribeEntity(const DescribeEntityRequest& request) const
{
  if (!request.CatalogHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEntity", "Required field: Catalog, is not set");
    return DescribeEntityOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.EntityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEntity", "Required field: EntityId, is not set");
    return DescribeEntityOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeEntity";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEntityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntityOutcomeCallable MarketplaceCatalogClient::DescribeEntityCallable(const DescribeEntityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceCatalogClient::DescribeEntityAsync(const DescribeEntityRequest& request, const DescribeEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEntityAsyncHelper( request, handler, context ); } );
}

void MarketplaceCatalogClient::DescribeEntityAsyncHelper(const DescribeEntityRequest& request, const DescribeEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEntity(request), context);
}

ListChangeSetsOutcome MarketplaceCatalogClient::ListChangeSets(const ListChangeSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ListChangeSets";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListChangeSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListChangeSetsOutcomeCallable MarketplaceCatalogClient::ListChangeSetsCallable(const ListChangeSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChangeSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChangeSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceCatalogClient::ListChangeSetsAsync(const ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChangeSetsAsyncHelper( request, handler, context ); } );
}

void MarketplaceCatalogClient::ListChangeSetsAsyncHelper(const ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChangeSets(request), context);
}

ListEntitiesOutcome MarketplaceCatalogClient::ListEntities(const ListEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ListEntities";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitiesOutcomeCallable MarketplaceCatalogClient::ListEntitiesCallable(const ListEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceCatalogClient::ListEntitiesAsync(const ListEntitiesRequest& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEntitiesAsyncHelper( request, handler, context ); } );
}

void MarketplaceCatalogClient::ListEntitiesAsyncHelper(const ListEntitiesRequest& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntities(request), context);
}

StartChangeSetOutcome MarketplaceCatalogClient::StartChangeSet(const StartChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/StartChangeSet";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartChangeSetOutcomeCallable MarketplaceCatalogClient::StartChangeSetCallable(const StartChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceCatalogClient::StartChangeSetAsync(const StartChangeSetRequest& request, const StartChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartChangeSetAsyncHelper( request, handler, context ); } );
}

void MarketplaceCatalogClient::StartChangeSetAsyncHelper(const StartChangeSetRequest& request, const StartChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartChangeSet(request), context);
}

