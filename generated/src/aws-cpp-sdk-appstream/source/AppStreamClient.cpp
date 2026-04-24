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
#include <aws/appstream/model/DrainSessionInstanceRequest.h>
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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateAppBlockBuilderAppBlockOutcome(result.GetResultWithOwnership())
                            : AssociateAppBlockBuilderAppBlockOutcome(std::move(result.GetError()));
}

AssociateApplicationFleetOutcome AppStreamClient::AssociateApplicationFleet(const AssociateApplicationFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateApplicationFleetOutcome(result.GetResultWithOwnership())
                            : AssociateApplicationFleetOutcome(std::move(result.GetError()));
}

AssociateApplicationToEntitlementOutcome AppStreamClient::AssociateApplicationToEntitlement(
    const AssociateApplicationToEntitlementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateApplicationToEntitlementOutcome(result.GetResultWithOwnership())
                            : AssociateApplicationToEntitlementOutcome(std::move(result.GetError()));
}

AssociateFleetOutcome AppStreamClient::AssociateFleet(const AssociateFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateFleetOutcome(result.GetResultWithOwnership()) : AssociateFleetOutcome(std::move(result.GetError()));
}

AssociateSoftwareToImageBuilderOutcome AppStreamClient::AssociateSoftwareToImageBuilder(
    const AssociateSoftwareToImageBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateSoftwareToImageBuilderOutcome(result.GetResultWithOwnership())
                            : AssociateSoftwareToImageBuilderOutcome(std::move(result.GetError()));
}

BatchAssociateUserStackOutcome AppStreamClient::BatchAssociateUserStack(const BatchAssociateUserStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchAssociateUserStackOutcome(result.GetResultWithOwnership())
                            : BatchAssociateUserStackOutcome(std::move(result.GetError()));
}

BatchDisassociateUserStackOutcome AppStreamClient::BatchDisassociateUserStack(const BatchDisassociateUserStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDisassociateUserStackOutcome(result.GetResultWithOwnership())
                            : BatchDisassociateUserStackOutcome(std::move(result.GetError()));
}

CopyImageOutcome AppStreamClient::CopyImage(const CopyImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyImageOutcome(result.GetResultWithOwnership()) : CopyImageOutcome(std::move(result.GetError()));
}

CreateAppBlockOutcome AppStreamClient::CreateAppBlock(const CreateAppBlockRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAppBlockOutcome(result.GetResultWithOwnership()) : CreateAppBlockOutcome(std::move(result.GetError()));
}

CreateAppBlockBuilderOutcome AppStreamClient::CreateAppBlockBuilder(const CreateAppBlockBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAppBlockBuilderOutcome(result.GetResultWithOwnership())
                            : CreateAppBlockBuilderOutcome(std::move(result.GetError()));
}

CreateAppBlockBuilderStreamingURLOutcome AppStreamClient::CreateAppBlockBuilderStreamingURL(
    const CreateAppBlockBuilderStreamingURLRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAppBlockBuilderStreamingURLOutcome(result.GetResultWithOwnership())
                            : CreateAppBlockBuilderStreamingURLOutcome(std::move(result.GetError()));
}

CreateApplicationOutcome AppStreamClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationOutcome(result.GetResultWithOwnership())
                            : CreateApplicationOutcome(std::move(result.GetError()));
}

CreateDirectoryConfigOutcome AppStreamClient::CreateDirectoryConfig(const CreateDirectoryConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDirectoryConfigOutcome(result.GetResultWithOwnership())
                            : CreateDirectoryConfigOutcome(std::move(result.GetError()));
}

CreateEntitlementOutcome AppStreamClient::CreateEntitlement(const CreateEntitlementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEntitlementOutcome(result.GetResultWithOwnership())
                            : CreateEntitlementOutcome(std::move(result.GetError()));
}

CreateExportImageTaskOutcome AppStreamClient::CreateExportImageTask(const CreateExportImageTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateExportImageTaskOutcome(result.GetResultWithOwnership())
                            : CreateExportImageTaskOutcome(std::move(result.GetError()));
}

CreateFleetOutcome AppStreamClient::CreateFleet(const CreateFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFleetOutcome(result.GetResultWithOwnership()) : CreateFleetOutcome(std::move(result.GetError()));
}

