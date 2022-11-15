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

#include <aws/securityhub/SecurityHubClient.h>
#include <aws/securityhub/SecurityHubErrorMarshaller.h>
#include <aws/securityhub/SecurityHubEndpointProvider.h>
#include <aws/securityhub/model/AcceptAdministratorInvitationRequest.h>
#include <aws/securityhub/model/BatchDisableStandardsRequest.h>
#include <aws/securityhub/model/BatchEnableStandardsRequest.h>
#include <aws/securityhub/model/BatchImportFindingsRequest.h>
#include <aws/securityhub/model/BatchUpdateFindingsRequest.h>
#include <aws/securityhub/model/CreateActionTargetRequest.h>
#include <aws/securityhub/model/CreateFindingAggregatorRequest.h>
#include <aws/securityhub/model/CreateInsightRequest.h>
#include <aws/securityhub/model/CreateMembersRequest.h>
#include <aws/securityhub/model/DeclineInvitationsRequest.h>
#include <aws/securityhub/model/DeleteActionTargetRequest.h>
#include <aws/securityhub/model/DeleteFindingAggregatorRequest.h>
#include <aws/securityhub/model/DeleteInsightRequest.h>
#include <aws/securityhub/model/DeleteInvitationsRequest.h>
#include <aws/securityhub/model/DeleteMembersRequest.h>
#include <aws/securityhub/model/DescribeActionTargetsRequest.h>
#include <aws/securityhub/model/DescribeHubRequest.h>
#include <aws/securityhub/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/securityhub/model/DescribeProductsRequest.h>
#include <aws/securityhub/model/DescribeStandardsRequest.h>
#include <aws/securityhub/model/DescribeStandardsControlsRequest.h>
#include <aws/securityhub/model/DisableImportFindingsForProductRequest.h>
#include <aws/securityhub/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/securityhub/model/DisableSecurityHubRequest.h>
#include <aws/securityhub/model/DisassociateFromAdministratorAccountRequest.h>
#include <aws/securityhub/model/DisassociateMembersRequest.h>
#include <aws/securityhub/model/EnableImportFindingsForProductRequest.h>
#include <aws/securityhub/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/securityhub/model/EnableSecurityHubRequest.h>
#include <aws/securityhub/model/GetAdministratorAccountRequest.h>
#include <aws/securityhub/model/GetEnabledStandardsRequest.h>
#include <aws/securityhub/model/GetFindingAggregatorRequest.h>
#include <aws/securityhub/model/GetFindingsRequest.h>
#include <aws/securityhub/model/GetInsightResultsRequest.h>
#include <aws/securityhub/model/GetInsightsRequest.h>
#include <aws/securityhub/model/GetInvitationsCountRequest.h>
#include <aws/securityhub/model/GetMembersRequest.h>
#include <aws/securityhub/model/InviteMembersRequest.h>
#include <aws/securityhub/model/ListEnabledProductsForImportRequest.h>
#include <aws/securityhub/model/ListFindingAggregatorsRequest.h>
#include <aws/securityhub/model/ListInvitationsRequest.h>
#include <aws/securityhub/model/ListMembersRequest.h>
#include <aws/securityhub/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/securityhub/model/ListTagsForResourceRequest.h>
#include <aws/securityhub/model/TagResourceRequest.h>
#include <aws/securityhub/model/UntagResourceRequest.h>
#include <aws/securityhub/model/UpdateActionTargetRequest.h>
#include <aws/securityhub/model/UpdateFindingAggregatorRequest.h>
#include <aws/securityhub/model/UpdateFindingsRequest.h>
#include <aws/securityhub/model/UpdateInsightRequest.h>
#include <aws/securityhub/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/securityhub/model/UpdateSecurityHubConfigurationRequest.h>
#include <aws/securityhub/model/UpdateStandardsControlRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecurityHub;
using namespace Aws::SecurityHub::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SecurityHubClient::SERVICE_NAME = "securityhub";
const char* SecurityHubClient::ALLOCATION_TAG = "SecurityHubClient";

