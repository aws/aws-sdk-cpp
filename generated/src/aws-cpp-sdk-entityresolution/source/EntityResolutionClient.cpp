/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/entityresolution/EntityResolutionClient.h>
#include <aws/entityresolution/EntityResolutionEndpointProvider.h>
#include <aws/entityresolution/EntityResolutionErrorMarshaller.h>
#include <aws/entityresolution/model/AddPolicyStatementRequest.h>
#include <aws/entityresolution/model/BatchDeleteUniqueIdRequest.h>
#include <aws/entityresolution/model/CreateIdMappingWorkflowRequest.h>
#include <aws/entityresolution/model/CreateIdNamespaceRequest.h>
#include <aws/entityresolution/model/CreateMatchingWorkflowRequest.h>
#include <aws/entityresolution/model/CreateSchemaMappingRequest.h>
#include <aws/entityresolution/model/DeleteIdMappingWorkflowRequest.h>
#include <aws/entityresolution/model/DeleteIdNamespaceRequest.h>
#include <aws/entityresolution/model/DeleteMatchingWorkflowRequest.h>
#include <aws/entityresolution/model/DeletePolicyStatementRequest.h>
#include <aws/entityresolution/model/DeleteSchemaMappingRequest.h>
#include <aws/entityresolution/model/GenerateMatchIdRequest.h>
#include <aws/entityresolution/model/GetIdMappingJobRequest.h>
#include <aws/entityresolution/model/GetIdMappingWorkflowRequest.h>
#include <aws/entityresolution/model/GetIdNamespaceRequest.h>
#include <aws/entityresolution/model/GetMatchIdRequest.h>
#include <aws/entityresolution/model/GetMatchingJobRequest.h>
#include <aws/entityresolution/model/GetMatchingWorkflowRequest.h>
#include <aws/entityresolution/model/GetPolicyRequest.h>
#include <aws/entityresolution/model/GetProviderServiceRequest.h>
#include <aws/entityresolution/model/GetSchemaMappingRequest.h>
#include <aws/entityresolution/model/ListIdMappingJobsRequest.h>
#include <aws/entityresolution/model/ListIdMappingWorkflowsRequest.h>
#include <aws/entityresolution/model/ListIdNamespacesRequest.h>
#include <aws/entityresolution/model/ListMatchingJobsRequest.h>
#include <aws/entityresolution/model/ListMatchingWorkflowsRequest.h>
#include <aws/entityresolution/model/ListProviderServicesRequest.h>
#include <aws/entityresolution/model/ListSchemaMappingsRequest.h>
#include <aws/entityresolution/model/ListTagsForResourceRequest.h>
#include <aws/entityresolution/model/PutPolicyRequest.h>
#include <aws/entityresolution/model/StartIdMappingJobRequest.h>
#include <aws/entityresolution/model/StartMatchingJobRequest.h>
#include <aws/entityresolution/model/TagResourceRequest.h>
#include <aws/entityresolution/model/UntagResourceRequest.h>
#include <aws/entityresolution/model/UpdateIdMappingWorkflowRequest.h>
#include <aws/entityresolution/model/UpdateIdNamespaceRequest.h>
#include <aws/entityresolution/model/UpdateMatchingWorkflowRequest.h>
#include <aws/entityresolution/model/UpdateSchemaMappingRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EntityResolution;
using namespace Aws::EntityResolution::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EntityResolution {
const char SERVICE_NAME[] = "entityresolution";
const char ALLOCATION_TAG[] = "EntityResolutionClient";
}  // namespace EntityResolution
}  // namespace Aws
const char* EntityResolutionClient::GetServiceName() { return SERVICE_NAME; }
const char* EntityResolutionClient::GetAllocationTag() { return ALLOCATION_TAG; }

