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

#include <aws/amp/PrometheusServiceClient.h>
#include <aws/amp/PrometheusServiceEndpoint.h>
#include <aws/amp/PrometheusServiceErrorMarshaller.h>
#include <aws/amp/model/CreateAlertManagerDefinitionRequest.h>
#include <aws/amp/model/CreateLoggingConfigurationRequest.h>
#include <aws/amp/model/CreateRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/CreateWorkspaceRequest.h>
#include <aws/amp/model/DeleteAlertManagerDefinitionRequest.h>
#include <aws/amp/model/DeleteLoggingConfigurationRequest.h>
#include <aws/amp/model/DeleteRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/DeleteWorkspaceRequest.h>
#include <aws/amp/model/DescribeAlertManagerDefinitionRequest.h>
#include <aws/amp/model/DescribeLoggingConfigurationRequest.h>
#include <aws/amp/model/DescribeRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/DescribeWorkspaceRequest.h>
#include <aws/amp/model/ListRuleGroupsNamespacesRequest.h>
#include <aws/amp/model/ListTagsForResourceRequest.h>
#include <aws/amp/model/ListWorkspacesRequest.h>
#include <aws/amp/model/PutAlertManagerDefinitionRequest.h>
#include <aws/amp/model/PutRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/TagResourceRequest.h>
#include <aws/amp/model/UntagResourceRequest.h>
#include <aws/amp/model/UpdateLoggingConfigurationRequest.h>
#include <aws/amp/model/UpdateWorkspaceAliasRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PrometheusService;
using namespace Aws::PrometheusService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* PrometheusServiceClient::SERVICE_NAME = "aps";
const char* PrometheusServiceClient::ALLOCATION_TAG = "PrometheusServiceClient";

PrometheusServiceClient::PrometheusServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PrometheusServiceClient::PrometheusServiceClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PrometheusServiceClient::PrometheusServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PrometheusServiceClient::~PrometheusServiceClient()
{
}

void PrometheusServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("amp");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PrometheusServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PrometheusServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAlertManagerDefinitionOutcome PrometheusServiceClient::CreateAlertManagerDefinition(const CreateAlertManagerDefinitionRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return CreateAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/alertmanager/definition");
  return CreateAlertManagerDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAlertManagerDefinitionOutcomeCallable PrometheusServiceClient::CreateAlertManagerDefinitionCallable(const CreateAlertManagerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAlertManagerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlertManagerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::CreateAlertManagerDefinitionAsync(const CreateAlertManagerDefinitionRequest& request, const CreateAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAlertManagerDefinition(request), context);
    } );
}

CreateLoggingConfigurationOutcome PrometheusServiceClient::CreateLoggingConfiguration(const CreateLoggingConfigurationRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return CreateLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/logging");
  return CreateLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLoggingConfigurationOutcomeCallable PrometheusServiceClient::CreateLoggingConfigurationCallable(const CreateLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::CreateLoggingConfigurationAsync(const CreateLoggingConfigurationRequest& request, const CreateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLoggingConfiguration(request), context);
    } );
}

CreateRuleGroupsNamespaceOutcome PrometheusServiceClient::CreateRuleGroupsNamespace(const CreateRuleGroupsNamespaceRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return CreateRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/rulegroupsnamespaces");
  return CreateRuleGroupsNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleGroupsNamespaceOutcomeCallable PrometheusServiceClient::CreateRuleGroupsNamespaceCallable(const CreateRuleGroupsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleGroupsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleGroupsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::CreateRuleGroupsNamespaceAsync(const CreateRuleGroupsNamespaceRequest& request, const CreateRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRuleGroupsNamespace(request), context);
    } );
}

CreateWorkspaceOutcome PrometheusServiceClient::CreateWorkspace(const CreateWorkspaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces");
  return CreateWorkspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspaceOutcomeCallable PrometheusServiceClient::CreateWorkspaceCallable(const CreateWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::CreateWorkspaceAsync(const CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkspace(request), context);
    } );
}