SecurityHubClient::SecurityHubClient(const SecurityHub::SecurityHubClientConfiguration& clientConfiguration,
                                     std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const AWSCredentials& credentials,
                                     std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider,
                                     const SecurityHub::SecurityHubClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider,
                                     const SecurityHub::SecurityHubClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SecurityHubClient::SecurityHubClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SecurityHubClient::~SecurityHubClient()
{
}

std::shared_ptr<SecurityHubEndpointProviderBase>& SecurityHubClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SecurityHubClient::init(const SecurityHub::SecurityHubClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SecurityHub");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SecurityHubClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptAdministratorInvitationOutcome SecurityHubClient::AcceptAdministratorInvitation(const AcceptAdministratorInvitationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptAdministratorInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptAdministratorInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  return AcceptAdministratorInvitationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptAdministratorInvitationOutcomeCallable SecurityHubClient::AcceptAdministratorInvitationCallable(const AcceptAdministratorInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptAdministratorInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptAdministratorInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::AcceptAdministratorInvitationAsync(const AcceptAdministratorInvitationRequest& request, const AcceptAdministratorInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AcceptAdministratorInvitation(request), context);
    } );
}

BatchDisableStandardsOutcome SecurityHubClient::BatchDisableStandards(const BatchDisableStandardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisableStandards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDisableStandards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/standards/deregister");
  return BatchDisableStandardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisableStandardsOutcomeCallable SecurityHubClient::BatchDisableStandardsCallable(const BatchDisableStandardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisableStandardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisableStandards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::BatchDisableStandardsAsync(const BatchDisableStandardsRequest& request, const BatchDisableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDisableStandards(request), context);
    } );
}

BatchEnableStandardsOutcome SecurityHubClient::BatchEnableStandards(const BatchEnableStandardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchEnableStandards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchEnableStandards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/standards/register");
  return BatchEnableStandardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchEnableStandardsOutcomeCallable SecurityHubClient::BatchEnableStandardsCallable(const BatchEnableStandardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchEnableStandardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchEnableStandards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::BatchEnableStandardsAsync(const BatchEnableStandardsRequest& request, const BatchEnableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchEnableStandards(request), context);
    } );
}

BatchImportFindingsOutcome SecurityHubClient::BatchImportFindings(const BatchImportFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchImportFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchImportFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/import");
  return BatchImportFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchImportFindingsOutcomeCallable SecurityHubClient::BatchImportFindingsCallable(const BatchImportFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchImportFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchImportFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::BatchImportFindingsAsync(const BatchImportFindingsRequest& request, const BatchImportFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchImportFindings(request), context);
    } );
}

BatchUpdateFindingsOutcome SecurityHubClient::BatchUpdateFindings(const BatchUpdateFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/batchupdate");
  return BatchUpdateFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateFindingsOutcomeCallable SecurityHubClient::BatchUpdateFindingsCallable(const BatchUpdateFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::BatchUpdateFindingsAsync(const BatchUpdateFindingsRequest& request, const BatchUpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchUpdateFindings(request), context);
    } );
}

CreateActionTargetOutcome SecurityHubClient::CreateActionTarget(const CreateActionTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateActionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateActionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/actionTargets");
  return CreateActionTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateActionTargetOutcomeCallable SecurityHubClient::CreateActionTargetCallable(const CreateActionTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateActionTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateActionTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::CreateActionTargetAsync(const CreateActionTargetRequest& request, const CreateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateActionTarget(request), context);
    } );
}

CreateFindingAggregatorOutcome SecurityHubClient::CreateFindingAggregator(const CreateFindingAggregatorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFindingAggregator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFindingAggregator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/create");
  return CreateFindingAggregatorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFindingAggregatorOutcomeCallable SecurityHubClient::CreateFindingAggregatorCallable(const CreateFindingAggregatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFindingAggregatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFindingAggregator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::CreateFindingAggregatorAsync(const CreateFindingAggregatorRequest& request, const CreateFindingAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFindingAggregator(request), context);
    } );
}

CreateInsightOutcome SecurityHubClient::CreateInsight(const CreateInsightRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInsight, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInsight, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights");
  return CreateInsightOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInsightOutcomeCallable SecurityHubClient::CreateInsightCallable(const CreateInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::CreateInsightAsync(const CreateInsightRequest& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInsight(request), context);
    } );
}

CreateMembersOutcome SecurityHubClient::CreateMembers(const CreateMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  return CreateMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMembersOutcomeCallable SecurityHubClient::CreateMembersCallable(const CreateMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::CreateMembersAsync(const CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMembers(request), context);
    } );
}

DeclineInvitationsOutcome SecurityHubClient::DeclineInvitations(const DeclineInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeclineInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeclineInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/decline");
  return DeclineInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeclineInvitationsOutcomeCallable SecurityHubClient::DeclineInvitationsCallable(const DeclineInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeclineInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeclineInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeclineInvitationsAsync(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeclineInvitations(request), context);
    } );
}

