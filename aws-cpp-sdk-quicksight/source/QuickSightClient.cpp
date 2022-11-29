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

#include <aws/quicksight/QuickSightClient.h>
#include <aws/quicksight/QuickSightErrorMarshaller.h>
#include <aws/quicksight/QuickSightEndpointProvider.h>
#include <aws/quicksight/model/CancelIngestionRequest.h>
#include <aws/quicksight/model/CreateAccountCustomizationRequest.h>
#include <aws/quicksight/model/CreateAccountSubscriptionRequest.h>
#include <aws/quicksight/model/CreateAnalysisRequest.h>
#include <aws/quicksight/model/CreateDashboardRequest.h>
#include <aws/quicksight/model/CreateDataSetRequest.h>
#include <aws/quicksight/model/CreateDataSourceRequest.h>
#include <aws/quicksight/model/CreateFolderRequest.h>
#include <aws/quicksight/model/CreateFolderMembershipRequest.h>
#include <aws/quicksight/model/CreateGroupRequest.h>
#include <aws/quicksight/model/CreateGroupMembershipRequest.h>
#include <aws/quicksight/model/CreateIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/CreateIngestionRequest.h>
#include <aws/quicksight/model/CreateNamespaceRequest.h>
#include <aws/quicksight/model/CreateTemplateRequest.h>
#include <aws/quicksight/model/CreateTemplateAliasRequest.h>
#include <aws/quicksight/model/CreateThemeRequest.h>
#include <aws/quicksight/model/CreateThemeAliasRequest.h>
#include <aws/quicksight/model/DeleteAccountCustomizationRequest.h>
#include <aws/quicksight/model/DeleteAccountSubscriptionRequest.h>
#include <aws/quicksight/model/DeleteAnalysisRequest.h>
#include <aws/quicksight/model/DeleteDashboardRequest.h>
#include <aws/quicksight/model/DeleteDataSetRequest.h>
#include <aws/quicksight/model/DeleteDataSourceRequest.h>
#include <aws/quicksight/model/DeleteFolderRequest.h>
#include <aws/quicksight/model/DeleteFolderMembershipRequest.h>
#include <aws/quicksight/model/DeleteGroupRequest.h>
#include <aws/quicksight/model/DeleteGroupMembershipRequest.h>
#include <aws/quicksight/model/DeleteIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/DeleteNamespaceRequest.h>
#include <aws/quicksight/model/DeleteTemplateRequest.h>
#include <aws/quicksight/model/DeleteTemplateAliasRequest.h>
#include <aws/quicksight/model/DeleteThemeRequest.h>
#include <aws/quicksight/model/DeleteThemeAliasRequest.h>
#include <aws/quicksight/model/DeleteUserRequest.h>
#include <aws/quicksight/model/DeleteUserByPrincipalIdRequest.h>
#include <aws/quicksight/model/DescribeAccountCustomizationRequest.h>
#include <aws/quicksight/model/DescribeAccountSettingsRequest.h>
#include <aws/quicksight/model/DescribeAccountSubscriptionRequest.h>
#include <aws/quicksight/model/DescribeAnalysisRequest.h>
#include <aws/quicksight/model/DescribeAnalysisDefinitionRequest.h>
#include <aws/quicksight/model/DescribeAnalysisPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDashboardRequest.h>
#include <aws/quicksight/model/DescribeDashboardDefinitionRequest.h>
#include <aws/quicksight/model/DescribeDashboardPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDataSetRequest.h>
#include <aws/quicksight/model/DescribeDataSetPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDataSourceRequest.h>
#include <aws/quicksight/model/DescribeDataSourcePermissionsRequest.h>
#include <aws/quicksight/model/DescribeFolderRequest.h>
#include <aws/quicksight/model/DescribeFolderPermissionsRequest.h>
#include <aws/quicksight/model/DescribeFolderResolvedPermissionsRequest.h>
#include <aws/quicksight/model/DescribeGroupRequest.h>
#include <aws/quicksight/model/DescribeGroupMembershipRequest.h>
#include <aws/quicksight/model/DescribeIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/DescribeIngestionRequest.h>
#include <aws/quicksight/model/DescribeIpRestrictionRequest.h>
#include <aws/quicksight/model/DescribeNamespaceRequest.h>
#include <aws/quicksight/model/DescribeTemplateRequest.h>
#include <aws/quicksight/model/DescribeTemplateAliasRequest.h>
#include <aws/quicksight/model/DescribeTemplateDefinitionRequest.h>
#include <aws/quicksight/model/DescribeTemplatePermissionsRequest.h>
#include <aws/quicksight/model/DescribeThemeRequest.h>
#include <aws/quicksight/model/DescribeThemeAliasRequest.h>
#include <aws/quicksight/model/DescribeThemePermissionsRequest.h>
#include <aws/quicksight/model/DescribeUserRequest.h>
#include <aws/quicksight/model/GenerateEmbedUrlForAnonymousUserRequest.h>
#include <aws/quicksight/model/GenerateEmbedUrlForRegisteredUserRequest.h>
#include <aws/quicksight/model/GetDashboardEmbedUrlRequest.h>
#include <aws/quicksight/model/GetSessionEmbedUrlRequest.h>
#include <aws/quicksight/model/ListAnalysesRequest.h>
#include <aws/quicksight/model/ListDashboardVersionsRequest.h>
#include <aws/quicksight/model/ListDashboardsRequest.h>
#include <aws/quicksight/model/ListDataSetsRequest.h>
#include <aws/quicksight/model/ListDataSourcesRequest.h>
#include <aws/quicksight/model/ListFolderMembersRequest.h>
#include <aws/quicksight/model/ListFoldersRequest.h>
#include <aws/quicksight/model/ListGroupMembershipsRequest.h>
#include <aws/quicksight/model/ListGroupsRequest.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsRequest.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsForUserRequest.h>
#include <aws/quicksight/model/ListIngestionsRequest.h>
#include <aws/quicksight/model/ListNamespacesRequest.h>
#include <aws/quicksight/model/ListTagsForResourceRequest.h>
#include <aws/quicksight/model/ListTemplateAliasesRequest.h>
#include <aws/quicksight/model/ListTemplateVersionsRequest.h>
#include <aws/quicksight/model/ListTemplatesRequest.h>
#include <aws/quicksight/model/ListThemeAliasesRequest.h>
#include <aws/quicksight/model/ListThemeVersionsRequest.h>
#include <aws/quicksight/model/ListThemesRequest.h>
#include <aws/quicksight/model/ListUserGroupsRequest.h>
#include <aws/quicksight/model/ListUsersRequest.h>
#include <aws/quicksight/model/RegisterUserRequest.h>
#include <aws/quicksight/model/RestoreAnalysisRequest.h>
#include <aws/quicksight/model/SearchAnalysesRequest.h>
#include <aws/quicksight/model/SearchDashboardsRequest.h>
#include <aws/quicksight/model/SearchDataSetsRequest.h>
#include <aws/quicksight/model/SearchDataSourcesRequest.h>
#include <aws/quicksight/model/SearchFoldersRequest.h>
#include <aws/quicksight/model/SearchGroupsRequest.h>
#include <aws/quicksight/model/TagResourceRequest.h>
#include <aws/quicksight/model/UntagResourceRequest.h>
#include <aws/quicksight/model/UpdateAccountCustomizationRequest.h>
#include <aws/quicksight/model/UpdateAccountSettingsRequest.h>
#include <aws/quicksight/model/UpdateAnalysisRequest.h>
#include <aws/quicksight/model/UpdateAnalysisPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDashboardRequest.h>
#include <aws/quicksight/model/UpdateDashboardPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDashboardPublishedVersionRequest.h>
#include <aws/quicksight/model/UpdateDataSetRequest.h>
#include <aws/quicksight/model/UpdateDataSetPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDataSourceRequest.h>
#include <aws/quicksight/model/UpdateDataSourcePermissionsRequest.h>
#include <aws/quicksight/model/UpdateFolderRequest.h>
#include <aws/quicksight/model/UpdateFolderPermissionsRequest.h>
#include <aws/quicksight/model/UpdateGroupRequest.h>
#include <aws/quicksight/model/UpdateIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/UpdateIpRestrictionRequest.h>
#include <aws/quicksight/model/UpdatePublicSharingSettingsRequest.h>
#include <aws/quicksight/model/UpdateTemplateRequest.h>
#include <aws/quicksight/model/UpdateTemplateAliasRequest.h>
#include <aws/quicksight/model/UpdateTemplatePermissionsRequest.h>
#include <aws/quicksight/model/UpdateThemeRequest.h>
#include <aws/quicksight/model/UpdateThemeAliasRequest.h>
#include <aws/quicksight/model/UpdateThemePermissionsRequest.h>
#include <aws/quicksight/model/UpdateUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QuickSight;
using namespace Aws::QuickSight::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* QuickSightClient::SERVICE_NAME = "quicksight";
const char* QuickSightClient::ALLOCATION_TAG = "QuickSightClient";

