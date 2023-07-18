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

#include <aws/route53-recovery-cluster/Route53RecoveryClusterClient.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterEndpoint.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterErrorMarshaller.h>
#include <aws/route53-recovery-cluster/model/GetRoutingControlStateRequest.h>
#include <aws/route53-recovery-cluster/model/ListRoutingControlsRequest.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateRequest.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStatesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53RecoveryCluster;
using namespace Aws::Route53RecoveryCluster::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "route53-recovery-cluster";
static const char* ALLOCATION_TAG = "Route53RecoveryClusterClient";


Route53RecoveryClusterClient::Route53RecoveryClusterClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53RecoveryClusterErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53RecoveryClusterClient::Route53RecoveryClusterClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53RecoveryClusterErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53RecoveryClusterClient::Route53RecoveryClusterClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53RecoveryClusterErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53RecoveryClusterClient::~Route53RecoveryClusterClient()
{
}

void Route53RecoveryClusterClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Route53 Recovery Cluster");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + Route53RecoveryClusterEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void Route53RecoveryClusterClient::OverrideEndpoint(const Aws::String& endpoint)
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

GetRoutingControlStateOutcome Route53RecoveryClusterClient::GetRoutingControlState(const GetRoutingControlStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRoutingControlStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRoutingControlStateOutcomeCallable Route53RecoveryClusterClient::GetRoutingControlStateCallable(const GetRoutingControlStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoutingControlStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoutingControlState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryClusterClient::GetRoutingControlStateAsync(const GetRoutingControlStateRequest& request, const GetRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRoutingControlStateAsyncHelper( request, handler, context ); } );
}

void Route53RecoveryClusterClient::GetRoutingControlStateAsyncHelper(const GetRoutingControlStateRequest& request, const GetRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoutingControlState(request), context);
}

ListRoutingControlsOutcome Route53RecoveryClusterClient::ListRoutingControls(const ListRoutingControlsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRoutingControlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRoutingControlsOutcomeCallable Route53RecoveryClusterClient::ListRoutingControlsCallable(const ListRoutingControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoutingControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoutingControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryClusterClient::ListRoutingControlsAsync(const ListRoutingControlsRequest& request, const ListRoutingControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoutingControlsAsyncHelper( request, handler, context ); } );
}

void Route53RecoveryClusterClient::ListRoutingControlsAsyncHelper(const ListRoutingControlsRequest& request, const ListRoutingControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoutingControls(request), context);
}

UpdateRoutingControlStateOutcome Route53RecoveryClusterClient::UpdateRoutingControlState(const UpdateRoutingControlStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRoutingControlStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingControlStateOutcomeCallable Route53RecoveryClusterClient::UpdateRoutingControlStateCallable(const UpdateRoutingControlStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoutingControlStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoutingControlState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryClusterClient::UpdateRoutingControlStateAsync(const UpdateRoutingControlStateRequest& request, const UpdateRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoutingControlStateAsyncHelper( request, handler, context ); } );
}

void Route53RecoveryClusterClient::UpdateRoutingControlStateAsyncHelper(const UpdateRoutingControlStateRequest& request, const UpdateRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoutingControlState(request), context);
}

UpdateRoutingControlStatesOutcome Route53RecoveryClusterClient::UpdateRoutingControlStates(const UpdateRoutingControlStatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRoutingControlStatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingControlStatesOutcomeCallable Route53RecoveryClusterClient::UpdateRoutingControlStatesCallable(const UpdateRoutingControlStatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoutingControlStatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoutingControlStates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryClusterClient::UpdateRoutingControlStatesAsync(const UpdateRoutingControlStatesRequest& request, const UpdateRoutingControlStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoutingControlStatesAsyncHelper( request, handler, context ); } );
}

void Route53RecoveryClusterClient::UpdateRoutingControlStatesAsyncHelper(const UpdateRoutingControlStatesRequest& request, const UpdateRoutingControlStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoutingControlStates(request), context);
}

