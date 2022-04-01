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

#include <aws/apprunner/AppRunnerClient.h>
#include <aws/apprunner/AppRunnerEndpoint.h>
#include <aws/apprunner/AppRunnerErrorMarshaller.h>
#include <aws/apprunner/model/AssociateCustomDomainRequest.h>
#include <aws/apprunner/model/CreateAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/CreateConnectionRequest.h>
#include <aws/apprunner/model/CreateObservabilityConfigurationRequest.h>
#include <aws/apprunner/model/CreateServiceRequest.h>
#include <aws/apprunner/model/CreateVpcConnectorRequest.h>
#include <aws/apprunner/model/DeleteAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/DeleteConnectionRequest.h>
#include <aws/apprunner/model/DeleteObservabilityConfigurationRequest.h>
#include <aws/apprunner/model/DeleteServiceRequest.h>
#include <aws/apprunner/model/DeleteVpcConnectorRequest.h>
#include <aws/apprunner/model/DescribeAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/DescribeCustomDomainsRequest.h>
#include <aws/apprunner/model/DescribeObservabilityConfigurationRequest.h>
#include <aws/apprunner/model/DescribeServiceRequest.h>
#include <aws/apprunner/model/DescribeVpcConnectorRequest.h>
#include <aws/apprunner/model/DisassociateCustomDomainRequest.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsRequest.h>
#include <aws/apprunner/model/ListConnectionsRequest.h>
#include <aws/apprunner/model/ListObservabilityConfigurationsRequest.h>
#include <aws/apprunner/model/ListOperationsRequest.h>
#include <aws/apprunner/model/ListServicesRequest.h>
#include <aws/apprunner/model/ListTagsForResourceRequest.h>
#include <aws/apprunner/model/ListVpcConnectorsRequest.h>
#include <aws/apprunner/model/PauseServiceRequest.h>
#include <aws/apprunner/model/ResumeServiceRequest.h>
#include <aws/apprunner/model/StartDeploymentRequest.h>
#include <aws/apprunner/model/TagResourceRequest.h>
#include <aws/apprunner/model/UntagResourceRequest.h>
#include <aws/apprunner/model/UpdateServiceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppRunner;
using namespace Aws::AppRunner::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "apprunner";
static const char* ALLOCATION_TAG = "AppRunnerClient";

AppRunnerClient::AppRunnerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppRunnerClient::~AppRunnerClient()
{
}

void AppRunnerClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("AppRunner");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AppRunnerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AppRunnerClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateCustomDomainOutcome AppRunnerClient::AssociateCustomDomain(const AssociateCustomDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateCustomDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateCustomDomainOutcomeCallable AppRunnerClient::AssociateCustomDomainCallable(const AssociateCustomDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateCustomDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateCustomDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::AssociateCustomDomainAsync(const AssociateCustomDomainRequest& request, const AssociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateCustomDomainAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::AssociateCustomDomainAsyncHelper(const AssociateCustomDomainRequest& request, const AssociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateCustomDomain(request), context);
}

CreateAutoScalingConfigurationOutcome AppRunnerClient::CreateAutoScalingConfiguration(const CreateAutoScalingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAutoScalingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAutoScalingConfigurationOutcomeCallable AppRunnerClient::CreateAutoScalingConfigurationCallable(const CreateAutoScalingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAutoScalingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAutoScalingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateAutoScalingConfigurationAsync(const CreateAutoScalingConfigurationRequest& request, const CreateAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAutoScalingConfigurationAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::CreateAutoScalingConfigurationAsyncHelper(const CreateAutoScalingConfigurationRequest& request, const CreateAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAutoScalingConfiguration(request), context);
}

CreateConnectionOutcome AppRunnerClient::CreateConnection(const CreateConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectionOutcomeCallable AppRunnerClient::CreateConnectionCallable(const CreateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConnectionAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::CreateConnectionAsyncHelper(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConnection(request), context);
}

CreateObservabilityConfigurationOutcome AppRunnerClient::CreateObservabilityConfiguration(const CreateObservabilityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateObservabilityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateObservabilityConfigurationOutcomeCallable AppRunnerClient::CreateObservabilityConfigurationCallable(const CreateObservabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateObservabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateObservabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateObservabilityConfigurationAsync(const CreateObservabilityConfigurationRequest& request, const CreateObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateObservabilityConfigurationAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::CreateObservabilityConfigurationAsyncHelper(const CreateObservabilityConfigurationRequest& request, const CreateObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateObservabilityConfiguration(request), context);
}

CreateServiceOutcome AppRunnerClient::CreateService(const CreateServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceOutcomeCallable AppRunnerClient::CreateServiceCallable(const CreateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateServiceAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::CreateServiceAsyncHelper(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateService(request), context);
}

CreateVpcConnectorOutcome AppRunnerClient::CreateVpcConnector(const CreateVpcConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVpcConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcConnectorOutcomeCallable AppRunnerClient::CreateVpcConnectorCallable(const CreateVpcConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateVpcConnectorAsync(const CreateVpcConnectorRequest& request, const CreateVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcConnectorAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::CreateVpcConnectorAsyncHelper(const CreateVpcConnectorRequest& request, const CreateVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcConnector(request), context);
}

DeleteAutoScalingConfigurationOutcome AppRunnerClient::DeleteAutoScalingConfiguration(const DeleteAutoScalingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAutoScalingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAutoScalingConfigurationOutcomeCallable AppRunnerClient::DeleteAutoScalingConfigurationCallable(const DeleteAutoScalingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAutoScalingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAutoScalingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteAutoScalingConfigurationAsync(const DeleteAutoScalingConfigurationRequest& request, const DeleteAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAutoScalingConfigurationAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DeleteAutoScalingConfigurationAsyncHelper(const DeleteAutoScalingConfigurationRequest& request, const DeleteAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAutoScalingConfiguration(request), context);
}

DeleteConnectionOutcome AppRunnerClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable AppRunnerClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConnectionAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DeleteConnectionAsyncHelper(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConnection(request), context);
}

DeleteObservabilityConfigurationOutcome AppRunnerClient::DeleteObservabilityConfiguration(const DeleteObservabilityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteObservabilityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteObservabilityConfigurationOutcomeCallable AppRunnerClient::DeleteObservabilityConfigurationCallable(const DeleteObservabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObservabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObservabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteObservabilityConfigurationAsync(const DeleteObservabilityConfigurationRequest& request, const DeleteObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteObservabilityConfigurationAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DeleteObservabilityConfigurationAsyncHelper(const DeleteObservabilityConfigurationRequest& request, const DeleteObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteObservabilityConfiguration(request), context);
}

DeleteServiceOutcome AppRunnerClient::DeleteService(const DeleteServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceOutcomeCallable AppRunnerClient::DeleteServiceCallable(const DeleteServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServiceAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DeleteServiceAsyncHelper(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteService(request), context);
}

DeleteVpcConnectorOutcome AppRunnerClient::DeleteVpcConnector(const DeleteVpcConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVpcConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcConnectorOutcomeCallable AppRunnerClient::DeleteVpcConnectorCallable(const DeleteVpcConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteVpcConnectorAsync(const DeleteVpcConnectorRequest& request, const DeleteVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcConnectorAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DeleteVpcConnectorAsyncHelper(const DeleteVpcConnectorRequest& request, const DeleteVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcConnector(request), context);
}

DescribeAutoScalingConfigurationOutcome AppRunnerClient::DescribeAutoScalingConfiguration(const DescribeAutoScalingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAutoScalingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutoScalingConfigurationOutcomeCallable AppRunnerClient::DescribeAutoScalingConfigurationCallable(const DescribeAutoScalingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoScalingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoScalingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeAutoScalingConfigurationAsync(const DescribeAutoScalingConfigurationRequest& request, const DescribeAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAutoScalingConfigurationAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DescribeAutoScalingConfigurationAsyncHelper(const DescribeAutoScalingConfigurationRequest& request, const DescribeAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAutoScalingConfiguration(request), context);
}

DescribeCustomDomainsOutcome AppRunnerClient::DescribeCustomDomains(const DescribeCustomDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCustomDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomDomainsOutcomeCallable AppRunnerClient::DescribeCustomDomainsCallable(const DescribeCustomDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeCustomDomainsAsync(const DescribeCustomDomainsRequest& request, const DescribeCustomDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomDomainsAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DescribeCustomDomainsAsyncHelper(const DescribeCustomDomainsRequest& request, const DescribeCustomDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomDomains(request), context);
}

DescribeObservabilityConfigurationOutcome AppRunnerClient::DescribeObservabilityConfiguration(const DescribeObservabilityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeObservabilityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeObservabilityConfigurationOutcomeCallable AppRunnerClient::DescribeObservabilityConfigurationCallable(const DescribeObservabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeObservabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeObservabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeObservabilityConfigurationAsync(const DescribeObservabilityConfigurationRequest& request, const DescribeObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeObservabilityConfigurationAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DescribeObservabilityConfigurationAsyncHelper(const DescribeObservabilityConfigurationRequest& request, const DescribeObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeObservabilityConfiguration(request), context);
}

DescribeServiceOutcome AppRunnerClient::DescribeService(const DescribeServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceOutcomeCallable AppRunnerClient::DescribeServiceCallable(const DescribeServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeServiceAsync(const DescribeServiceRequest& request, const DescribeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServiceAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DescribeServiceAsyncHelper(const DescribeServiceRequest& request, const DescribeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeService(request), context);
}

DescribeVpcConnectorOutcome AppRunnerClient::DescribeVpcConnector(const DescribeVpcConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeVpcConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVpcConnectorOutcomeCallable AppRunnerClient::DescribeVpcConnectorCallable(const DescribeVpcConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeVpcConnectorAsync(const DescribeVpcConnectorRequest& request, const DescribeVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcConnectorAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DescribeVpcConnectorAsyncHelper(const DescribeVpcConnectorRequest& request, const DescribeVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcConnector(request), context);
}

DisassociateCustomDomainOutcome AppRunnerClient::DisassociateCustomDomain(const DisassociateCustomDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateCustomDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateCustomDomainOutcomeCallable AppRunnerClient::DisassociateCustomDomainCallable(const DisassociateCustomDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateCustomDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateCustomDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DisassociateCustomDomainAsync(const DisassociateCustomDomainRequest& request, const DisassociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateCustomDomainAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::DisassociateCustomDomainAsyncHelper(const DisassociateCustomDomainRequest& request, const DisassociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateCustomDomain(request), context);
}

ListAutoScalingConfigurationsOutcome AppRunnerClient::ListAutoScalingConfigurations(const ListAutoScalingConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAutoScalingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAutoScalingConfigurationsOutcomeCallable AppRunnerClient::ListAutoScalingConfigurationsCallable(const ListAutoScalingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAutoScalingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAutoScalingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListAutoScalingConfigurationsAsync(const ListAutoScalingConfigurationsRequest& request, const ListAutoScalingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAutoScalingConfigurationsAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::ListAutoScalingConfigurationsAsyncHelper(const ListAutoScalingConfigurationsRequest& request, const ListAutoScalingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAutoScalingConfigurations(request), context);
}

ListConnectionsOutcome AppRunnerClient::ListConnections(const ListConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectionsOutcomeCallable AppRunnerClient::ListConnectionsCallable(const ListConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListConnectionsAsync(const ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConnectionsAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::ListConnectionsAsyncHelper(const ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConnections(request), context);
}

ListObservabilityConfigurationsOutcome AppRunnerClient::ListObservabilityConfigurations(const ListObservabilityConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListObservabilityConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListObservabilityConfigurationsOutcomeCallable AppRunnerClient::ListObservabilityConfigurationsCallable(const ListObservabilityConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObservabilityConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObservabilityConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListObservabilityConfigurationsAsync(const ListObservabilityConfigurationsRequest& request, const ListObservabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListObservabilityConfigurationsAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::ListObservabilityConfigurationsAsyncHelper(const ListObservabilityConfigurationsRequest& request, const ListObservabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListObservabilityConfigurations(request), context);
}

ListOperationsOutcome AppRunnerClient::ListOperations(const ListOperationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOperationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOperationsOutcomeCallable AppRunnerClient::ListOperationsCallable(const ListOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListOperationsAsync(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOperationsAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::ListOperationsAsyncHelper(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOperations(request), context);
}

ListServicesOutcome AppRunnerClient::ListServices(const ListServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServicesOutcomeCallable AppRunnerClient::ListServicesCallable(const ListServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListServicesAsync(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServicesAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::ListServicesAsyncHelper(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServices(request), context);
}

ListTagsForResourceOutcome AppRunnerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppRunnerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListVpcConnectorsOutcome AppRunnerClient::ListVpcConnectors(const ListVpcConnectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVpcConnectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVpcConnectorsOutcomeCallable AppRunnerClient::ListVpcConnectorsCallable(const ListVpcConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVpcConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVpcConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListVpcConnectorsAsync(const ListVpcConnectorsRequest& request, const ListVpcConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVpcConnectorsAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::ListVpcConnectorsAsyncHelper(const ListVpcConnectorsRequest& request, const ListVpcConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVpcConnectors(request), context);
}

PauseServiceOutcome AppRunnerClient::PauseService(const PauseServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PauseServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PauseServiceOutcomeCallable AppRunnerClient::PauseServiceCallable(const PauseServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PauseServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PauseService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::PauseServiceAsync(const PauseServiceRequest& request, const PauseServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PauseServiceAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::PauseServiceAsyncHelper(const PauseServiceRequest& request, const PauseServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PauseService(request), context);
}

ResumeServiceOutcome AppRunnerClient::ResumeService(const ResumeServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResumeServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeServiceOutcomeCallable AppRunnerClient::ResumeServiceCallable(const ResumeServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ResumeServiceAsync(const ResumeServiceRequest& request, const ResumeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResumeServiceAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::ResumeServiceAsyncHelper(const ResumeServiceRequest& request, const ResumeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResumeService(request), context);
}

StartDeploymentOutcome AppRunnerClient::StartDeployment(const StartDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDeploymentOutcomeCallable AppRunnerClient::StartDeploymentCallable(const StartDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::StartDeploymentAsync(const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDeploymentAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::StartDeploymentAsyncHelper(const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDeployment(request), context);
}

TagResourceOutcome AppRunnerClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppRunnerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome AppRunnerClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppRunnerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateServiceOutcome AppRunnerClient::UpdateService(const UpdateServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceOutcomeCallable AppRunnerClient::UpdateServiceCallable(const UpdateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServiceAsyncHelper( request, handler, context ); } );
}

void AppRunnerClient::UpdateServiceAsyncHelper(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateService(request), context);
}