QuickSightClient::QuickSightClient(const QuickSight::QuickSightClientConfiguration& clientConfiguration,
                                   std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const AWSCredentials& credentials,
                                   std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider,
                                   const QuickSight::QuickSightClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider,
                                   const QuickSight::QuickSightClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  QuickSightClient::QuickSightClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
QuickSightClient::~QuickSightClient()
{
}

std::shared_ptr<QuickSightEndpointProviderBase>& QuickSightClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void QuickSightClient::init(const QuickSight::QuickSightClientConfiguration& config)
{
  AWSClient::SetServiceClientName("QuickSight");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void QuickSightClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelIngestionOutcome QuickSightClient::CancelIngestion(const CancelIngestionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelIngestion", "Required field: AwsAccountId, is not set");
    return CancelIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelIngestion", "Required field: DataSetId, is not set");
    return CancelIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.IngestionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelIngestion", "Required field: IngestionId, is not set");
    return CancelIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionId());
  return CancelIngestionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelIngestionOutcomeCallable QuickSightClient::CancelIngestionCallable(const CancelIngestionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelIngestionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelIngestion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CancelIngestionAsync(const CancelIngestionRequest& request, const CancelIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelIngestion(request), context);
    } );
}

CreateAccountCustomizationOutcome QuickSightClient::CreateAccountCustomization(const CreateAccountCustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccountCustomization", "Required field: AwsAccountId, is not set");
    return CreateAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  return CreateAccountCustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountCustomizationOutcomeCallable QuickSightClient::CreateAccountCustomizationCallable(const CreateAccountCustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountCustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccountCustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateAccountCustomizationAsync(const CreateAccountCustomizationRequest& request, const CreateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAccountCustomization(request), context);
    } );
}

CreateAccountSubscriptionOutcome QuickSightClient::CreateAccountSubscription(const CreateAccountSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccountSubscription", "Required field: AwsAccountId, is not set");
    return CreateAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  return CreateAccountSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountSubscriptionOutcomeCallable QuickSightClient::CreateAccountSubscriptionCallable(const CreateAccountSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccountSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateAccountSubscriptionAsync(const CreateAccountSubscriptionRequest& request, const CreateAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAccountSubscription(request), context);
    } );
}

CreateAnalysisOutcome QuickSightClient::CreateAnalysis(const CreateAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAnalysis", "Required field: AwsAccountId, is not set");
    return CreateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAnalysis", "Required field: AnalysisId, is not set");
    return CreateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return CreateAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnalysisOutcomeCallable QuickSightClient::CreateAnalysisCallable(const CreateAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateAnalysisAsync(const CreateAnalysisRequest& request, const CreateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAnalysis(request), context);
    } );
}

CreateDashboardOutcome QuickSightClient::CreateDashboard(const CreateDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDashboard", "Required field: AwsAccountId, is not set");
    return CreateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDashboard", "Required field: DashboardId, is not set");
    return CreateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  return CreateDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDashboardOutcomeCallable QuickSightClient::CreateDashboardCallable(const CreateDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateDashboardAsync(const CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDashboard(request), context);
    } );
}

CreateDataSetOutcome QuickSightClient::CreateDataSet(const CreateDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSet", "Required field: AwsAccountId, is not set");
    return CreateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets");
  return CreateDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSetOutcomeCallable QuickSightClient::CreateDataSetCallable(const CreateDataSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateDataSetAsync(const CreateDataSetRequest& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataSet(request), context);
    } );
}

CreateDataSourceOutcome QuickSightClient::CreateDataSource(const CreateDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: AwsAccountId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
  return CreateDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSourceOutcomeCallable QuickSightClient::CreateDataSourceCallable(const CreateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataSource(request), context);
    } );
}

CreateFolderOutcome QuickSightClient::CreateFolder(const CreateFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolder", "Required field: AwsAccountId, is not set");
    return CreateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolder", "Required field: FolderId, is not set");
    return CreateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return CreateFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFolderOutcomeCallable QuickSightClient::CreateFolderCallable(const CreateFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateFolderAsync(const CreateFolderRequest& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFolder(request), context);
    } );
}

CreateFolderMembershipOutcome QuickSightClient::CreateFolderMembership(const CreateFolderMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFolderMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: AwsAccountId, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: FolderId, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: MemberId, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  if (!request.MemberTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: MemberType, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFolderMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(MemberTypeMapper::GetNameForMemberType(request.GetMemberType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  return CreateFolderMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateFolderMembershipOutcomeCallable QuickSightClient::CreateFolderMembershipCallable(const CreateFolderMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFolderMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFolderMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateFolderMembershipAsync(const CreateFolderMembershipRequest& request, const CreateFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFolderMembership(request), context);
    } );
}

CreateGroupOutcome QuickSightClient::CreateGroup(const CreateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroup", "Required field: AwsAccountId, is not set");
    return CreateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroup", "Required field: Namespace, is not set");
    return CreateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  return CreateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable QuickSightClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGroup(request), context);
    } );
}

CreateGroupMembershipOutcome QuickSightClient::CreateGroupMembership(const CreateGroupMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MemberNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: MemberName, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberName]", false));
  }
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: GroupName, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: AwsAccountId, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: Namespace, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  return CreateGroupMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupMembershipOutcomeCallable QuickSightClient::CreateGroupMembershipCallable(const CreateGroupMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroupMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateGroupMembershipAsync(const CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGroupMembership(request), context);
    } );
}

CreateIAMPolicyAssignmentOutcome QuickSightClient::CreateIAMPolicyAssignment(const CreateIAMPolicyAssignmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return CreateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIAMPolicyAssignment", "Required field: Namespace, is not set");
    return CreateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
  return CreateIAMPolicyAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIAMPolicyAssignmentOutcomeCallable QuickSightClient::CreateIAMPolicyAssignmentCallable(const CreateIAMPolicyAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIAMPolicyAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIAMPolicyAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateIAMPolicyAssignmentAsync(const CreateIAMPolicyAssignmentRequest& request, const CreateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateIAMPolicyAssignment(request), context);
    } );
}

CreateIngestionOutcome QuickSightClient::CreateIngestion(const CreateIngestionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: DataSetId, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.IngestionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: IngestionId, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: AwsAccountId, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionId());
  return CreateIngestionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateIngestionOutcomeCallable QuickSightClient::CreateIngestionCallable(const CreateIngestionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIngestionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIngestion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateIngestionAsync(const CreateIngestionRequest& request, const CreateIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateIngestion(request), context);
    } );
}

CreateNamespaceOutcome QuickSightClient::CreateNamespace(const CreateNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNamespace", "Required field: AwsAccountId, is not set");
    return CreateNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  return CreateNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNamespaceOutcomeCallable QuickSightClient::CreateNamespaceCallable(const CreateNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNamespace(request), context);
    } );
}

CreateTemplateOutcome QuickSightClient::CreateTemplate(const CreateTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplate", "Required field: AwsAccountId, is not set");
    return CreateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplate", "Required field: TemplateId, is not set");
    return CreateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return CreateTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTemplateOutcomeCallable QuickSightClient::CreateTemplateCallable(const CreateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTemplate(request), context);
    } );
}

CreateTemplateAliasOutcome QuickSightClient::CreateTemplateAlias(const CreateTemplateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplateAlias", "Required field: AwsAccountId, is not set");
    return CreateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplateAlias", "Required field: TemplateId, is not set");
    return CreateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplateAlias", "Required field: AliasName, is not set");
    return CreateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return CreateTemplateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTemplateAliasOutcomeCallable QuickSightClient::CreateTemplateAliasCallable(const CreateTemplateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTemplateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTemplateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateTemplateAliasAsync(const CreateTemplateAliasRequest& request, const CreateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTemplateAlias(request), context);
    } );
}

CreateThemeOutcome QuickSightClient::CreateTheme(const CreateThemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: AwsAccountId, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: ThemeId, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  return CreateThemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThemeOutcomeCallable QuickSightClient::CreateThemeCallable(const CreateThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateThemeAsync(const CreateThemeRequest& request, const CreateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTheme(request), context);
    } );
}

CreateThemeAliasOutcome QuickSightClient::CreateThemeAlias(const CreateThemeAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThemeAlias", "Required field: AwsAccountId, is not set");
    return CreateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThemeAlias", "Required field: ThemeId, is not set");
    return CreateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThemeAlias", "Required field: AliasName, is not set");
    return CreateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return CreateThemeAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThemeAliasOutcomeCallable QuickSightClient::CreateThemeAliasCallable(const CreateThemeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThemeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThemeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::CreateThemeAliasAsync(const CreateThemeAliasRequest& request, const CreateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateThemeAlias(request), context);
    } );
}