DeleteActionTargetOutcome SecurityHubClient::DeleteActionTarget(const DeleteActionTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteActionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ActionTargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteActionTarget", "Required field: ActionTargetArn, is not set");
    return DeleteActionTargetOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionTargetArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteActionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/actionTargets/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetActionTargetArn());
  return DeleteActionTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteActionTargetOutcomeCallable SecurityHubClient::DeleteActionTargetCallable(const DeleteActionTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteActionTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteActionTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeleteActionTargetAsync(const DeleteActionTargetRequest& request, const DeleteActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteActionTarget(request), context);
    } );
}

DeleteFindingAggregatorOutcome SecurityHubClient::DeleteFindingAggregator(const DeleteFindingAggregatorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFindingAggregator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FindingAggregatorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFindingAggregator", "Required field: FindingAggregatorArn, is not set");
    return DeleteFindingAggregatorOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingAggregatorArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFindingAggregator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/delete/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetFindingAggregatorArn());
  return DeleteFindingAggregatorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFindingAggregatorOutcomeCallable SecurityHubClient::DeleteFindingAggregatorCallable(const DeleteFindingAggregatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFindingAggregatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFindingAggregator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeleteFindingAggregatorAsync(const DeleteFindingAggregatorRequest& request, const DeleteFindingAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFindingAggregator(request), context);
    } );
}

DeleteInsightOutcome SecurityHubClient::DeleteInsight(const DeleteInsightRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInsight, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InsightArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInsight", "Required field: InsightArn, is not set");
    return DeleteInsightOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InsightArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInsight, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetInsightArn());
  return DeleteInsightOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInsightOutcomeCallable SecurityHubClient::DeleteInsightCallable(const DeleteInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeleteInsightAsync(const DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInsight(request), context);
    } );
}

DeleteInvitationsOutcome SecurityHubClient::DeleteInvitations(const DeleteInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/delete");
  return DeleteInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInvitationsOutcomeCallable SecurityHubClient::DeleteInvitationsCallable(const DeleteInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeleteInvitationsAsync(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInvitations(request), context);
    } );
}

DeleteMembersOutcome SecurityHubClient::DeleteMembers(const DeleteMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/delete");
  return DeleteMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMembersOutcomeCallable SecurityHubClient::DeleteMembersCallable(const DeleteMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeleteMembersAsync(const DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMembers(request), context);
    } );
}

DescribeActionTargetsOutcome SecurityHubClient::DescribeActionTargets(const DescribeActionTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeActionTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeActionTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/actionTargets/get");
  return DescribeActionTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeActionTargetsOutcomeCallable SecurityHubClient::DescribeActionTargetsCallable(const DescribeActionTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActionTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActionTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeActionTargetsAsync(const DescribeActionTargetsRequest& request, const DescribeActionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeActionTargets(request), context);
    } );
}

DescribeHubOutcome SecurityHubClient::DescribeHub(const DescribeHubRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  return DescribeHubOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeHubOutcomeCallable SecurityHubClient::DescribeHubCallable(const DescribeHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeHubAsync(const DescribeHubRequest& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeHub(request), context);
    } );
}

DescribeOrganizationConfigurationOutcome SecurityHubClient::DescribeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/organization/configuration");
  return DescribeOrganizationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigurationOutcomeCallable SecurityHubClient::DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOrganizationConfiguration(request), context);
    } );
}

DescribeProductsOutcome SecurityHubClient::DescribeProducts(const DescribeProductsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/products");
  return DescribeProductsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProductsOutcomeCallable SecurityHubClient::DescribeProductsCallable(const DescribeProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProducts(request), context);
    } );
}

DescribeStandardsOutcome SecurityHubClient::DescribeStandards(const DescribeStandardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStandards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStandards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/standards");
  return DescribeStandardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeStandardsOutcomeCallable SecurityHubClient::DescribeStandardsCallable(const DescribeStandardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStandardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStandards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeStandardsAsync(const DescribeStandardsRequest& request, const DescribeStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStandards(request), context);
    } );
}

DescribeStandardsControlsOutcome SecurityHubClient::DescribeStandardsControls(const DescribeStandardsControlsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStandardsControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StandardsSubscriptionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeStandardsControls", "Required field: StandardsSubscriptionArn, is not set");
    return DescribeStandardsControlsOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StandardsSubscriptionArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStandardsControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/standards/controls/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetStandardsSubscriptionArn());
  return DescribeStandardsControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeStandardsControlsOutcomeCallable SecurityHubClient::DescribeStandardsControlsCallable(const DescribeStandardsControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStandardsControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStandardsControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeStandardsControlsAsync(const DescribeStandardsControlsRequest& request, const DescribeStandardsControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStandardsControls(request), context);
    } );
}

