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

#include <aws/quicksight/QuickSightClient.h>
#include <aws/quicksight/QuickSightEndpoint.h>
#include <aws/quicksight/QuickSightErrorMarshaller.h>
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
#include <aws/quicksight/model/DescribeAnalysisPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDashboardRequest.h>
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

static const char* SERVICE_NAME = "quicksight";
static const char* ALLOCATION_TAG = "QuickSightClient";

QuickSightClient::QuickSightClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

QuickSightClient::QuickSightClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

QuickSightClient::QuickSightClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

QuickSightClient::~QuickSightClient()
{
}

void QuickSightClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("QuickSight");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + QuickSightEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void QuickSightClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelIngestionOutcome QuickSightClient::CancelIngestion(const CancelIngestionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets/");
  uri.AddPathSegment(request.GetDataSetId());
  uri.AddPathSegments("/ingestions/");
  uri.AddPathSegment(request.GetIngestionId());
  return CancelIngestionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelIngestionOutcomeCallable QuickSightClient::CancelIngestionCallable(const CancelIngestionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelIngestionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelIngestion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCancelIngestionAsyncHelper(QuickSightClient const * const clientThis, const CancelIngestionRequest& request, const CancelIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelIngestion(request), context);
}

void QuickSightClient::CancelIngestionAsync(const CancelIngestionRequest& request, const CancelIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCancelIngestionAsyncHelper( this, request, handler, context ); } );
}

CreateAccountCustomizationOutcome QuickSightClient::CreateAccountCustomization(const CreateAccountCustomizationRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccountCustomization", "Required field: AwsAccountId, is not set");
    return CreateAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/customizations");
  return CreateAccountCustomizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountCustomizationOutcomeCallable QuickSightClient::CreateAccountCustomizationCallable(const CreateAccountCustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountCustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccountCustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateAccountCustomizationAsyncHelper(QuickSightClient const * const clientThis, const CreateAccountCustomizationRequest& request, const CreateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAccountCustomization(request), context);
}

void QuickSightClient::CreateAccountCustomizationAsync(const CreateAccountCustomizationRequest& request, const CreateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateAccountCustomizationAsyncHelper( this, request, handler, context ); } );
}

CreateAccountSubscriptionOutcome QuickSightClient::CreateAccountSubscription(const CreateAccountSubscriptionRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccountSubscription", "Required field: AwsAccountId, is not set");
    return CreateAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account/");
  uri.AddPathSegment(request.GetAwsAccountId());
  return CreateAccountSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountSubscriptionOutcomeCallable QuickSightClient::CreateAccountSubscriptionCallable(const CreateAccountSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccountSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateAccountSubscriptionAsyncHelper(QuickSightClient const * const clientThis, const CreateAccountSubscriptionRequest& request, const CreateAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAccountSubscription(request), context);
}

void QuickSightClient::CreateAccountSubscriptionAsync(const CreateAccountSubscriptionRequest& request, const CreateAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateAccountSubscriptionAsyncHelper( this, request, handler, context ); } );
}

CreateAnalysisOutcome QuickSightClient::CreateAnalysis(const CreateAnalysisRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/analyses/");
  uri.AddPathSegment(request.GetAnalysisId());
  return CreateAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnalysisOutcomeCallable QuickSightClient::CreateAnalysisCallable(const CreateAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateAnalysisAsyncHelper(QuickSightClient const * const clientThis, const CreateAnalysisRequest& request, const CreateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAnalysis(request), context);
}

void QuickSightClient::CreateAnalysisAsync(const CreateAnalysisRequest& request, const CreateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateAnalysisAsyncHelper( this, request, handler, context ); } );
}

CreateDashboardOutcome QuickSightClient::CreateDashboard(const CreateDashboardRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  return CreateDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDashboardOutcomeCallable QuickSightClient::CreateDashboardCallable(const CreateDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateDashboardAsyncHelper(QuickSightClient const * const clientThis, const CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDashboard(request), context);
}

void QuickSightClient::CreateDashboardAsync(const CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateDashboardAsyncHelper( this, request, handler, context ); } );
}

CreateDataSetOutcome QuickSightClient::CreateDataSet(const CreateDataSetRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSet", "Required field: AwsAccountId, is not set");
    return CreateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets");
  return CreateDataSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSetOutcomeCallable QuickSightClient::CreateDataSetCallable(const CreateDataSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateDataSetAsyncHelper(QuickSightClient const * const clientThis, const CreateDataSetRequest& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataSet(request), context);
}

void QuickSightClient::CreateDataSetAsync(const CreateDataSetRequest& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateDataSetAsyncHelper( this, request, handler, context ); } );
}

CreateDataSourceOutcome QuickSightClient::CreateDataSource(const CreateDataSourceRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: AwsAccountId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sources");
  return CreateDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSourceOutcomeCallable QuickSightClient::CreateDataSourceCallable(const CreateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateDataSourceAsyncHelper(QuickSightClient const * const clientThis, const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataSource(request), context);
}

void QuickSightClient::CreateDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateDataSourceAsyncHelper( this, request, handler, context ); } );
}

CreateFolderOutcome QuickSightClient::CreateFolder(const CreateFolderRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  return CreateFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFolderOutcomeCallable QuickSightClient::CreateFolderCallable(const CreateFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateFolderAsyncHelper(QuickSightClient const * const clientThis, const CreateFolderRequest& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFolder(request), context);
}

void QuickSightClient::CreateFolderAsync(const CreateFolderRequest& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateFolderAsyncHelper( this, request, handler, context ); } );
}

CreateFolderMembershipOutcome QuickSightClient::CreateFolderMembership(const CreateFolderMembershipRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  uri.AddPathSegments("/members/");
  uri.AddPathSegment(MemberTypeMapper::GetNameForMemberType(request.GetMemberType()));
  uri.AddPathSegment(request.GetMemberId());
  return CreateFolderMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateFolderMembershipOutcomeCallable QuickSightClient::CreateFolderMembershipCallable(const CreateFolderMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFolderMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFolderMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateFolderMembershipAsyncHelper(QuickSightClient const * const clientThis, const CreateFolderMembershipRequest& request, const CreateFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFolderMembership(request), context);
}

void QuickSightClient::CreateFolderMembershipAsync(const CreateFolderMembershipRequest& request, const CreateFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateFolderMembershipAsyncHelper( this, request, handler, context ); } );
}

CreateGroupOutcome QuickSightClient::CreateGroup(const CreateGroupRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups");
  return CreateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable QuickSightClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateGroupAsyncHelper(QuickSightClient const * const clientThis, const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGroup(request), context);
}

void QuickSightClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateGroupAsyncHelper( this, request, handler, context ); } );
}

CreateGroupMembershipOutcome QuickSightClient::CreateGroupMembership(const CreateGroupMembershipRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups/");
  uri.AddPathSegment(request.GetGroupName());
  uri.AddPathSegments("/members/");
  uri.AddPathSegment(request.GetMemberName());
  return CreateGroupMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupMembershipOutcomeCallable QuickSightClient::CreateGroupMembershipCallable(const CreateGroupMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroupMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateGroupMembershipAsyncHelper(QuickSightClient const * const clientThis, const CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGroupMembership(request), context);
}

void QuickSightClient::CreateGroupMembershipAsync(const CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateGroupMembershipAsyncHelper( this, request, handler, context ); } );
}

CreateIAMPolicyAssignmentOutcome QuickSightClient::CreateIAMPolicyAssignment(const CreateIAMPolicyAssignmentRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/iam-policy-assignments/");
  return CreateIAMPolicyAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIAMPolicyAssignmentOutcomeCallable QuickSightClient::CreateIAMPolicyAssignmentCallable(const CreateIAMPolicyAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIAMPolicyAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIAMPolicyAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateIAMPolicyAssignmentAsyncHelper(QuickSightClient const * const clientThis, const CreateIAMPolicyAssignmentRequest& request, const CreateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIAMPolicyAssignment(request), context);
}

void QuickSightClient::CreateIAMPolicyAssignmentAsync(const CreateIAMPolicyAssignmentRequest& request, const CreateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateIAMPolicyAssignmentAsyncHelper( this, request, handler, context ); } );
}

CreateIngestionOutcome QuickSightClient::CreateIngestion(const CreateIngestionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets/");
  uri.AddPathSegment(request.GetDataSetId());
  uri.AddPathSegments("/ingestions/");
  uri.AddPathSegment(request.GetIngestionId());
  return CreateIngestionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateIngestionOutcomeCallable QuickSightClient::CreateIngestionCallable(const CreateIngestionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIngestionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIngestion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateIngestionAsyncHelper(QuickSightClient const * const clientThis, const CreateIngestionRequest& request, const CreateIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIngestion(request), context);
}

void QuickSightClient::CreateIngestionAsync(const CreateIngestionRequest& request, const CreateIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateIngestionAsyncHelper( this, request, handler, context ); } );
}

CreateNamespaceOutcome QuickSightClient::CreateNamespace(const CreateNamespaceRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNamespace", "Required field: AwsAccountId, is not set");
    return CreateNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  return CreateNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNamespaceOutcomeCallable QuickSightClient::CreateNamespaceCallable(const CreateNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateNamespaceAsyncHelper(QuickSightClient const * const clientThis, const CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNamespace(request), context);
}

void QuickSightClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateNamespaceAsyncHelper( this, request, handler, context ); } );
}