DeleteAccountCustomizationOutcome QuickSightClient::DeleteAccountCustomization(const DeleteAccountCustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccountCustomization", "Required field: AwsAccountId, is not set");
    return DeleteAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  return DeleteAccountCustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountCustomizationOutcomeCallable QuickSightClient::DeleteAccountCustomizationCallable(const DeleteAccountCustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountCustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountCustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteAccountCustomizationAsync(const DeleteAccountCustomizationRequest& request, const DeleteAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccountCustomization(request), context);
    } );
}

DeleteAccountSubscriptionOutcome QuickSightClient::DeleteAccountSubscription(const DeleteAccountSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccountSubscription", "Required field: AwsAccountId, is not set");
    return DeleteAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  return DeleteAccountSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountSubscriptionOutcomeCallable QuickSightClient::DeleteAccountSubscriptionCallable(const DeleteAccountSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteAccountSubscriptionAsync(const DeleteAccountSubscriptionRequest& request, const DeleteAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccountSubscription(request), context);
    } );
}

DeleteAnalysisOutcome QuickSightClient::DeleteAnalysis(const DeleteAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAnalysis", "Required field: AwsAccountId, is not set");
    return DeleteAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAnalysis", "Required field: AnalysisId, is not set");
    return DeleteAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return DeleteAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnalysisOutcomeCallable QuickSightClient::DeleteAnalysisCallable(const DeleteAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteAnalysisAsync(const DeleteAnalysisRequest& request, const DeleteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAnalysis(request), context);
    } );
}

DeleteDashboardOutcome QuickSightClient::DeleteDashboard(const DeleteDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDashboard", "Required field: AwsAccountId, is not set");
    return DeleteDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDashboard", "Required field: DashboardId, is not set");
    return DeleteDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  return DeleteDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDashboardOutcomeCallable QuickSightClient::DeleteDashboardCallable(const DeleteDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteDashboardAsync(const DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDashboard(request), context);
    } );
}

DeleteDataSetOutcome QuickSightClient::DeleteDataSet(const DeleteDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSet", "Required field: AwsAccountId, is not set");
    return DeleteDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSet", "Required field: DataSetId, is not set");
    return DeleteDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  return DeleteDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSetOutcomeCallable QuickSightClient::DeleteDataSetCallable(const DeleteDataSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteDataSetAsync(const DeleteDataSetRequest& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataSet(request), context);
    } );
}

DeleteDataSourceOutcome QuickSightClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: AwsAccountId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DataSourceId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  return DeleteDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSourceOutcomeCallable QuickSightClient::DeleteDataSourceCallable(const DeleteDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataSource(request), context);
    } );
}

DeleteFolderOutcome QuickSightClient::DeleteFolder(const DeleteFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolder", "Required field: AwsAccountId, is not set");
    return DeleteFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolder", "Required field: FolderId, is not set");
    return DeleteFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return DeleteFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFolderOutcomeCallable QuickSightClient::DeleteFolderCallable(const DeleteFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteFolderAsync(const DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFolder(request), context);
    } );
}

DeleteFolderMembershipOutcome QuickSightClient::DeleteFolderMembership(const DeleteFolderMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFolderMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: AwsAccountId, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: FolderId, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: MemberId, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  if (!request.MemberTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: MemberType, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFolderMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(MemberTypeMapper::GetNameForMemberType(request.GetMemberType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  return DeleteFolderMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFolderMembershipOutcomeCallable QuickSightClient::DeleteFolderMembershipCallable(const DeleteFolderMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFolderMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFolderMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteFolderMembershipAsync(const DeleteFolderMembershipRequest& request, const DeleteFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFolderMembership(request), context);
    } );
}

DeleteGroupOutcome QuickSightClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: GroupName, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: AwsAccountId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: Namespace, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  return DeleteGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcomeCallable QuickSightClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGroup(request), context);
    } );
}

DeleteGroupMembershipOutcome QuickSightClient::DeleteGroupMembership(const DeleteGroupMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MemberNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: MemberName, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberName]", false));
  }
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: GroupName, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: AwsAccountId, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: Namespace, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  return DeleteGroupMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupMembershipOutcomeCallable QuickSightClient::DeleteGroupMembershipCallable(const DeleteGroupMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroupMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteGroupMembershipAsync(const DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGroupMembership(request), context);
    } );
}

DeleteIAMPolicyAssignmentOutcome QuickSightClient::DeleteIAMPolicyAssignment(const DeleteIAMPolicyAssignmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return DeleteIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return DeleteIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIAMPolicyAssignment", "Required field: Namespace, is not set");
    return DeleteIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespace/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssignmentName());
  return DeleteIAMPolicyAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIAMPolicyAssignmentOutcomeCallable QuickSightClient::DeleteIAMPolicyAssignmentCallable(const DeleteIAMPolicyAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIAMPolicyAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIAMPolicyAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteIAMPolicyAssignmentAsync(const DeleteIAMPolicyAssignmentRequest& request, const DeleteIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteIAMPolicyAssignment(request), context);
    } );
}

DeleteNamespaceOutcome QuickSightClient::DeleteNamespace(const DeleteNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: AwsAccountId, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: Namespace, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  return DeleteNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNamespaceOutcomeCallable QuickSightClient::DeleteNamespaceCallable(const DeleteNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNamespace(request), context);
    } );
}

DeleteTemplateOutcome QuickSightClient::DeleteTemplate(const DeleteTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: AwsAccountId, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: TemplateId, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return DeleteTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTemplateOutcomeCallable QuickSightClient::DeleteTemplateCallable(const DeleteTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTemplate(request), context);
    } );
}

DeleteTemplateAliasOutcome QuickSightClient::DeleteTemplateAlias(const DeleteTemplateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplateAlias", "Required field: AwsAccountId, is not set");
    return DeleteTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplateAlias", "Required field: TemplateId, is not set");
    return DeleteTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplateAlias", "Required field: AliasName, is not set");
    return DeleteTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return DeleteTemplateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTemplateAliasOutcomeCallable QuickSightClient::DeleteTemplateAliasCallable(const DeleteTemplateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTemplateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTemplateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteTemplateAliasAsync(const DeleteTemplateAliasRequest& request, const DeleteTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTemplateAlias(request), context);
    } );
}

DeleteThemeOutcome QuickSightClient::DeleteTheme(const DeleteThemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: AwsAccountId, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: ThemeId, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  return DeleteThemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThemeOutcomeCallable QuickSightClient::DeleteThemeCallable(const DeleteThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteThemeAsync(const DeleteThemeRequest& request, const DeleteThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTheme(request), context);
    } );
}

DeleteThemeAliasOutcome QuickSightClient::DeleteThemeAlias(const DeleteThemeAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThemeAlias", "Required field: AwsAccountId, is not set");
    return DeleteThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThemeAlias", "Required field: ThemeId, is not set");
    return DeleteThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThemeAlias", "Required field: AliasName, is not set");
    return DeleteThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return DeleteThemeAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThemeAliasOutcomeCallable QuickSightClient::DeleteThemeAliasCallable(const DeleteThemeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThemeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThemeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteThemeAliasAsync(const DeleteThemeAliasRequest& request, const DeleteThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteThemeAlias(request), context);
    } );
}

DeleteUserOutcome QuickSightClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserName, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: AwsAccountId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: Namespace, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable QuickSightClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUser(request), context);
    } );
}

DeleteUserByPrincipalIdOutcome QuickSightClient::DeleteUserByPrincipalId(const DeleteUserByPrincipalIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserByPrincipalId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserByPrincipalId", "Required field: PrincipalId, is not set");
    return DeleteUserByPrincipalIdOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserByPrincipalId", "Required field: AwsAccountId, is not set");
    return DeleteUserByPrincipalIdOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserByPrincipalId", "Required field: Namespace, is not set");
    return DeleteUserByPrincipalIdOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserByPrincipalId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user-principals/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  return DeleteUserByPrincipalIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserByPrincipalIdOutcomeCallable QuickSightClient::DeleteUserByPrincipalIdCallable(const DeleteUserByPrincipalIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserByPrincipalIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserByPrincipalId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DeleteUserByPrincipalIdAsync(const DeleteUserByPrincipalIdRequest& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUserByPrincipalId(request), context);
    } );
}

DescribeAccountCustomizationOutcome QuickSightClient::DescribeAccountCustomization(const DescribeAccountCustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccountCustomization", "Required field: AwsAccountId, is not set");
    return DescribeAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  return DescribeAccountCustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountCustomizationOutcomeCallable QuickSightClient::DescribeAccountCustomizationCallable(const DescribeAccountCustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountCustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountCustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeAccountCustomizationAsync(const DescribeAccountCustomizationRequest& request, const DescribeAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountCustomization(request), context);
    } );
}

DescribeAccountSettingsOutcome QuickSightClient::DescribeAccountSettings(const DescribeAccountSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccountSettings", "Required field: AwsAccountId, is not set");
    return DescribeAccountSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return DescribeAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountSettingsOutcomeCallable QuickSightClient::DescribeAccountSettingsCallable(const DescribeAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeAccountSettingsAsync(const DescribeAccountSettingsRequest& request, const DescribeAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountSettings(request), context);
    } );
}

