/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/CodeArtifactClient.h>
#include <aws/codeartifact/CodeArtifactEndpointProvider.h>
#include <aws/codeartifact/CodeArtifactErrorMarshaller.h>
#include <aws/codeartifact/model/AssociateExternalConnectionRequest.h>
#include <aws/codeartifact/model/CopyPackageVersionsRequest.h>
#include <aws/codeartifact/model/CreateDomainRequest.h>
#include <aws/codeartifact/model/CreatePackageGroupRequest.h>
#include <aws/codeartifact/model/CreateRepositoryRequest.h>
#include <aws/codeartifact/model/DeleteDomainPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/DeleteDomainRequest.h>
#include <aws/codeartifact/model/DeletePackageGroupRequest.h>
#include <aws/codeartifact/model/DeletePackageRequest.h>
#include <aws/codeartifact/model/DeletePackageVersionsRequest.h>
#include <aws/codeartifact/model/DeleteRepositoryPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/DeleteRepositoryRequest.h>
#include <aws/codeartifact/model/DescribeDomainRequest.h>
#include <aws/codeartifact/model/DescribePackageGroupRequest.h>
#include <aws/codeartifact/model/DescribePackageRequest.h>
#include <aws/codeartifact/model/DescribePackageVersionRequest.h>
#include <aws/codeartifact/model/DescribeRepositoryRequest.h>
#include <aws/codeartifact/model/DisassociateExternalConnectionRequest.h>
#include <aws/codeartifact/model/DisposePackageVersionsRequest.h>
#include <aws/codeartifact/model/GetAssociatedPackageGroupRequest.h>
#include <aws/codeartifact/model/GetAuthorizationTokenRequest.h>
#include <aws/codeartifact/model/GetDomainPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/GetPackageVersionAssetRequest.h>
#include <aws/codeartifact/model/GetPackageVersionReadmeRequest.h>
#include <aws/codeartifact/model/GetRepositoryEndpointRequest.h>
#include <aws/codeartifact/model/GetRepositoryPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/ListAllowedRepositoriesForGroupRequest.h>
#include <aws/codeartifact/model/ListAssociatedPackagesRequest.h>
#include <aws/codeartifact/model/ListDomainsRequest.h>
#include <aws/codeartifact/model/ListPackageGroupsRequest.h>
#include <aws/codeartifact/model/ListPackageVersionAssetsRequest.h>
#include <aws/codeartifact/model/ListPackageVersionDependenciesRequest.h>
#include <aws/codeartifact/model/ListPackageVersionsRequest.h>
#include <aws/codeartifact/model/ListPackagesRequest.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainRequest.h>
#include <aws/codeartifact/model/ListRepositoriesRequest.h>
#include <aws/codeartifact/model/ListSubPackageGroupsRequest.h>
#include <aws/codeartifact/model/ListTagsForResourceRequest.h>
#include <aws/codeartifact/model/PublishPackageVersionRequest.h>
#include <aws/codeartifact/model/PutDomainPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/PutPackageOriginConfigurationRequest.h>
#include <aws/codeartifact/model/PutRepositoryPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/TagResourceRequest.h>
#include <aws/codeartifact/model/UntagResourceRequest.h>
#include <aws/codeartifact/model/UpdatePackageGroupOriginConfigurationRequest.h>
#include <aws/codeartifact/model/UpdatePackageGroupRequest.h>
#include <aws/codeartifact/model/UpdatePackageVersionsStatusRequest.h>
#include <aws/codeartifact/model/UpdateRepositoryRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeArtifact;
using namespace Aws::CodeArtifact::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodeArtifact {
const char SERVICE_NAME[] = "codeartifact";
const char ALLOCATION_TAG[] = "CodeArtifactClient";
}  // namespace CodeArtifact
}  // namespace Aws
const char* CodeArtifactClient::GetServiceName() { return SERVICE_NAME; }
const char* CodeArtifactClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodeArtifactClient::CodeArtifactClient(const CodeArtifact::CodeArtifactClientConfiguration& clientConfiguration,
                                       std::shared_ptr<CodeArtifactEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeArtifactClient::CodeArtifactClient(const AWSCredentials& credentials,
                                       std::shared_ptr<CodeArtifactEndpointProviderBase> endpointProvider,
                                       const CodeArtifact::CodeArtifactClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeArtifactClient::CodeArtifactClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<CodeArtifactEndpointProviderBase> endpointProvider,
                                       const CodeArtifact::CodeArtifactClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodeArtifactClient::CodeArtifactClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeArtifactClient::CodeArtifactClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeArtifactClient::CodeArtifactClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodeArtifactClient::~CodeArtifactClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodeArtifactEndpointProviderBase>& CodeArtifactClient::accessEndpointProvider() { return m_endpointProvider; }

void CodeArtifactClient::init(const CodeArtifact::CodeArtifactClientConfiguration& config) {
  AWSClient::SetServiceClientName("codeartifact");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codeartifact");
}

void CodeArtifactClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodeArtifactClient::InvokeOperationOutcome CodeArtifactClient::InvokeServiceOperation(
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

AssociateExternalConnectionOutcome CodeArtifactClient::AssociateExternalConnection(
    const AssociateExternalConnectionRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateExternalConnection", "Required field: Domain, is not set");
    return AssociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateExternalConnection", "Required field: Repository, is not set");
    return AssociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.ExternalConnectionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateExternalConnection", "Required field: ExternalConnection, is not set");
    return AssociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExternalConnection]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository/external-connection");
  };

  return AssociateExternalConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyPackageVersionsOutcome CodeArtifactClient::CopyPackageVersions(const CopyPackageVersionsRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: Domain, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Domain]", false));
  }
  if (!request.SourceRepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: SourceRepository, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SourceRepository]", false));
  }
  if (!request.DestinationRepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: DestinationRepository, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DestinationRepository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: Format, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: Package, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Package]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/versions/copy");
  };

  return CopyPackageVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainOutcome CodeArtifactClient::CreateDomain(const CreateDomainRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDomain", "Required field: Domain, is not set");
    return CreateDomainOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domain");
  };

  return CreateDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePackageGroupOutcome CodeArtifactClient::CreatePackageGroup(const CreatePackageGroupRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePackageGroup", "Required field: Domain, is not set");
    return CreatePackageGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package-group");
  };

  return CreatePackageGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRepositoryOutcome CodeArtifactClient::CreateRepository(const CreateRepositoryRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRepository", "Required field: Domain, is not set");
    return CreateRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRepository", "Required field: Repository, is not set");
    return CreateRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Repository]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository");
  };

  return CreateRepositoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDomainOutcome CodeArtifactClient::DeleteDomain(const DeleteDomainRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: Domain, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domain");
  };

  return DeleteDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainPermissionsPolicyOutcome CodeArtifactClient::DeleteDomainPermissionsPolicy(
    const DeleteDomainPermissionsPolicyRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainPermissionsPolicy", "Required field: Domain, is not set");
    return DeleteDomainPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domain/permissions/policy");
  };

  return DeleteDomainPermissionsPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePackageOutcome CodeArtifactClient::DeletePackage(const DeletePackageRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: Domain, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: Repository, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: Format, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: Package, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Package]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package");
  };

  return DeletePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePackageGroupOutcome CodeArtifactClient::DeletePackageGroup(const DeletePackageGroupRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackageGroup", "Required field: Domain, is not set");
    return DeletePackageGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Domain]", false));
  }
  if (!request.PackageGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackageGroup", "Required field: PackageGroup, is not set");
    return DeletePackageGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PackageGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package-group");
  };

  return DeletePackageGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePackageVersionsOutcome CodeArtifactClient::DeletePackageVersions(const DeletePackageVersionsRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackageVersions", "Required field: Domain, is not set");
    return DeletePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackageVersions", "Required field: Repository, is not set");
    return DeletePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackageVersions", "Required field: Format, is not set");
    return DeletePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackageVersions", "Required field: Package, is not set");
    return DeletePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/versions/delete");
  };

  return DeletePackageVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRepositoryOutcome CodeArtifactClient::DeleteRepository(const DeleteRepositoryRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRepository", "Required field: Domain, is not set");
    return DeleteRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRepository", "Required field: Repository, is not set");
    return DeleteRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Repository]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository");
  };

  return DeleteRepositoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRepositoryPermissionsPolicyOutcome CodeArtifactClient::DeleteRepositoryPermissionsPolicy(
    const DeleteRepositoryPermissionsPolicyRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRepositoryPermissionsPolicy", "Required field: Domain, is not set");
    return DeleteRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRepositoryPermissionsPolicy", "Required field: Repository, is not set");
    return DeleteRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository/permissions/policies");
  };

  return DeleteRepositoryPermissionsPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeDomainOutcome CodeArtifactClient::DescribeDomain(const DescribeDomainRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomain", "Required field: Domain, is not set");
    return DescribeDomainOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domain");
  };

  return DescribeDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePackageOutcome CodeArtifactClient::DescribePackage(const DescribePackageRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackage", "Required field: Domain, is not set");
    return DescribePackageOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackage", "Required field: Repository, is not set");
    return DescribePackageOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackage", "Required field: Format, is not set");
    return DescribePackageOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackage", "Required field: Package, is not set");
    return DescribePackageOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Package]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package");
  };

  return DescribePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePackageGroupOutcome CodeArtifactClient::DescribePackageGroup(const DescribePackageGroupRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageGroup", "Required field: Domain, is not set");
    return DescribePackageGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Domain]", false));
  }
  if (!request.PackageGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageGroup", "Required field: PackageGroup, is not set");
    return DescribePackageGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [PackageGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package-group");
  };

  return DescribePackageGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePackageVersionOutcome CodeArtifactClient::DescribePackageVersion(const DescribePackageVersionRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: Domain, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: Repository, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: Format, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: Package, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: PackageVersion, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/version");
  };

  return DescribePackageVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRepositoryOutcome CodeArtifactClient::DescribeRepository(const DescribeRepositoryRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRepository", "Required field: Domain, is not set");
    return DescribeRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRepository", "Required field: Repository, is not set");
    return DescribeRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Repository]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository");
  };

  return DescribeRepositoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisassociateExternalConnectionOutcome CodeArtifactClient::DisassociateExternalConnection(
    const DisassociateExternalConnectionRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateExternalConnection", "Required field: Domain, is not set");
    return DisassociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateExternalConnection", "Required field: Repository, is not set");
    return DisassociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.ExternalConnectionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateExternalConnection", "Required field: ExternalConnection, is not set");
    return DisassociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExternalConnection]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository/external-connection");
  };

  return DisassociateExternalConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisposePackageVersionsOutcome CodeArtifactClient::DisposePackageVersions(const DisposePackageVersionsRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisposePackageVersions", "Required field: Domain, is not set");
    return DisposePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisposePackageVersions", "Required field: Repository, is not set");
    return DisposePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisposePackageVersions", "Required field: Format, is not set");
    return DisposePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisposePackageVersions", "Required field: Package, is not set");
    return DisposePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/versions/dispose");
  };

  return DisposePackageVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAssociatedPackageGroupOutcome CodeArtifactClient::GetAssociatedPackageGroup(const GetAssociatedPackageGroupRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssociatedPackageGroup", "Required field: Domain, is not set");
    return GetAssociatedPackageGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssociatedPackageGroup", "Required field: Format, is not set");
    return GetAssociatedPackageGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssociatedPackageGroup", "Required field: Package, is not set");
    return GetAssociatedPackageGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/get-associated-package-group");
  };

  return GetAssociatedPackageGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAuthorizationTokenOutcome CodeArtifactClient::GetAuthorizationToken(const GetAuthorizationTokenRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAuthorizationToken", "Required field: Domain, is not set");
    return GetAuthorizationTokenOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/authorization-token");
  };

  return GetAuthorizationTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDomainPermissionsPolicyOutcome CodeArtifactClient::GetDomainPermissionsPolicy(const GetDomainPermissionsPolicyRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainPermissionsPolicy", "Required field: Domain, is not set");
    return GetDomainPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domain/permissions/policy");
  };

  return GetDomainPermissionsPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPackageVersionAssetOutcome CodeArtifactClient::GetPackageVersionAsset(const GetPackageVersionAssetRequest& request) const {
  AWS_OPERATION_GUARD(GetPackageVersionAsset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPackageVersionAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Domain, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Repository, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Format, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Package, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: PackageVersion, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  if (!request.AssetHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Asset, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Asset]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetPackageVersionAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPackageVersionAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPackageVersionAsset",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPackageVersionAssetOutcome>(
      [&]() -> GetPackageVersionAssetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPackageVersionAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/version/asset");
        return GetPackageVersionAssetOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPackageVersionReadmeOutcome CodeArtifactClient::GetPackageVersionReadme(const GetPackageVersionReadmeRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: Domain, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: Repository, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: Format, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: Package, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: PackageVersion, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/version/readme");
  };

  return GetPackageVersionReadmeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRepositoryEndpointOutcome CodeArtifactClient::GetRepositoryEndpoint(const GetRepositoryEndpointRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRepositoryEndpoint", "Required field: Domain, is not set");
    return GetRepositoryEndpointOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRepositoryEndpoint", "Required field: Repository, is not set");
    return GetRepositoryEndpointOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRepositoryEndpoint", "Required field: Format, is not set");
    return GetRepositoryEndpointOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository/endpoint");
  };

  return GetRepositoryEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRepositoryPermissionsPolicyOutcome CodeArtifactClient::GetRepositoryPermissionsPolicy(
    const GetRepositoryPermissionsPolicyRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRepositoryPermissionsPolicy", "Required field: Domain, is not set");
    return GetRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRepositoryPermissionsPolicy", "Required field: Repository, is not set");
    return GetRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository/permissions/policy");
  };

  return GetRepositoryPermissionsPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAllowedRepositoriesForGroupOutcome CodeArtifactClient::ListAllowedRepositoriesForGroup(
    const ListAllowedRepositoriesForGroupRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAllowedRepositoriesForGroup", "Required field: Domain, is not set");
    return ListAllowedRepositoriesForGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.PackageGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAllowedRepositoriesForGroup", "Required field: PackageGroup, is not set");
    return ListAllowedRepositoriesForGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageGroup]", false));
  }
  if (!request.OriginRestrictionTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAllowedRepositoriesForGroup", "Required field: OriginRestrictionType, is not set");
    return ListAllowedRepositoriesForGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginRestrictionType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package-group-allowed-repositories");
  };

  return ListAllowedRepositoriesForGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssociatedPackagesOutcome CodeArtifactClient::ListAssociatedPackages(const ListAssociatedPackagesRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedPackages", "Required field: Domain, is not set");
    return ListAssociatedPackagesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.PackageGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedPackages", "Required field: PackageGroup, is not set");
    return ListAssociatedPackagesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/list-associated-packages");
  };

  return ListAssociatedPackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainsOutcome CodeArtifactClient::ListDomains(const ListDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domains");
  };

  return ListDomainsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPackageGroupsOutcome CodeArtifactClient::ListPackageGroups(const ListPackageGroupsRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageGroups", "Required field: Domain, is not set");
    return ListPackageGroupsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package-groups");
  };

  return ListPackageGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPackageVersionAssetsOutcome CodeArtifactClient::ListPackageVersionAssets(const ListPackageVersionAssetsRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: Domain, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: Repository, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: Format, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: Package, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: PackageVersion, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/version/assets");
  };

  return ListPackageVersionAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPackageVersionDependenciesOutcome CodeArtifactClient::ListPackageVersionDependencies(
    const ListPackageVersionDependenciesRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: Domain, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: Repository, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: Format, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: Package, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: PackageVersion, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/version/dependencies");
  };

  return ListPackageVersionDependenciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPackageVersionsOutcome CodeArtifactClient::ListPackageVersions(const ListPackageVersionsRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: Domain, is not set");
    return ListPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: Repository, is not set");
    return ListPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: Format, is not set");
    return ListPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: Package, is not set");
    return ListPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Package]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/versions");
  };

  return ListPackageVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPackagesOutcome CodeArtifactClient::ListPackages(const ListPackagesRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackages", "Required field: Domain, is not set");
    return ListPackagesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackages", "Required field: Repository, is not set");
    return ListPackagesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Repository]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/packages");
  };

  return ListPackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRepositoriesOutcome CodeArtifactClient::ListRepositories(const ListRepositoriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repositories");
  };

  return ListRepositoriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRepositoriesInDomainOutcome CodeArtifactClient::ListRepositoriesInDomain(const ListRepositoriesInDomainRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRepositoriesInDomain", "Required field: Domain, is not set");
    return ListRepositoriesInDomainOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domain/repositories");
  };

  return ListRepositoriesInDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSubPackageGroupsOutcome CodeArtifactClient::ListSubPackageGroups(const ListSubPackageGroupsRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubPackageGroups", "Required field: Domain, is not set");
    return ListSubPackageGroupsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Domain]", false));
  }
  if (!request.PackageGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubPackageGroups", "Required field: PackageGroup, is not set");
    return ListSubPackageGroupsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [PackageGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package-groups/sub-groups");
  };

  return ListSubPackageGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CodeArtifactClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PublishPackageVersionOutcome CodeArtifactClient::PublishPackageVersion(const PublishPackageVersionRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishPackageVersion", "Required field: Domain, is not set");
    return PublishPackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishPackageVersion", "Required field: Repository, is not set");
    return PublishPackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishPackageVersion", "Required field: Format, is not set");
    return PublishPackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishPackageVersion", "Required field: Package, is not set");
    return PublishPackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishPackageVersion", "Required field: PackageVersion, is not set");
    return PublishPackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  if (!request.AssetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishPackageVersion", "Required field: AssetName, is not set");
    return PublishPackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetName]", false));
  }
  if (!request.AssetSHA256HasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishPackageVersion", "Required field: AssetSHA256, is not set");
    return PublishPackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetSHA256]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/version/publish");
  };

  return PublishPackageVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDomainPermissionsPolicyOutcome CodeArtifactClient::PutDomainPermissionsPolicy(const PutDomainPermissionsPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domain/permissions/policy");
  };

  return PutDomainPermissionsPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutPackageOriginConfigurationOutcome CodeArtifactClient::PutPackageOriginConfiguration(
    const PutPackageOriginConfigurationRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPackageOriginConfiguration", "Required field: Domain, is not set");
    return PutPackageOriginConfigurationOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPackageOriginConfiguration", "Required field: Repository, is not set");
    return PutPackageOriginConfigurationOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPackageOriginConfiguration", "Required field: Format, is not set");
    return PutPackageOriginConfigurationOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPackageOriginConfiguration", "Required field: Package, is not set");
    return PutPackageOriginConfigurationOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package");
  };

  return PutPackageOriginConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRepositoryPermissionsPolicyOutcome CodeArtifactClient::PutRepositoryPermissionsPolicy(
    const PutRepositoryPermissionsPolicyRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRepositoryPermissionsPolicy", "Required field: Domain, is not set");
    return PutRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRepositoryPermissionsPolicy", "Required field: Repository, is not set");
    return PutRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository/permissions/policy");
  };

  return PutRepositoryPermissionsPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome CodeArtifactClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tag");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CodeArtifactClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/untag");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePackageGroupOutcome CodeArtifactClient::UpdatePackageGroup(const UpdatePackageGroupRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackageGroup", "Required field: Domain, is not set");
    return UpdatePackageGroupOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package-group");
  };

  return UpdatePackageGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePackageGroupOriginConfigurationOutcome CodeArtifactClient::UpdatePackageGroupOriginConfiguration(
    const UpdatePackageGroupOriginConfigurationRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackageGroupOriginConfiguration", "Required field: Domain, is not set");
    return UpdatePackageGroupOriginConfigurationOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.PackageGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackageGroupOriginConfiguration", "Required field: PackageGroup, is not set");
    return UpdatePackageGroupOriginConfigurationOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageGroup]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package-group-origin-configuration");
  };

  return UpdatePackageGroupOriginConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePackageVersionsStatusOutcome CodeArtifactClient::UpdatePackageVersionsStatus(
    const UpdatePackageVersionsStatusRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersionsStatus", "Required field: Domain, is not set");
    return UpdatePackageVersionsStatusOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersionsStatus", "Required field: Repository, is not set");
    return UpdatePackageVersionsStatusOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersionsStatus", "Required field: Format, is not set");
    return UpdatePackageVersionsStatusOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersionsStatus", "Required field: Package, is not set");
    return UpdatePackageVersionsStatusOutcome(Aws::Client::AWSError<CodeArtifactErrors>(
        CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/package/versions/update_status");
  };

  return UpdatePackageVersionsStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRepositoryOutcome CodeArtifactClient::UpdateRepository(const UpdateRepositoryRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRepository", "Required field: Domain, is not set");
    return UpdateRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRepository", "Required field: Repository, is not set");
    return UpdateRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Repository]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/repository");
  };

  return UpdateRepositoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