CreateTemplateOutcome QuickSightClient::CreateTemplate(const CreateTemplateRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  return CreateTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTemplateOutcomeCallable QuickSightClient::CreateTemplateCallable(const CreateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateTemplateAsyncHelper(QuickSightClient const * const clientThis, const CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTemplate(request), context);
}

void QuickSightClient::CreateTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateTemplateAliasOutcome QuickSightClient::CreateTemplateAlias(const CreateTemplateAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetAliasName());
  return CreateTemplateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTemplateAliasOutcomeCallable QuickSightClient::CreateTemplateAliasCallable(const CreateTemplateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTemplateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTemplateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateTemplateAliasAsyncHelper(QuickSightClient const * const clientThis, const CreateTemplateAliasRequest& request, const CreateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTemplateAlias(request), context);
}

void QuickSightClient::CreateTemplateAliasAsync(const CreateTemplateAliasRequest& request, const CreateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateTemplateAliasAsyncHelper( this, request, handler, context ); } );
}

CreateThemeOutcome QuickSightClient::CreateTheme(const CreateThemeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  return CreateThemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThemeOutcomeCallable QuickSightClient::CreateThemeCallable(const CreateThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateThemeAsyncHelper(QuickSightClient const * const clientThis, const CreateThemeRequest& request, const CreateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTheme(request), context);
}

void QuickSightClient::CreateThemeAsync(const CreateThemeRequest& request, const CreateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateThemeAsyncHelper( this, request, handler, context ); } );
}

CreateThemeAliasOutcome QuickSightClient::CreateThemeAlias(const CreateThemeAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetAliasName());
  return CreateThemeAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThemeAliasOutcomeCallable QuickSightClient::CreateThemeAliasCallable(const CreateThemeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThemeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThemeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientCreateThemeAliasAsyncHelper(QuickSightClient const * const clientThis, const CreateThemeAliasRequest& request, const CreateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateThemeAlias(request), context);
}

void QuickSightClient::CreateThemeAliasAsync(const CreateThemeAliasRequest& request, const CreateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientCreateThemeAliasAsyncHelper( this, request, handler, context ); } );
}

DeleteAccountCustomizationOutcome QuickSightClient::DeleteAccountCustomization(const DeleteAccountCustomizationRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccountCustomization", "Required field: AwsAccountId, is not set");
    return DeleteAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/customizations");
  return DeleteAccountCustomizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountCustomizationOutcomeCallable QuickSightClient::DeleteAccountCustomizationCallable(const DeleteAccountCustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountCustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountCustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteAccountCustomizationAsyncHelper(QuickSightClient const * const clientThis, const DeleteAccountCustomizationRequest& request, const DeleteAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccountCustomization(request), context);
}

void QuickSightClient::DeleteAccountCustomizationAsync(const DeleteAccountCustomizationRequest& request, const DeleteAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteAccountCustomizationAsyncHelper( this, request, handler, context ); } );
}

DeleteAnalysisOutcome QuickSightClient::DeleteAnalysis(const DeleteAnalysisRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/analyses/");
  uri.AddPathSegment(request.GetAnalysisId());
  return DeleteAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnalysisOutcomeCallable QuickSightClient::DeleteAnalysisCallable(const DeleteAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteAnalysisAsyncHelper(QuickSightClient const * const clientThis, const DeleteAnalysisRequest& request, const DeleteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAnalysis(request), context);
}

void QuickSightClient::DeleteAnalysisAsync(const DeleteAnalysisRequest& request, const DeleteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteAnalysisAsyncHelper( this, request, handler, context ); } );
}

DeleteDashboardOutcome QuickSightClient::DeleteDashboard(const DeleteDashboardRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  return DeleteDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDashboardOutcomeCallable QuickSightClient::DeleteDashboardCallable(const DeleteDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteDashboardAsyncHelper(QuickSightClient const * const clientThis, const DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDashboard(request), context);
}

void QuickSightClient::DeleteDashboardAsync(const DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteDashboardAsyncHelper( this, request, handler, context ); } );
}

DeleteDataSetOutcome QuickSightClient::DeleteDataSet(const DeleteDataSetRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets/");
  uri.AddPathSegment(request.GetDataSetId());
  return DeleteDataSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSetOutcomeCallable QuickSightClient::DeleteDataSetCallable(const DeleteDataSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteDataSetAsyncHelper(QuickSightClient const * const clientThis, const DeleteDataSetRequest& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataSet(request), context);
}

void QuickSightClient::DeleteDataSetAsync(const DeleteDataSetRequest& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteDataSetAsyncHelper( this, request, handler, context ); } );
}

DeleteDataSourceOutcome QuickSightClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sources/");
  uri.AddPathSegment(request.GetDataSourceId());
  return DeleteDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSourceOutcomeCallable QuickSightClient::DeleteDataSourceCallable(const DeleteDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteDataSourceAsyncHelper(QuickSightClient const * const clientThis, const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataSource(request), context);
}

void QuickSightClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteDataSourceAsyncHelper( this, request, handler, context ); } );
}

DeleteFolderOutcome QuickSightClient::DeleteFolder(const DeleteFolderRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  return DeleteFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFolderOutcomeCallable QuickSightClient::DeleteFolderCallable(const DeleteFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteFolderAsyncHelper(QuickSightClient const * const clientThis, const DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFolder(request), context);
}

void QuickSightClient::DeleteFolderAsync(const DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteFolderAsyncHelper( this, request, handler, context ); } );
}

DeleteFolderMembershipOutcome QuickSightClient::DeleteFolderMembership(const DeleteFolderMembershipRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  uri.AddPathSegments("/members/");
  uri.AddPathSegment(MemberTypeMapper::GetNameForMemberType(request.GetMemberType()));
  uri.AddPathSegment(request.GetMemberId());
  return DeleteFolderMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFolderMembershipOutcomeCallable QuickSightClient::DeleteFolderMembershipCallable(const DeleteFolderMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFolderMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFolderMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteFolderMembershipAsyncHelper(QuickSightClient const * const clientThis, const DeleteFolderMembershipRequest& request, const DeleteFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFolderMembership(request), context);
}

void QuickSightClient::DeleteFolderMembershipAsync(const DeleteFolderMembershipRequest& request, const DeleteFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteFolderMembershipAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupOutcome QuickSightClient::DeleteGroup(const DeleteGroupRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups/");
  uri.AddPathSegment(request.GetGroupName());
  return DeleteGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcomeCallable QuickSightClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteGroupAsyncHelper(QuickSightClient const * const clientThis, const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroup(request), context);
}

void QuickSightClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupMembershipOutcome QuickSightClient::DeleteGroupMembership(const DeleteGroupMembershipRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups/");
  uri.AddPathSegment(request.GetGroupName());
  uri.AddPathSegments("/members/");
  uri.AddPathSegment(request.GetMemberName());
  return DeleteGroupMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupMembershipOutcomeCallable QuickSightClient::DeleteGroupMembershipCallable(const DeleteGroupMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroupMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteGroupMembershipAsyncHelper(QuickSightClient const * const clientThis, const DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroupMembership(request), context);
}

void QuickSightClient::DeleteGroupMembershipAsync(const DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteGroupMembershipAsyncHelper( this, request, handler, context ); } );
}

DeleteIAMPolicyAssignmentOutcome QuickSightClient::DeleteIAMPolicyAssignment(const DeleteIAMPolicyAssignmentRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespace/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/iam-policy-assignments/");
  uri.AddPathSegment(request.GetAssignmentName());
  return DeleteIAMPolicyAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIAMPolicyAssignmentOutcomeCallable QuickSightClient::DeleteIAMPolicyAssignmentCallable(const DeleteIAMPolicyAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIAMPolicyAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIAMPolicyAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteIAMPolicyAssignmentAsyncHelper(QuickSightClient const * const clientThis, const DeleteIAMPolicyAssignmentRequest& request, const DeleteIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIAMPolicyAssignment(request), context);
}

void QuickSightClient::DeleteIAMPolicyAssignmentAsync(const DeleteIAMPolicyAssignmentRequest& request, const DeleteIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteIAMPolicyAssignmentAsyncHelper( this, request, handler, context ); } );
}

DeleteNamespaceOutcome QuickSightClient::DeleteNamespace(const DeleteNamespaceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  return DeleteNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNamespaceOutcomeCallable QuickSightClient::DeleteNamespaceCallable(const DeleteNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteNamespaceAsyncHelper(QuickSightClient const * const clientThis, const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNamespace(request), context);
}

void QuickSightClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteNamespaceAsyncHelper( this, request, handler, context ); } );
}

DeleteTemplateOutcome QuickSightClient::DeleteTemplate(const DeleteTemplateRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  return DeleteTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTemplateOutcomeCallable QuickSightClient::DeleteTemplateCallable(const DeleteTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteTemplateAsyncHelper(QuickSightClient const * const clientThis, const DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTemplate(request), context);
}

void QuickSightClient::DeleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteTemplateAliasOutcome QuickSightClient::DeleteTemplateAlias(const DeleteTemplateAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetAliasName());
  return DeleteTemplateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTemplateAliasOutcomeCallable QuickSightClient::DeleteTemplateAliasCallable(const DeleteTemplateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTemplateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTemplateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteTemplateAliasAsyncHelper(QuickSightClient const * const clientThis, const DeleteTemplateAliasRequest& request, const DeleteTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTemplateAlias(request), context);
}

void QuickSightClient::DeleteTemplateAliasAsync(const DeleteTemplateAliasRequest& request, const DeleteTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteTemplateAliasAsyncHelper( this, request, handler, context ); } );
}