DescribeAccountSubscriptionOutcome QuickSightClient::DescribeAccountSubscription(const DescribeAccountSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccountSubscription", "Required field: AwsAccountId, is not set");
    return DescribeAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  return DescribeAccountSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountSubscriptionOutcomeCallable QuickSightClient::DescribeAccountSubscriptionCallable(const DescribeAccountSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeAccountSubscriptionAsync(const DescribeAccountSubscriptionRequest& request, const DescribeAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountSubscription(request), context);
    } );
}

DescribeAnalysisOutcome QuickSightClient::DescribeAnalysis(const DescribeAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysis", "Required field: AwsAccountId, is not set");
    return DescribeAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysis", "Required field: AnalysisId, is not set");
    return DescribeAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return DescribeAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnalysisOutcomeCallable QuickSightClient::DescribeAnalysisCallable(const DescribeAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeAnalysisAsync(const DescribeAnalysisRequest& request, const DescribeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAnalysis(request), context);
    } );
}

DescribeAnalysisDefinitionOutcome QuickSightClient::DescribeAnalysisDefinition(const DescribeAnalysisDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnalysisDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisDefinition", "Required field: AwsAccountId, is not set");
    return DescribeAnalysisDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisDefinition", "Required field: AnalysisId, is not set");
    return DescribeAnalysisDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnalysisDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/definition");
  return DescribeAnalysisDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnalysisDefinitionOutcomeCallable QuickSightClient::DescribeAnalysisDefinitionCallable(const DescribeAnalysisDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnalysisDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnalysisDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeAnalysisDefinitionAsync(const DescribeAnalysisDefinitionRequest& request, const DescribeAnalysisDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAnalysisDefinition(request), context);
    } );
}

DescribeAnalysisPermissionsOutcome QuickSightClient::DescribeAnalysisPermissions(const DescribeAnalysisPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisPermissions", "Required field: AwsAccountId, is not set");
    return DescribeAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisPermissions", "Required field: AnalysisId, is not set");
    return DescribeAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeAnalysisPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnalysisPermissionsOutcomeCallable QuickSightClient::DescribeAnalysisPermissionsCallable(const DescribeAnalysisPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnalysisPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnalysisPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeAnalysisPermissionsAsync(const DescribeAnalysisPermissionsRequest& request, const DescribeAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAnalysisPermissions(request), context);
    } );
}

DescribeDashboardOutcome QuickSightClient::DescribeDashboard(const DescribeDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboard", "Required field: AwsAccountId, is not set");
    return DescribeDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboard", "Required field: DashboardId, is not set");
    return DescribeDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  return DescribeDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDashboardOutcomeCallable QuickSightClient::DescribeDashboardCallable(const DescribeDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeDashboardAsync(const DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDashboard(request), context);
    } );
}

DescribeDashboardDefinitionOutcome QuickSightClient::DescribeDashboardDefinition(const DescribeDashboardDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDashboardDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboardDefinition", "Required field: AwsAccountId, is not set");
    return DescribeDashboardDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboardDefinition", "Required field: DashboardId, is not set");
    return DescribeDashboardDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDashboardDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/definition");
  return DescribeDashboardDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDashboardDefinitionOutcomeCallable QuickSightClient::DescribeDashboardDefinitionCallable(const DescribeDashboardDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDashboardDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDashboardDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeDashboardDefinitionAsync(const DescribeDashboardDefinitionRequest& request, const DescribeDashboardDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDashboardDefinition(request), context);
    } );
}

DescribeDashboardPermissionsOutcome QuickSightClient::DescribeDashboardPermissions(const DescribeDashboardPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboardPermissions", "Required field: AwsAccountId, is not set");
    return DescribeDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboardPermissions", "Required field: DashboardId, is not set");
    return DescribeDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeDashboardPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDashboardPermissionsOutcomeCallable QuickSightClient::DescribeDashboardPermissionsCallable(const DescribeDashboardPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDashboardPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDashboardPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeDashboardPermissionsAsync(const DescribeDashboardPermissionsRequest& request, const DescribeDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDashboardPermissions(request), context);
    } );
}

DescribeDataSetOutcome QuickSightClient::DescribeDataSet(const DescribeDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSet", "Required field: AwsAccountId, is not set");
    return DescribeDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSet", "Required field: DataSetId, is not set");
    return DescribeDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  return DescribeDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSetOutcomeCallable QuickSightClient::DescribeDataSetCallable(const DescribeDataSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeDataSetAsync(const DescribeDataSetRequest& request, const DescribeDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataSet(request), context);
    } );
}

DescribeDataSetPermissionsOutcome QuickSightClient::DescribeDataSetPermissions(const DescribeDataSetPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSetPermissions", "Required field: AwsAccountId, is not set");
    return DescribeDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSetPermissions", "Required field: DataSetId, is not set");
    return DescribeDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeDataSetPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSetPermissionsOutcomeCallable QuickSightClient::DescribeDataSetPermissionsCallable(const DescribeDataSetPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSetPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSetPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeDataSetPermissionsAsync(const DescribeDataSetPermissionsRequest& request, const DescribeDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataSetPermissions(request), context);
    } );
}

DescribeDataSourceOutcome QuickSightClient::DescribeDataSource(const DescribeDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSource", "Required field: AwsAccountId, is not set");
    return DescribeDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSource", "Required field: DataSourceId, is not set");
    return DescribeDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  return DescribeDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSourceOutcomeCallable QuickSightClient::DescribeDataSourceCallable(const DescribeDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeDataSourceAsync(const DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataSource(request), context);
    } );
}

DescribeDataSourcePermissionsOutcome QuickSightClient::DescribeDataSourcePermissions(const DescribeDataSourcePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSourcePermissions", "Required field: AwsAccountId, is not set");
    return DescribeDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSourcePermissions", "Required field: DataSourceId, is not set");
    return DescribeDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeDataSourcePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSourcePermissionsOutcomeCallable QuickSightClient::DescribeDataSourcePermissionsCallable(const DescribeDataSourcePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSourcePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSourcePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeDataSourcePermissionsAsync(const DescribeDataSourcePermissionsRequest& request, const DescribeDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataSourcePermissions(request), context);
    } );
}

DescribeFolderOutcome QuickSightClient::DescribeFolder(const DescribeFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolder", "Required field: AwsAccountId, is not set");
    return DescribeFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolder", "Required field: FolderId, is not set");
    return DescribeFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return DescribeFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFolderOutcomeCallable QuickSightClient::DescribeFolderCallable(const DescribeFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeFolderAsync(const DescribeFolderRequest& request, const DescribeFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFolder(request), context);
    } );
}

DescribeFolderPermissionsOutcome QuickSightClient::DescribeFolderPermissions(const DescribeFolderPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderPermissions", "Required field: AwsAccountId, is not set");
    return DescribeFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderPermissions", "Required field: FolderId, is not set");
    return DescribeFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeFolderPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFolderPermissionsOutcomeCallable QuickSightClient::DescribeFolderPermissionsCallable(const DescribeFolderPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFolderPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFolderPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeFolderPermissionsAsync(const DescribeFolderPermissionsRequest& request, const DescribeFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFolderPermissions(request), context);
    } );
}

DescribeFolderResolvedPermissionsOutcome QuickSightClient::DescribeFolderResolvedPermissions(const DescribeFolderResolvedPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFolderResolvedPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderResolvedPermissions", "Required field: AwsAccountId, is not set");
    return DescribeFolderResolvedPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderResolvedPermissions", "Required field: FolderId, is not set");
    return DescribeFolderResolvedPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFolderResolvedPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resolved-permissions");
  return DescribeFolderResolvedPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFolderResolvedPermissionsOutcomeCallable QuickSightClient::DescribeFolderResolvedPermissionsCallable(const DescribeFolderResolvedPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFolderResolvedPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFolderResolvedPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeFolderResolvedPermissionsAsync(const DescribeFolderResolvedPermissionsRequest& request, const DescribeFolderResolvedPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFolderResolvedPermissions(request), context);
    } );
}

DescribeGroupOutcome QuickSightClient::DescribeGroup(const DescribeGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: GroupName, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: AwsAccountId, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: Namespace, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  return DescribeGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupOutcomeCallable QuickSightClient::DescribeGroupCallable(const DescribeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeGroup(request), context);
    } );
}

DescribeGroupMembershipOutcome QuickSightClient::DescribeGroupMembership(const DescribeGroupMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MemberNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: MemberName, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberName]", false));
  }
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: GroupName, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: AwsAccountId, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: Namespace, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  return DescribeGroupMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupMembershipOutcomeCallable QuickSightClient::DescribeGroupMembershipCallable(const DescribeGroupMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroupMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeGroupMembershipAsync(const DescribeGroupMembershipRequest& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeGroupMembership(request), context);
    } );
}