CreateImageBuilderOutcome AppStreamClient::CreateImageBuilder(const CreateImageBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateImageBuilderOutcome(result.GetResultWithOwnership())
                            : CreateImageBuilderOutcome(std::move(result.GetError()));
}

CreateImageBuilderStreamingURLOutcome AppStreamClient::CreateImageBuilderStreamingURL(
    const CreateImageBuilderStreamingURLRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateImageBuilderStreamingURLOutcome(result.GetResultWithOwnership())
                            : CreateImageBuilderStreamingURLOutcome(std::move(result.GetError()));
}

CreateImportedImageOutcome AppStreamClient::CreateImportedImage(const CreateImportedImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateImportedImageOutcome(result.GetResultWithOwnership())
                            : CreateImportedImageOutcome(std::move(result.GetError()));
}

CreateStackOutcome AppStreamClient::CreateStack(const CreateStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStackOutcome(result.GetResultWithOwnership()) : CreateStackOutcome(std::move(result.GetError()));
}

CreateStreamingURLOutcome AppStreamClient::CreateStreamingURL(const CreateStreamingURLRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStreamingURLOutcome(result.GetResultWithOwnership())
                            : CreateStreamingURLOutcome(std::move(result.GetError()));
}

CreateThemeForStackOutcome AppStreamClient::CreateThemeForStack(const CreateThemeForStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateThemeForStackOutcome(result.GetResultWithOwnership())
                            : CreateThemeForStackOutcome(std::move(result.GetError()));
}

CreateUpdatedImageOutcome AppStreamClient::CreateUpdatedImage(const CreateUpdatedImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUpdatedImageOutcome(result.GetResultWithOwnership())
                            : CreateUpdatedImageOutcome(std::move(result.GetError()));
}

CreateUsageReportSubscriptionOutcome AppStreamClient::CreateUsageReportSubscription(
    const CreateUsageReportSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUsageReportSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateUsageReportSubscriptionOutcome(std::move(result.GetError()));
}

CreateUserOutcome AppStreamClient::CreateUser(const CreateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserOutcome(result.GetResultWithOwnership()) : CreateUserOutcome(std::move(result.GetError()));
}

DeleteAppBlockOutcome AppStreamClient::DeleteAppBlock(const DeleteAppBlockRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAppBlockOutcome(result.GetResultWithOwnership()) : DeleteAppBlockOutcome(std::move(result.GetError()));
}

DeleteAppBlockBuilderOutcome AppStreamClient::DeleteAppBlockBuilder(const DeleteAppBlockBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAppBlockBuilderOutcome(result.GetResultWithOwnership())
                            : DeleteAppBlockBuilderOutcome(std::move(result.GetError()));
}

DeleteApplicationOutcome AppStreamClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationOutcome(std::move(result.GetError()));
}

DeleteDirectoryConfigOutcome AppStreamClient::DeleteDirectoryConfig(const DeleteDirectoryConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDirectoryConfigOutcome(result.GetResultWithOwnership())
                            : DeleteDirectoryConfigOutcome(std::move(result.GetError()));
}

DeleteEntitlementOutcome AppStreamClient::DeleteEntitlement(const DeleteEntitlementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEntitlementOutcome(result.GetResultWithOwnership())
                            : DeleteEntitlementOutcome(std::move(result.GetError()));
}

DeleteFleetOutcome AppStreamClient::DeleteFleet(const DeleteFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFleetOutcome(result.GetResultWithOwnership()) : DeleteFleetOutcome(std::move(result.GetError()));
}

DeleteImageOutcome AppStreamClient::DeleteImage(const DeleteImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteImageOutcome(result.GetResultWithOwnership()) : DeleteImageOutcome(std::move(result.GetError()));
}

DeleteImageBuilderOutcome AppStreamClient::DeleteImageBuilder(const DeleteImageBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteImageBuilderOutcome(result.GetResultWithOwnership())
                            : DeleteImageBuilderOutcome(std::move(result.GetError()));
}

DeleteImagePermissionsOutcome AppStreamClient::DeleteImagePermissions(const DeleteImagePermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteImagePermissionsOutcome(result.GetResultWithOwnership())
                            : DeleteImagePermissionsOutcome(std::move(result.GetError()));
}

DeleteStackOutcome AppStreamClient::DeleteStack(const DeleteStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStackOutcome(result.GetResultWithOwnership()) : DeleteStackOutcome(std::move(result.GetError()));
}