DeleteThemeOutcome QuickSightClient::DeleteTheme(const DeleteThemeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  return DeleteThemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThemeOutcomeCallable QuickSightClient::DeleteThemeCallable(const DeleteThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteThemeAsyncHelper(QuickSightClient const * const clientThis, const DeleteThemeRequest& request, const DeleteThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTheme(request), context);
}

void QuickSightClient::DeleteThemeAsync(const DeleteThemeRequest& request, const DeleteThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteThemeAsyncHelper( this, request, handler, context ); } );
}

DeleteThemeAliasOutcome QuickSightClient::DeleteThemeAlias(const DeleteThemeAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetAliasName());
  return DeleteThemeAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThemeAliasOutcomeCallable QuickSightClient::DeleteThemeAliasCallable(const DeleteThemeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThemeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThemeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteThemeAliasAsyncHelper(QuickSightClient const * const clientThis, const DeleteThemeAliasRequest& request, const DeleteThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteThemeAlias(request), context);
}

void QuickSightClient::DeleteThemeAliasAsync(const DeleteThemeAliasRequest& request, const DeleteThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteThemeAliasAsyncHelper( this, request, handler, context ); } );
}

DeleteUserOutcome QuickSightClient::DeleteUser(const DeleteUserRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetUserName());
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable QuickSightClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteUserAsyncHelper(QuickSightClient const * const clientThis, const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUser(request), context);
}

void QuickSightClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteUserAsyncHelper( this, request, handler, context ); } );
}

