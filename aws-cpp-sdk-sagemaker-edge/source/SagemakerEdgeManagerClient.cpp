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

#include <aws/sagemaker-edge/SagemakerEdgeManagerClient.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerEndpoint.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrorMarshaller.h>
#include <aws/sagemaker-edge/model/GetDeploymentsRequest.h>
#include <aws/sagemaker-edge/model/GetDeviceRegistrationRequest.h>
#include <aws/sagemaker-edge/model/SendHeartbeatRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SagemakerEdgeManager;
using namespace Aws::SagemakerEdgeManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "sagemaker";
static const char* ALLOCATION_TAG = "SagemakerEdgeManagerClient";

SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SagemakerEdgeManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SagemakerEdgeManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SagemakerEdgeManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SagemakerEdgeManagerClient::~SagemakerEdgeManagerClient()
{
}

void SagemakerEdgeManagerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Sagemaker Edge");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SagemakerEdgeManagerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SagemakerEdgeManagerClient::OverrideEndpoint(const Aws::String& endpoint)
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

GetDeploymentsOutcome SagemakerEdgeManagerClient::GetDeployments(const GetDeploymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetDeployments");
  return GetDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentsOutcomeCallable SagemakerEdgeManagerClient::GetDeploymentsCallable(const GetDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SagemakerEdgeManagerClient::GetDeploymentsAsync(const GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeployments(request), context);
    } );
}

GetDeviceRegistrationOutcome SagemakerEdgeManagerClient::GetDeviceRegistration(const GetDeviceRegistrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetDeviceRegistration");
  return GetDeviceRegistrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceRegistrationOutcomeCallable SagemakerEdgeManagerClient::GetDeviceRegistrationCallable(const GetDeviceRegistrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceRegistrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceRegistration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SagemakerEdgeManagerClient::GetDeviceRegistrationAsync(const GetDeviceRegistrationRequest& request, const GetDeviceRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeviceRegistration(request), context);
    } );
}

SendHeartbeatOutcome SagemakerEdgeManagerClient::SendHeartbeat(const SendHeartbeatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/SendHeartbeat");
  return SendHeartbeatOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendHeartbeatOutcomeCallable SagemakerEdgeManagerClient::SendHeartbeatCallable(const SendHeartbeatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendHeartbeatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendHeartbeat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SagemakerEdgeManagerClient::SendHeartbeatAsync(const SendHeartbeatRequest& request, const SendHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendHeartbeat(request), context);
    } );
}

