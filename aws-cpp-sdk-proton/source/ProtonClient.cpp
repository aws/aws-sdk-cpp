﻿/**
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

#include <aws/proton/ProtonClient.h>
#include <aws/proton/ProtonEndpoint.h>
#include <aws/proton/ProtonErrorMarshaller.h>
#include <aws/proton/model/AcceptEnvironmentAccountConnectionRequest.h>
#include <aws/proton/model/CancelComponentDeploymentRequest.h>
#include <aws/proton/model/CancelEnvironmentDeploymentRequest.h>
#include <aws/proton/model/CancelServiceInstanceDeploymentRequest.h>
#include <aws/proton/model/CancelServicePipelineDeploymentRequest.h>
#include <aws/proton/model/CreateComponentRequest.h>
#include <aws/proton/model/CreateEnvironmentRequest.h>
#include <aws/proton/model/CreateEnvironmentAccountConnectionRequest.h>
#include <aws/proton/model/CreateEnvironmentTemplateRequest.h>
#include <aws/proton/model/CreateEnvironmentTemplateVersionRequest.h>
#include <aws/proton/model/CreateRepositoryRequest.h>
#include <aws/proton/model/CreateServiceRequest.h>
#include <aws/proton/model/CreateServiceTemplateRequest.h>
#include <aws/proton/model/CreateServiceTemplateVersionRequest.h>
#include <aws/proton/model/CreateTemplateSyncConfigRequest.h>
#include <aws/proton/model/DeleteComponentRequest.h>
#include <aws/proton/model/DeleteEnvironmentRequest.h>
#include <aws/proton/model/DeleteEnvironmentAccountConnectionRequest.h>
#include <aws/proton/model/DeleteEnvironmentTemplateRequest.h>
#include <aws/proton/model/DeleteEnvironmentTemplateVersionRequest.h>
#include <aws/proton/model/DeleteRepositoryRequest.h>
#include <aws/proton/model/DeleteServiceRequest.h>
#include <aws/proton/model/DeleteServiceTemplateRequest.h>
#include <aws/proton/model/DeleteServiceTemplateVersionRequest.h>
#include <aws/proton/model/DeleteTemplateSyncConfigRequest.h>
#include <aws/proton/model/GetAccountSettingsRequest.h>
#include <aws/proton/model/GetComponentRequest.h>
#include <aws/proton/model/GetEnvironmentRequest.h>
#include <aws/proton/model/GetEnvironmentAccountConnectionRequest.h>
#include <aws/proton/model/GetEnvironmentTemplateRequest.h>
#include <aws/proton/model/GetEnvironmentTemplateVersionRequest.h>
#include <aws/proton/model/GetRepositoryRequest.h>
#include <aws/proton/model/GetRepositorySyncStatusRequest.h>
#include <aws/proton/model/GetServiceRequest.h>
#include <aws/proton/model/GetServiceInstanceRequest.h>
#include <aws/proton/model/GetServiceTemplateRequest.h>
#include <aws/proton/model/GetServiceTemplateVersionRequest.h>
#include <aws/proton/model/GetTemplateSyncConfigRequest.h>
#include <aws/proton/model/GetTemplateSyncStatusRequest.h>
#include <aws/proton/model/ListComponentOutputsRequest.h>
#include <aws/proton/model/ListComponentProvisionedResourcesRequest.h>
#include <aws/proton/model/ListComponentsRequest.h>
#include <aws/proton/model/ListEnvironmentAccountConnectionsRequest.h>
#include <aws/proton/model/ListEnvironmentOutputsRequest.h>
#include <aws/proton/model/ListEnvironmentProvisionedResourcesRequest.h>
#include <aws/proton/model/ListEnvironmentTemplateVersionsRequest.h>
#include <aws/proton/model/ListEnvironmentTemplatesRequest.h>
#include <aws/proton/model/ListEnvironmentsRequest.h>
#include <aws/proton/model/ListRepositoriesRequest.h>
#include <aws/proton/model/ListRepositorySyncDefinitionsRequest.h>
#include <aws/proton/model/ListServiceInstanceOutputsRequest.h>
#include <aws/proton/model/ListServiceInstanceProvisionedResourcesRequest.h>
#include <aws/proton/model/ListServiceInstancesRequest.h>
#include <aws/proton/model/ListServicePipelineOutputsRequest.h>
#include <aws/proton/model/ListServicePipelineProvisionedResourcesRequest.h>
#include <aws/proton/model/ListServiceTemplateVersionsRequest.h>
#include <aws/proton/model/ListServiceTemplatesRequest.h>
#include <aws/proton/model/ListServicesRequest.h>
#include <aws/proton/model/ListTagsForResourceRequest.h>
#include <aws/proton/model/NotifyResourceDeploymentStatusChangeRequest.h>
#include <aws/proton/model/RejectEnvironmentAccountConnectionRequest.h>
#include <aws/proton/model/TagResourceRequest.h>
#include <aws/proton/model/UntagResourceRequest.h>
#include <aws/proton/model/UpdateAccountSettingsRequest.h>
#include <aws/proton/model/UpdateComponentRequest.h>
#include <aws/proton/model/UpdateEnvironmentRequest.h>
#include <aws/proton/model/UpdateEnvironmentAccountConnectionRequest.h>
#include <aws/proton/model/UpdateEnvironmentTemplateRequest.h>
#include <aws/proton/model/UpdateEnvironmentTemplateVersionRequest.h>
#include <aws/proton/model/UpdateServiceRequest.h>
#include <aws/proton/model/UpdateServiceInstanceRequest.h>
#include <aws/proton/model/UpdateServicePipelineRequest.h>
#include <aws/proton/model/UpdateServiceTemplateRequest.h>
#include <aws/proton/model/UpdateServiceTemplateVersionRequest.h>
#include <aws/proton/model/UpdateTemplateSyncConfigRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Proton;
using namespace Aws::Proton::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* ProtonClient::SERVICE_NAME = "proton";
const char* ProtonClient::ALLOCATION_TAG = "ProtonClient";

ProtonClient::ProtonClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ProtonErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ProtonClient::ProtonClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ProtonErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ProtonClient::ProtonClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ProtonErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ProtonClient::~ProtonClient()
{
}

void ProtonClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Proton");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ProtonEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ProtonClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptEnvironmentAccountConnectionOutcome ProtonClient::AcceptEnvironmentAccountConnection(const AcceptEnvironmentAccountConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcceptEnvironmentAccountConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptEnvironmentAccountConnectionOutcomeCallable ProtonClient::AcceptEnvironmentAccountConnectionCallable(const AcceptEnvironmentAccountConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptEnvironmentAccountConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptEnvironmentAccountConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::AcceptEnvironmentAccountConnectionAsync(const AcceptEnvironmentAccountConnectionRequest& request, const AcceptEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AcceptEnvironmentAccountConnection(request), context);
    } );
}

CancelComponentDeploymentOutcome ProtonClient::CancelComponentDeployment(const CancelComponentDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelComponentDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelComponentDeploymentOutcomeCallable ProtonClient::CancelComponentDeploymentCallable(const CancelComponentDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelComponentDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelComponentDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CancelComponentDeploymentAsync(const CancelComponentDeploymentRequest& request, const CancelComponentDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelComponentDeployment(request), context);
    } );
}

CancelEnvironmentDeploymentOutcome ProtonClient::CancelEnvironmentDeployment(const CancelEnvironmentDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelEnvironmentDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelEnvironmentDeploymentOutcomeCallable ProtonClient::CancelEnvironmentDeploymentCallable(const CancelEnvironmentDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelEnvironmentDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelEnvironmentDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CancelEnvironmentDeploymentAsync(const CancelEnvironmentDeploymentRequest& request, const CancelEnvironmentDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelEnvironmentDeployment(request), context);
    } );
}

CancelServiceInstanceDeploymentOutcome ProtonClient::CancelServiceInstanceDeployment(const CancelServiceInstanceDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelServiceInstanceDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelServiceInstanceDeploymentOutcomeCallable ProtonClient::CancelServiceInstanceDeploymentCallable(const CancelServiceInstanceDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelServiceInstanceDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelServiceInstanceDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CancelServiceInstanceDeploymentAsync(const CancelServiceInstanceDeploymentRequest& request, const CancelServiceInstanceDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelServiceInstanceDeployment(request), context);
    } );
}

CancelServicePipelineDeploymentOutcome ProtonClient::CancelServicePipelineDeployment(const CancelServicePipelineDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelServicePipelineDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelServicePipelineDeploymentOutcomeCallable ProtonClient::CancelServicePipelineDeploymentCallable(const CancelServicePipelineDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelServicePipelineDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelServicePipelineDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CancelServicePipelineDeploymentAsync(const CancelServicePipelineDeploymentRequest& request, const CancelServicePipelineDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelServicePipelineDeployment(request), context);
    } );
}

CreateComponentOutcome ProtonClient::CreateComponent(const CreateComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateComponentOutcomeCallable ProtonClient::CreateComponentCallable(const CreateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateComponentAsync(const CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateComponent(request), context);
    } );
}

CreateEnvironmentOutcome ProtonClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentOutcomeCallable ProtonClient::CreateEnvironmentCallable(const CreateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEnvironment(request), context);
    } );
}

CreateEnvironmentAccountConnectionOutcome ProtonClient::CreateEnvironmentAccountConnection(const CreateEnvironmentAccountConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEnvironmentAccountConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentAccountConnectionOutcomeCallable ProtonClient::CreateEnvironmentAccountConnectionCallable(const CreateEnvironmentAccountConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentAccountConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironmentAccountConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateEnvironmentAccountConnectionAsync(const CreateEnvironmentAccountConnectionRequest& request, const CreateEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEnvironmentAccountConnection(request), context);
    } );
}

CreateEnvironmentTemplateOutcome ProtonClient::CreateEnvironmentTemplate(const CreateEnvironmentTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEnvironmentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentTemplateOutcomeCallable ProtonClient::CreateEnvironmentTemplateCallable(const CreateEnvironmentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironmentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateEnvironmentTemplateAsync(const CreateEnvironmentTemplateRequest& request, const CreateEnvironmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEnvironmentTemplate(request), context);
    } );
}

CreateEnvironmentTemplateVersionOutcome ProtonClient::CreateEnvironmentTemplateVersion(const CreateEnvironmentTemplateVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEnvironmentTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentTemplateVersionOutcomeCallable ProtonClient::CreateEnvironmentTemplateVersionCallable(const CreateEnvironmentTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironmentTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateEnvironmentTemplateVersionAsync(const CreateEnvironmentTemplateVersionRequest& request, const CreateEnvironmentTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEnvironmentTemplateVersion(request), context);
    } );
}

CreateRepositoryOutcome ProtonClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRepositoryOutcomeCallable ProtonClient::CreateRepositoryCallable(const CreateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRepository(request), context);
    } );
}

CreateServiceOutcome ProtonClient::CreateService(const CreateServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceOutcomeCallable ProtonClient::CreateServiceCallable(const CreateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateService(request), context);
    } );
}

CreateServiceTemplateOutcome ProtonClient::CreateServiceTemplate(const CreateServiceTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServiceTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceTemplateOutcomeCallable ProtonClient::CreateServiceTemplateCallable(const CreateServiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateServiceTemplateAsync(const CreateServiceTemplateRequest& request, const CreateServiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateServiceTemplate(request), context);
    } );
}

CreateServiceTemplateVersionOutcome ProtonClient::CreateServiceTemplateVersion(const CreateServiceTemplateVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServiceTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceTemplateVersionOutcomeCallable ProtonClient::CreateServiceTemplateVersionCallable(const CreateServiceTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServiceTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateServiceTemplateVersionAsync(const CreateServiceTemplateVersionRequest& request, const CreateServiceTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateServiceTemplateVersion(request), context);
    } );
}

CreateTemplateSyncConfigOutcome ProtonClient::CreateTemplateSyncConfig(const CreateTemplateSyncConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTemplateSyncConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTemplateSyncConfigOutcomeCallable ProtonClient::CreateTemplateSyncConfigCallable(const CreateTemplateSyncConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTemplateSyncConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTemplateSyncConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::CreateTemplateSyncConfigAsync(const CreateTemplateSyncConfigRequest& request, const CreateTemplateSyncConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTemplateSyncConfig(request), context);
    } );
}

DeleteComponentOutcome ProtonClient::DeleteComponent(const DeleteComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteComponentOutcomeCallable ProtonClient::DeleteComponentCallable(const DeleteComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteComponentAsync(const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteComponent(request), context);
    } );
}

DeleteEnvironmentOutcome ProtonClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentOutcomeCallable ProtonClient::DeleteEnvironmentCallable(const DeleteEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteEnvironmentAsync(const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEnvironment(request), context);
    } );
}

DeleteEnvironmentAccountConnectionOutcome ProtonClient::DeleteEnvironmentAccountConnection(const DeleteEnvironmentAccountConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEnvironmentAccountConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentAccountConnectionOutcomeCallable ProtonClient::DeleteEnvironmentAccountConnectionCallable(const DeleteEnvironmentAccountConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentAccountConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironmentAccountConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteEnvironmentAccountConnectionAsync(const DeleteEnvironmentAccountConnectionRequest& request, const DeleteEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEnvironmentAccountConnection(request), context);
    } );
}

DeleteEnvironmentTemplateOutcome ProtonClient::DeleteEnvironmentTemplate(const DeleteEnvironmentTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEnvironmentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentTemplateOutcomeCallable ProtonClient::DeleteEnvironmentTemplateCallable(const DeleteEnvironmentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironmentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteEnvironmentTemplateAsync(const DeleteEnvironmentTemplateRequest& request, const DeleteEnvironmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEnvironmentTemplate(request), context);
    } );
}

DeleteEnvironmentTemplateVersionOutcome ProtonClient::DeleteEnvironmentTemplateVersion(const DeleteEnvironmentTemplateVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEnvironmentTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentTemplateVersionOutcomeCallable ProtonClient::DeleteEnvironmentTemplateVersionCallable(const DeleteEnvironmentTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironmentTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteEnvironmentTemplateVersionAsync(const DeleteEnvironmentTemplateVersionRequest& request, const DeleteEnvironmentTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEnvironmentTemplateVersion(request), context);
    } );
}

DeleteRepositoryOutcome ProtonClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRepositoryOutcomeCallable ProtonClient::DeleteRepositoryCallable(const DeleteRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRepository(request), context);
    } );
}

DeleteServiceOutcome ProtonClient::DeleteService(const DeleteServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceOutcomeCallable ProtonClient::DeleteServiceCallable(const DeleteServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteService(request), context);
    } );
}

DeleteServiceTemplateOutcome ProtonClient::DeleteServiceTemplate(const DeleteServiceTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServiceTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceTemplateOutcomeCallable ProtonClient::DeleteServiceTemplateCallable(const DeleteServiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteServiceTemplateAsync(const DeleteServiceTemplateRequest& request, const DeleteServiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteServiceTemplate(request), context);
    } );
}

DeleteServiceTemplateVersionOutcome ProtonClient::DeleteServiceTemplateVersion(const DeleteServiceTemplateVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServiceTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceTemplateVersionOutcomeCallable ProtonClient::DeleteServiceTemplateVersionCallable(const DeleteServiceTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteServiceTemplateVersionAsync(const DeleteServiceTemplateVersionRequest& request, const DeleteServiceTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteServiceTemplateVersion(request), context);
    } );
}

DeleteTemplateSyncConfigOutcome ProtonClient::DeleteTemplateSyncConfig(const DeleteTemplateSyncConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTemplateSyncConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTemplateSyncConfigOutcomeCallable ProtonClient::DeleteTemplateSyncConfigCallable(const DeleteTemplateSyncConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTemplateSyncConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTemplateSyncConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::DeleteTemplateSyncConfigAsync(const DeleteTemplateSyncConfigRequest& request, const DeleteTemplateSyncConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTemplateSyncConfig(request), context);
    } );
}

GetAccountSettingsOutcome ProtonClient::GetAccountSettings(const GetAccountSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccountSettingsOutcomeCallable ProtonClient::GetAccountSettingsCallable(const GetAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetAccountSettingsAsync(const GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccountSettings(request), context);
    } );
}

GetComponentOutcome ProtonClient::GetComponent(const GetComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetComponentOutcomeCallable ProtonClient::GetComponentCallable(const GetComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetComponentAsync(const GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetComponent(request), context);
    } );
}

GetEnvironmentOutcome ProtonClient::GetEnvironment(const GetEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEnvironmentOutcomeCallable ProtonClient::GetEnvironmentCallable(const GetEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetEnvironmentAsync(const GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEnvironment(request), context);
    } );
}

GetEnvironmentAccountConnectionOutcome ProtonClient::GetEnvironmentAccountConnection(const GetEnvironmentAccountConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEnvironmentAccountConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEnvironmentAccountConnectionOutcomeCallable ProtonClient::GetEnvironmentAccountConnectionCallable(const GetEnvironmentAccountConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnvironmentAccountConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnvironmentAccountConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetEnvironmentAccountConnectionAsync(const GetEnvironmentAccountConnectionRequest& request, const GetEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEnvironmentAccountConnection(request), context);
    } );
}

GetEnvironmentTemplateOutcome ProtonClient::GetEnvironmentTemplate(const GetEnvironmentTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEnvironmentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEnvironmentTemplateOutcomeCallable ProtonClient::GetEnvironmentTemplateCallable(const GetEnvironmentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnvironmentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnvironmentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetEnvironmentTemplateAsync(const GetEnvironmentTemplateRequest& request, const GetEnvironmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEnvironmentTemplate(request), context);
    } );
}

GetEnvironmentTemplateVersionOutcome ProtonClient::GetEnvironmentTemplateVersion(const GetEnvironmentTemplateVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEnvironmentTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEnvironmentTemplateVersionOutcomeCallable ProtonClient::GetEnvironmentTemplateVersionCallable(const GetEnvironmentTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnvironmentTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnvironmentTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetEnvironmentTemplateVersionAsync(const GetEnvironmentTemplateVersionRequest& request, const GetEnvironmentTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEnvironmentTemplateVersion(request), context);
    } );
}

GetRepositoryOutcome ProtonClient::GetRepository(const GetRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryOutcomeCallable ProtonClient::GetRepositoryCallable(const GetRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetRepositoryAsync(const GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRepository(request), context);
    } );
}

GetRepositorySyncStatusOutcome ProtonClient::GetRepositorySyncStatus(const GetRepositorySyncStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRepositorySyncStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositorySyncStatusOutcomeCallable ProtonClient::GetRepositorySyncStatusCallable(const GetRepositorySyncStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositorySyncStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepositorySyncStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetRepositorySyncStatusAsync(const GetRepositorySyncStatusRequest& request, const GetRepositorySyncStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRepositorySyncStatus(request), context);
    } );
}

GetServiceOutcome ProtonClient::GetService(const GetServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceOutcomeCallable ProtonClient::GetServiceCallable(const GetServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetServiceAsync(const GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetService(request), context);
    } );
}

GetServiceInstanceOutcome ProtonClient::GetServiceInstance(const GetServiceInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceInstanceOutcomeCallable ProtonClient::GetServiceInstanceCallable(const GetServiceInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetServiceInstanceAsync(const GetServiceInstanceRequest& request, const GetServiceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceInstance(request), context);
    } );
}

GetServiceTemplateOutcome ProtonClient::GetServiceTemplate(const GetServiceTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceTemplateOutcomeCallable ProtonClient::GetServiceTemplateCallable(const GetServiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetServiceTemplateAsync(const GetServiceTemplateRequest& request, const GetServiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceTemplate(request), context);
    } );
}

GetServiceTemplateVersionOutcome ProtonClient::GetServiceTemplateVersion(const GetServiceTemplateVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceTemplateVersionOutcomeCallable ProtonClient::GetServiceTemplateVersionCallable(const GetServiceTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetServiceTemplateVersionAsync(const GetServiceTemplateVersionRequest& request, const GetServiceTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceTemplateVersion(request), context);
    } );
}

GetTemplateSyncConfigOutcome ProtonClient::GetTemplateSyncConfig(const GetTemplateSyncConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTemplateSyncConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateSyncConfigOutcomeCallable ProtonClient::GetTemplateSyncConfigCallable(const GetTemplateSyncConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateSyncConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplateSyncConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetTemplateSyncConfigAsync(const GetTemplateSyncConfigRequest& request, const GetTemplateSyncConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemplateSyncConfig(request), context);
    } );
}

GetTemplateSyncStatusOutcome ProtonClient::GetTemplateSyncStatus(const GetTemplateSyncStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTemplateSyncStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateSyncStatusOutcomeCallable ProtonClient::GetTemplateSyncStatusCallable(const GetTemplateSyncStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateSyncStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplateSyncStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::GetTemplateSyncStatusAsync(const GetTemplateSyncStatusRequest& request, const GetTemplateSyncStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemplateSyncStatus(request), context);
    } );
}

ListComponentOutputsOutcome ProtonClient::ListComponentOutputs(const ListComponentOutputsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListComponentOutputsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComponentOutputsOutcomeCallable ProtonClient::ListComponentOutputsCallable(const ListComponentOutputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentOutputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponentOutputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListComponentOutputsAsync(const ListComponentOutputsRequest& request, const ListComponentOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListComponentOutputs(request), context);
    } );
}

ListComponentProvisionedResourcesOutcome ProtonClient::ListComponentProvisionedResources(const ListComponentProvisionedResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListComponentProvisionedResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComponentProvisionedResourcesOutcomeCallable ProtonClient::ListComponentProvisionedResourcesCallable(const ListComponentProvisionedResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentProvisionedResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponentProvisionedResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListComponentProvisionedResourcesAsync(const ListComponentProvisionedResourcesRequest& request, const ListComponentProvisionedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListComponentProvisionedResources(request), context);
    } );
}

ListComponentsOutcome ProtonClient::ListComponents(const ListComponentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListComponentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComponentsOutcomeCallable ProtonClient::ListComponentsCallable(const ListComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListComponentsAsync(const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListComponents(request), context);
    } );
}

ListEnvironmentAccountConnectionsOutcome ProtonClient::ListEnvironmentAccountConnections(const ListEnvironmentAccountConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEnvironmentAccountConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentAccountConnectionsOutcomeCallable ProtonClient::ListEnvironmentAccountConnectionsCallable(const ListEnvironmentAccountConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentAccountConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironmentAccountConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListEnvironmentAccountConnectionsAsync(const ListEnvironmentAccountConnectionsRequest& request, const ListEnvironmentAccountConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEnvironmentAccountConnections(request), context);
    } );
}

ListEnvironmentOutputsOutcome ProtonClient::ListEnvironmentOutputs(const ListEnvironmentOutputsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEnvironmentOutputsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentOutputsOutcomeCallable ProtonClient::ListEnvironmentOutputsCallable(const ListEnvironmentOutputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentOutputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironmentOutputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListEnvironmentOutputsAsync(const ListEnvironmentOutputsRequest& request, const ListEnvironmentOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEnvironmentOutputs(request), context);
    } );
}

ListEnvironmentProvisionedResourcesOutcome ProtonClient::ListEnvironmentProvisionedResources(const ListEnvironmentProvisionedResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEnvironmentProvisionedResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentProvisionedResourcesOutcomeCallable ProtonClient::ListEnvironmentProvisionedResourcesCallable(const ListEnvironmentProvisionedResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentProvisionedResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironmentProvisionedResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListEnvironmentProvisionedResourcesAsync(const ListEnvironmentProvisionedResourcesRequest& request, const ListEnvironmentProvisionedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEnvironmentProvisionedResources(request), context);
    } );
}

ListEnvironmentTemplateVersionsOutcome ProtonClient::ListEnvironmentTemplateVersions(const ListEnvironmentTemplateVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEnvironmentTemplateVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentTemplateVersionsOutcomeCallable ProtonClient::ListEnvironmentTemplateVersionsCallable(const ListEnvironmentTemplateVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironmentTemplateVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListEnvironmentTemplateVersionsAsync(const ListEnvironmentTemplateVersionsRequest& request, const ListEnvironmentTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEnvironmentTemplateVersions(request), context);
    } );
}

ListEnvironmentTemplatesOutcome ProtonClient::ListEnvironmentTemplates(const ListEnvironmentTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEnvironmentTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentTemplatesOutcomeCallable ProtonClient::ListEnvironmentTemplatesCallable(const ListEnvironmentTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironmentTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListEnvironmentTemplatesAsync(const ListEnvironmentTemplatesRequest& request, const ListEnvironmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEnvironmentTemplates(request), context);
    } );
}

ListEnvironmentsOutcome ProtonClient::ListEnvironments(const ListEnvironmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEnvironmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentsOutcomeCallable ProtonClient::ListEnvironmentsCallable(const ListEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListEnvironmentsAsync(const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEnvironments(request), context);
    } );
}

ListRepositoriesOutcome ProtonClient::ListRepositories(const ListRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRepositoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRepositoriesOutcomeCallable ProtonClient::ListRepositoriesCallable(const ListRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListRepositoriesAsync(const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRepositories(request), context);
    } );
}

ListRepositorySyncDefinitionsOutcome ProtonClient::ListRepositorySyncDefinitions(const ListRepositorySyncDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRepositorySyncDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRepositorySyncDefinitionsOutcomeCallable ProtonClient::ListRepositorySyncDefinitionsCallable(const ListRepositorySyncDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRepositorySyncDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRepositorySyncDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListRepositorySyncDefinitionsAsync(const ListRepositorySyncDefinitionsRequest& request, const ListRepositorySyncDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRepositorySyncDefinitions(request), context);
    } );
}

ListServiceInstanceOutputsOutcome ProtonClient::ListServiceInstanceOutputs(const ListServiceInstanceOutputsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceInstanceOutputsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceInstanceOutputsOutcomeCallable ProtonClient::ListServiceInstanceOutputsCallable(const ListServiceInstanceOutputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceInstanceOutputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceInstanceOutputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListServiceInstanceOutputsAsync(const ListServiceInstanceOutputsRequest& request, const ListServiceInstanceOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServiceInstanceOutputs(request), context);
    } );
}

ListServiceInstanceProvisionedResourcesOutcome ProtonClient::ListServiceInstanceProvisionedResources(const ListServiceInstanceProvisionedResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceInstanceProvisionedResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceInstanceProvisionedResourcesOutcomeCallable ProtonClient::ListServiceInstanceProvisionedResourcesCallable(const ListServiceInstanceProvisionedResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceInstanceProvisionedResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceInstanceProvisionedResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListServiceInstanceProvisionedResourcesAsync(const ListServiceInstanceProvisionedResourcesRequest& request, const ListServiceInstanceProvisionedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServiceInstanceProvisionedResources(request), context);
    } );
}

ListServiceInstancesOutcome ProtonClient::ListServiceInstances(const ListServiceInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceInstancesOutcomeCallable ProtonClient::ListServiceInstancesCallable(const ListServiceInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListServiceInstancesAsync(const ListServiceInstancesRequest& request, const ListServiceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServiceInstances(request), context);
    } );
}

ListServicePipelineOutputsOutcome ProtonClient::ListServicePipelineOutputs(const ListServicePipelineOutputsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServicePipelineOutputsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServicePipelineOutputsOutcomeCallable ProtonClient::ListServicePipelineOutputsCallable(const ListServicePipelineOutputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicePipelineOutputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServicePipelineOutputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListServicePipelineOutputsAsync(const ListServicePipelineOutputsRequest& request, const ListServicePipelineOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServicePipelineOutputs(request), context);
    } );
}

ListServicePipelineProvisionedResourcesOutcome ProtonClient::ListServicePipelineProvisionedResources(const ListServicePipelineProvisionedResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServicePipelineProvisionedResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServicePipelineProvisionedResourcesOutcomeCallable ProtonClient::ListServicePipelineProvisionedResourcesCallable(const ListServicePipelineProvisionedResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicePipelineProvisionedResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServicePipelineProvisionedResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListServicePipelineProvisionedResourcesAsync(const ListServicePipelineProvisionedResourcesRequest& request, const ListServicePipelineProvisionedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServicePipelineProvisionedResources(request), context);
    } );
}

ListServiceTemplateVersionsOutcome ProtonClient::ListServiceTemplateVersions(const ListServiceTemplateVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceTemplateVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceTemplateVersionsOutcomeCallable ProtonClient::ListServiceTemplateVersionsCallable(const ListServiceTemplateVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceTemplateVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListServiceTemplateVersionsAsync(const ListServiceTemplateVersionsRequest& request, const ListServiceTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServiceTemplateVersions(request), context);
    } );
}

ListServiceTemplatesOutcome ProtonClient::ListServiceTemplates(const ListServiceTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceTemplatesOutcomeCallable ProtonClient::ListServiceTemplatesCallable(const ListServiceTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListServiceTemplatesAsync(const ListServiceTemplatesRequest& request, const ListServiceTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServiceTemplates(request), context);
    } );
}

ListServicesOutcome ProtonClient::ListServices(const ListServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServicesOutcomeCallable ProtonClient::ListServicesCallable(const ListServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListServicesAsync(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServices(request), context);
    } );
}

ListTagsForResourceOutcome ProtonClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ProtonClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

NotifyResourceDeploymentStatusChangeOutcome ProtonClient::NotifyResourceDeploymentStatusChange(const NotifyResourceDeploymentStatusChangeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return NotifyResourceDeploymentStatusChangeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

NotifyResourceDeploymentStatusChangeOutcomeCallable ProtonClient::NotifyResourceDeploymentStatusChangeCallable(const NotifyResourceDeploymentStatusChangeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyResourceDeploymentStatusChangeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyResourceDeploymentStatusChange(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::NotifyResourceDeploymentStatusChangeAsync(const NotifyResourceDeploymentStatusChangeRequest& request, const NotifyResourceDeploymentStatusChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, NotifyResourceDeploymentStatusChange(request), context);
    } );
}

RejectEnvironmentAccountConnectionOutcome ProtonClient::RejectEnvironmentAccountConnection(const RejectEnvironmentAccountConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RejectEnvironmentAccountConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectEnvironmentAccountConnectionOutcomeCallable ProtonClient::RejectEnvironmentAccountConnectionCallable(const RejectEnvironmentAccountConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectEnvironmentAccountConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectEnvironmentAccountConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::RejectEnvironmentAccountConnectionAsync(const RejectEnvironmentAccountConnectionRequest& request, const RejectEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RejectEnvironmentAccountConnection(request), context);
    } );
}

TagResourceOutcome ProtonClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ProtonClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ProtonClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ProtonClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAccountSettingsOutcome ProtonClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountSettingsOutcomeCallable ProtonClient::UpdateAccountSettingsCallable(const UpdateAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateAccountSettingsAsync(const UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAccountSettings(request), context);
    } );
}

UpdateComponentOutcome ProtonClient::UpdateComponent(const UpdateComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateComponentOutcomeCallable ProtonClient::UpdateComponentCallable(const UpdateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateComponentAsync(const UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateComponent(request), context);
    } );
}

UpdateEnvironmentOutcome ProtonClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEnvironmentOutcomeCallable ProtonClient::UpdateEnvironmentCallable(const UpdateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEnvironment(request), context);
    } );
}

UpdateEnvironmentAccountConnectionOutcome ProtonClient::UpdateEnvironmentAccountConnection(const UpdateEnvironmentAccountConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEnvironmentAccountConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEnvironmentAccountConnectionOutcomeCallable ProtonClient::UpdateEnvironmentAccountConnectionCallable(const UpdateEnvironmentAccountConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentAccountConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironmentAccountConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateEnvironmentAccountConnectionAsync(const UpdateEnvironmentAccountConnectionRequest& request, const UpdateEnvironmentAccountConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEnvironmentAccountConnection(request), context);
    } );
}

UpdateEnvironmentTemplateOutcome ProtonClient::UpdateEnvironmentTemplate(const UpdateEnvironmentTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEnvironmentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEnvironmentTemplateOutcomeCallable ProtonClient::UpdateEnvironmentTemplateCallable(const UpdateEnvironmentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironmentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateEnvironmentTemplateAsync(const UpdateEnvironmentTemplateRequest& request, const UpdateEnvironmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEnvironmentTemplate(request), context);
    } );
}

UpdateEnvironmentTemplateVersionOutcome ProtonClient::UpdateEnvironmentTemplateVersion(const UpdateEnvironmentTemplateVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEnvironmentTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEnvironmentTemplateVersionOutcomeCallable ProtonClient::UpdateEnvironmentTemplateVersionCallable(const UpdateEnvironmentTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironmentTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateEnvironmentTemplateVersionAsync(const UpdateEnvironmentTemplateVersionRequest& request, const UpdateEnvironmentTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEnvironmentTemplateVersion(request), context);
    } );
}

UpdateServiceOutcome ProtonClient::UpdateService(const UpdateServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceOutcomeCallable ProtonClient::UpdateServiceCallable(const UpdateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateService(request), context);
    } );
}

UpdateServiceInstanceOutcome ProtonClient::UpdateServiceInstance(const UpdateServiceInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceInstanceOutcomeCallable ProtonClient::UpdateServiceInstanceCallable(const UpdateServiceInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateServiceInstanceAsync(const UpdateServiceInstanceRequest& request, const UpdateServiceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateServiceInstance(request), context);
    } );
}

UpdateServicePipelineOutcome ProtonClient::UpdateServicePipeline(const UpdateServicePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServicePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServicePipelineOutcomeCallable ProtonClient::UpdateServicePipelineCallable(const UpdateServicePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServicePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServicePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateServicePipelineAsync(const UpdateServicePipelineRequest& request, const UpdateServicePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateServicePipeline(request), context);
    } );
}

UpdateServiceTemplateOutcome ProtonClient::UpdateServiceTemplate(const UpdateServiceTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceTemplateOutcomeCallable ProtonClient::UpdateServiceTemplateCallable(const UpdateServiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateServiceTemplateAsync(const UpdateServiceTemplateRequest& request, const UpdateServiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateServiceTemplate(request), context);
    } );
}

UpdateServiceTemplateVersionOutcome ProtonClient::UpdateServiceTemplateVersion(const UpdateServiceTemplateVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceTemplateVersionOutcomeCallable ProtonClient::UpdateServiceTemplateVersionCallable(const UpdateServiceTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateServiceTemplateVersionAsync(const UpdateServiceTemplateVersionRequest& request, const UpdateServiceTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateServiceTemplateVersion(request), context);
    } );
}

UpdateTemplateSyncConfigOutcome ProtonClient::UpdateTemplateSyncConfig(const UpdateTemplateSyncConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTemplateSyncConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateSyncConfigOutcomeCallable ProtonClient::UpdateTemplateSyncConfigCallable(const UpdateTemplateSyncConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplateSyncConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplateSyncConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProtonClient::UpdateTemplateSyncConfigAsync(const UpdateTemplateSyncConfigRequest& request, const UpdateTemplateSyncConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTemplateSyncConfig(request), context);
    } );
}