DeleteUserByPrincipalIdOutcome QuickSightClient::DeleteUserByPrincipalId(const DeleteUserByPrincipalIdRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/user-principals/");
  uri.AddPathSegment(request.GetPrincipalId());
  return DeleteUserByPrincipalIdOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserByPrincipalIdOutcomeCallable QuickSightClient::DeleteUserByPrincipalIdCallable(const DeleteUserByPrincipalIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserByPrincipalIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserByPrincipalId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDeleteUserByPrincipalIdAsyncHelper(QuickSightClient const * const clientThis, const DeleteUserByPrincipalIdRequest& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserByPrincipalId(request), context);
}

void QuickSightClient::DeleteUserByPrincipalIdAsync(const DeleteUserByPrincipalIdRequest& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDeleteUserByPrincipalIdAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountCustomizationOutcome QuickSightClient::DescribeAccountCustomization(const DescribeAccountCustomizationRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccountCustomization", "Required field: AwsAccountId, is not set");
    return DescribeAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/customizations");
  return DescribeAccountCustomizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountCustomizationOutcomeCallable QuickSightClient::DescribeAccountCustomizationCallable(const DescribeAccountCustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountCustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountCustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeAccountCustomizationAsyncHelper(QuickSightClient const * const clientThis, const DescribeAccountCustomizationRequest& request, const DescribeAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountCustomization(request), context);
}

void QuickSightClient::DescribeAccountCustomizationAsync(const DescribeAccountCustomizationRequest& request, const DescribeAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeAccountCustomizationAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountSettingsOutcome QuickSightClient::DescribeAccountSettings(const DescribeAccountSettingsRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccountSettings", "Required field: AwsAccountId, is not set");
    return DescribeAccountSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/settings");
  return DescribeAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountSettingsOutcomeCallable QuickSightClient::DescribeAccountSettingsCallable(const DescribeAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeAccountSettingsAsyncHelper(QuickSightClient const * const clientThis, const DescribeAccountSettingsRequest& request, const DescribeAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountSettings(request), context);
}

void QuickSightClient::DescribeAccountSettingsAsync(const DescribeAccountSettingsRequest& request, const DescribeAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeAccountSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountSubscriptionOutcome QuickSightClient::DescribeAccountSubscription(const DescribeAccountSubscriptionRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccountSubscription", "Required field: AwsAccountId, is not set");
    return DescribeAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account/");
  uri.AddPathSegment(request.GetAwsAccountId());
  return DescribeAccountSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountSubscriptionOutcomeCallable QuickSightClient::DescribeAccountSubscriptionCallable(const DescribeAccountSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeAccountSubscriptionAsyncHelper(QuickSightClient const * const clientThis, const DescribeAccountSubscriptionRequest& request, const DescribeAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountSubscription(request), context);
}

void QuickSightClient::DescribeAccountSubscriptionAsync(const DescribeAccountSubscriptionRequest& request, const DescribeAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeAccountSubscriptionAsyncHelper( this, request, handler, context ); } );
}

DescribeAnalysisOutcome QuickSightClient::DescribeAnalysis(const DescribeAnalysisRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/analyses/");
  uri.AddPathSegment(request.GetAnalysisId());
  return DescribeAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnalysisOutcomeCallable QuickSightClient::DescribeAnalysisCallable(const DescribeAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeAnalysisAsyncHelper(QuickSightClient const * const clientThis, const DescribeAnalysisRequest& request, const DescribeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAnalysis(request), context);
}

void QuickSightClient::DescribeAnalysisAsync(const DescribeAnalysisRequest& request, const DescribeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeAnalysisAsyncHelper( this, request, handler, context ); } );
}

DescribeAnalysisPermissionsOutcome QuickSightClient::DescribeAnalysisPermissions(const DescribeAnalysisPermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/analyses/");
  uri.AddPathSegment(request.GetAnalysisId());
  uri.AddPathSegments("/permissions");
  return DescribeAnalysisPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnalysisPermissionsOutcomeCallable QuickSightClient::DescribeAnalysisPermissionsCallable(const DescribeAnalysisPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnalysisPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnalysisPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeAnalysisPermissionsAsyncHelper(QuickSightClient const * const clientThis, const DescribeAnalysisPermissionsRequest& request, const DescribeAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAnalysisPermissions(request), context);
}

void QuickSightClient::DescribeAnalysisPermissionsAsync(const DescribeAnalysisPermissionsRequest& request, const DescribeAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeAnalysisPermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeDashboardOutcome QuickSightClient::DescribeDashboard(const DescribeDashboardRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  return DescribeDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDashboardOutcomeCallable QuickSightClient::DescribeDashboardCallable(const DescribeDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeDashboardAsyncHelper(QuickSightClient const * const clientThis, const DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDashboard(request), context);
}

void QuickSightClient::DescribeDashboardAsync(const DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeDashboardAsyncHelper( this, request, handler, context ); } );
}

DescribeDashboardPermissionsOutcome QuickSightClient::DescribeDashboardPermissions(const DescribeDashboardPermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  uri.AddPathSegments("/permissions");
  return DescribeDashboardPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDashboardPermissionsOutcomeCallable QuickSightClient::DescribeDashboardPermissionsCallable(const DescribeDashboardPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDashboardPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDashboardPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeDashboardPermissionsAsyncHelper(QuickSightClient const * const clientThis, const DescribeDashboardPermissionsRequest& request, const DescribeDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDashboardPermissions(request), context);
}

void QuickSightClient::DescribeDashboardPermissionsAsync(const DescribeDashboardPermissionsRequest& request, const DescribeDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeDashboardPermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeDataSetOutcome QuickSightClient::DescribeDataSet(const DescribeDataSetRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets/");
  uri.AddPathSegment(request.GetDataSetId());
  return DescribeDataSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSetOutcomeCallable QuickSightClient::DescribeDataSetCallable(const DescribeDataSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeDataSetAsyncHelper(QuickSightClient const * const clientThis, const DescribeDataSetRequest& request, const DescribeDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataSet(request), context);
}

void QuickSightClient::DescribeDataSetAsync(const DescribeDataSetRequest& request, const DescribeDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeDataSetAsyncHelper( this, request, handler, context ); } );
}

DescribeDataSetPermissionsOutcome QuickSightClient::DescribeDataSetPermissions(const DescribeDataSetPermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets/");
  uri.AddPathSegment(request.GetDataSetId());
  uri.AddPathSegments("/permissions");
  return DescribeDataSetPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSetPermissionsOutcomeCallable QuickSightClient::DescribeDataSetPermissionsCallable(const DescribeDataSetPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSetPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSetPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeDataSetPermissionsAsyncHelper(QuickSightClient const * const clientThis, const DescribeDataSetPermissionsRequest& request, const DescribeDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataSetPermissions(request), context);
}

void QuickSightClient::DescribeDataSetPermissionsAsync(const DescribeDataSetPermissionsRequest& request, const DescribeDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeDataSetPermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeDataSourceOutcome QuickSightClient::DescribeDataSource(const DescribeDataSourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sources/");
  uri.AddPathSegment(request.GetDataSourceId());
  return DescribeDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSourceOutcomeCallable QuickSightClient::DescribeDataSourceCallable(const DescribeDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeDataSourceAsyncHelper(QuickSightClient const * const clientThis, const DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataSource(request), context);
}

void QuickSightClient::DescribeDataSourceAsync(const DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeDataSourceAsyncHelper( this, request, handler, context ); } );
}

DescribeDataSourcePermissionsOutcome QuickSightClient::DescribeDataSourcePermissions(const DescribeDataSourcePermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sources/");
  uri.AddPathSegment(request.GetDataSourceId());
  uri.AddPathSegments("/permissions");
  return DescribeDataSourcePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSourcePermissionsOutcomeCallable QuickSightClient::DescribeDataSourcePermissionsCallable(const DescribeDataSourcePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSourcePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSourcePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeDataSourcePermissionsAsyncHelper(QuickSightClient const * const clientThis, const DescribeDataSourcePermissionsRequest& request, const DescribeDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataSourcePermissions(request), context);
}

void QuickSightClient::DescribeDataSourcePermissionsAsync(const DescribeDataSourcePermissionsRequest& request, const DescribeDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeDataSourcePermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeFolderOutcome QuickSightClient::DescribeFolder(const DescribeFolderRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  return DescribeFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFolderOutcomeCallable QuickSightClient::DescribeFolderCallable(const DescribeFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeFolderAsyncHelper(QuickSightClient const * const clientThis, const DescribeFolderRequest& request, const DescribeFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFolder(request), context);
}

void QuickSightClient::DescribeFolderAsync(const DescribeFolderRequest& request, const DescribeFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeFolderAsyncHelper( this, request, handler, context ); } );
}

DescribeFolderPermissionsOutcome QuickSightClient::DescribeFolderPermissions(const DescribeFolderPermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  uri.AddPathSegments("/permissions");
  return DescribeFolderPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFolderPermissionsOutcomeCallable QuickSightClient::DescribeFolderPermissionsCallable(const DescribeFolderPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFolderPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFolderPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeFolderPermissionsAsyncHelper(QuickSightClient const * const clientThis, const DescribeFolderPermissionsRequest& request, const DescribeFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFolderPermissions(request), context);
}

void QuickSightClient::DescribeFolderPermissionsAsync(const DescribeFolderPermissionsRequest& request, const DescribeFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeFolderPermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeFolderResolvedPermissionsOutcome QuickSightClient::DescribeFolderResolvedPermissions(const DescribeFolderResolvedPermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  uri.AddPathSegments("/resolved-permissions");
  return DescribeFolderResolvedPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFolderResolvedPermissionsOutcomeCallable QuickSightClient::DescribeFolderResolvedPermissionsCallable(const DescribeFolderResolvedPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFolderResolvedPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFolderResolvedPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeFolderResolvedPermissionsAsyncHelper(QuickSightClient const * const clientThis, const DescribeFolderResolvedPermissionsRequest& request, const DescribeFolderResolvedPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFolderResolvedPermissions(request), context);
}

void QuickSightClient::DescribeFolderResolvedPermissionsAsync(const DescribeFolderResolvedPermissionsRequest& request, const DescribeFolderResolvedPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeFolderResolvedPermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeGroupOutcome QuickSightClient::DescribeGroup(const DescribeGroupRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups/");
  uri.AddPathSegment(request.GetGroupName());
  return DescribeGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupOutcomeCallable QuickSightClient::DescribeGroupCallable(const DescribeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeGroupAsyncHelper(QuickSightClient const * const clientThis, const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGroup(request), context);
}

void QuickSightClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeGroupMembershipOutcome QuickSightClient::DescribeGroupMembership(const DescribeGroupMembershipRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups/");
  uri.AddPathSegment(request.GetGroupName());
  uri.AddPathSegments("/members/");
  uri.AddPathSegment(request.GetMemberName());
  return DescribeGroupMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupMembershipOutcomeCallable QuickSightClient::DescribeGroupMembershipCallable(const DescribeGroupMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroupMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeGroupMembershipAsyncHelper(QuickSightClient const * const clientThis, const DescribeGroupMembershipRequest& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGroupMembership(request), context);
}

void QuickSightClient::DescribeGroupMembershipAsync(const DescribeGroupMembershipRequest& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeGroupMembershipAsyncHelper( this, request, handler, context ); } );
}

DescribeIAMPolicyAssignmentOutcome QuickSightClient::DescribeIAMPolicyAssignment(const DescribeIAMPolicyAssignmentRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/iam-policy-assignments/");
  uri.AddPathSegment(request.GetAssignmentName());
  return DescribeIAMPolicyAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIAMPolicyAssignmentOutcomeCallable QuickSightClient::DescribeIAMPolicyAssignmentCallable(const DescribeIAMPolicyAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIAMPolicyAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIAMPolicyAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeIAMPolicyAssignmentAsyncHelper(QuickSightClient const * const clientThis, const DescribeIAMPolicyAssignmentRequest& request, const DescribeIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeIAMPolicyAssignment(request), context);
}

void QuickSightClient::DescribeIAMPolicyAssignmentAsync(const DescribeIAMPolicyAssignmentRequest& request, const DescribeIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeIAMPolicyAssignmentAsyncHelper( this, request, handler, context ); } );
}

DescribeIngestionOutcome QuickSightClient::DescribeIngestion(const DescribeIngestionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets/");
  uri.AddPathSegment(request.GetDataSetId());
  uri.AddPathSegments("/ingestions/");
  uri.AddPathSegment(request.GetIngestionId());
  return DescribeIngestionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIngestionOutcomeCallable QuickSightClient::DescribeIngestionCallable(const DescribeIngestionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIngestionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIngestion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeIngestionAsyncHelper(QuickSightClient const * const clientThis, const DescribeIngestionRequest& request, const DescribeIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeIngestion(request), context);
}

void QuickSightClient::DescribeIngestionAsync(const DescribeIngestionRequest& request, const DescribeIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeIngestionAsyncHelper( this, request, handler, context ); } );
}

DescribeIpRestrictionOutcome QuickSightClient::DescribeIpRestriction(const DescribeIpRestrictionRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIpRestriction", "Required field: AwsAccountId, is not set");
    return DescribeIpRestrictionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/ip-restriction");
  return DescribeIpRestrictionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIpRestrictionOutcomeCallable QuickSightClient::DescribeIpRestrictionCallable(const DescribeIpRestrictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIpRestrictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIpRestriction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeIpRestrictionAsyncHelper(QuickSightClient const * const clientThis, const DescribeIpRestrictionRequest& request, const DescribeIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeIpRestriction(request), context);
}

void QuickSightClient::DescribeIpRestrictionAsync(const DescribeIpRestrictionRequest& request, const DescribeIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeIpRestrictionAsyncHelper( this, request, handler, context ); } );
}

DescribeNamespaceOutcome QuickSightClient::DescribeNamespace(const DescribeNamespaceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  return DescribeNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeNamespaceOutcomeCallable QuickSightClient::DescribeNamespaceCallable(const DescribeNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeNamespaceAsyncHelper(QuickSightClient const * const clientThis, const DescribeNamespaceRequest& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNamespace(request), context);
}

void QuickSightClient::DescribeNamespaceAsync(const DescribeNamespaceRequest& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeNamespaceAsyncHelper( this, request, handler, context ); } );
}

DescribeTemplateOutcome QuickSightClient::DescribeTemplate(const DescribeTemplateRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  return DescribeTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplateOutcomeCallable QuickSightClient::DescribeTemplateCallable(const DescribeTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeTemplateAsyncHelper(QuickSightClient const * const clientThis, const DescribeTemplateRequest& request, const DescribeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTemplate(request), context);
}

void QuickSightClient::DescribeTemplateAsync(const DescribeTemplateRequest& request, const DescribeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeTemplateAsyncHelper( this, request, handler, context ); } );
}

DescribeTemplateAliasOutcome QuickSightClient::DescribeTemplateAlias(const DescribeTemplateAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetAliasName());
  return DescribeTemplateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplateAliasOutcomeCallable QuickSightClient::DescribeTemplateAliasCallable(const DescribeTemplateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTemplateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTemplateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeTemplateAliasAsyncHelper(QuickSightClient const * const clientThis, const DescribeTemplateAliasRequest& request, const DescribeTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTemplateAlias(request), context);
}

void QuickSightClient::DescribeTemplateAliasAsync(const DescribeTemplateAliasRequest& request, const DescribeTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeTemplateAliasAsyncHelper( this, request, handler, context ); } );
}

DescribeTemplatePermissionsOutcome QuickSightClient::DescribeTemplatePermissions(const DescribeTemplatePermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  uri.AddPathSegments("/permissions");
  return DescribeTemplatePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplatePermissionsOutcomeCallable QuickSightClient::DescribeTemplatePermissionsCallable(const DescribeTemplatePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTemplatePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTemplatePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeTemplatePermissionsAsyncHelper(QuickSightClient const * const clientThis, const DescribeTemplatePermissionsRequest& request, const DescribeTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTemplatePermissions(request), context);
}

void QuickSightClient::DescribeTemplatePermissionsAsync(const DescribeTemplatePermissionsRequest& request, const DescribeTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeTemplatePermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeThemeOutcome QuickSightClient::DescribeTheme(const DescribeThemeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  return DescribeThemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThemeOutcomeCallable QuickSightClient::DescribeThemeCallable(const DescribeThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeThemeAsyncHelper(QuickSightClient const * const clientThis, const DescribeThemeRequest& request, const DescribeThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTheme(request), context);
}

void QuickSightClient::DescribeThemeAsync(const DescribeThemeRequest& request, const DescribeThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeThemeAsyncHelper( this, request, handler, context ); } );
}

DescribeThemeAliasOutcome QuickSightClient::DescribeThemeAlias(const DescribeThemeAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetAliasName());
  return DescribeThemeAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThemeAliasOutcomeCallable QuickSightClient::DescribeThemeAliasCallable(const DescribeThemeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThemeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThemeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeThemeAliasAsyncHelper(QuickSightClient const * const clientThis, const DescribeThemeAliasRequest& request, const DescribeThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeThemeAlias(request), context);
}

void QuickSightClient::DescribeThemeAliasAsync(const DescribeThemeAliasRequest& request, const DescribeThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeThemeAliasAsyncHelper( this, request, handler, context ); } );
}

DescribeThemePermissionsOutcome QuickSightClient::DescribeThemePermissions(const DescribeThemePermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  uri.AddPathSegments("/permissions");
  return DescribeThemePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThemePermissionsOutcomeCallable QuickSightClient::DescribeThemePermissionsCallable(const DescribeThemePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThemePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThemePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeThemePermissionsAsyncHelper(QuickSightClient const * const clientThis, const DescribeThemePermissionsRequest& request, const DescribeThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeThemePermissions(request), context);
}

void QuickSightClient::DescribeThemePermissionsAsync(const DescribeThemePermissionsRequest& request, const DescribeThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeThemePermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeUserOutcome QuickSightClient::DescribeUser(const DescribeUserRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetUserName());
  return DescribeUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcomeCallable QuickSightClient::DescribeUserCallable(const DescribeUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientDescribeUserAsyncHelper(QuickSightClient const * const clientThis, const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUser(request), context);
}

void QuickSightClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientDescribeUserAsyncHelper( this, request, handler, context ); } );
}

GenerateEmbedUrlForAnonymousUserOutcome QuickSightClient::GenerateEmbedUrlForAnonymousUser(const GenerateEmbedUrlForAnonymousUserRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateEmbedUrlForAnonymousUser", "Required field: AwsAccountId, is not set");
    return GenerateEmbedUrlForAnonymousUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/embed-url/anonymous-user");
  return GenerateEmbedUrlForAnonymousUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateEmbedUrlForAnonymousUserOutcomeCallable QuickSightClient::GenerateEmbedUrlForAnonymousUserCallable(const GenerateEmbedUrlForAnonymousUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateEmbedUrlForAnonymousUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateEmbedUrlForAnonymousUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientGenerateEmbedUrlForAnonymousUserAsyncHelper(QuickSightClient const * const clientThis, const GenerateEmbedUrlForAnonymousUserRequest& request, const GenerateEmbedUrlForAnonymousUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateEmbedUrlForAnonymousUser(request), context);
}

void QuickSightClient::GenerateEmbedUrlForAnonymousUserAsync(const GenerateEmbedUrlForAnonymousUserRequest& request, const GenerateEmbedUrlForAnonymousUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientGenerateEmbedUrlForAnonymousUserAsyncHelper( this, request, handler, context ); } );
}

GenerateEmbedUrlForRegisteredUserOutcome QuickSightClient::GenerateEmbedUrlForRegisteredUser(const GenerateEmbedUrlForRegisteredUserRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateEmbedUrlForRegisteredUser", "Required field: AwsAccountId, is not set");
    return GenerateEmbedUrlForRegisteredUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/embed-url/registered-user");
  return GenerateEmbedUrlForRegisteredUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateEmbedUrlForRegisteredUserOutcomeCallable QuickSightClient::GenerateEmbedUrlForRegisteredUserCallable(const GenerateEmbedUrlForRegisteredUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateEmbedUrlForRegisteredUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateEmbedUrlForRegisteredUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientGenerateEmbedUrlForRegisteredUserAsyncHelper(QuickSightClient const * const clientThis, const GenerateEmbedUrlForRegisteredUserRequest& request, const GenerateEmbedUrlForRegisteredUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateEmbedUrlForRegisteredUser(request), context);
}

void QuickSightClient::GenerateEmbedUrlForRegisteredUserAsync(const GenerateEmbedUrlForRegisteredUserRequest& request, const GenerateEmbedUrlForRegisteredUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientGenerateEmbedUrlForRegisteredUserAsyncHelper( this, request, handler, context ); } );
}

GetDashboardEmbedUrlOutcome QuickSightClient::GetDashboardEmbedUrl(const GetDashboardEmbedUrlRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  uri.AddPathSegments("/embed-url");
  return GetDashboardEmbedUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDashboardEmbedUrlOutcomeCallable QuickSightClient::GetDashboardEmbedUrlCallable(const GetDashboardEmbedUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDashboardEmbedUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDashboardEmbedUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientGetDashboardEmbedUrlAsyncHelper(QuickSightClient const * const clientThis, const GetDashboardEmbedUrlRequest& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDashboardEmbedUrl(request), context);
}

void QuickSightClient::GetDashboardEmbedUrlAsync(const GetDashboardEmbedUrlRequest& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientGetDashboardEmbedUrlAsyncHelper( this, request, handler, context ); } );
}