DeleteAlertManagerDefinitionOutcome PrometheusServiceClient::DeleteAlertManagerDefinition(const DeleteAlertManagerDefinitionRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return DeleteAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/alertmanager/definition");
  return DeleteAlertManagerDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlertManagerDefinitionOutcomeCallable PrometheusServiceClient::DeleteAlertManagerDefinitionCallable(const DeleteAlertManagerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlertManagerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlertManagerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::DeleteAlertManagerDefinitionAsync(const DeleteAlertManagerDefinitionRequest& request, const DeleteAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAlertManagerDefinition(request), context);
    } );
}

DeleteLoggingConfigurationOutcome PrometheusServiceClient::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return DeleteLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/logging");
  return DeleteLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoggingConfigurationOutcomeCallable PrometheusServiceClient::DeleteLoggingConfigurationCallable(const DeleteLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::DeleteLoggingConfigurationAsync(const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLoggingConfiguration(request), context);
    } );
}

DeleteRuleGroupsNamespaceOutcome PrometheusServiceClient::DeleteRuleGroupsNamespace(const DeleteRuleGroupsNamespaceRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRuleGroupsNamespace", "Required field: Name, is not set");
    return DeleteRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return DeleteRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/rulegroupsnamespaces/");
  uri.AddPathSegment(request.GetName());
  return DeleteRuleGroupsNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleGroupsNamespaceOutcomeCallable PrometheusServiceClient::DeleteRuleGroupsNamespaceCallable(const DeleteRuleGroupsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleGroupsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleGroupsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::DeleteRuleGroupsNamespaceAsync(const DeleteRuleGroupsNamespaceRequest& request, const DeleteRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRuleGroupsNamespace(request), context);
    } );
}

DeleteWorkspaceOutcome PrometheusServiceClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  return DeleteWorkspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkspaceOutcomeCallable PrometheusServiceClient::DeleteWorkspaceCallable(const DeleteWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::DeleteWorkspaceAsync(const DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkspace(request), context);
    } );
}

DescribeAlertManagerDefinitionOutcome PrometheusServiceClient::DescribeAlertManagerDefinition(const DescribeAlertManagerDefinitionRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return DescribeAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/alertmanager/definition");
  return DescribeAlertManagerDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAlertManagerDefinitionOutcomeCallable PrometheusServiceClient::DescribeAlertManagerDefinitionCallable(const DescribeAlertManagerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlertManagerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlertManagerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::DescribeAlertManagerDefinitionAsync(const DescribeAlertManagerDefinitionRequest& request, const DescribeAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAlertManagerDefinition(request), context);
    } );
}

DescribeLoggingConfigurationOutcome PrometheusServiceClient::DescribeLoggingConfiguration(const DescribeLoggingConfigurationRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return DescribeLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/logging");
  return DescribeLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLoggingConfigurationOutcomeCallable PrometheusServiceClient::DescribeLoggingConfigurationCallable(const DescribeLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::DescribeLoggingConfigurationAsync(const DescribeLoggingConfigurationRequest& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLoggingConfiguration(request), context);
    } );
}

DescribeRuleGroupsNamespaceOutcome PrometheusServiceClient::DescribeRuleGroupsNamespace(const DescribeRuleGroupsNamespaceRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRuleGroupsNamespace", "Required field: Name, is not set");
    return DescribeRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return DescribeRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/rulegroupsnamespaces/");
  uri.AddPathSegment(request.GetName());
  return DescribeRuleGroupsNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuleGroupsNamespaceOutcomeCallable PrometheusServiceClient::DescribeRuleGroupsNamespaceCallable(const DescribeRuleGroupsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuleGroupsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRuleGroupsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::DescribeRuleGroupsNamespaceAsync(const DescribeRuleGroupsNamespaceRequest& request, const DescribeRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRuleGroupsNamespace(request), context);
    } );
}