DeleteThemeForStackOutcome AppStreamClient::DeleteThemeForStack(const DeleteThemeForStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteThemeForStackOutcome(result.GetResultWithOwnership())
                            : DeleteThemeForStackOutcome(std::move(result.GetError()));
}

DeleteUsageReportSubscriptionOutcome AppStreamClient::DeleteUsageReportSubscription(
    const DeleteUsageReportSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUsageReportSubscriptionOutcome(result.GetResultWithOwnership())
                            : DeleteUsageReportSubscriptionOutcome(std::move(result.GetError()));
}

DeleteUserOutcome AppStreamClient::DeleteUser(const DeleteUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserOutcome(result.GetResultWithOwnership()) : DeleteUserOutcome(std::move(result.GetError()));
}

DescribeAppBlockBuilderAppBlockAssociationsOutcome AppStreamClient::DescribeAppBlockBuilderAppBlockAssociations(
    const DescribeAppBlockBuilderAppBlockAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAppBlockBuilderAppBlockAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeAppBlockBuilderAppBlockAssociationsOutcome(std::move(result.GetError()));
}

DescribeAppBlockBuildersOutcome AppStreamClient::DescribeAppBlockBuilders(const DescribeAppBlockBuildersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAppBlockBuildersOutcome(result.GetResultWithOwnership())
                            : DescribeAppBlockBuildersOutcome(std::move(result.GetError()));
}

DescribeAppBlocksOutcome AppStreamClient::DescribeAppBlocks(const DescribeAppBlocksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAppBlocksOutcome(result.GetResultWithOwnership())
                            : DescribeAppBlocksOutcome(std::move(result.GetError()));
}

DescribeAppLicenseUsageOutcome AppStreamClient::DescribeAppLicenseUsage(const DescribeAppLicenseUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAppLicenseUsageOutcome(result.GetResultWithOwnership())
                            : DescribeAppLicenseUsageOutcome(std::move(result.GetError()));
}

DescribeApplicationFleetAssociationsOutcome AppStreamClient::DescribeApplicationFleetAssociations(
    const DescribeApplicationFleetAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeApplicationFleetAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeApplicationFleetAssociationsOutcome(std::move(result.GetError()));
}

DescribeApplicationsOutcome AppStreamClient::DescribeApplications(const DescribeApplicationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeApplicationsOutcome(result.GetResultWithOwnership())
                            : DescribeApplicationsOutcome(std::move(result.GetError()));
}

DescribeDirectoryConfigsOutcome AppStreamClient::DescribeDirectoryConfigs(const DescribeDirectoryConfigsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDirectoryConfigsOutcome(result.GetResultWithOwnership())
                            : DescribeDirectoryConfigsOutcome(std::move(result.GetError()));
}

DescribeEntitlementsOutcome AppStreamClient::DescribeEntitlements(const DescribeEntitlementsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEntitlementsOutcome(result.GetResultWithOwnership())
                            : DescribeEntitlementsOutcome(std::move(result.GetError()));
}

DescribeFleetsOutcome AppStreamClient::DescribeFleets(const DescribeFleetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetsOutcome(result.GetResultWithOwnership()) : DescribeFleetsOutcome(std::move(result.GetError()));
}

DescribeImageBuildersOutcome AppStreamClient::DescribeImageBuilders(const DescribeImageBuildersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageBuildersOutcome(result.GetResultWithOwnership())
                            : DescribeImageBuildersOutcome(std::move(result.GetError()));
}

DescribeImagePermissionsOutcome AppStreamClient::DescribeImagePermissions(const DescribeImagePermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImagePermissionsOutcome(result.GetResultWithOwnership())
                            : DescribeImagePermissionsOutcome(std::move(result.GetError()));
}

DescribeImagesOutcome AppStreamClient::DescribeImages(const DescribeImagesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImagesOutcome(result.GetResultWithOwnership()) : DescribeImagesOutcome(std::move(result.GetError()));
}

DescribeSessionsOutcome AppStreamClient::DescribeSessions(const DescribeSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSessionsOutcome(result.GetResultWithOwnership())
                            : DescribeSessionsOutcome(std::move(result.GetError()));
}

DescribeSoftwareAssociationsOutcome AppStreamClient::DescribeSoftwareAssociations(
    const DescribeSoftwareAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSoftwareAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeSoftwareAssociationsOutcome(std::move(result.GetError()));
}

