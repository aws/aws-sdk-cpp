/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/AppStreamClient.h>
#include <aws/appstream/AppStreamEndpointProvider.h>
#include <aws/appstream/AppStreamErrorMarshaller.h>
#include <aws/appstream/model/AssociateAppBlockBuilderAppBlockRequest.h>
#include <aws/appstream/model/AssociateApplicationFleetRequest.h>
#include <aws/appstream/model/AssociateApplicationToEntitlementRequest.h>
#include <aws/appstream/model/AssociateFleetRequest.h>
#include <aws/appstream/model/AssociateSoftwareToImageBuilderRequest.h>
#include <aws/appstream/model/BatchAssociateUserStackRequest.h>
#include <aws/appstream/model/BatchDisassociateUserStackRequest.h>
#include <aws/appstream/model/CopyImageRequest.h>
#include <aws/appstream/model/CreateAppBlockBuilderRequest.h>
#include <aws/appstream/model/CreateAppBlockBuilderStreamingURLRequest.h>
#include <aws/appstream/model/CreateAppBlockRequest.h>
#include <aws/appstream/model/CreateApplicationRequest.h>
#include <aws/appstream/model/CreateDirectoryConfigRequest.h>
#include <aws/appstream/model/CreateEntitlementRequest.h>
#include <aws/appstream/model/CreateExportImageTaskRequest.h>
#include <aws/appstream/model/CreateFleetRequest.h>
#include <aws/appstream/model/CreateImageBuilderRequest.h>
#include <aws/appstream/model/CreateImageBuilderStreamingURLRequest.h>
#include <aws/appstream/model/CreateImportedImageRequest.h>
#include <aws/appstream/model/CreateStackRequest.h>
#include <aws/appstream/model/CreateStreamingURLRequest.h>
#include <aws/appstream/model/CreateThemeForStackRequest.h>
#include <aws/appstream/model/CreateUpdatedImageRequest.h>
#include <aws/appstream/model/CreateUsageReportSubscriptionRequest.h>
#include <aws/appstream/model/CreateUserRequest.h>
#include <aws/appstream/model/DeleteAppBlockBuilderRequest.h>
#include <aws/appstream/model/DeleteAppBlockRequest.h>
#include <aws/appstream/model/DeleteApplicationRequest.h>
#include <aws/appstream/model/DeleteDirectoryConfigRequest.h>
#include <aws/appstream/model/DeleteEntitlementRequest.h>
#include <aws/appstream/model/DeleteFleetRequest.h>
#include <aws/appstream/model/DeleteImageBuilderRequest.h>
#include <aws/appstream/model/DeleteImagePermissionsRequest.h>
#include <aws/appstream/model/DeleteImageRequest.h>
#include <aws/appstream/model/DeleteStackRequest.h>
#include <aws/appstream/model/DeleteThemeForStackRequest.h>
#include <aws/appstream/model/DeleteUsageReportSubscriptionRequest.h>
#include <aws/appstream/model/DeleteUserRequest.h>
#include <aws/appstream/model/DescribeAppBlockBuilderAppBlockAssociationsRequest.h>
#include <aws/appstream/model/DescribeAppBlockBuildersRequest.h>
#include <aws/appstream/model/DescribeAppBlocksRequest.h>
#include <aws/appstream/model/DescribeAppLicenseUsageRequest.h>
#include <aws/appstream/model/DescribeApplicationFleetAssociationsRequest.h>
#include <aws/appstream/model/DescribeApplicationsRequest.h>
#include <aws/appstream/model/DescribeDirectoryConfigsRequest.h>
#include <aws/appstream/model/DescribeEntitlementsRequest.h>
#include <aws/appstream/model/DescribeFleetsRequest.h>
#include <aws/appstream/model/DescribeImageBuildersRequest.h>
#include <aws/appstream/model/DescribeImagePermissionsRequest.h>
#include <aws/appstream/model/DescribeImagesRequest.h>
#include <aws/appstream/model/DescribeSessionsRequest.h>
#include <aws/appstream/model/DescribeSoftwareAssociationsRequest.h>
#include <aws/appstream/model/DescribeStacksRequest.h>
#include <aws/appstream/model/DescribeThemeForStackRequest.h>
#include <aws/appstream/model/DescribeUsageReportSubscriptionsRequest.h>
#include <aws/appstream/model/DescribeUserStackAssociationsRequest.h>
#include <aws/appstream/model/DescribeUsersRequest.h>
#include <aws/appstream/model/DisableUserRequest.h>
#include <aws/appstream/model/DisassociateAppBlockBuilderAppBlockRequest.h>
#include <aws/appstream/model/DisassociateApplicationFleetRequest.h>
#include <aws/appstream/model/DisassociateApplicationFromEntitlementRequest.h>
#include <aws/appstream/model/DisassociateFleetRequest.h>
#include <aws/appstream/model/DisassociateSoftwareFromImageBuilderRequest.h>
#include <aws/appstream/model/EnableUserRequest.h>
#include <aws/appstream/model/ExpireSessionRequest.h>
#include <aws/appstream/model/GetExportImageTaskRequest.h>
#include <aws/appstream/model/ListAssociatedFleetsRequest.h>
#include <aws/appstream/model/ListAssociatedStacksRequest.h>
#include <aws/appstream/model/ListEntitledApplicationsRequest.h>
#include <aws/appstream/model/ListExportImageTasksRequest.h>
#include <aws/appstream/model/ListTagsForResourceRequest.h>
#include <aws/appstream/model/StartAppBlockBuilderRequest.h>
#include <aws/appstream/model/StartFleetRequest.h>
#include <aws/appstream/model/StartImageBuilderRequest.h>
#include <aws/appstream/model/StartSoftwareDeploymentToImageBuilderRequest.h>
#include <aws/appstream/model/StopAppBlockBuilderRequest.h>
#include <aws/appstream/model/StopFleetRequest.h>
#include <aws/appstream/model/StopImageBuilderRequest.h>
#include <aws/appstream/model/TagResourceRequest.h>
#include <aws/appstream/model/UntagResourceRequest.h>
#include <aws/appstream/model/UpdateAppBlockBuilderRequest.h>
#include <aws/appstream/model/UpdateApplicationRequest.h>
#include <aws/appstream/model/UpdateDirectoryConfigRequest.h>
#include <aws/appstream/model/UpdateEntitlementRequest.h>
#include <aws/appstream/model/UpdateFleetRequest.h>
#include <aws/appstream/model/UpdateImagePermissionsRequest.h>
#include <aws/appstream/model/UpdateStackRequest.h>
#include <aws/appstream/model/UpdateThemeForStackRequest.h>
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
using namespace Aws::AppStream;
using namespace Aws::AppStream::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AppStream {
const char SERVICE_NAME[] = "appstream";
const char ALLOCATION_TAG[] = "AppStreamClient";
}  // namespace AppStream
}  // namespace Aws
const char* AppStreamClient::GetServiceName() { return SERVICE_NAME; }
const char* AppStreamClient::GetAllocationTag() { return ALLOCATION_TAG; }