DescribeIAMPolicyAssignmentOutcome QuickSightClient::DescribeIAMPolicyAssignment(const DescribeIAMPolicyAssignmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return DescribeIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return DescribeIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIAMPolicyAssignment", "Required field: Namespace, is not set");
    return DescribeIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssignmentName());
  return DescribeIAMPolicyAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIAMPolicyAssignmentOutcomeCallable QuickSightClient::DescribeIAMPolicyAssignmentCallable(const DescribeIAMPolicyAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIAMPolicyAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIAMPolicyAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeIAMPolicyAssignmentAsync(const DescribeIAMPolicyAssignmentRequest& request, const DescribeIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeIAMPolicyAssignment(request), context);
    } );
}

DescribeIngestionOutcome QuickSightClient::DescribeIngestion(const DescribeIngestionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIngestion", "Required field: AwsAccountId, is not set");
    return DescribeIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIngestion", "Required field: DataSetId, is not set");
    return DescribeIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.IngestionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIngestion", "Required field: IngestionId, is not set");
    return DescribeIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionId());
  return DescribeIngestionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIngestionOutcomeCallable QuickSightClient::DescribeIngestionCallable(const DescribeIngestionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIngestionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIngestion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeIngestionAsync(const DescribeIngestionRequest& request, const DescribeIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeIngestion(request), context);
    } );
}

DescribeIpRestrictionOutcome QuickSightClient::DescribeIpRestriction(const DescribeIpRestrictionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIpRestriction", "Required field: AwsAccountId, is not set");
    return DescribeIpRestrictionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ip-restriction");
  return DescribeIpRestrictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIpRestrictionOutcomeCallable QuickSightClient::DescribeIpRestrictionCallable(const DescribeIpRestrictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIpRestrictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIpRestriction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeIpRestrictionAsync(const DescribeIpRestrictionRequest& request, const DescribeIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeIpRestriction(request), context);
    } );
}

DescribeNamespaceOutcome QuickSightClient::DescribeNamespace(const DescribeNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNamespace", "Required field: AwsAccountId, is not set");
    return DescribeNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNamespace", "Required field: Namespace, is not set");
    return DescribeNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  return DescribeNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeNamespaceOutcomeCallable QuickSightClient::DescribeNamespaceCallable(const DescribeNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeNamespaceAsync(const DescribeNamespaceRequest& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeNamespace(request), context);
    } );
}

DescribeTemplateOutcome QuickSightClient::DescribeTemplate(const DescribeTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplate", "Required field: AwsAccountId, is not set");
    return DescribeTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplate", "Required field: TemplateId, is not set");
    return DescribeTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return DescribeTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplateOutcomeCallable QuickSightClient::DescribeTemplateCallable(const DescribeTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeTemplateAsync(const DescribeTemplateRequest& request, const DescribeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTemplate(request), context);
    } );
}

DescribeTemplateAliasOutcome QuickSightClient::DescribeTemplateAlias(const DescribeTemplateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateAlias", "Required field: AwsAccountId, is not set");
    return DescribeTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateAlias", "Required field: TemplateId, is not set");
    return DescribeTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateAlias", "Required field: AliasName, is not set");
    return DescribeTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return DescribeTemplateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplateAliasOutcomeCallable QuickSightClient::DescribeTemplateAliasCallable(const DescribeTemplateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTemplateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTemplateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeTemplateAliasAsync(const DescribeTemplateAliasRequest& request, const DescribeTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTemplateAlias(request), context);
    } );
}

DescribeTemplateDefinitionOutcome QuickSightClient::DescribeTemplateDefinition(const DescribeTemplateDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplateDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateDefinition", "Required field: AwsAccountId, is not set");
    return DescribeTemplateDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateDefinition", "Required field: TemplateId, is not set");
    return DescribeTemplateDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplateDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/definition");
  return DescribeTemplateDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplateDefinitionOutcomeCallable QuickSightClient::DescribeTemplateDefinitionCallable(const DescribeTemplateDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTemplateDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTemplateDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeTemplateDefinitionAsync(const DescribeTemplateDefinitionRequest& request, const DescribeTemplateDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTemplateDefinition(request), context);
    } );
}

DescribeTemplatePermissionsOutcome QuickSightClient::DescribeTemplatePermissions(const DescribeTemplatePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplatePermissions", "Required field: AwsAccountId, is not set");
    return DescribeTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplatePermissions", "Required field: TemplateId, is not set");
    return DescribeTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeTemplatePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplatePermissionsOutcomeCallable QuickSightClient::DescribeTemplatePermissionsCallable(const DescribeTemplatePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTemplatePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTemplatePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeTemplatePermissionsAsync(const DescribeTemplatePermissionsRequest& request, const DescribeTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTemplatePermissions(request), context);
    } );
}

DescribeThemeOutcome QuickSightClient::DescribeTheme(const DescribeThemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTheme", "Required field: AwsAccountId, is not set");
    return DescribeThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTheme", "Required field: ThemeId, is not set");
    return DescribeThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  return DescribeThemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThemeOutcomeCallable QuickSightClient::DescribeThemeCallable(const DescribeThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeThemeAsync(const DescribeThemeRequest& request, const DescribeThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTheme(request), context);
    } );
}

DescribeThemeAliasOutcome QuickSightClient::DescribeThemeAlias(const DescribeThemeAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemeAlias", "Required field: AwsAccountId, is not set");
    return DescribeThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemeAlias", "Required field: ThemeId, is not set");
    return DescribeThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemeAlias", "Required field: AliasName, is not set");
    return DescribeThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return DescribeThemeAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThemeAliasOutcomeCallable QuickSightClient::DescribeThemeAliasCallable(const DescribeThemeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThemeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThemeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeThemeAliasAsync(const DescribeThemeAliasRequest& request, const DescribeThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeThemeAlias(request), context);
    } );
}

DescribeThemePermissionsOutcome QuickSightClient::DescribeThemePermissions(const DescribeThemePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemePermissions", "Required field: AwsAccountId, is not set");
    return DescribeThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemePermissions", "Required field: ThemeId, is not set");
    return DescribeThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeThemePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThemePermissionsOutcomeCallable QuickSightClient::DescribeThemePermissionsCallable(const DescribeThemePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThemePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThemePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeThemePermissionsAsync(const DescribeThemePermissionsRequest& request, const DescribeThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeThemePermissions(request), context);
    } );
}

DescribeUserOutcome QuickSightClient::DescribeUser(const DescribeUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: UserName, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: AwsAccountId, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: Namespace, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  return DescribeUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcomeCallable QuickSightClient::DescribeUserCallable(const DescribeUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUser(request), context);
    } );
}

GenerateEmbedUrlForAnonymousUserOutcome QuickSightClient::GenerateEmbedUrlForAnonymousUser(const GenerateEmbedUrlForAnonymousUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateEmbedUrlForAnonymousUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateEmbedUrlForAnonymousUser", "Required field: AwsAccountId, is not set");
    return GenerateEmbedUrlForAnonymousUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateEmbedUrlForAnonymousUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url/anonymous-user");
  return GenerateEmbedUrlForAnonymousUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateEmbedUrlForAnonymousUserOutcomeCallable QuickSightClient::GenerateEmbedUrlForAnonymousUserCallable(const GenerateEmbedUrlForAnonymousUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateEmbedUrlForAnonymousUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateEmbedUrlForAnonymousUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::GenerateEmbedUrlForAnonymousUserAsync(const GenerateEmbedUrlForAnonymousUserRequest& request, const GenerateEmbedUrlForAnonymousUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateEmbedUrlForAnonymousUser(request), context);
    } );
}

GenerateEmbedUrlForRegisteredUserOutcome QuickSightClient::GenerateEmbedUrlForRegisteredUser(const GenerateEmbedUrlForRegisteredUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateEmbedUrlForRegisteredUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateEmbedUrlForRegisteredUser", "Required field: AwsAccountId, is not set");
    return GenerateEmbedUrlForRegisteredUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateEmbedUrlForRegisteredUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url/registered-user");
  return GenerateEmbedUrlForRegisteredUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateEmbedUrlForRegisteredUserOutcomeCallable QuickSightClient::GenerateEmbedUrlForRegisteredUserCallable(const GenerateEmbedUrlForRegisteredUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateEmbedUrlForRegisteredUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateEmbedUrlForRegisteredUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::GenerateEmbedUrlForRegisteredUserAsync(const GenerateEmbedUrlForRegisteredUserRequest& request, const GenerateEmbedUrlForRegisteredUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateEmbedUrlForRegisteredUser(request), context);
    } );
}