DescribeStacksOutcome AppStreamClient::DescribeStacks(const DescribeStacksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStacksOutcome(result.GetResultWithOwnership()) : DescribeStacksOutcome(std::move(result.GetError()));
}

DescribeThemeForStackOutcome AppStreamClient::DescribeThemeForStack(const DescribeThemeForStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeThemeForStackOutcome(result.GetResultWithOwnership())
                            : DescribeThemeForStackOutcome(std::move(result.GetError()));
}

DescribeUsageReportSubscriptionsOutcome AppStreamClient::DescribeUsageReportSubscriptions(
    const DescribeUsageReportSubscriptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUsageReportSubscriptionsOutcome(result.GetResultWithOwnership())
                            : DescribeUsageReportSubscriptionsOutcome(std::move(result.GetError()));
}

DescribeUserStackAssociationsOutcome AppStreamClient::DescribeUserStackAssociations(
    const DescribeUserStackAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUserStackAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeUserStackAssociationsOutcome(std::move(result.GetError()));
}

DescribeUsersOutcome AppStreamClient::DescribeUsers(const DescribeUsersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUsersOutcome(result.GetResultWithOwnership()) : DescribeUsersOutcome(std::move(result.GetError()));
}

DisableUserOutcome AppStreamClient::DisableUser(const DisableUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableUserOutcome(result.GetResultWithOwnership()) : DisableUserOutcome(std::move(result.GetError()));
}

DisassociateAppBlockBuilderAppBlockOutcome AppStreamClient::DisassociateAppBlockBuilderAppBlock(
    const DisassociateAppBlockBuilderAppBlockRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateAppBlockBuilderAppBlockOutcome(result.GetResultWithOwnership())
                            : DisassociateAppBlockBuilderAppBlockOutcome(std::move(result.GetError()));
}

DisassociateApplicationFleetOutcome AppStreamClient::DisassociateApplicationFleet(
    const DisassociateApplicationFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateApplicationFleetOutcome(result.GetResultWithOwnership())
                            : DisassociateApplicationFleetOutcome(std::move(result.GetError()));
}

DisassociateApplicationFromEntitlementOutcome AppStreamClient::DisassociateApplicationFromEntitlement(
    const DisassociateApplicationFromEntitlementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateApplicationFromEntitlementOutcome(result.GetResultWithOwnership())
                            : DisassociateApplicationFromEntitlementOutcome(std::move(result.GetError()));
}

DisassociateFleetOutcome AppStreamClient::DisassociateFleet(const DisassociateFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateFleetOutcome(result.GetResultWithOwnership())
                            : DisassociateFleetOutcome(std::move(result.GetError()));
}

DisassociateSoftwareFromImageBuilderOutcome AppStreamClient::DisassociateSoftwareFromImageBuilder(
    const DisassociateSoftwareFromImageBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateSoftwareFromImageBuilderOutcome(result.GetResultWithOwnership())
                            : DisassociateSoftwareFromImageBuilderOutcome(std::move(result.GetError()));
}

DrainSessionInstanceOutcome AppStreamClient::DrainSessionInstance(const DrainSessionInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DrainSessionInstanceOutcome(result.GetResultWithOwnership())
                            : DrainSessionInstanceOutcome(std::move(result.GetError()));
}

EnableUserOutcome AppStreamClient::EnableUser(const EnableUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableUserOutcome(result.GetResultWithOwnership()) : EnableUserOutcome(std::move(result.GetError()));
}

ExpireSessionOutcome AppStreamClient::ExpireSession(const ExpireSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExpireSessionOutcome(result.GetResultWithOwnership()) : ExpireSessionOutcome(std::move(result.GetError()));
}

GetExportImageTaskOutcome AppStreamClient::GetExportImageTask(const GetExportImageTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetExportImageTaskOutcome(result.GetResultWithOwnership())
                            : GetExportImageTaskOutcome(std::move(result.GetError()));
}

ListAssociatedFleetsOutcome AppStreamClient::ListAssociatedFleets(const ListAssociatedFleetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssociatedFleetsOutcome(result.GetResultWithOwnership())
                            : ListAssociatedFleetsOutcome(std::move(result.GetError()));
}