GetSessionEmbedUrlOutcome QuickSightClient::GetSessionEmbedUrl(const GetSessionEmbedUrlRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionEmbedUrl", "Required field: AwsAccountId, is not set");
    return GetSessionEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/session-embed-url");
  return GetSessionEmbedUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSessionEmbedUrlOutcomeCallable QuickSightClient::GetSessionEmbedUrlCallable(const GetSessionEmbedUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSessionEmbedUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSessionEmbedUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientGetSessionEmbedUrlAsyncHelper(QuickSightClient const * const clientThis, const GetSessionEmbedUrlRequest& request, const GetSessionEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSessionEmbedUrl(request), context);
}

void QuickSightClient::GetSessionEmbedUrlAsync(const GetSessionEmbedUrlRequest& request, const GetSessionEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientGetSessionEmbedUrlAsyncHelper( this, request, handler, context ); } );
}

ListAnalysesOutcome QuickSightClient::ListAnalyses(const ListAnalysesRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAnalyses", "Required field: AwsAccountId, is not set");
    return ListAnalysesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/analyses");
  return ListAnalysesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAnalysesOutcomeCallable QuickSightClient::ListAnalysesCallable(const ListAnalysesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnalysesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnalyses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListAnalysesAsyncHelper(QuickSightClient const * const clientThis, const ListAnalysesRequest& request, const ListAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAnalyses(request), context);
}

void QuickSightClient::ListAnalysesAsync(const ListAnalysesRequest& request, const ListAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListAnalysesAsyncHelper( this, request, handler, context ); } );
}

ListDashboardVersionsOutcome QuickSightClient::ListDashboardVersions(const ListDashboardVersionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  uri.AddPathSegments("/versions");
  return ListDashboardVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDashboardVersionsOutcomeCallable QuickSightClient::ListDashboardVersionsCallable(const ListDashboardVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDashboardVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDashboardVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListDashboardVersionsAsyncHelper(QuickSightClient const * const clientThis, const ListDashboardVersionsRequest& request, const ListDashboardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDashboardVersions(request), context);
}

void QuickSightClient::ListDashboardVersionsAsync(const ListDashboardVersionsRequest& request, const ListDashboardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListDashboardVersionsAsyncHelper( this, request, handler, context ); } );
}

ListDashboardsOutcome QuickSightClient::ListDashboards(const ListDashboardsRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboards", "Required field: AwsAccountId, is not set");
    return ListDashboardsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards");
  return ListDashboardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDashboardsOutcomeCallable QuickSightClient::ListDashboardsCallable(const ListDashboardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDashboardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDashboards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListDashboardsAsyncHelper(QuickSightClient const * const clientThis, const ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDashboards(request), context);
}

void QuickSightClient::ListDashboardsAsync(const ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListDashboardsAsyncHelper( this, request, handler, context ); } );
}

ListDataSetsOutcome QuickSightClient::ListDataSets(const ListDataSetsRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSets", "Required field: AwsAccountId, is not set");
    return ListDataSetsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets");
  return ListDataSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSetsOutcomeCallable QuickSightClient::ListDataSetsCallable(const ListDataSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListDataSetsAsyncHelper(QuickSightClient const * const clientThis, const ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataSets(request), context);
}

void QuickSightClient::ListDataSetsAsync(const ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListDataSetsAsyncHelper( this, request, handler, context ); } );
}

ListDataSourcesOutcome QuickSightClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: AwsAccountId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sources");
  return ListDataSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSourcesOutcomeCallable QuickSightClient::ListDataSourcesCallable(const ListDataSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListDataSourcesAsyncHelper(QuickSightClient const * const clientThis, const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataSources(request), context);
}

void QuickSightClient::ListDataSourcesAsync(const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListDataSourcesAsyncHelper( this, request, handler, context ); } );
}

ListFolderMembersOutcome QuickSightClient::ListFolderMembers(const ListFolderMembersRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  uri.AddPathSegments("/members");
  return ListFolderMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFolderMembersOutcomeCallable QuickSightClient::ListFolderMembersCallable(const ListFolderMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFolderMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFolderMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListFolderMembersAsyncHelper(QuickSightClient const * const clientThis, const ListFolderMembersRequest& request, const ListFolderMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFolderMembers(request), context);
}

void QuickSightClient::ListFolderMembersAsync(const ListFolderMembersRequest& request, const ListFolderMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListFolderMembersAsyncHelper( this, request, handler, context ); } );
}

ListFoldersOutcome QuickSightClient::ListFolders(const ListFoldersRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolders", "Required field: AwsAccountId, is not set");
    return ListFoldersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders");
  return ListFoldersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFoldersOutcomeCallable QuickSightClient::ListFoldersCallable(const ListFoldersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFoldersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFolders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListFoldersAsyncHelper(QuickSightClient const * const clientThis, const ListFoldersRequest& request, const ListFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFolders(request), context);
}

void QuickSightClient::ListFoldersAsync(const ListFoldersRequest& request, const ListFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListFoldersAsyncHelper( this, request, handler, context ); } );
}