AppStreamClient::AppStreamClient(const AppStream::AppStreamClientConfiguration& clientConfiguration,
                                 std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppStreamClient::AppStreamClient(const AWSCredentials& credentials, std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider,
                                 const AppStream::AppStreamClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppStreamClient::AppStreamClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider,
                                 const AppStream::AppStreamClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AppStreamClient::AppStreamClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppStreamClient::AppStreamClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppStreamClient::AppStreamClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AppStreamClient::~AppStreamClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AppStreamEndpointProviderBase>& AppStreamClient::accessEndpointProvider() { return m_endpointProvider; }

void AppStreamClient::init(const AppStream::AppStreamClientConfiguration& config) {
  AWSClient::SetServiceClientName("AppStream");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "appstream");
}

void AppStreamClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AppStreamClient::InvokeOperationOutcome AppStreamClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateAppBlockBuilderAppBlockOutcome AppStreamClient::AssociateAppBlockBuilderAppBlock(
    const AssociateAppBlockBuilderAppBlockRequest& request) const {
  return AssociateAppBlockBuilderAppBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateApplicationFleetOutcome AppStreamClient::AssociateApplicationFleet(const AssociateApplicationFleetRequest& request) const {
  return AssociateApplicationFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateApplicationToEntitlementOutcome AppStreamClient::AssociateApplicationToEntitlement(
    const AssociateApplicationToEntitlementRequest& request) const {
  return AssociateApplicationToEntitlementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateFleetOutcome AppStreamClient::AssociateFleet(const AssociateFleetRequest& request) const {
  return AssociateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateSoftwareToImageBuilderOutcome AppStreamClient::AssociateSoftwareToImageBuilder(
    const AssociateSoftwareToImageBuilderRequest& request) const {
  return AssociateSoftwareToImageBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchAssociateUserStackOutcome AppStreamClient::BatchAssociateUserStack(const BatchAssociateUserStackRequest& request) const {
  return BatchAssociateUserStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisassociateUserStackOutcome AppStreamClient::BatchDisassociateUserStack(const BatchDisassociateUserStackRequest& request) const {
  return BatchDisassociateUserStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyImageOutcome AppStreamClient::CopyImage(const CopyImageRequest& request) const {
  return CopyImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppBlockOutcome AppStreamClient::CreateAppBlock(const CreateAppBlockRequest& request) const {
  return CreateAppBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppBlockBuilderOutcome AppStreamClient::CreateAppBlockBuilder(const CreateAppBlockBuilderRequest& request) const {
  return CreateAppBlockBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppBlockBuilderStreamingURLOutcome AppStreamClient::CreateAppBlockBuilderStreamingURL(
    const CreateAppBlockBuilderStreamingURLRequest& request) const {
  return CreateAppBlockBuilderStreamingURLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome AppStreamClient::CreateApplication(const CreateApplicationRequest& request) const {
  return CreateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDirectoryConfigOutcome AppStreamClient::CreateDirectoryConfig(const CreateDirectoryConfigRequest& request) const {
  return CreateDirectoryConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEntitlementOutcome AppStreamClient::CreateEntitlement(const CreateEntitlementRequest& request) const {
  return CreateEntitlementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExportImageTaskOutcome AppStreamClient::CreateExportImageTask(const CreateExportImageTaskRequest& request) const {
  return CreateExportImageTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFleetOutcome AppStreamClient::CreateFleet(const CreateFleetRequest& request) const {
  return CreateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateImageBuilderOutcome AppStreamClient::CreateImageBuilder(const CreateImageBuilderRequest& request) const {
  return CreateImageBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateImageBuilderStreamingURLOutcome AppStreamClient::CreateImageBuilderStreamingURL(
    const CreateImageBuilderStreamingURLRequest& request) const {
  return CreateImageBuilderStreamingURLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateImportedImageOutcome AppStreamClient::CreateImportedImage(const CreateImportedImageRequest& request) const {
  return CreateImportedImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStackOutcome AppStreamClient::CreateStack(const CreateStackRequest& request) const {
  return CreateStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStreamingURLOutcome AppStreamClient::CreateStreamingURL(const CreateStreamingURLRequest& request) const {
  return CreateStreamingURLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateThemeForStackOutcome AppStreamClient::CreateThemeForStack(const CreateThemeForStackRequest& request) const {
  return CreateThemeForStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUpdatedImageOutcome AppStreamClient::CreateUpdatedImage(const CreateUpdatedImageRequest& request) const {
  return CreateUpdatedImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUsageReportSubscriptionOutcome AppStreamClient::CreateUsageReportSubscription(
    const CreateUsageReportSubscriptionRequest& request) const {
  return CreateUsageReportSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome AppStreamClient::CreateUser(const CreateUserRequest& request) const {
  return CreateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppBlockOutcome AppStreamClient::DeleteAppBlock(const DeleteAppBlockRequest& request) const {
  return DeleteAppBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppBlockBuilderOutcome AppStreamClient::DeleteAppBlockBuilder(const DeleteAppBlockBuilderRequest& request) const {
  return DeleteAppBlockBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome AppStreamClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  return DeleteApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDirectoryConfigOutcome AppStreamClient::DeleteDirectoryConfig(const DeleteDirectoryConfigRequest& request) const {
  return DeleteDirectoryConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEntitlementOutcome AppStreamClient::DeleteEntitlement(const DeleteEntitlementRequest& request) const {
  return DeleteEntitlementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFleetOutcome AppStreamClient::DeleteFleet(const DeleteFleetRequest& request) const {
  return DeleteFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteImageOutcome AppStreamClient::DeleteImage(const DeleteImageRequest& request) const {
  return DeleteImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteImageBuilderOutcome AppStreamClient::DeleteImageBuilder(const DeleteImageBuilderRequest& request) const {
  return DeleteImageBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteImagePermissionsOutcome AppStreamClient::DeleteImagePermissions(const DeleteImagePermissionsRequest& request) const {
  return DeleteImagePermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStackOutcome AppStreamClient::DeleteStack(const DeleteStackRequest& request) const {
  return DeleteStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteThemeForStackOutcome AppStreamClient::DeleteThemeForStack(const DeleteThemeForStackRequest& request) const {
  return DeleteThemeForStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUsageReportSubscriptionOutcome AppStreamClient::DeleteUsageReportSubscription(
    const DeleteUsageReportSubscriptionRequest& request) const {
  return DeleteUsageReportSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserOutcome AppStreamClient::DeleteUser(const DeleteUserRequest& request) const {
  return DeleteUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppBlockBuilderAppBlockAssociationsOutcome AppStreamClient::DescribeAppBlockBuilderAppBlockAssociations(
    const DescribeAppBlockBuilderAppBlockAssociationsRequest& request) const {
  return DescribeAppBlockBuilderAppBlockAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppBlockBuildersOutcome AppStreamClient::DescribeAppBlockBuilders(const DescribeAppBlockBuildersRequest& request) const {
  return DescribeAppBlockBuildersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppBlocksOutcome AppStreamClient::DescribeAppBlocks(const DescribeAppBlocksRequest& request) const {
  return DescribeAppBlocksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppLicenseUsageOutcome AppStreamClient::DescribeAppLicenseUsage(const DescribeAppLicenseUsageRequest& request) const {
  return DescribeAppLicenseUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationFleetAssociationsOutcome AppStreamClient::DescribeApplicationFleetAssociations(
    const DescribeApplicationFleetAssociationsRequest& request) const {
  return DescribeApplicationFleetAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationsOutcome AppStreamClient::DescribeApplications(const DescribeApplicationsRequest& request) const {
  return DescribeApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDirectoryConfigsOutcome AppStreamClient::DescribeDirectoryConfigs(const DescribeDirectoryConfigsRequest& request) const {
  return DescribeDirectoryConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEntitlementsOutcome AppStreamClient::DescribeEntitlements(const DescribeEntitlementsRequest& request) const {
  return DescribeEntitlementsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetsOutcome AppStreamClient::DescribeFleets(const DescribeFleetsRequest& request) const {
  return DescribeFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageBuildersOutcome AppStreamClient::DescribeImageBuilders(const DescribeImageBuildersRequest& request) const {
  return DescribeImageBuildersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImagePermissionsOutcome AppStreamClient::DescribeImagePermissions(const DescribeImagePermissionsRequest& request) const {
  return DescribeImagePermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImagesOutcome AppStreamClient::DescribeImages(const DescribeImagesRequest& request) const {
  return DescribeImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSessionsOutcome AppStreamClient::DescribeSessions(const DescribeSessionsRequest& request) const {
  return DescribeSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSoftwareAssociationsOutcome AppStreamClient::DescribeSoftwareAssociations(
    const DescribeSoftwareAssociationsRequest& request) const {
  return DescribeSoftwareAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStacksOutcome AppStreamClient::DescribeStacks(const DescribeStacksRequest& request) const {
  return DescribeStacksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeThemeForStackOutcome AppStreamClient::DescribeThemeForStack(const DescribeThemeForStackRequest& request) const {
  return DescribeThemeForStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUsageReportSubscriptionsOutcome AppStreamClient::DescribeUsageReportSubscriptions(
    const DescribeUsageReportSubscriptionsRequest& request) const {
  return DescribeUsageReportSubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserStackAssociationsOutcome AppStreamClient::DescribeUserStackAssociations(
    const DescribeUserStackAssociationsRequest& request) const {
  return DescribeUserStackAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUsersOutcome AppStreamClient::DescribeUsers(const DescribeUsersRequest& request) const {
  return DescribeUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableUserOutcome AppStreamClient::DisableUser(const DisableUserRequest& request) const {
  return DisableUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateAppBlockBuilderAppBlockOutcome AppStreamClient::DisassociateAppBlockBuilderAppBlock(
    const DisassociateAppBlockBuilderAppBlockRequest& request) const {
  return DisassociateAppBlockBuilderAppBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateApplicationFleetOutcome AppStreamClient::DisassociateApplicationFleet(
    const DisassociateApplicationFleetRequest& request) const {
  return DisassociateApplicationFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateApplicationFromEntitlementOutcome AppStreamClient::DisassociateApplicationFromEntitlement(
    const DisassociateApplicationFromEntitlementRequest& request) const {
  return DisassociateApplicationFromEntitlementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFleetOutcome AppStreamClient::DisassociateFleet(const DisassociateFleetRequest& request) const {
  return DisassociateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSoftwareFromImageBuilderOutcome AppStreamClient::DisassociateSoftwareFromImageBuilder(
    const DisassociateSoftwareFromImageBuilderRequest& request) const {
  return DisassociateSoftwareFromImageBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableUserOutcome AppStreamClient::EnableUser(const EnableUserRequest& request) const {
  return EnableUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExpireSessionOutcome AppStreamClient::ExpireSession(const ExpireSessionRequest& request) const {
  return ExpireSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetExportImageTaskOutcome AppStreamClient::GetExportImageTask(const GetExportImageTaskRequest& request) const {
  return GetExportImageTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssociatedFleetsOutcome AppStreamClient::ListAssociatedFleets(const ListAssociatedFleetsRequest& request) const {
  return ListAssociatedFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssociatedStacksOutcome AppStreamClient::ListAssociatedStacks(const ListAssociatedStacksRequest& request) const {
  return ListAssociatedStacksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntitledApplicationsOutcome AppStreamClient::ListEntitledApplications(const ListEntitledApplicationsRequest& request) const {
  return ListEntitledApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExportImageTasksOutcome AppStreamClient::ListExportImageTasks(const ListExportImageTasksRequest& request) const {
  return ListExportImageTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome AppStreamClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAppBlockBuilderOutcome AppStreamClient::StartAppBlockBuilder(const StartAppBlockBuilderRequest& request) const {
  return StartAppBlockBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFleetOutcome AppStreamClient::StartFleet(const StartFleetRequest& request) const {
  return StartFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImageBuilderOutcome AppStreamClient::StartImageBuilder(const StartImageBuilderRequest& request) const {
  return StartImageBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSoftwareDeploymentToImageBuilderOutcome AppStreamClient::StartSoftwareDeploymentToImageBuilder(
    const StartSoftwareDeploymentToImageBuilderRequest& request) const {
  return StartSoftwareDeploymentToImageBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopAppBlockBuilderOutcome AppStreamClient::StopAppBlockBuilder(const StopAppBlockBuilderRequest& request) const {
  return StopAppBlockBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopFleetOutcome AppStreamClient::StopFleet(const StopFleetRequest& request) const {
  return StopFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopImageBuilderOutcome AppStreamClient::StopImageBuilder(const StopImageBuilderRequest& request) const {
  return StopImageBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome AppStreamClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AppStreamClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAppBlockBuilderOutcome AppStreamClient::UpdateAppBlockBuilder(const UpdateAppBlockBuilderRequest& request) const {
  return UpdateAppBlockBuilderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationOutcome AppStreamClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  return UpdateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDirectoryConfigOutcome AppStreamClient::UpdateDirectoryConfig(const UpdateDirectoryConfigRequest& request) const {
  return UpdateDirectoryConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEntitlementOutcome AppStreamClient::UpdateEntitlement(const UpdateEntitlementRequest& request) const {
  return UpdateEntitlementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFleetOutcome AppStreamClient::UpdateFleet(const UpdateFleetRequest& request) const {
  return UpdateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateImagePermissionsOutcome AppStreamClient::UpdateImagePermissions(const UpdateImagePermissionsRequest& request) const {
  return UpdateImagePermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStackOutcome AppStreamClient::UpdateStack(const UpdateStackRequest& request) const {
  return UpdateStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateThemeForStackOutcome AppStreamClient::UpdateThemeForStack(const UpdateThemeForStackRequest& request) const {
  return UpdateThemeForStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