GetDashboardEmbedUrlOutcome QuickSightClient::GetDashboardEmbedUrl(const GetDashboardEmbedUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDashboardEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDashboardEmbedUrl", "Required field: AwsAccountId, is not set");
    return GetDashboardEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDashboardEmbedUrl", "Required field: DashboardId, is not set");
    return GetDashboardEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.IdentityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDashboardEmbedUrl", "Required field: IdentityType, is not set");
    return GetDashboardEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDashboardEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url");
  return GetDashboardEmbedUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDashboardEmbedUrlOutcomeCallable QuickSightClient::GetDashboardEmbedUrlCallable(const GetDashboardEmbedUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDashboardEmbedUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDashboardEmbedUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::GetDashboardEmbedUrlAsync(const GetDashboardEmbedUrlRequest& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDashboardEmbedUrl(request), context);
    } );
}

GetSessionEmbedUrlOutcome QuickSightClient::GetSessionEmbedUrl(const GetSessionEmbedUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSessionEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionEmbedUrl", "Required field: AwsAccountId, is not set");
    return GetSessionEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSessionEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/session-embed-url");
  return GetSessionEmbedUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSessionEmbedUrlOutcomeCallable QuickSightClient::GetSessionEmbedUrlCallable(const GetSessionEmbedUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSessionEmbedUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSessionEmbedUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::GetSessionEmbedUrlAsync(const GetSessionEmbedUrlRequest& request, const GetSessionEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSessionEmbedUrl(request), context);
    } );
}

ListAnalysesOutcome QuickSightClient::ListAnalyses(const ListAnalysesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAnalyses", "Required field: AwsAccountId, is not set");
    return ListAnalysesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses");
  return ListAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAnalysesOutcomeCallable QuickSightClient::ListAnalysesCallable(const ListAnalysesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnalysesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnalyses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListAnalysesAsync(const ListAnalysesRequest& request, const ListAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAnalyses(request), context);
    } );
}

ListDashboardVersionsOutcome QuickSightClient::ListDashboardVersions(const ListDashboardVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDashboardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboardVersions", "Required field: AwsAccountId, is not set");
    return ListDashboardVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboardVersions", "Required field: DashboardId, is not set");
    return ListDashboardVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDashboardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListDashboardVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDashboardVersionsOutcomeCallable QuickSightClient::ListDashboardVersionsCallable(const ListDashboardVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDashboardVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDashboardVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListDashboardVersionsAsync(const ListDashboardVersionsRequest& request, const ListDashboardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDashboardVersions(request), context);
    } );
}

ListDashboardsOutcome QuickSightClient::ListDashboards(const ListDashboardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboards", "Required field: AwsAccountId, is not set");
    return ListDashboardsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards");
  return ListDashboardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDashboardsOutcomeCallable QuickSightClient::ListDashboardsCallable(const ListDashboardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDashboardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDashboards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListDashboardsAsync(const ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDashboards(request), context);
    } );
}

ListDataSetsOutcome QuickSightClient::ListDataSets(const ListDataSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSets", "Required field: AwsAccountId, is not set");
    return ListDataSetsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets");
  return ListDataSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSetsOutcomeCallable QuickSightClient::ListDataSetsCallable(const ListDataSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListDataSetsAsync(const ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDataSets(request), context);
    } );
}

ListDataSourcesOutcome QuickSightClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: AwsAccountId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
  return ListDataSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSourcesOutcomeCallable QuickSightClient::ListDataSourcesCallable(const ListDataSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListDataSourcesAsync(const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDataSources(request), context);
    } );
}

ListFolderMembersOutcome QuickSightClient::ListFolderMembers(const ListFolderMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFolderMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolderMembers", "Required field: AwsAccountId, is not set");
    return ListFolderMembersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolderMembers", "Required field: FolderId, is not set");
    return ListFolderMembersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFolderMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  return ListFolderMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFolderMembersOutcomeCallable QuickSightClient::ListFolderMembersCallable(const ListFolderMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFolderMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFolderMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListFolderMembersAsync(const ListFolderMembersRequest& request, const ListFolderMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFolderMembers(request), context);
    } );
}

ListFoldersOutcome QuickSightClient::ListFolders(const ListFoldersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolders", "Required field: AwsAccountId, is not set");
    return ListFoldersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders");
  return ListFoldersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFoldersOutcomeCallable QuickSightClient::ListFoldersCallable(const ListFoldersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFoldersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFolders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListFoldersAsync(const ListFoldersRequest& request, const ListFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFolders(request), context);
    } );
}

ListGroupMembershipsOutcome QuickSightClient::ListGroupMemberships(const ListGroupMembershipsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroupMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupMemberships", "Required field: GroupName, is not set");
    return ListGroupMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupMemberships", "Required field: AwsAccountId, is not set");
    return ListGroupMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupMemberships", "Required field: Namespace, is not set");
    return ListGroupMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroupMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  return ListGroupMembershipsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupMembershipsOutcomeCallable QuickSightClient::ListGroupMembershipsCallable(const ListGroupMembershipsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupMembershipsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupMemberships(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListGroupMembershipsAsync(const ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGroupMemberships(request), context);
    } );
}

ListGroupsOutcome QuickSightClient::ListGroups(const ListGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: AwsAccountId, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: Namespace, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  return ListGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcomeCallable QuickSightClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGroups(request), context);
    } );
}

ListIAMPolicyAssignmentsOutcome QuickSightClient::ListIAMPolicyAssignments(const ListIAMPolicyAssignmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIAMPolicyAssignments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignments", "Required field: AwsAccountId, is not set");
    return ListIAMPolicyAssignmentsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignments", "Required field: Namespace, is not set");
    return ListIAMPolicyAssignmentsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIAMPolicyAssignments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments");
  return ListIAMPolicyAssignmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIAMPolicyAssignmentsOutcomeCallable QuickSightClient::ListIAMPolicyAssignmentsCallable(const ListIAMPolicyAssignmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIAMPolicyAssignmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIAMPolicyAssignments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListIAMPolicyAssignmentsAsync(const ListIAMPolicyAssignmentsRequest& request, const ListIAMPolicyAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIAMPolicyAssignments(request), context);
    } );
}

ListIAMPolicyAssignmentsForUserOutcome QuickSightClient::ListIAMPolicyAssignmentsForUser(const ListIAMPolicyAssignmentsForUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIAMPolicyAssignmentsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignmentsForUser", "Required field: AwsAccountId, is not set");
    return ListIAMPolicyAssignmentsForUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignmentsForUser", "Required field: UserName, is not set");
    return ListIAMPolicyAssignmentsForUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignmentsForUser", "Required field: Namespace, is not set");
    return ListIAMPolicyAssignmentsForUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIAMPolicyAssignmentsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments");
  return ListIAMPolicyAssignmentsForUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIAMPolicyAssignmentsForUserOutcomeCallable QuickSightClient::ListIAMPolicyAssignmentsForUserCallable(const ListIAMPolicyAssignmentsForUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIAMPolicyAssignmentsForUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIAMPolicyAssignmentsForUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListIAMPolicyAssignmentsForUserAsync(const ListIAMPolicyAssignmentsForUserRequest& request, const ListIAMPolicyAssignmentsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIAMPolicyAssignmentsForUser(request), context);
    } );
}

ListIngestionsOutcome QuickSightClient::ListIngestions(const ListIngestionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIngestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: DataSetId, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: AwsAccountId, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIngestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions");
  return ListIngestionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIngestionsOutcomeCallable QuickSightClient::ListIngestionsCallable(const ListIngestionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIngestionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIngestions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListIngestionsAsync(const ListIngestionsRequest& request, const ListIngestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIngestions(request), context);
    } );
}

ListNamespacesOutcome QuickSightClient::ListNamespaces(const ListNamespacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNamespaces", "Required field: AwsAccountId, is not set");
    return ListNamespacesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces");
  return ListNamespacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNamespacesOutcomeCallable QuickSightClient::ListNamespacesCallable(const ListNamespacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNamespacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNamespaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNamespaces(request), context);
    } );
}

ListTagsForResourceOutcome QuickSightClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable QuickSightClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTemplateAliasesOutcome QuickSightClient::ListTemplateAliases(const ListTemplateAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateAliases", "Required field: AwsAccountId, is not set");
    return ListTemplateAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateAliases", "Required field: TemplateId, is not set");
    return ListTemplateAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
  return ListTemplateAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateAliasesOutcomeCallable QuickSightClient::ListTemplateAliasesCallable(const ListTemplateAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplateAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplateAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListTemplateAliasesAsync(const ListTemplateAliasesRequest& request, const ListTemplateAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTemplateAliases(request), context);
    } );
}

ListTemplateVersionsOutcome QuickSightClient::ListTemplateVersions(const ListTemplateVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: AwsAccountId, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: TemplateId, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateVersionsOutcomeCallable QuickSightClient::ListTemplateVersionsCallable(const ListTemplateVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplateVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListTemplateVersionsAsync(const ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTemplateVersions(request), context);
    } );
}