ListGroupMembershipsOutcome QuickSightClient::ListGroupMemberships(const ListGroupMembershipsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups/");
  uri.AddPathSegment(request.GetGroupName());
  uri.AddPathSegments("/members");
  return ListGroupMembershipsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupMembershipsOutcomeCallable QuickSightClient::ListGroupMembershipsCallable(const ListGroupMembershipsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupMembershipsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupMemberships(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListGroupMembershipsAsyncHelper(QuickSightClient const * const clientThis, const ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroupMemberships(request), context);
}

void QuickSightClient::ListGroupMembershipsAsync(const ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListGroupMembershipsAsyncHelper( this, request, handler, context ); } );
}

ListGroupsOutcome QuickSightClient::ListGroups(const ListGroupsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups");
  return ListGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcomeCallable QuickSightClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListGroupsAsyncHelper(QuickSightClient const * const clientThis, const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroups(request), context);
}

void QuickSightClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListGroupsAsyncHelper( this, request, handler, context ); } );
}

ListIAMPolicyAssignmentsOutcome QuickSightClient::ListIAMPolicyAssignments(const ListIAMPolicyAssignmentsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/iam-policy-assignments");
  return ListIAMPolicyAssignmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIAMPolicyAssignmentsOutcomeCallable QuickSightClient::ListIAMPolicyAssignmentsCallable(const ListIAMPolicyAssignmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIAMPolicyAssignmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIAMPolicyAssignments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListIAMPolicyAssignmentsAsyncHelper(QuickSightClient const * const clientThis, const ListIAMPolicyAssignmentsRequest& request, const ListIAMPolicyAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIAMPolicyAssignments(request), context);
}

void QuickSightClient::ListIAMPolicyAssignmentsAsync(const ListIAMPolicyAssignmentsRequest& request, const ListIAMPolicyAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListIAMPolicyAssignmentsAsyncHelper( this, request, handler, context ); } );
}

ListIAMPolicyAssignmentsForUserOutcome QuickSightClient::ListIAMPolicyAssignmentsForUser(const ListIAMPolicyAssignmentsForUserRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetUserName());
  uri.AddPathSegments("/iam-policy-assignments");
  return ListIAMPolicyAssignmentsForUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIAMPolicyAssignmentsForUserOutcomeCallable QuickSightClient::ListIAMPolicyAssignmentsForUserCallable(const ListIAMPolicyAssignmentsForUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIAMPolicyAssignmentsForUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIAMPolicyAssignmentsForUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListIAMPolicyAssignmentsForUserAsyncHelper(QuickSightClient const * const clientThis, const ListIAMPolicyAssignmentsForUserRequest& request, const ListIAMPolicyAssignmentsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIAMPolicyAssignmentsForUser(request), context);
}

void QuickSightClient::ListIAMPolicyAssignmentsForUserAsync(const ListIAMPolicyAssignmentsForUserRequest& request, const ListIAMPolicyAssignmentsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListIAMPolicyAssignmentsForUserAsyncHelper( this, request, handler, context ); } );
}

ListIngestionsOutcome QuickSightClient::ListIngestions(const ListIngestionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets/");
  uri.AddPathSegment(request.GetDataSetId());
  uri.AddPathSegments("/ingestions");
  return ListIngestionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIngestionsOutcomeCallable QuickSightClient::ListIngestionsCallable(const ListIngestionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIngestionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIngestions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListIngestionsAsyncHelper(QuickSightClient const * const clientThis, const ListIngestionsRequest& request, const ListIngestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIngestions(request), context);
}

void QuickSightClient::ListIngestionsAsync(const ListIngestionsRequest& request, const ListIngestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListIngestionsAsyncHelper( this, request, handler, context ); } );
}

ListNamespacesOutcome QuickSightClient::ListNamespaces(const ListNamespacesRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNamespaces", "Required field: AwsAccountId, is not set");
    return ListNamespacesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces");
  return ListNamespacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNamespacesOutcomeCallable QuickSightClient::ListNamespacesCallable(const ListNamespacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNamespacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNamespaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListNamespacesAsyncHelper(QuickSightClient const * const clientThis, const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNamespaces(request), context);
}

void QuickSightClient::ListNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListNamespacesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome QuickSightClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceArn());
  uri.AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable QuickSightClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListTagsForResourceAsyncHelper(QuickSightClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void QuickSightClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTemplateAliasesOutcome QuickSightClient::ListTemplateAliases(const ListTemplateAliasesRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  uri.AddPathSegments("/aliases");
  return ListTemplateAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateAliasesOutcomeCallable QuickSightClient::ListTemplateAliasesCallable(const ListTemplateAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplateAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplateAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListTemplateAliasesAsyncHelper(QuickSightClient const * const clientThis, const ListTemplateAliasesRequest& request, const ListTemplateAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTemplateAliases(request), context);
}

void QuickSightClient::ListTemplateAliasesAsync(const ListTemplateAliasesRequest& request, const ListTemplateAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListTemplateAliasesAsyncHelper( this, request, handler, context ); } );
}

ListTemplateVersionsOutcome QuickSightClient::ListTemplateVersions(const ListTemplateVersionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  uri.AddPathSegments("/versions");
  return ListTemplateVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateVersionsOutcomeCallable QuickSightClient::ListTemplateVersionsCallable(const ListTemplateVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplateVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListTemplateVersionsAsyncHelper(QuickSightClient const * const clientThis, const ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTemplateVersions(request), context);
}

void QuickSightClient::ListTemplateVersionsAsync(const ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListTemplateVersionsAsyncHelper( this, request, handler, context ); } );
}

ListTemplatesOutcome QuickSightClient::ListTemplates(const ListTemplatesRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplates", "Required field: AwsAccountId, is not set");
    return ListTemplatesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates");
  return ListTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplatesOutcomeCallable QuickSightClient::ListTemplatesCallable(const ListTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListTemplatesAsyncHelper(QuickSightClient const * const clientThis, const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTemplates(request), context);
}

void QuickSightClient::ListTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListTemplatesAsyncHelper( this, request, handler, context ); } );
}

ListThemeAliasesOutcome QuickSightClient::ListThemeAliases(const ListThemeAliasesRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  uri.AddPathSegments("/aliases");
  return ListThemeAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemeAliasesOutcomeCallable QuickSightClient::ListThemeAliasesCallable(const ListThemeAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThemeAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThemeAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListThemeAliasesAsyncHelper(QuickSightClient const * const clientThis, const ListThemeAliasesRequest& request, const ListThemeAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListThemeAliases(request), context);
}

void QuickSightClient::ListThemeAliasesAsync(const ListThemeAliasesRequest& request, const ListThemeAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListThemeAliasesAsyncHelper( this, request, handler, context ); } );
}

ListThemeVersionsOutcome QuickSightClient::ListThemeVersions(const ListThemeVersionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  uri.AddPathSegments("/versions");
  return ListThemeVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemeVersionsOutcomeCallable QuickSightClient::ListThemeVersionsCallable(const ListThemeVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThemeVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThemeVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListThemeVersionsAsyncHelper(QuickSightClient const * const clientThis, const ListThemeVersionsRequest& request, const ListThemeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListThemeVersions(request), context);
}

void QuickSightClient::ListThemeVersionsAsync(const ListThemeVersionsRequest& request, const ListThemeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListThemeVersionsAsyncHelper( this, request, handler, context ); } );
}

ListThemesOutcome QuickSightClient::ListThemes(const ListThemesRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemes", "Required field: AwsAccountId, is not set");
    return ListThemesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes");
  return ListThemesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemesOutcomeCallable QuickSightClient::ListThemesCallable(const ListThemesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThemesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThemes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListThemesAsyncHelper(QuickSightClient const * const clientThis, const ListThemesRequest& request, const ListThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListThemes(request), context);
}

void QuickSightClient::ListThemesAsync(const ListThemesRequest& request, const ListThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListThemesAsyncHelper( this, request, handler, context ); } );
}

ListUserGroupsOutcome QuickSightClient::ListUserGroups(const ListUserGroupsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetUserName());
  uri.AddPathSegments("/groups");
  return ListUserGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserGroupsOutcomeCallable QuickSightClient::ListUserGroupsCallable(const ListUserGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListUserGroupsAsyncHelper(QuickSightClient const * const clientThis, const ListUserGroupsRequest& request, const ListUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUserGroups(request), context);
}

void QuickSightClient::ListUserGroupsAsync(const ListUserGroupsRequest& request, const ListUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListUserGroupsAsyncHelper( this, request, handler, context ); } );
}

ListUsersOutcome QuickSightClient::ListUsers(const ListUsersRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/users");
  return ListUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcomeCallable QuickSightClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientListUsersAsyncHelper(QuickSightClient const * const clientThis, const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUsers(request), context);
}

void QuickSightClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientListUsersAsyncHelper( this, request, handler, context ); } );
}

RegisterUserOutcome QuickSightClient::RegisterUser(const RegisterUserRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/users");
  return RegisterUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterUserOutcomeCallable QuickSightClient::RegisterUserCallable(const RegisterUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientRegisterUserAsyncHelper(QuickSightClient const * const clientThis, const RegisterUserRequest& request, const RegisterUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterUser(request), context);
}

void QuickSightClient::RegisterUserAsync(const RegisterUserRequest& request, const RegisterUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientRegisterUserAsyncHelper( this, request, handler, context ); } );
}