EntityResolutionClient::EntityResolutionClient(const EntityResolution::EntityResolutionClientConfiguration& clientConfiguration,
                                               std::shared_ptr<EntityResolutionEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EntityResolutionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<EntityResolutionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EntityResolutionClient::EntityResolutionClient(const AWSCredentials& credentials,
                                               std::shared_ptr<EntityResolutionEndpointProviderBase> endpointProvider,
                                               const EntityResolution::EntityResolutionClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EntityResolutionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<EntityResolutionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EntityResolutionClient::EntityResolutionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<EntityResolutionEndpointProviderBase> endpointProvider,
                                               const EntityResolution::EntityResolutionClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EntityResolutionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<EntityResolutionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EntityResolutionClient::EntityResolutionClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EntityResolutionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EntityResolutionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EntityResolutionClient::EntityResolutionClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EntityResolutionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EntityResolutionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EntityResolutionClient::EntityResolutionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EntityResolutionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EntityResolutionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EntityResolutionClient::~EntityResolutionClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EntityResolutionEndpointProviderBase>& EntityResolutionClient::accessEndpointProvider() { return m_endpointProvider; }

void EntityResolutionClient::init(const EntityResolution::EntityResolutionClientConfiguration& config) {
  AWSClient::SetServiceClientName("EntityResolution");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "entityresolution");
}

void EntityResolutionClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EntityResolutionClient::InvokeOperationOutcome EntityResolutionClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddPolicyStatementOutcome EntityResolutionClient::AddPolicyStatement(const AddPolicyStatementRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddPolicyStatement", "Required field: Arn, is not set");
    return AddPolicyStatementOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.StatementIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddPolicyStatement", "Required field: StatementId, is not set");
    return AddPolicyStatementOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatementId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddPolicyStatementOutcome(result.GetResultWithOwnership())
                            : AddPolicyStatementOutcome(std::move(result.GetError()));
}

BatchDeleteUniqueIdOutcome EntityResolutionClient::BatchDeleteUniqueId(const BatchDeleteUniqueIdRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteUniqueId", "Required field: WorkflowName, is not set");
    return BatchDeleteUniqueIdOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }
  if (!request.UniqueIdsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteUniqueId", "Required field: UniqueIds, is not set");
    return BatchDeleteUniqueIdOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UniqueIds]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/uniqueids");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? BatchDeleteUniqueIdOutcome(result.GetResultWithOwnership())
                            : BatchDeleteUniqueIdOutcome(std::move(result.GetError()));
}

CreateIdMappingWorkflowOutcome EntityResolutionClient::CreateIdMappingWorkflow(const CreateIdMappingWorkflowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingworkflows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIdMappingWorkflowOutcome(result.GetResultWithOwnership())
                            : CreateIdMappingWorkflowOutcome(std::move(result.GetError()));
}

CreateIdNamespaceOutcome EntityResolutionClient::CreateIdNamespace(const CreateIdNamespaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIdNamespaceOutcome(result.GetResultWithOwnership())
                            : CreateIdNamespaceOutcome(std::move(result.GetError()));
}

CreateMatchingWorkflowOutcome EntityResolutionClient::CreateMatchingWorkflow(const CreateMatchingWorkflowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMatchingWorkflowOutcome(result.GetResultWithOwnership())
                            : CreateMatchingWorkflowOutcome(std::move(result.GetError()));
}

CreateSchemaMappingOutcome EntityResolutionClient::CreateSchemaMapping(const CreateSchemaMappingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSchemaMappingOutcome(result.GetResultWithOwnership())
                            : CreateSchemaMappingOutcome(std::move(result.GetError()));
}

DeleteIdMappingWorkflowOutcome EntityResolutionClient::DeleteIdMappingWorkflow(const DeleteIdMappingWorkflowRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdMappingWorkflow", "Required field: WorkflowName, is not set");
    return DeleteIdMappingWorkflowOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteIdMappingWorkflowOutcome(result.GetResultWithOwnership())
                            : DeleteIdMappingWorkflowOutcome(std::move(result.GetError()));
}