ListTemplatesOutcome QuickSightClient::ListTemplates(const ListTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplates", "Required field: AwsAccountId, is not set");
    return ListTemplatesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  return ListTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplatesOutcomeCallable QuickSightClient::ListTemplatesCallable(const ListTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTemplates(request), context);
    } );
}

ListThemeAliasesOutcome QuickSightClient::ListThemeAliases(const ListThemeAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThemeAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeAliases", "Required field: AwsAccountId, is not set");
    return ListThemeAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeAliases", "Required field: ThemeId, is not set");
    return ListThemeAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThemeAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
  return ListThemeAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemeAliasesOutcomeCallable QuickSightClient::ListThemeAliasesCallable(const ListThemeAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThemeAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThemeAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListThemeAliasesAsync(const ListThemeAliasesRequest& request, const ListThemeAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThemeAliases(request), context);
    } );
}

ListThemeVersionsOutcome QuickSightClient::ListThemeVersions(const ListThemeVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThemeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeVersions", "Required field: AwsAccountId, is not set");
    return ListThemeVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeVersions", "Required field: ThemeId, is not set");
    return ListThemeVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThemeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListThemeVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemeVersionsOutcomeCallable QuickSightClient::ListThemeVersionsCallable(const ListThemeVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThemeVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThemeVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListThemeVersionsAsync(const ListThemeVersionsRequest& request, const ListThemeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThemeVersions(request), context);
    } );
}

ListThemesOutcome QuickSightClient::ListThemes(const ListThemesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThemes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemes", "Required field: AwsAccountId, is not set");
    return ListThemesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThemes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes");
  return ListThemesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemesOutcomeCallable QuickSightClient::ListThemesCallable(const ListThemesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThemesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThemes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListThemesAsync(const ListThemesRequest& request, const ListThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThemes(request), context);
    } );
}

ListUserGroupsOutcome QuickSightClient::ListUserGroups(const ListUserGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: UserName, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: AwsAccountId, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: Namespace, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  return ListUserGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserGroupsOutcomeCallable QuickSightClient::ListUserGroupsCallable(const ListUserGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListUserGroupsAsync(const ListUserGroupsRequest& request, const ListUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUserGroups(request), context);
    } );
}

ListUsersOutcome QuickSightClient::ListUsers(const ListUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: AwsAccountId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: Namespace, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  return ListUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcomeCallable QuickSightClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUsers(request), context);
    } );
}

RegisterUserOutcome QuickSightClient::RegisterUser(const RegisterUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterUser", "Required field: AwsAccountId, is not set");
    return RegisterUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterUser", "Required field: Namespace, is not set");
    return RegisterUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  return RegisterUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterUserOutcomeCallable QuickSightClient::RegisterUserCallable(const RegisterUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::RegisterUserAsync(const RegisterUserRequest& request, const RegisterUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterUser(request), context);
    } );
}

RestoreAnalysisOutcome QuickSightClient::RestoreAnalysis(const RestoreAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreAnalysis", "Required field: AwsAccountId, is not set");
    return RestoreAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreAnalysis", "Required field: AnalysisId, is not set");
    return RestoreAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/restore/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return RestoreAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreAnalysisOutcomeCallable QuickSightClient::RestoreAnalysisCallable(const RestoreAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::RestoreAnalysisAsync(const RestoreAnalysisRequest& request, const RestoreAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreAnalysis(request), context);
    } );
}

SearchAnalysesOutcome QuickSightClient::SearchAnalyses(const SearchAnalysesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchAnalyses", "Required field: AwsAccountId, is not set");
    return SearchAnalysesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/analyses");
  return SearchAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchAnalysesOutcomeCallable QuickSightClient::SearchAnalysesCallable(const SearchAnalysesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchAnalysesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchAnalyses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::SearchAnalysesAsync(const SearchAnalysesRequest& request, const SearchAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchAnalyses(request), context);
    } );
}

SearchDashboardsOutcome QuickSightClient::SearchDashboards(const SearchDashboardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDashboards", "Required field: AwsAccountId, is not set");
    return SearchDashboardsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/dashboards");
  return SearchDashboardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDashboardsOutcomeCallable QuickSightClient::SearchDashboardsCallable(const SearchDashboardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDashboardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDashboards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::SearchDashboardsAsync(const SearchDashboardsRequest& request, const SearchDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchDashboards(request), context);
    } );
}

SearchDataSetsOutcome QuickSightClient::SearchDataSets(const SearchDataSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDataSets", "Required field: AwsAccountId, is not set");
    return SearchDataSetsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/data-sets");
  return SearchDataSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDataSetsOutcomeCallable QuickSightClient::SearchDataSetsCallable(const SearchDataSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDataSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDataSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::SearchDataSetsAsync(const SearchDataSetsRequest& request, const SearchDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchDataSets(request), context);
    } );
}

SearchDataSourcesOutcome QuickSightClient::SearchDataSources(const SearchDataSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDataSources", "Required field: AwsAccountId, is not set");
    return SearchDataSourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/data-sources");
  return SearchDataSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDataSourcesOutcomeCallable QuickSightClient::SearchDataSourcesCallable(const SearchDataSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDataSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDataSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::SearchDataSourcesAsync(const SearchDataSourcesRequest& request, const SearchDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchDataSources(request), context);
    } );
}

SearchFoldersOutcome QuickSightClient::SearchFolders(const SearchFoldersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchFolders", "Required field: AwsAccountId, is not set");
    return SearchFoldersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/folders");
  return SearchFoldersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchFoldersOutcomeCallable QuickSightClient::SearchFoldersCallable(const SearchFoldersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchFoldersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchFolders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::SearchFoldersAsync(const SearchFoldersRequest& request, const SearchFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchFolders(request), context);
    } );
}

SearchGroupsOutcome QuickSightClient::SearchGroups(const SearchGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchGroups", "Required field: AwsAccountId, is not set");
    return SearchGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchGroups", "Required field: Namespace, is not set");
    return SearchGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups-search");
  return SearchGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchGroupsOutcomeCallable QuickSightClient::SearchGroupsCallable(const SearchGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::SearchGroupsAsync(const SearchGroupsRequest& request, const SearchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchGroups(request), context);
    } );
}

TagResourceOutcome QuickSightClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable QuickSightClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome QuickSightClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable QuickSightClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAccountCustomizationOutcome QuickSightClient::UpdateAccountCustomization(const UpdateAccountCustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountCustomization", "Required field: AwsAccountId, is not set");
    return UpdateAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  return UpdateAccountCustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountCustomizationOutcomeCallable QuickSightClient::UpdateAccountCustomizationCallable(const UpdateAccountCustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountCustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountCustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateAccountCustomizationAsync(const UpdateAccountCustomizationRequest& request, const UpdateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAccountCustomization(request), context);
    } );
}

UpdateAccountSettingsOutcome QuickSightClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountSettings", "Required field: AwsAccountId, is not set");
    return UpdateAccountSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return UpdateAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountSettingsOutcomeCallable QuickSightClient::UpdateAccountSettingsCallable(const UpdateAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateAccountSettingsAsync(const UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAccountSettings(request), context);
    } );
}

UpdateAnalysisOutcome QuickSightClient::UpdateAnalysis(const UpdateAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysis", "Required field: AwsAccountId, is not set");
    return UpdateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysis", "Required field: AnalysisId, is not set");
    return UpdateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return UpdateAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnalysisOutcomeCallable QuickSightClient::UpdateAnalysisCallable(const UpdateAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateAnalysisAsync(const UpdateAnalysisRequest& request, const UpdateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAnalysis(request), context);
    } );
}

UpdateAnalysisPermissionsOutcome QuickSightClient::UpdateAnalysisPermissions(const UpdateAnalysisPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisPermissions", "Required field: AwsAccountId, is not set");
    return UpdateAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisPermissions", "Required field: AnalysisId, is not set");
    return UpdateAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateAnalysisPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnalysisPermissionsOutcomeCallable QuickSightClient::UpdateAnalysisPermissionsCallable(const UpdateAnalysisPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnalysisPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnalysisPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateAnalysisPermissionsAsync(const UpdateAnalysisPermissionsRequest& request, const UpdateAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAnalysisPermissions(request), context);
    } );
}

UpdateDashboardOutcome QuickSightClient::UpdateDashboard(const UpdateDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: AwsAccountId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: DashboardId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  return UpdateDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardOutcomeCallable QuickSightClient::UpdateDashboardCallable(const UpdateDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateDashboardAsync(const UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDashboard(request), context);
    } );
}

UpdateDashboardPermissionsOutcome QuickSightClient::UpdateDashboardPermissions(const UpdateDashboardPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPermissions", "Required field: AwsAccountId, is not set");
    return UpdateDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPermissions", "Required field: DashboardId, is not set");
    return UpdateDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateDashboardPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardPermissionsOutcomeCallable QuickSightClient::UpdateDashboardPermissionsCallable(const UpdateDashboardPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDashboardPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDashboardPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateDashboardPermissionsAsync(const UpdateDashboardPermissionsRequest& request, const UpdateDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDashboardPermissions(request), context);
    } );
}