RestoreAnalysisOutcome QuickSightClient::RestoreAnalysis(const RestoreAnalysisRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/restore/analyses/");
  uri.AddPathSegment(request.GetAnalysisId());
  return RestoreAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreAnalysisOutcomeCallable QuickSightClient::RestoreAnalysisCallable(const RestoreAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientRestoreAnalysisAsyncHelper(QuickSightClient const * const clientThis, const RestoreAnalysisRequest& request, const RestoreAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreAnalysis(request), context);
}

void QuickSightClient::RestoreAnalysisAsync(const RestoreAnalysisRequest& request, const RestoreAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientRestoreAnalysisAsyncHelper( this, request, handler, context ); } );
}

SearchAnalysesOutcome QuickSightClient::SearchAnalyses(const SearchAnalysesRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchAnalyses", "Required field: AwsAccountId, is not set");
    return SearchAnalysesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/search/analyses");
  return SearchAnalysesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchAnalysesOutcomeCallable QuickSightClient::SearchAnalysesCallable(const SearchAnalysesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchAnalysesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchAnalyses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientSearchAnalysesAsyncHelper(QuickSightClient const * const clientThis, const SearchAnalysesRequest& request, const SearchAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchAnalyses(request), context);
}

void QuickSightClient::SearchAnalysesAsync(const SearchAnalysesRequest& request, const SearchAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientSearchAnalysesAsyncHelper( this, request, handler, context ); } );
}

SearchDashboardsOutcome QuickSightClient::SearchDashboards(const SearchDashboardsRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDashboards", "Required field: AwsAccountId, is not set");
    return SearchDashboardsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/search/dashboards");
  return SearchDashboardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDashboardsOutcomeCallable QuickSightClient::SearchDashboardsCallable(const SearchDashboardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDashboardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDashboards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientSearchDashboardsAsyncHelper(QuickSightClient const * const clientThis, const SearchDashboardsRequest& request, const SearchDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchDashboards(request), context);
}

void QuickSightClient::SearchDashboardsAsync(const SearchDashboardsRequest& request, const SearchDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientSearchDashboardsAsyncHelper( this, request, handler, context ); } );
}

SearchFoldersOutcome QuickSightClient::SearchFolders(const SearchFoldersRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchFolders", "Required field: AwsAccountId, is not set");
    return SearchFoldersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/search/folders");
  return SearchFoldersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchFoldersOutcomeCallable QuickSightClient::SearchFoldersCallable(const SearchFoldersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchFoldersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchFolders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientSearchFoldersAsyncHelper(QuickSightClient const * const clientThis, const SearchFoldersRequest& request, const SearchFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchFolders(request), context);
}

void QuickSightClient::SearchFoldersAsync(const SearchFoldersRequest& request, const SearchFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientSearchFoldersAsyncHelper( this, request, handler, context ); } );
}

SearchGroupsOutcome QuickSightClient::SearchGroups(const SearchGroupsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups-search");
  return SearchGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchGroupsOutcomeCallable QuickSightClient::SearchGroupsCallable(const SearchGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientSearchGroupsAsyncHelper(QuickSightClient const * const clientThis, const SearchGroupsRequest& request, const SearchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchGroups(request), context);
}

void QuickSightClient::SearchGroupsAsync(const SearchGroupsRequest& request, const SearchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientSearchGroupsAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome QuickSightClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceArn());
  uri.AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable QuickSightClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientTagResourceAsyncHelper(QuickSightClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void QuickSightClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome QuickSightClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceArn());
  uri.AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable QuickSightClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUntagResourceAsyncHelper(QuickSightClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void QuickSightClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAccountCustomizationOutcome QuickSightClient::UpdateAccountCustomization(const UpdateAccountCustomizationRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountCustomization", "Required field: AwsAccountId, is not set");
    return UpdateAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/customizations");
  return UpdateAccountCustomizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountCustomizationOutcomeCallable QuickSightClient::UpdateAccountCustomizationCallable(const UpdateAccountCustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountCustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountCustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateAccountCustomizationAsyncHelper(QuickSightClient const * const clientThis, const UpdateAccountCustomizationRequest& request, const UpdateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAccountCustomization(request), context);
}

void QuickSightClient::UpdateAccountCustomizationAsync(const UpdateAccountCustomizationRequest& request, const UpdateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateAccountCustomizationAsyncHelper( this, request, handler, context ); } );
}

UpdateAccountSettingsOutcome QuickSightClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountSettings", "Required field: AwsAccountId, is not set");
    return UpdateAccountSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/settings");
  return UpdateAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountSettingsOutcomeCallable QuickSightClient::UpdateAccountSettingsCallable(const UpdateAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateAccountSettingsAsyncHelper(QuickSightClient const * const clientThis, const UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAccountSettings(request), context);
}

void QuickSightClient::UpdateAccountSettingsAsync(const UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateAccountSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateAnalysisOutcome QuickSightClient::UpdateAnalysis(const UpdateAnalysisRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/analyses/");
  uri.AddPathSegment(request.GetAnalysisId());
  return UpdateAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnalysisOutcomeCallable QuickSightClient::UpdateAnalysisCallable(const UpdateAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateAnalysisAsyncHelper(QuickSightClient const * const clientThis, const UpdateAnalysisRequest& request, const UpdateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAnalysis(request), context);
}

void QuickSightClient::UpdateAnalysisAsync(const UpdateAnalysisRequest& request, const UpdateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateAnalysisAsyncHelper( this, request, handler, context ); } );
}

UpdateAnalysisPermissionsOutcome QuickSightClient::UpdateAnalysisPermissions(const UpdateAnalysisPermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/analyses/");
  uri.AddPathSegment(request.GetAnalysisId());
  uri.AddPathSegments("/permissions");
  return UpdateAnalysisPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnalysisPermissionsOutcomeCallable QuickSightClient::UpdateAnalysisPermissionsCallable(const UpdateAnalysisPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnalysisPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnalysisPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateAnalysisPermissionsAsyncHelper(QuickSightClient const * const clientThis, const UpdateAnalysisPermissionsRequest& request, const UpdateAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAnalysisPermissions(request), context);
}

void QuickSightClient::UpdateAnalysisPermissionsAsync(const UpdateAnalysisPermissionsRequest& request, const UpdateAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateAnalysisPermissionsAsyncHelper( this, request, handler, context ); } );
}

UpdateDashboardOutcome QuickSightClient::UpdateDashboard(const UpdateDashboardRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  return UpdateDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardOutcomeCallable QuickSightClient::UpdateDashboardCallable(const UpdateDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateDashboardAsyncHelper(QuickSightClient const * const clientThis, const UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDashboard(request), context);
}

void QuickSightClient::UpdateDashboardAsync(const UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateDashboardAsyncHelper( this, request, handler, context ); } );
}

UpdateDashboardPermissionsOutcome QuickSightClient::UpdateDashboardPermissions(const UpdateDashboardPermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  uri.AddPathSegments("/permissions");
  return UpdateDashboardPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardPermissionsOutcomeCallable QuickSightClient::UpdateDashboardPermissionsCallable(const UpdateDashboardPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDashboardPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDashboardPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateDashboardPermissionsAsyncHelper(QuickSightClient const * const clientThis, const UpdateDashboardPermissionsRequest& request, const UpdateDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDashboardPermissions(request), context);
}

void QuickSightClient::UpdateDashboardPermissionsAsync(const UpdateDashboardPermissionsRequest& request, const UpdateDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateDashboardPermissionsAsyncHelper( this, request, handler, context ); } );
}

UpdateDashboardPublishedVersionOutcome QuickSightClient::UpdateDashboardPublishedVersion(const UpdateDashboardPublishedVersionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersionNumber());
  return UpdateDashboardPublishedVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardPublishedVersionOutcomeCallable QuickSightClient::UpdateDashboardPublishedVersionCallable(const UpdateDashboardPublishedVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDashboardPublishedVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDashboardPublishedVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateDashboardPublishedVersionAsyncHelper(QuickSightClient const * const clientThis, const UpdateDashboardPublishedVersionRequest& request, const UpdateDashboardPublishedVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDashboardPublishedVersion(request), context);
}

void QuickSightClient::UpdateDashboardPublishedVersionAsync(const UpdateDashboardPublishedVersionRequest& request, const UpdateDashboardPublishedVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateDashboardPublishedVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateDataSetOutcome QuickSightClient::UpdateDataSet(const UpdateDataSetRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets/");
  uri.AddPathSegment(request.GetDataSetId());
  return UpdateDataSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSetOutcomeCallable QuickSightClient::UpdateDataSetCallable(const UpdateDataSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateDataSetAsyncHelper(QuickSightClient const * const clientThis, const UpdateDataSetRequest& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataSet(request), context);
}

void QuickSightClient::UpdateDataSetAsync(const UpdateDataSetRequest& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateDataSetAsyncHelper( this, request, handler, context ); } );
}

UpdateDataSetPermissionsOutcome QuickSightClient::UpdateDataSetPermissions(const UpdateDataSetPermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sets/");
  uri.AddPathSegment(request.GetDataSetId());
  uri.AddPathSegments("/permissions");
  return UpdateDataSetPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSetPermissionsOutcomeCallable QuickSightClient::UpdateDataSetPermissionsCallable(const UpdateDataSetPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSetPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSetPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateDataSetPermissionsAsyncHelper(QuickSightClient const * const clientThis, const UpdateDataSetPermissionsRequest& request, const UpdateDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataSetPermissions(request), context);
}

void QuickSightClient::UpdateDataSetPermissionsAsync(const UpdateDataSetPermissionsRequest& request, const UpdateDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateDataSetPermissionsAsyncHelper( this, request, handler, context ); } );
}