DescribeWorkspaceOutcome PrometheusServiceClient::DescribeWorkspace(const DescribeWorkspaceRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeWorkspace", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  return DescribeWorkspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceOutcomeCallable PrometheusServiceClient::DescribeWorkspaceCallable(const DescribeWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::DescribeWorkspaceAsync(const DescribeWorkspaceRequest& request, const DescribeWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWorkspace(request), context);
    } );
}

ListRuleGroupsNamespacesOutcome PrometheusServiceClient::ListRuleGroupsNamespaces(const ListRuleGroupsNamespacesRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRuleGroupsNamespaces", "Required field: WorkspaceId, is not set");
    return ListRuleGroupsNamespacesOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/rulegroupsnamespaces");
  return ListRuleGroupsNamespacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRuleGroupsNamespacesOutcomeCallable PrometheusServiceClient::ListRuleGroupsNamespacesCallable(const ListRuleGroupsNamespacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleGroupsNamespacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleGroupsNamespaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::ListRuleGroupsNamespacesAsync(const ListRuleGroupsNamespacesRequest& request, const ListRuleGroupsNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRuleGroupsNamespaces(request), context);
    } );
}

ListTagsForResourceOutcome PrometheusServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable PrometheusServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListWorkspacesOutcome PrometheusServiceClient::ListWorkspaces(const ListWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces");
  return ListWorkspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkspacesOutcomeCallable PrometheusServiceClient::ListWorkspacesCallable(const ListWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::ListWorkspacesAsync(const ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkspaces(request), context);
    } );
}

PutAlertManagerDefinitionOutcome PrometheusServiceClient::PutAlertManagerDefinition(const PutAlertManagerDefinitionRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return PutAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/alertmanager/definition");
  return PutAlertManagerDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAlertManagerDefinitionOutcomeCallable PrometheusServiceClient::PutAlertManagerDefinitionCallable(const PutAlertManagerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAlertManagerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAlertManagerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::PutAlertManagerDefinitionAsync(const PutAlertManagerDefinitionRequest& request, const PutAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAlertManagerDefinition(request), context);
    } );
}

PutRuleGroupsNamespaceOutcome PrometheusServiceClient::PutRuleGroupsNamespace(const PutRuleGroupsNamespaceRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRuleGroupsNamespace", "Required field: Name, is not set");
    return PutRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return PutRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/rulegroupsnamespaces/");
  uri.AddPathSegment(request.GetName());
  return PutRuleGroupsNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutRuleGroupsNamespaceOutcomeCallable PrometheusServiceClient::PutRuleGroupsNamespaceCallable(const PutRuleGroupsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRuleGroupsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRuleGroupsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::PutRuleGroupsNamespaceAsync(const PutRuleGroupsNamespaceRequest& request, const PutRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRuleGroupsNamespace(request), context);
    } );
}

TagResourceOutcome PrometheusServiceClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable PrometheusServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome PrometheusServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable PrometheusServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateLoggingConfigurationOutcome PrometheusServiceClient::UpdateLoggingConfiguration(const UpdateLoggingConfigurationRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return UpdateLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/logging");
  return UpdateLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateLoggingConfigurationOutcomeCallable PrometheusServiceClient::UpdateLoggingConfigurationCallable(const UpdateLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::UpdateLoggingConfigurationAsync(const UpdateLoggingConfigurationRequest& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLoggingConfiguration(request), context);
    } );
}

UpdateWorkspaceAliasOutcome PrometheusServiceClient::UpdateWorkspaceAlias(const UpdateWorkspaceAliasRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceAlias", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceAliasOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/alias");
  return UpdateWorkspaceAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceAliasOutcomeCallable PrometheusServiceClient::UpdateWorkspaceAliasCallable(const UpdateWorkspaceAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkspaceAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkspaceAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrometheusServiceClient::UpdateWorkspaceAliasAsync(const UpdateWorkspaceAliasRequest& request, const UpdateWorkspaceAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkspaceAlias(request), context);
    } );
}

