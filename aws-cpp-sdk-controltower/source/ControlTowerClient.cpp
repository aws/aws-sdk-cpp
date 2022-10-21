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

#include <aws/controltower/ControlTowerClient.h>
#include <aws/controltower/ControlTowerEndpoint.h>
#include <aws/controltower/ControlTowerErrorMarshaller.h>
#include <aws/controltower/model/DisableControlRequest.h>
#include <aws/controltower/model/EnableControlRequest.h>
#include <aws/controltower/model/GetControlOperationRequest.h>
#include <aws/controltower/model/ListEnabledControlsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ControlTower;
using namespace Aws::ControlTower::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* ControlTowerClient::SERVICE_NAME = "controltower";
const char* ControlTowerClient::ALLOCATION_TAG = "ControlTowerClient";

ControlTowerClient::ControlTowerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ControlTowerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ControlTowerClient::ControlTowerClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ControlTowerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ControlTowerClient::ControlTowerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ControlTowerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ControlTowerClient::~ControlTowerClient()
{
}

void ControlTowerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ControlTower");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ControlTowerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ControlTowerClient::OverrideEndpoint(const Aws::String& endpoint)
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

DisableControlOutcome ControlTowerClient::DisableControl(const DisableControlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/disable-control");
  return DisableControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableControlOutcomeCallable ControlTowerClient::DisableControlCallable(const DisableControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ControlTowerClient::DisableControlAsync(const DisableControlRequest& request, const DisableControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableControl(request), context);
    } );
}

EnableControlOutcome ControlTowerClient::EnableControl(const EnableControlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/enable-control");
  return EnableControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableControlOutcomeCallable ControlTowerClient::EnableControlCallable(const EnableControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ControlTowerClient::EnableControlAsync(const EnableControlRequest& request, const EnableControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableControl(request), context);
    } );
}

GetControlOperationOutcome ControlTowerClient::GetControlOperation(const GetControlOperationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-control-operation");
  return GetControlOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetControlOperationOutcomeCallable ControlTowerClient::GetControlOperationCallable(const GetControlOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetControlOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetControlOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ControlTowerClient::GetControlOperationAsync(const GetControlOperationRequest& request, const GetControlOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetControlOperation(request), context);
    } );
}

ListEnabledControlsOutcome ControlTowerClient::ListEnabledControls(const ListEnabledControlsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-enabled-controls");
  return ListEnabledControlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEnabledControlsOutcomeCallable ControlTowerClient::ListEnabledControlsCallable(const ListEnabledControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnabledControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnabledControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ControlTowerClient::ListEnabledControlsAsync(const ListEnabledControlsRequest& request, const ListEnabledControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEnabledControls(request), context);
    } );
}