UpdateDashboardPublishedVersionOutcome QuickSightClient::UpdateDashboardPublishedVersion(const UpdateDashboardPublishedVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboardPublishedVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: AwsAccountId, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: DashboardId, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: VersionNumber, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboardPublishedVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  return UpdateDashboardPublishedVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardPublishedVersionOutcomeCallable QuickSightClient::UpdateDashboardPublishedVersionCallable(const UpdateDashboardPublishedVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDashboardPublishedVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDashboardPublishedVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateDashboardPublishedVersionAsync(const UpdateDashboardPublishedVersionRequest& request, const UpdateDashboardPublishedVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDashboardPublishedVersion(request), context);
    } );
}

UpdateDataSetOutcome QuickSightClient::UpdateDataSet(const UpdateDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: AwsAccountId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: DataSetId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  return UpdateDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSetOutcomeCallable QuickSightClient::UpdateDataSetCallable(const UpdateDataSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateDataSetAsync(const UpdateDataSetRequest& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDataSet(request), context);
    } );
}

UpdateDataSetPermissionsOutcome QuickSightClient::UpdateDataSetPermissions(const UpdateDataSetPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSetPermissions", "Required field: AwsAccountId, is not set");
    return UpdateDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSetPermissions", "Required field: DataSetId, is not set");
    return UpdateDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateDataSetPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSetPermissionsOutcomeCallable QuickSightClient::UpdateDataSetPermissionsCallable(const UpdateDataSetPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSetPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSetPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateDataSetPermissionsAsync(const UpdateDataSetPermissionsRequest& request, const UpdateDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDataSetPermissions(request), context);
    } );
}

UpdateDataSourceOutcome QuickSightClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: AwsAccountId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DataSourceId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  return UpdateDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSourceOutcomeCallable QuickSightClient::UpdateDataSourceCallable(const UpdateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDataSource(request), context);
    } );
}

UpdateDataSourcePermissionsOutcome QuickSightClient::UpdateDataSourcePermissions(const UpdateDataSourcePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSourcePermissions", "Required field: AwsAccountId, is not set");
    return UpdateDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSourcePermissions", "Required field: DataSourceId, is not set");
    return UpdateDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateDataSourcePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSourcePermissionsOutcomeCallable QuickSightClient::UpdateDataSourcePermissionsCallable(const UpdateDataSourcePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSourcePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSourcePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateDataSourcePermissionsAsync(const UpdateDataSourcePermissionsRequest& request, const UpdateDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDataSourcePermissions(request), context);
    } );
}

UpdateFolderOutcome QuickSightClient::UpdateFolder(const UpdateFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: AwsAccountId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: FolderId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return UpdateFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFolderOutcomeCallable QuickSightClient::UpdateFolderCallable(const UpdateFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateFolderAsync(const UpdateFolderRequest& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFolder(request), context);
    } );
}

UpdateFolderPermissionsOutcome QuickSightClient::UpdateFolderPermissions(const UpdateFolderPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolderPermissions", "Required field: AwsAccountId, is not set");
    return UpdateFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolderPermissions", "Required field: FolderId, is not set");
    return UpdateFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateFolderPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFolderPermissionsOutcomeCallable QuickSightClient::UpdateFolderPermissionsCallable(const UpdateFolderPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFolderPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFolderPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateFolderPermissionsAsync(const UpdateFolderPermissionsRequest& request, const UpdateFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFolderPermissions(request), context);
    } );
}

UpdateGroupOutcome QuickSightClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: GroupName, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: AwsAccountId, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: Namespace, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  return UpdateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupOutcomeCallable QuickSightClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGroup(request), context);
    } );
}

UpdateIAMPolicyAssignmentOutcome QuickSightClient::UpdateIAMPolicyAssignment(const UpdateIAMPolicyAssignmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: Namespace, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssignmentName());
  return UpdateIAMPolicyAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateIAMPolicyAssignmentOutcomeCallable QuickSightClient::UpdateIAMPolicyAssignmentCallable(const UpdateIAMPolicyAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIAMPolicyAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIAMPolicyAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateIAMPolicyAssignmentAsync(const UpdateIAMPolicyAssignmentRequest& request, const UpdateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateIAMPolicyAssignment(request), context);
    } );
}

UpdateIpRestrictionOutcome QuickSightClient::UpdateIpRestriction(const UpdateIpRestrictionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIpRestriction", "Required field: AwsAccountId, is not set");
    return UpdateIpRestrictionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ip-restriction");
  return UpdateIpRestrictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIpRestrictionOutcomeCallable QuickSightClient::UpdateIpRestrictionCallable(const UpdateIpRestrictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIpRestrictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIpRestriction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateIpRestrictionAsync(const UpdateIpRestrictionRequest& request, const UpdateIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateIpRestriction(request), context);
    } );
}

UpdatePublicSharingSettingsOutcome QuickSightClient::UpdatePublicSharingSettings(const UpdatePublicSharingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePublicSharingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePublicSharingSettings", "Required field: AwsAccountId, is not set");
    return UpdatePublicSharingSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePublicSharingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/public-sharing-settings");
  return UpdatePublicSharingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePublicSharingSettingsOutcomeCallable QuickSightClient::UpdatePublicSharingSettingsCallable(const UpdatePublicSharingSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePublicSharingSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePublicSharingSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdatePublicSharingSettingsAsync(const UpdatePublicSharingSettingsRequest& request, const UpdatePublicSharingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePublicSharingSettings(request), context);
    } );
}

UpdateTemplateOutcome QuickSightClient::UpdateTemplate(const UpdateTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: AwsAccountId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: TemplateId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return UpdateTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateOutcomeCallable QuickSightClient::UpdateTemplateCallable(const UpdateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTemplate(request), context);
    } );
}

UpdateTemplateAliasOutcome QuickSightClient::UpdateTemplateAlias(const UpdateTemplateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateAlias", "Required field: AwsAccountId, is not set");
    return UpdateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateAlias", "Required field: TemplateId, is not set");
    return UpdateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateAlias", "Required field: AliasName, is not set");
    return UpdateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return UpdateTemplateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateAliasOutcomeCallable QuickSightClient::UpdateTemplateAliasCallable(const UpdateTemplateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateTemplateAliasAsync(const UpdateTemplateAliasRequest& request, const UpdateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTemplateAlias(request), context);
    } );
}

UpdateTemplatePermissionsOutcome QuickSightClient::UpdateTemplatePermissions(const UpdateTemplatePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplatePermissions", "Required field: AwsAccountId, is not set");
    return UpdateTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplatePermissions", "Required field: TemplateId, is not set");
    return UpdateTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateTemplatePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplatePermissionsOutcomeCallable QuickSightClient::UpdateTemplatePermissionsCallable(const UpdateTemplatePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplatePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplatePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateTemplatePermissionsAsync(const UpdateTemplatePermissionsRequest& request, const UpdateTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTemplatePermissions(request), context);
    } );
}

UpdateThemeOutcome QuickSightClient::UpdateTheme(const UpdateThemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: AwsAccountId, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: ThemeId, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  return UpdateThemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemeOutcomeCallable QuickSightClient::UpdateThemeCallable(const UpdateThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateThemeAsync(const UpdateThemeRequest& request, const UpdateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTheme(request), context);
    } );
}

UpdateThemeAliasOutcome QuickSightClient::UpdateThemeAlias(const UpdateThemeAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemeAlias", "Required field: AwsAccountId, is not set");
    return UpdateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemeAlias", "Required field: ThemeId, is not set");
    return UpdateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemeAlias", "Required field: AliasName, is not set");
    return UpdateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return UpdateThemeAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemeAliasOutcomeCallable QuickSightClient::UpdateThemeAliasCallable(const UpdateThemeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThemeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThemeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateThemeAliasAsync(const UpdateThemeAliasRequest& request, const UpdateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateThemeAlias(request), context);
    } );
}

UpdateThemePermissionsOutcome QuickSightClient::UpdateThemePermissions(const UpdateThemePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemePermissions", "Required field: AwsAccountId, is not set");
    return UpdateThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemePermissions", "Required field: ThemeId, is not set");
    return UpdateThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateThemePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemePermissionsOutcomeCallable QuickSightClient::UpdateThemePermissionsCallable(const UpdateThemePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThemePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThemePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateThemePermissionsAsync(const UpdateThemePermissionsRequest& request, const UpdateThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateThemePermissions(request), context);
    } );
}

UpdateUserOutcome QuickSightClient::UpdateUser(const UpdateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserName, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: AwsAccountId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: Namespace, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  return UpdateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserOutcomeCallable QuickSightClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateUser(request), context);
    } );
}