DisableImportFindingsForProductOutcome SecurityHubClient::DisableImportFindingsForProduct(const DisableImportFindingsForProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableImportFindingsForProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProductSubscriptionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableImportFindingsForProduct", "Required field: ProductSubscriptionArn, is not set");
    return DisableImportFindingsForProductOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductSubscriptionArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableImportFindingsForProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/productSubscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetProductSubscriptionArn());
  return DisableImportFindingsForProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisableImportFindingsForProductOutcomeCallable SecurityHubClient::DisableImportFindingsForProductCallable(const DisableImportFindingsForProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableImportFindingsForProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableImportFindingsForProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisableImportFindingsForProductAsync(const DisableImportFindingsForProductRequest& request, const DisableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableImportFindingsForProduct(request), context);
    } );
}

DisableOrganizationAdminAccountOutcome SecurityHubClient::DisableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/organization/admin/disable");
  return DisableOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableOrganizationAdminAccountOutcomeCallable SecurityHubClient::DisableOrganizationAdminAccountCallable(const DisableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableOrganizationAdminAccount(request), context);
    } );
}

DisableSecurityHubOutcome SecurityHubClient::DisableSecurityHub(const DisableSecurityHubRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableSecurityHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableSecurityHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  return DisableSecurityHubOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisableSecurityHubOutcomeCallable SecurityHubClient::DisableSecurityHubCallable(const DisableSecurityHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableSecurityHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableSecurityHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisableSecurityHubAsync(const DisableSecurityHubRequest& request, const DisableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableSecurityHub(request), context);
    } );
}

DisassociateFromAdministratorAccountOutcome SecurityHubClient::DisassociateFromAdministratorAccount(const DisassociateFromAdministratorAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateFromAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateFromAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/administrator/disassociate");
  return DisassociateFromAdministratorAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFromAdministratorAccountOutcomeCallable SecurityHubClient::DisassociateFromAdministratorAccountCallable(const DisassociateFromAdministratorAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFromAdministratorAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFromAdministratorAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisassociateFromAdministratorAccountAsync(const DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateFromAdministratorAccount(request), context);
    } );
}

DisassociateMembersOutcome SecurityHubClient::DisassociateMembers(const DisassociateMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/disassociate");
  return DisassociateMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMembersOutcomeCallable SecurityHubClient::DisassociateMembersCallable(const DisassociateMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisassociateMembersAsync(const DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateMembers(request), context);
    } );
}

EnableImportFindingsForProductOutcome SecurityHubClient::EnableImportFindingsForProduct(const EnableImportFindingsForProductRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableImportFindingsForProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableImportFindingsForProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/productSubscriptions");
  return EnableImportFindingsForProductOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableImportFindingsForProductOutcomeCallable SecurityHubClient::EnableImportFindingsForProductCallable(const EnableImportFindingsForProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableImportFindingsForProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableImportFindingsForProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::EnableImportFindingsForProductAsync(const EnableImportFindingsForProductRequest& request, const EnableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableImportFindingsForProduct(request), context);
    } );
}

EnableOrganizationAdminAccountOutcome SecurityHubClient::EnableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/organization/admin/enable");
  return EnableOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableOrganizationAdminAccountOutcomeCallable SecurityHubClient::EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableOrganizationAdminAccount(request), context);
    } );
}

EnableSecurityHubOutcome SecurityHubClient::EnableSecurityHub(const EnableSecurityHubRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableSecurityHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableSecurityHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  return EnableSecurityHubOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableSecurityHubOutcomeCallable SecurityHubClient::EnableSecurityHubCallable(const EnableSecurityHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableSecurityHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableSecurityHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::EnableSecurityHubAsync(const EnableSecurityHubRequest& request, const EnableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableSecurityHub(request), context);
    } );
}

GetAdministratorAccountOutcome SecurityHubClient::GetAdministratorAccount(const GetAdministratorAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  return GetAdministratorAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAdministratorAccountOutcomeCallable SecurityHubClient::GetAdministratorAccountCallable(const GetAdministratorAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAdministratorAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAdministratorAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetAdministratorAccountAsync(const GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAdministratorAccount(request), context);
    } );
}