UpdateDataSourceOutcome QuickSightClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sources/");
  uri.AddPathSegment(request.GetDataSourceId());
  return UpdateDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSourceOutcomeCallable QuickSightClient::UpdateDataSourceCallable(const UpdateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateDataSourceAsyncHelper(QuickSightClient const * const clientThis, const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataSource(request), context);
}

void QuickSightClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateDataSourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDataSourcePermissionsOutcome QuickSightClient::UpdateDataSourcePermissions(const UpdateDataSourcePermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/data-sources/");
  uri.AddPathSegment(request.GetDataSourceId());
  uri.AddPathSegments("/permissions");
  return UpdateDataSourcePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSourcePermissionsOutcomeCallable QuickSightClient::UpdateDataSourcePermissionsCallable(const UpdateDataSourcePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSourcePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSourcePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateDataSourcePermissionsAsyncHelper(QuickSightClient const * const clientThis, const UpdateDataSourcePermissionsRequest& request, const UpdateDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataSourcePermissions(request), context);
}

void QuickSightClient::UpdateDataSourcePermissionsAsync(const UpdateDataSourcePermissionsRequest& request, const UpdateDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateDataSourcePermissionsAsyncHelper( this, request, handler, context ); } );
}

UpdateFolderOutcome QuickSightClient::UpdateFolder(const UpdateFolderRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  return UpdateFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFolderOutcomeCallable QuickSightClient::UpdateFolderCallable(const UpdateFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateFolderAsyncHelper(QuickSightClient const * const clientThis, const UpdateFolderRequest& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFolder(request), context);
}

void QuickSightClient::UpdateFolderAsync(const UpdateFolderRequest& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateFolderAsyncHelper( this, request, handler, context ); } );
}

UpdateFolderPermissionsOutcome QuickSightClient::UpdateFolderPermissions(const UpdateFolderPermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/folders/");
  uri.AddPathSegment(request.GetFolderId());
  uri.AddPathSegments("/permissions");
  return UpdateFolderPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFolderPermissionsOutcomeCallable QuickSightClient::UpdateFolderPermissionsCallable(const UpdateFolderPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFolderPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFolderPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateFolderPermissionsAsyncHelper(QuickSightClient const * const clientThis, const UpdateFolderPermissionsRequest& request, const UpdateFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFolderPermissions(request), context);
}

void QuickSightClient::UpdateFolderPermissionsAsync(const UpdateFolderPermissionsRequest& request, const UpdateFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateFolderPermissionsAsyncHelper( this, request, handler, context ); } );
}

UpdateGroupOutcome QuickSightClient::UpdateGroup(const UpdateGroupRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/groups/");
  uri.AddPathSegment(request.GetGroupName());
  return UpdateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupOutcomeCallable QuickSightClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateGroupAsyncHelper(QuickSightClient const * const clientThis, const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGroup(request), context);
}

void QuickSightClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateIAMPolicyAssignmentOutcome QuickSightClient::UpdateIAMPolicyAssignment(const UpdateIAMPolicyAssignmentRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/iam-policy-assignments/");
  uri.AddPathSegment(request.GetAssignmentName());
  return UpdateIAMPolicyAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateIAMPolicyAssignmentOutcomeCallable QuickSightClient::UpdateIAMPolicyAssignmentCallable(const UpdateIAMPolicyAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIAMPolicyAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIAMPolicyAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateIAMPolicyAssignmentAsyncHelper(QuickSightClient const * const clientThis, const UpdateIAMPolicyAssignmentRequest& request, const UpdateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIAMPolicyAssignment(request), context);
}

void QuickSightClient::UpdateIAMPolicyAssignmentAsync(const UpdateIAMPolicyAssignmentRequest& request, const UpdateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateIAMPolicyAssignmentAsyncHelper( this, request, handler, context ); } );
}

UpdateIpRestrictionOutcome QuickSightClient::UpdateIpRestriction(const UpdateIpRestrictionRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIpRestriction", "Required field: AwsAccountId, is not set");
    return UpdateIpRestrictionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/ip-restriction");
  return UpdateIpRestrictionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIpRestrictionOutcomeCallable QuickSightClient::UpdateIpRestrictionCallable(const UpdateIpRestrictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIpRestrictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIpRestriction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateIpRestrictionAsyncHelper(QuickSightClient const * const clientThis, const UpdateIpRestrictionRequest& request, const UpdateIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIpRestriction(request), context);
}

void QuickSightClient::UpdateIpRestrictionAsync(const UpdateIpRestrictionRequest& request, const UpdateIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateIpRestrictionAsyncHelper( this, request, handler, context ); } );
}

UpdatePublicSharingSettingsOutcome QuickSightClient::UpdatePublicSharingSettings(const UpdatePublicSharingSettingsRequest& request) const
{
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePublicSharingSettings", "Required field: AwsAccountId, is not set");
    return UpdatePublicSharingSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/public-sharing-settings");
  return UpdatePublicSharingSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePublicSharingSettingsOutcomeCallable QuickSightClient::UpdatePublicSharingSettingsCallable(const UpdatePublicSharingSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePublicSharingSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePublicSharingSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdatePublicSharingSettingsAsyncHelper(QuickSightClient const * const clientThis, const UpdatePublicSharingSettingsRequest& request, const UpdatePublicSharingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePublicSharingSettings(request), context);
}

void QuickSightClient::UpdatePublicSharingSettingsAsync(const UpdatePublicSharingSettingsRequest& request, const UpdatePublicSharingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdatePublicSharingSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateTemplateOutcome QuickSightClient::UpdateTemplate(const UpdateTemplateRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  return UpdateTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateOutcomeCallable QuickSightClient::UpdateTemplateCallable(const UpdateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateTemplateAsyncHelper(QuickSightClient const * const clientThis, const UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTemplate(request), context);
}

void QuickSightClient::UpdateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdateTemplateAliasOutcome QuickSightClient::UpdateTemplateAlias(const UpdateTemplateAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetAliasName());
  return UpdateTemplateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateAliasOutcomeCallable QuickSightClient::UpdateTemplateAliasCallable(const UpdateTemplateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateTemplateAliasAsyncHelper(QuickSightClient const * const clientThis, const UpdateTemplateAliasRequest& request, const UpdateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTemplateAlias(request), context);
}

void QuickSightClient::UpdateTemplateAliasAsync(const UpdateTemplateAliasRequest& request, const UpdateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateTemplateAliasAsyncHelper( this, request, handler, context ); } );
}

UpdateTemplatePermissionsOutcome QuickSightClient::UpdateTemplatePermissions(const UpdateTemplatePermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  uri.AddPathSegments("/permissions");
  return UpdateTemplatePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplatePermissionsOutcomeCallable QuickSightClient::UpdateTemplatePermissionsCallable(const UpdateTemplatePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplatePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplatePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateTemplatePermissionsAsyncHelper(QuickSightClient const * const clientThis, const UpdateTemplatePermissionsRequest& request, const UpdateTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTemplatePermissions(request), context);
}

void QuickSightClient::UpdateTemplatePermissionsAsync(const UpdateTemplatePermissionsRequest& request, const UpdateTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateTemplatePermissionsAsyncHelper( this, request, handler, context ); } );
}

UpdateThemeOutcome QuickSightClient::UpdateTheme(const UpdateThemeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  return UpdateThemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemeOutcomeCallable QuickSightClient::UpdateThemeCallable(const UpdateThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateThemeAsyncHelper(QuickSightClient const * const clientThis, const UpdateThemeRequest& request, const UpdateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTheme(request), context);
}

void QuickSightClient::UpdateThemeAsync(const UpdateThemeRequest& request, const UpdateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateThemeAsyncHelper( this, request, handler, context ); } );
}

UpdateThemeAliasOutcome QuickSightClient::UpdateThemeAlias(const UpdateThemeAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetAliasName());
  return UpdateThemeAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemeAliasOutcomeCallable QuickSightClient::UpdateThemeAliasCallable(const UpdateThemeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThemeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThemeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateThemeAliasAsyncHelper(QuickSightClient const * const clientThis, const UpdateThemeAliasRequest& request, const UpdateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateThemeAlias(request), context);
}

void QuickSightClient::UpdateThemeAliasAsync(const UpdateThemeAliasRequest& request, const UpdateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateThemeAliasAsyncHelper( this, request, handler, context ); } );
}

UpdateThemePermissionsOutcome QuickSightClient::UpdateThemePermissions(const UpdateThemePermissionsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetThemeId());
  uri.AddPathSegments("/permissions");
  return UpdateThemePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemePermissionsOutcomeCallable QuickSightClient::UpdateThemePermissionsCallable(const UpdateThemePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThemePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThemePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateThemePermissionsAsyncHelper(QuickSightClient const * const clientThis, const UpdateThemePermissionsRequest& request, const UpdateThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateThemePermissions(request), context);
}

void QuickSightClient::UpdateThemePermissionsAsync(const UpdateThemePermissionsRequest& request, const UpdateThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateThemePermissionsAsyncHelper( this, request, handler, context ); } );
}

UpdateUserOutcome QuickSightClient::UpdateUser(const UpdateUserRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/");
  uri.AddPathSegment(request.GetAwsAccountId());
  uri.AddPathSegments("/namespaces/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetUserName());
  return UpdateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserOutcomeCallable QuickSightClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QuickSightClientUpdateUserAsyncHelper(QuickSightClient const * const clientThis, const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUser(request), context);
}

void QuickSightClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ QuickSightClientUpdateUserAsyncHelper( this, request, handler, context ); } );
}

