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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/AWSMigrationHub/MigrationHubClient.h>
#include <aws/AWSMigrationHub/MigrationHubErrorMarshaller.h>
#include <aws/AWSMigrationHub/MigrationHubEndpointProvider.h>
#include <aws/AWSMigrationHub/model/AssociateCreatedArtifactRequest.h>
#include <aws/AWSMigrationHub/model/AssociateDiscoveredResourceRequest.h>
#include <aws/AWSMigrationHub/model/CreateProgressUpdateStreamRequest.h>
#include <aws/AWSMigrationHub/model/DeleteProgressUpdateStreamRequest.h>
#include <aws/AWSMigrationHub/model/DescribeApplicationStateRequest.h>
#include <aws/AWSMigrationHub/model/DescribeMigrationTaskRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateCreatedArtifactRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateDiscoveredResourceRequest.h>
#include <aws/AWSMigrationHub/model/ImportMigrationTaskRequest.h>
#include <aws/AWSMigrationHub/model/ListApplicationStatesRequest.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsRequest.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesRequest.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksRequest.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsRequest.h>
#include <aws/AWSMigrationHub/model/NotifyApplicationStateRequest.h>
#include <aws/AWSMigrationHub/model/NotifyMigrationTaskStateRequest.h>
#include <aws/AWSMigrationHub/model/PutResourceAttributesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHub;
using namespace Aws::MigrationHub::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MigrationHubClient::SERVICE_NAME = "mgh";
const char* MigrationHubClient::ALLOCATION_TAG = "MigrationHubClient";

MigrationHubClient::MigrationHubClient(const MigrationHub::MigrationHubClientConfiguration& clientConfiguration,
                                       std::shared_ptr<MigrationHubEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const AWSCredentials& credentials,
                                       std::shared_ptr<MigrationHubEndpointProviderBase> endpointProvider,
                                       const MigrationHub::MigrationHubClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<MigrationHubEndpointProviderBase> endpointProvider,
                                       const MigrationHub::MigrationHubClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MigrationHubClient::MigrationHubClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MigrationHubEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MigrationHubClient::~MigrationHubClient()
{
}

std::shared_ptr<MigrationHubEndpointProviderBase>& MigrationHubClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MigrationHubClient::init(const MigrationHub::MigrationHubClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Migration Hub");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MigrationHubClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateCreatedArtifactOutcome MigrationHubClient::AssociateCreatedArtifact(const AssociateCreatedArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateCreatedArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateCreatedArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateCreatedArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateDiscoveredResourceOutcome MigrationHubClient::AssociateDiscoveredResource(const AssociateDiscoveredResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDiscoveredResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDiscoveredResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateDiscoveredResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProgressUpdateStreamOutcome MigrationHubClient::CreateProgressUpdateStream(const CreateProgressUpdateStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProgressUpdateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProgressUpdateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProgressUpdateStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProgressUpdateStreamOutcome MigrationHubClient::DeleteProgressUpdateStream(const DeleteProgressUpdateStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProgressUpdateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProgressUpdateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProgressUpdateStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationStateOutcome MigrationHubClient::DescribeApplicationState(const DescribeApplicationStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplicationState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplicationState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicationStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMigrationTaskOutcome MigrationHubClient::DescribeMigrationTask(const DescribeMigrationTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMigrationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMigrationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMigrationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateCreatedArtifactOutcome MigrationHubClient::DisassociateCreatedArtifact(const DisassociateCreatedArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateCreatedArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateCreatedArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateCreatedArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateDiscoveredResourceOutcome MigrationHubClient::DisassociateDiscoveredResource(const DisassociateDiscoveredResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateDiscoveredResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateDiscoveredResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateDiscoveredResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportMigrationTaskOutcome MigrationHubClient::ImportMigrationTask(const ImportMigrationTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportMigrationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportMigrationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportMigrationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationStatesOutcome MigrationHubClient::ListApplicationStates(const ListApplicationStatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplicationStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplicationStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListApplicationStatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCreatedArtifactsOutcome MigrationHubClient::ListCreatedArtifacts(const ListCreatedArtifactsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCreatedArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCreatedArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCreatedArtifactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDiscoveredResourcesOutcome MigrationHubClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDiscoveredResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDiscoveredResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDiscoveredResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMigrationTasksOutcome MigrationHubClient::ListMigrationTasks(const ListMigrationTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMigrationTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMigrationTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMigrationTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProgressUpdateStreamsOutcome MigrationHubClient::ListProgressUpdateStreams(const ListProgressUpdateStreamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProgressUpdateStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProgressUpdateStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListProgressUpdateStreamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

NotifyApplicationStateOutcome MigrationHubClient::NotifyApplicationState(const NotifyApplicationStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NotifyApplicationState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NotifyApplicationState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return NotifyApplicationStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

NotifyMigrationTaskStateOutcome MigrationHubClient::NotifyMigrationTaskState(const NotifyMigrationTaskStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NotifyMigrationTaskState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NotifyMigrationTaskState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return NotifyMigrationTaskStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourceAttributesOutcome MigrationHubClient::PutResourceAttributes(const PutResourceAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourceAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourceAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutResourceAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