GetEnabledStandardsOutcome SecurityHubClient::GetEnabledStandards(const GetEnabledStandardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnabledStandards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEnabledStandards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/standards/get");
  return GetEnabledStandardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEnabledStandardsOutcomeCallable SecurityHubClient::GetEnabledStandardsCallable(const GetEnabledStandardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnabledStandardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnabledStandards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetEnabledStandardsAsync(const GetEnabledStandardsRequest& request, const GetEnabledStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEnabledStandards(request), context);
    } );
}

GetFindingAggregatorOutcome SecurityHubClient::GetFindingAggregator(const GetFindingAggregatorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFindingAggregator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FindingAggregatorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFindingAggregator", "Required field: FindingAggregatorArn, is not set");
    return GetFindingAggregatorOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingAggregatorArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFindingAggregator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/get/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetFindingAggregatorArn());
  return GetFindingAggregatorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFindingAggregatorOutcomeCallable SecurityHubClient::GetFindingAggregatorCallable(const GetFindingAggregatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingAggregatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingAggregator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetFindingAggregatorAsync(const GetFindingAggregatorRequest& request, const GetFindingAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFindingAggregator(request), context);
    } );
}

GetFindingsOutcome SecurityHubClient::GetFindings(const GetFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings");
  return GetFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsOutcomeCallable SecurityHubClient::GetFindingsCallable(const GetFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetFindingsAsync(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFindings(request), context);
    } );
}

GetInsightResultsOutcome SecurityHubClient::GetInsightResults(const GetInsightResultsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsightResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InsightArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInsightResults", "Required field: InsightArn, is not set");
    return GetInsightResultsOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InsightArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsightResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights/results/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetInsightArn());
  return GetInsightResultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInsightResultsOutcomeCallable SecurityHubClient::GetInsightResultsCallable(const GetInsightResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetInsightResultsAsync(const GetInsightResultsRequest& request, const GetInsightResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsightResults(request), context);
    } );
}

GetInsightsOutcome SecurityHubClient::GetInsights(const GetInsightsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights/get");
  return GetInsightsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightsOutcomeCallable SecurityHubClient::GetInsightsCallable(const GetInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetInsightsAsync(const GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsights(request), context);
    } );
}

GetInvitationsCountOutcome SecurityHubClient::GetInvitationsCount(const GetInvitationsCountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInvitationsCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInvitationsCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/count");
  return GetInvitationsCountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInvitationsCountOutcomeCallable SecurityHubClient::GetInvitationsCountCallable(const GetInvitationsCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvitationsCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvitationsCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetInvitationsCountAsync(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInvitationsCount(request), context);
    } );
}

GetMembersOutcome SecurityHubClient::GetMembers(const GetMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/get");
  return GetMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMembersOutcomeCallable SecurityHubClient::GetMembersCallable(const GetMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetMembersAsync(const GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMembers(request), context);
    } );
}

InviteMembersOutcome SecurityHubClient::InviteMembers(const InviteMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InviteMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InviteMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/invite");
  return InviteMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InviteMembersOutcomeCallable SecurityHubClient::InviteMembersCallable(const InviteMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InviteMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InviteMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::InviteMembersAsync(const InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InviteMembers(request), context);
    } );
}

ListEnabledProductsForImportOutcome SecurityHubClient::ListEnabledProductsForImport(const ListEnabledProductsForImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnabledProductsForImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEnabledProductsForImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/productSubscriptions");
  return ListEnabledProductsForImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEnabledProductsForImportOutcomeCallable SecurityHubClient::ListEnabledProductsForImportCallable(const ListEnabledProductsForImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnabledProductsForImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnabledProductsForImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListEnabledProductsForImportAsync(const ListEnabledProductsForImportRequest& request, const ListEnabledProductsForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEnabledProductsForImport(request), context);
    } );
}

ListFindingAggregatorsOutcome SecurityHubClient::ListFindingAggregators(const ListFindingAggregatorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFindingAggregators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFindingAggregators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/list");
  return ListFindingAggregatorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFindingAggregatorsOutcomeCallable SecurityHubClient::ListFindingAggregatorsCallable(const ListFindingAggregatorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingAggregatorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindingAggregators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListFindingAggregatorsAsync(const ListFindingAggregatorsRequest& request, const ListFindingAggregatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFindingAggregators(request), context);
    } );
}