ListAssociatedStacksOutcome AppStreamClient::ListAssociatedStacks(const ListAssociatedStacksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssociatedStacksOutcome(result.GetResultWithOwnership())
                            : ListAssociatedStacksOutcome(std::move(result.GetError()));
}

ListEntitledApplicationsOutcome AppStreamClient::ListEntitledApplications(const ListEntitledApplicationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEntitledApplicationsOutcome(result.GetResultWithOwnership())
                            : ListEntitledApplicationsOutcome(std::move(result.GetError()));
}

ListExportImageTasksOutcome AppStreamClient::ListExportImageTasks(const ListExportImageTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExportImageTasksOutcome(result.GetResultWithOwnership())
                            : ListExportImageTasksOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome AppStreamClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

StartAppBlockBuilderOutcome AppStreamClient::StartAppBlockBuilder(const StartAppBlockBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAppBlockBuilderOutcome(result.GetResultWithOwnership())
                            : StartAppBlockBuilderOutcome(std::move(result.GetError()));
}

StartFleetOutcome AppStreamClient::StartFleet(const StartFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartFleetOutcome(result.GetResultWithOwnership()) : StartFleetOutcome(std::move(result.GetError()));
}

StartImageBuilderOutcome AppStreamClient::StartImageBuilder(const StartImageBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartImageBuilderOutcome(result.GetResultWithOwnership())
                            : StartImageBuilderOutcome(std::move(result.GetError()));
}

StartSoftwareDeploymentToImageBuilderOutcome AppStreamClient::StartSoftwareDeploymentToImageBuilder(
    const StartSoftwareDeploymentToImageBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSoftwareDeploymentToImageBuilderOutcome(result.GetResultWithOwnership())
                            : StartSoftwareDeploymentToImageBuilderOutcome(std::move(result.GetError()));
}

StopAppBlockBuilderOutcome AppStreamClient::StopAppBlockBuilder(const StopAppBlockBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopAppBlockBuilderOutcome(result.GetResultWithOwnership())
                            : StopAppBlockBuilderOutcome(std::move(result.GetError()));
}

StopFleetOutcome AppStreamClient::StopFleet(const StopFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopFleetOutcome(result.GetResultWithOwnership()) : StopFleetOutcome(std::move(result.GetError()));
}

StopImageBuilderOutcome AppStreamClient::StopImageBuilder(const StopImageBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopImageBuilderOutcome(result.GetResultWithOwnership())
                            : StopImageBuilderOutcome(std::move(result.GetError()));
}

TagResourceOutcome AppStreamClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome AppStreamClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAppBlockBuilderOutcome AppStreamClient::UpdateAppBlockBuilder(const UpdateAppBlockBuilderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAppBlockBuilderOutcome(result.GetResultWithOwnership())
                            : UpdateAppBlockBuilderOutcome(std::move(result.GetError()));
}

UpdateApplicationOutcome AppStreamClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateApplicationOutcome(std::move(result.GetError()));
}

UpdateDirectoryConfigOutcome AppStreamClient::UpdateDirectoryConfig(const UpdateDirectoryConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDirectoryConfigOutcome(result.GetResultWithOwnership())
                            : UpdateDirectoryConfigOutcome(std::move(result.GetError()));
}

UpdateEntitlementOutcome AppStreamClient::UpdateEntitlement(const UpdateEntitlementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEntitlementOutcome(result.GetResultWithOwnership())
                            : UpdateEntitlementOutcome(std::move(result.GetError()));
}

UpdateFleetOutcome AppStreamClient::UpdateFleet(const UpdateFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFleetOutcome(result.GetResultWithOwnership()) : UpdateFleetOutcome(std::move(result.GetError()));
}

UpdateImagePermissionsOutcome AppStreamClient::UpdateImagePermissions(const UpdateImagePermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateImagePermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateImagePermissionsOutcome(std::move(result.GetError()));
}

UpdateStackOutcome AppStreamClient::UpdateStack(const UpdateStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateStackOutcome(result.GetResultWithOwnership()) : UpdateStackOutcome(std::move(result.GetError()));
}

UpdateThemeForStackOutcome AppStreamClient::UpdateThemeForStack(const UpdateThemeForStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateThemeForStackOutcome(result.GetResultWithOwnership())
                            : UpdateThemeForStackOutcome(std::move(result.GetError()));
}