DeleteIdNamespaceOutcome EntityResolutionClient::DeleteIdNamespace(const DeleteIdNamespaceRequest& request) const {
  if (!request.IdNamespaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdNamespace", "Required field: IdNamespaceName, is not set");
    return DeleteIdNamespaceOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdNamespaceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteIdNamespaceOutcome(result.GetResultWithOwnership())
                            : DeleteIdNamespaceOutcome(std::move(result.GetError()));
}

DeleteMatchingWorkflowOutcome EntityResolutionClient::DeleteMatchingWorkflow(const DeleteMatchingWorkflowRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMatchingWorkflow", "Required field: WorkflowName, is not set");
    return DeleteMatchingWorkflowOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMatchingWorkflowOutcome(result.GetResultWithOwnership())
                            : DeleteMatchingWorkflowOutcome(std::move(result.GetError()));
}

DeletePolicyStatementOutcome EntityResolutionClient::DeletePolicyStatement(const DeletePolicyStatementRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePolicyStatement", "Required field: Arn, is not set");
    return DeletePolicyStatementOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.StatementIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePolicyStatement", "Required field: StatementId, is not set");
    return DeletePolicyStatementOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatementId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePolicyStatementOutcome(result.GetResultWithOwnership())
                            : DeletePolicyStatementOutcome(std::move(result.GetError()));
}

DeleteSchemaMappingOutcome EntityResolutionClient::DeleteSchemaMapping(const DeleteSchemaMappingRequest& request) const {
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSchemaMapping", "Required field: SchemaName, is not set");
    return DeleteSchemaMappingOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSchemaMappingOutcome(result.GetResultWithOwnership())
                            : DeleteSchemaMappingOutcome(std::move(result.GetError()));
}

GenerateMatchIdOutcome EntityResolutionClient::GenerateMatchId(const GenerateMatchIdRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GenerateMatchId", "Required field: WorkflowName, is not set");
    return GenerateMatchIdOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/generateMatches");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GenerateMatchIdOutcome(result.GetResultWithOwnership())
                            : GenerateMatchIdOutcome(std::move(result.GetError()));
}

GetIdMappingJobOutcome EntityResolutionClient::GetIdMappingJob(const GetIdMappingJobRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdMappingJob", "Required field: WorkflowName, is not set");
    return GetIdMappingJobOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdMappingJob", "Required field: JobId, is not set");
    return GetIdMappingJobOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetIdMappingJobOutcome(result.GetResultWithOwnership())
                            : GetIdMappingJobOutcome(std::move(result.GetError()));
}

GetIdMappingWorkflowOutcome EntityResolutionClient::GetIdMappingWorkflow(const GetIdMappingWorkflowRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdMappingWorkflow", "Required field: WorkflowName, is not set");
    return GetIdMappingWorkflowOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetIdMappingWorkflowOutcome(result.GetResultWithOwnership())
                            : GetIdMappingWorkflowOutcome(std::move(result.GetError()));
}

GetIdNamespaceOutcome EntityResolutionClient::GetIdNamespace(const GetIdNamespaceRequest& request) const {
  if (!request.IdNamespaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdNamespace", "Required field: IdNamespaceName, is not set");
    return GetIdNamespaceOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdNamespaceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetIdNamespaceOutcome(result.GetResultWithOwnership()) : GetIdNamespaceOutcome(std::move(result.GetError()));
}

GetMatchIdOutcome EntityResolutionClient::GetMatchId(const GetMatchIdRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMatchId", "Required field: WorkflowName, is not set");
    return GetMatchIdOutcome(Aws::Client::AWSError<EntityResolutionErrors>(EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/matches");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMatchIdOutcome(result.GetResultWithOwnership()) : GetMatchIdOutcome(std::move(result.GetError()));
}

GetMatchingJobOutcome EntityResolutionClient::GetMatchingJob(const GetMatchingJobRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMatchingJob", "Required field: WorkflowName, is not set");
    return GetMatchingJobOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMatchingJob", "Required field: JobId, is not set");
    return GetMatchingJobOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMatchingJobOutcome(result.GetResultWithOwnership()) : GetMatchingJobOutcome(std::move(result.GetError()));
}

GetMatchingWorkflowOutcome EntityResolutionClient::GetMatchingWorkflow(const GetMatchingWorkflowRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMatchingWorkflow", "Required field: WorkflowName, is not set");
    return GetMatchingWorkflowOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMatchingWorkflowOutcome(result.GetResultWithOwnership())
                            : GetMatchingWorkflowOutcome(std::move(result.GetError()));
}

GetPolicyOutcome EntityResolutionClient::GetPolicy(const GetPolicyRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: Arn, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<EntityResolutionErrors>(EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPolicyOutcome(result.GetResultWithOwnership()) : GetPolicyOutcome(std::move(result.GetError()));
}

GetProviderServiceOutcome EntityResolutionClient::GetProviderService(const GetProviderServiceRequest& request) const {
  if (!request.ProviderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProviderService", "Required field: ProviderName, is not set");
    return GetProviderServiceOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProviderName]", false));
  }
  if (!request.ProviderServiceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProviderService", "Required field: ProviderServiceName, is not set");
    return GetProviderServiceOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProviderServiceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/providerservices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProviderName());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProviderServiceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProviderServiceOutcome(result.GetResultWithOwnership())
                            : GetProviderServiceOutcome(std::move(result.GetError()));
}

GetSchemaMappingOutcome EntityResolutionClient::GetSchemaMapping(const GetSchemaMappingRequest& request) const {
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchemaMapping", "Required field: SchemaName, is not set");
    return GetSchemaMappingOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSchemaMappingOutcome(result.GetResultWithOwnership())
                            : GetSchemaMappingOutcome(std::move(result.GetError()));
}

ListIdMappingJobsOutcome EntityResolutionClient::ListIdMappingJobs(const ListIdMappingJobsRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIdMappingJobs", "Required field: WorkflowName, is not set");
    return ListIdMappingJobsOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIdMappingJobsOutcome(result.GetResultWithOwnership())
                            : ListIdMappingJobsOutcome(std::move(result.GetError()));
}

ListIdMappingWorkflowsOutcome EntityResolutionClient::ListIdMappingWorkflows(const ListIdMappingWorkflowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingworkflows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIdMappingWorkflowsOutcome(result.GetResultWithOwnership())
                            : ListIdMappingWorkflowsOutcome(std::move(result.GetError()));
}

ListIdNamespacesOutcome EntityResolutionClient::ListIdNamespaces(const ListIdNamespacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIdNamespacesOutcome(result.GetResultWithOwnership())
                            : ListIdNamespacesOutcome(std::move(result.GetError()));
}

ListMatchingJobsOutcome EntityResolutionClient::ListMatchingJobs(const ListMatchingJobsRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMatchingJobs", "Required field: WorkflowName, is not set");
    return ListMatchingJobsOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMatchingJobsOutcome(result.GetResultWithOwnership())
                            : ListMatchingJobsOutcome(std::move(result.GetError()));
}

ListMatchingWorkflowsOutcome EntityResolutionClient::ListMatchingWorkflows(const ListMatchingWorkflowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMatchingWorkflowsOutcome(result.GetResultWithOwnership())
                            : ListMatchingWorkflowsOutcome(std::move(result.GetError()));
}

ListProviderServicesOutcome EntityResolutionClient::ListProviderServices(const ListProviderServicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/providerservices");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProviderServicesOutcome(result.GetResultWithOwnership())
                            : ListProviderServicesOutcome(std::move(result.GetError()));
}

ListSchemaMappingsOutcome EntityResolutionClient::ListSchemaMappings(const ListSchemaMappingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSchemaMappingsOutcome(result.GetResultWithOwnership())
                            : ListSchemaMappingsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome EntityResolutionClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutPolicyOutcome EntityResolutionClient::PutPolicy(const PutPolicyRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPolicy", "Required field: Arn, is not set");
    return PutPolicyOutcome(Aws::Client::AWSError<EntityResolutionErrors>(EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutPolicyOutcome(result.GetResultWithOwnership()) : PutPolicyOutcome(std::move(result.GetError()));
}

StartIdMappingJobOutcome EntityResolutionClient::StartIdMappingJob(const StartIdMappingJobRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartIdMappingJob", "Required field: WorkflowName, is not set");
    return StartIdMappingJobOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartIdMappingJobOutcome(result.GetResultWithOwnership())
                            : StartIdMappingJobOutcome(std::move(result.GetError()));
}

StartMatchingJobOutcome EntityResolutionClient::StartMatchingJob(const StartMatchingJobRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMatchingJob", "Required field: WorkflowName, is not set");
    return StartMatchingJobOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMatchingJobOutcome(result.GetResultWithOwnership())
                            : StartMatchingJobOutcome(std::move(result.GetError()));
}

TagResourceOutcome EntityResolutionClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EntityResolutionErrors>(EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome EntityResolutionClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateIdMappingWorkflowOutcome EntityResolutionClient::UpdateIdMappingWorkflow(const UpdateIdMappingWorkflowRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIdMappingWorkflow", "Required field: WorkflowName, is not set");
    return UpdateIdMappingWorkflowOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateIdMappingWorkflowOutcome(result.GetResultWithOwnership())
                            : UpdateIdMappingWorkflowOutcome(std::move(result.GetError()));
}

UpdateIdNamespaceOutcome EntityResolutionClient::UpdateIdNamespace(const UpdateIdNamespaceRequest& request) const {
  if (!request.IdNamespaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIdNamespace", "Required field: IdNamespaceName, is not set");
    return UpdateIdNamespaceOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdNamespaceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateIdNamespaceOutcome(result.GetResultWithOwnership())
                            : UpdateIdNamespaceOutcome(std::move(result.GetError()));
}

UpdateMatchingWorkflowOutcome EntityResolutionClient::UpdateMatchingWorkflow(const UpdateMatchingWorkflowRequest& request) const {
  if (!request.WorkflowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMatchingWorkflow", "Required field: WorkflowName, is not set");
    return UpdateMatchingWorkflowOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/matchingworkflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMatchingWorkflowOutcome(result.GetResultWithOwnership())
                            : UpdateMatchingWorkflowOutcome(std::move(result.GetError()));
}

UpdateSchemaMappingOutcome EntityResolutionClient::UpdateSchemaMapping(const UpdateSchemaMappingRequest& request) const {
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSchemaMapping", "Required field: SchemaName, is not set");
    return UpdateSchemaMappingOutcome(Aws::Client::AWSError<EntityResolutionErrors>(
        EntityResolutionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSchemaMappingOutcome(result.GetResultWithOwnership())
                            : UpdateSchemaMappingOutcome(std::move(result.GetError()));
}