ListInvitationsOutcome SecurityHubClient::ListInvitations(const ListInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations");
  return ListInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInvitationsOutcomeCallable SecurityHubClient::ListInvitationsCallable(const ListInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListInvitationsAsync(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInvitations(request), context);
    } );
}

ListMembersOutcome SecurityHubClient::ListMembers(const ListMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  return ListMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMembersOutcomeCallable SecurityHubClient::ListMembersCallable(const ListMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMembers(request), context);
    } );
}

ListOrganizationAdminAccountsOutcome SecurityHubClient::ListOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOrganizationAdminAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOrganizationAdminAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/organization/admin");
  return ListOrganizationAdminAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationAdminAccountsOutcomeCallable SecurityHubClient::ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationAdminAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationAdminAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOrganizationAdminAccounts(request), context);
    } );
}

ListTagsForResourceOutcome SecurityHubClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SecurityHubClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

TagResourceOutcome SecurityHubClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SecurityHubClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome SecurityHubClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SecurityHubClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateActionTargetOutcome SecurityHubClient::UpdateActionTarget(const UpdateActionTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateActionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ActionTargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateActionTarget", "Required field: ActionTargetArn, is not set");
    return UpdateActionTargetOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionTargetArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateActionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/actionTargets/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetActionTargetArn());
  return UpdateActionTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateActionTargetOutcomeCallable SecurityHubClient::UpdateActionTargetCallable(const UpdateActionTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateActionTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateActionTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateActionTargetAsync(const UpdateActionTargetRequest& request, const UpdateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateActionTarget(request), context);
    } );
}

UpdateFindingAggregatorOutcome SecurityHubClient::UpdateFindingAggregator(const UpdateFindingAggregatorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFindingAggregator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFindingAggregator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingAggregator/update");
  return UpdateFindingAggregatorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFindingAggregatorOutcomeCallable SecurityHubClient::UpdateFindingAggregatorCallable(const UpdateFindingAggregatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFindingAggregatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFindingAggregator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateFindingAggregatorAsync(const UpdateFindingAggregatorRequest& request, const UpdateFindingAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFindingAggregator(request), context);
    } );
}

UpdateFindingsOutcome SecurityHubClient::UpdateFindings(const UpdateFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings");
  return UpdateFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFindingsOutcomeCallable SecurityHubClient::UpdateFindingsCallable(const UpdateFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateFindingsAsync(const UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFindings(request), context);
    } );
}

UpdateInsightOutcome SecurityHubClient::UpdateInsight(const UpdateInsightRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInsight, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InsightArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInsight", "Required field: InsightArn, is not set");
    return UpdateInsightOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InsightArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInsight, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetInsightArn());
  return UpdateInsightOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateInsightOutcomeCallable SecurityHubClient::UpdateInsightCallable(const UpdateInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateInsightAsync(const UpdateInsightRequest& request, const UpdateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateInsight(request), context);
    } );
}

UpdateOrganizationConfigurationOutcome SecurityHubClient::UpdateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/organization/configuration");
  return UpdateOrganizationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOrganizationConfigurationOutcomeCallable SecurityHubClient::UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateOrganizationConfiguration(request), context);
    } );
}

UpdateSecurityHubConfigurationOutcome SecurityHubClient::UpdateSecurityHubConfiguration(const UpdateSecurityHubConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecurityHubConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecurityHubConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  return UpdateSecurityHubConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecurityHubConfigurationOutcomeCallable SecurityHubClient::UpdateSecurityHubConfigurationCallable(const UpdateSecurityHubConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecurityHubConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecurityHubConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateSecurityHubConfigurationAsync(const UpdateSecurityHubConfigurationRequest& request, const UpdateSecurityHubConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSecurityHubConfiguration(request), context);
    } );
}

UpdateStandardsControlOutcome SecurityHubClient::UpdateStandardsControl(const UpdateStandardsControlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStandardsControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StandardsControlArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStandardsControl", "Required field: StandardsControlArn, is not set");
    return UpdateStandardsControlOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StandardsControlArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStandardsControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/standards/control/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetStandardsControlArn());
  return UpdateStandardsControlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateStandardsControlOutcomeCallable SecurityHubClient::UpdateStandardsControlCallable(const UpdateStandardsControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStandardsControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStandardsControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateStandardsControlAsync(const UpdateStandardsControlRequest& request, const UpdateStandardsControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStandardsControl(request), context);
    } );
}

