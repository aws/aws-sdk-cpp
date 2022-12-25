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

#include <aws/macie2/Macie2Client.h>
#include <aws/macie2/Macie2ErrorMarshaller.h>
#include <aws/macie2/Macie2EndpointProvider.h>
#include <aws/macie2/model/AcceptInvitationRequest.h>
#include <aws/macie2/model/BatchGetCustomDataIdentifiersRequest.h>
#include <aws/macie2/model/CreateAllowListRequest.h>
#include <aws/macie2/model/CreateClassificationJobRequest.h>
#include <aws/macie2/model/CreateCustomDataIdentifierRequest.h>
#include <aws/macie2/model/CreateFindingsFilterRequest.h>
#include <aws/macie2/model/CreateInvitationsRequest.h>
#include <aws/macie2/model/CreateMemberRequest.h>
#include <aws/macie2/model/CreateSampleFindingsRequest.h>
#include <aws/macie2/model/DeclineInvitationsRequest.h>
#include <aws/macie2/model/DeleteAllowListRequest.h>
#include <aws/macie2/model/DeleteCustomDataIdentifierRequest.h>
#include <aws/macie2/model/DeleteFindingsFilterRequest.h>
#include <aws/macie2/model/DeleteInvitationsRequest.h>
#include <aws/macie2/model/DeleteMemberRequest.h>
#include <aws/macie2/model/DescribeBucketsRequest.h>
#include <aws/macie2/model/DescribeClassificationJobRequest.h>
#include <aws/macie2/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/macie2/model/DisableMacieRequest.h>
#include <aws/macie2/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/macie2/model/DisassociateFromAdministratorAccountRequest.h>
#include <aws/macie2/model/DisassociateFromMasterAccountRequest.h>
#include <aws/macie2/model/DisassociateMemberRequest.h>
#include <aws/macie2/model/EnableMacieRequest.h>
#include <aws/macie2/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/macie2/model/GetAdministratorAccountRequest.h>
#include <aws/macie2/model/GetAllowListRequest.h>
#include <aws/macie2/model/GetAutomatedDiscoveryConfigurationRequest.h>
#include <aws/macie2/model/GetBucketStatisticsRequest.h>
#include <aws/macie2/model/GetClassificationExportConfigurationRequest.h>
#include <aws/macie2/model/GetClassificationScopeRequest.h>
#include <aws/macie2/model/GetCustomDataIdentifierRequest.h>
#include <aws/macie2/model/GetFindingStatisticsRequest.h>
#include <aws/macie2/model/GetFindingsRequest.h>
#include <aws/macie2/model/GetFindingsFilterRequest.h>
#include <aws/macie2/model/GetFindingsPublicationConfigurationRequest.h>
#include <aws/macie2/model/GetInvitationsCountRequest.h>
#include <aws/macie2/model/GetMacieSessionRequest.h>
#include <aws/macie2/model/GetMasterAccountRequest.h>
#include <aws/macie2/model/GetMemberRequest.h>
#include <aws/macie2/model/GetResourceProfileRequest.h>
#include <aws/macie2/model/GetRevealConfigurationRequest.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesRequest.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesAvailabilityRequest.h>
#include <aws/macie2/model/GetSensitivityInspectionTemplateRequest.h>
#include <aws/macie2/model/GetUsageStatisticsRequest.h>
#include <aws/macie2/model/GetUsageTotalsRequest.h>
#include <aws/macie2/model/ListAllowListsRequest.h>
#include <aws/macie2/model/ListClassificationJobsRequest.h>
#include <aws/macie2/model/ListClassificationScopesRequest.h>
#include <aws/macie2/model/ListCustomDataIdentifiersRequest.h>
#include <aws/macie2/model/ListFindingsRequest.h>
#include <aws/macie2/model/ListFindingsFiltersRequest.h>
#include <aws/macie2/model/ListInvitationsRequest.h>
#include <aws/macie2/model/ListManagedDataIdentifiersRequest.h>
#include <aws/macie2/model/ListMembersRequest.h>
#include <aws/macie2/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/macie2/model/ListResourceProfileArtifactsRequest.h>
#include <aws/macie2/model/ListResourceProfileDetectionsRequest.h>
#include <aws/macie2/model/ListSensitivityInspectionTemplatesRequest.h>
#include <aws/macie2/model/ListTagsForResourceRequest.h>
#include <aws/macie2/model/PutClassificationExportConfigurationRequest.h>
#include <aws/macie2/model/PutFindingsPublicationConfigurationRequest.h>
#include <aws/macie2/model/SearchResourcesRequest.h>
#include <aws/macie2/model/TagResourceRequest.h>
#include <aws/macie2/model/TestCustomDataIdentifierRequest.h>
#include <aws/macie2/model/UntagResourceRequest.h>
#include <aws/macie2/model/UpdateAllowListRequest.h>
#include <aws/macie2/model/UpdateAutomatedDiscoveryConfigurationRequest.h>
#include <aws/macie2/model/UpdateClassificationJobRequest.h>
#include <aws/macie2/model/UpdateClassificationScopeRequest.h>
#include <aws/macie2/model/UpdateFindingsFilterRequest.h>
#include <aws/macie2/model/UpdateMacieSessionRequest.h>
#include <aws/macie2/model/UpdateMemberSessionRequest.h>
#include <aws/macie2/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/macie2/model/UpdateResourceProfileRequest.h>
#include <aws/macie2/model/UpdateResourceProfileDetectionsRequest.h>
#include <aws/macie2/model/UpdateRevealConfigurationRequest.h>
#include <aws/macie2/model/UpdateSensitivityInspectionTemplateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Macie2;
using namespace Aws::Macie2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* Macie2Client::SERVICE_NAME = "macie2";
const char* Macie2Client::ALLOCATION_TAG = "Macie2Client";

Macie2Client::Macie2Client(const Macie2::Macie2ClientConfiguration& clientConfiguration,
                           std::shared_ptr<Macie2EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Macie2Client::Macie2Client(const AWSCredentials& credentials,
                           std::shared_ptr<Macie2EndpointProviderBase> endpointProvider,
                           const Macie2::Macie2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Macie2Client::Macie2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<Macie2EndpointProviderBase> endpointProvider,
                           const Macie2::Macie2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  Macie2Client::Macie2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Macie2Client::Macie2Client(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Macie2Client::Macie2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
Macie2Client::~Macie2Client()
{
}

std::shared_ptr<Macie2EndpointProviderBase>& Macie2Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void Macie2Client::init(const Macie2::Macie2ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Macie2");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void Macie2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptInvitationOutcome Macie2Client::AcceptInvitation(const AcceptInvitationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/accept");
  return AcceptInvitationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptInvitationOutcomeCallable Macie2Client::AcceptInvitationCallable(const AcceptInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::AcceptInvitationAsync(const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AcceptInvitation(request), context);
    } );
}

BatchGetCustomDataIdentifiersOutcome Macie2Client::BatchGetCustomDataIdentifiers(const BatchGetCustomDataIdentifiersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetCustomDataIdentifiers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetCustomDataIdentifiers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/get");
  return BatchGetCustomDataIdentifiersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetCustomDataIdentifiersOutcomeCallable Macie2Client::BatchGetCustomDataIdentifiersCallable(const BatchGetCustomDataIdentifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetCustomDataIdentifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetCustomDataIdentifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::BatchGetCustomDataIdentifiersAsync(const BatchGetCustomDataIdentifiersRequest& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetCustomDataIdentifiers(request), context);
    } );
}

CreateAllowListOutcome Macie2Client::CreateAllowList(const CreateAllowListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAllowList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAllowList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists");
  return CreateAllowListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAllowListOutcomeCallable Macie2Client::CreateAllowListCallable(const CreateAllowListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAllowListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAllowList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateAllowListAsync(const CreateAllowListRequest& request, const CreateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAllowList(request), context);
    } );
}

CreateClassificationJobOutcome Macie2Client::CreateClassificationJob(const CreateClassificationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateClassificationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateClassificationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  return CreateClassificationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClassificationJobOutcomeCallable Macie2Client::CreateClassificationJobCallable(const CreateClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateClassificationJobAsync(const CreateClassificationJobRequest& request, const CreateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateClassificationJob(request), context);
    } );
}

CreateCustomDataIdentifierOutcome Macie2Client::CreateCustomDataIdentifier(const CreateCustomDataIdentifierRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomDataIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomDataIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers");
  return CreateCustomDataIdentifierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomDataIdentifierOutcomeCallable Macie2Client::CreateCustomDataIdentifierCallable(const CreateCustomDataIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomDataIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomDataIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateCustomDataIdentifierAsync(const CreateCustomDataIdentifierRequest& request, const CreateCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomDataIdentifier(request), context);
    } );
}

CreateFindingsFilterOutcome Macie2Client::CreateFindingsFilter(const CreateFindingsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFindingsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFindingsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters");
  return CreateFindingsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFindingsFilterOutcomeCallable Macie2Client::CreateFindingsFilterCallable(const CreateFindingsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFindingsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFindingsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateFindingsFilterAsync(const CreateFindingsFilterRequest& request, const CreateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFindingsFilter(request), context);
    } );
}

CreateInvitationsOutcome Macie2Client::CreateInvitations(const CreateInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations");
  return CreateInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInvitationsOutcomeCallable Macie2Client::CreateInvitationsCallable(const CreateInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateInvitationsAsync(const CreateInvitationsRequest& request, const CreateInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInvitations(request), context);
    } );
}

CreateMemberOutcome Macie2Client::CreateMember(const CreateMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  return CreateMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMemberOutcomeCallable Macie2Client::CreateMemberCallable(const CreateMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateMemberAsync(const CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMember(request), context);
    } );
}

CreateSampleFindingsOutcome Macie2Client::CreateSampleFindings(const CreateSampleFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSampleFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSampleFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/sample");
  return CreateSampleFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSampleFindingsOutcomeCallable Macie2Client::CreateSampleFindingsCallable(const CreateSampleFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSampleFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSampleFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateSampleFindingsAsync(const CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSampleFindings(request), context);
    } );
}

DeclineInvitationsOutcome Macie2Client::DeclineInvitations(const DeclineInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeclineInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeclineInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/decline");
  return DeclineInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeclineInvitationsOutcomeCallable Macie2Client::DeclineInvitationsCallable(const DeclineInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeclineInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeclineInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeclineInvitationsAsync(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeclineInvitations(request), context);
    } );
}

DeleteAllowListOutcome Macie2Client::DeleteAllowList(const DeleteAllowListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAllowList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAllowList", "Required field: Id, is not set");
    return DeleteAllowListOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAllowList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteAllowListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAllowListOutcomeCallable Macie2Client::DeleteAllowListCallable(const DeleteAllowListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAllowListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAllowList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteAllowListAsync(const DeleteAllowListRequest& request, const DeleteAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAllowList(request), context);
    } );
}

DeleteCustomDataIdentifierOutcome Macie2Client::DeleteCustomDataIdentifier(const DeleteCustomDataIdentifierRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomDataIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomDataIdentifier", "Required field: Id, is not set");
    return DeleteCustomDataIdentifierOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomDataIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteCustomDataIdentifierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomDataIdentifierOutcomeCallable Macie2Client::DeleteCustomDataIdentifierCallable(const DeleteCustomDataIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomDataIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomDataIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteCustomDataIdentifierAsync(const DeleteCustomDataIdentifierRequest& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomDataIdentifier(request), context);
    } );
}

DeleteFindingsFilterOutcome Macie2Client::DeleteFindingsFilter(const DeleteFindingsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFindingsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFindingsFilter", "Required field: Id, is not set");
    return DeleteFindingsFilterOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFindingsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteFindingsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFindingsFilterOutcomeCallable Macie2Client::DeleteFindingsFilterCallable(const DeleteFindingsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFindingsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFindingsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteFindingsFilterAsync(const DeleteFindingsFilterRequest& request, const DeleteFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFindingsFilter(request), context);
    } );
}

DeleteInvitationsOutcome Macie2Client::DeleteInvitations(const DeleteInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/delete");
  return DeleteInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInvitationsOutcomeCallable Macie2Client::DeleteInvitationsCallable(const DeleteInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteInvitationsAsync(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInvitations(request), context);
    } );
}

DeleteMemberOutcome Macie2Client::DeleteMember(const DeleteMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: Id, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMemberOutcomeCallable Macie2Client::DeleteMemberCallable(const DeleteMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteMemberAsync(const DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMember(request), context);
    } );
}

DescribeBucketsOutcome Macie2Client::DescribeBuckets(const DescribeBucketsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/s3");
  return DescribeBucketsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBucketsOutcomeCallable Macie2Client::DescribeBucketsCallable(const DescribeBucketsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBucketsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBuckets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DescribeBucketsAsync(const DescribeBucketsRequest& request, const DescribeBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBuckets(request), context);
    } );
}

DescribeClassificationJobOutcome Macie2Client::DescribeClassificationJob(const DescribeClassificationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClassificationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeClassificationJob", "Required field: JobId, is not set");
    return DescribeClassificationJobOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClassificationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return DescribeClassificationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeClassificationJobOutcomeCallable Macie2Client::DescribeClassificationJobCallable(const DescribeClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DescribeClassificationJobAsync(const DescribeClassificationJobRequest& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeClassificationJob(request), context);
    } );
}

DescribeOrganizationConfigurationOutcome Macie2Client::DescribeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin/configuration");
  return DescribeOrganizationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigurationOutcomeCallable Macie2Client::DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOrganizationConfiguration(request), context);
    } );
}

DisableMacieOutcome Macie2Client::DisableMacie(const DisableMacieRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableMacie, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableMacie, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  return DisableMacieOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisableMacieOutcomeCallable Macie2Client::DisableMacieCallable(const DisableMacieRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableMacieOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableMacie(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisableMacieAsync(const DisableMacieRequest& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableMacie(request), context);
    } );
}

DisableOrganizationAdminAccountOutcome Macie2Client::DisableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AdminAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableOrganizationAdminAccount", "Required field: AdminAccountId, is not set");
    return DisableOrganizationAdminAccountOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AdminAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  return DisableOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisableOrganizationAdminAccountOutcomeCallable Macie2Client::DisableOrganizationAdminAccountCallable(const DisableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableOrganizationAdminAccount(request), context);
    } );
}

DisassociateFromAdministratorAccountOutcome Macie2Client::DisassociateFromAdministratorAccount(const DisassociateFromAdministratorAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateFromAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateFromAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/administrator/disassociate");
  return DisassociateFromAdministratorAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFromAdministratorAccountOutcomeCallable Macie2Client::DisassociateFromAdministratorAccountCallable(const DisassociateFromAdministratorAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFromAdministratorAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFromAdministratorAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisassociateFromAdministratorAccountAsync(const DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateFromAdministratorAccount(request), context);
    } );
}

DisassociateFromMasterAccountOutcome Macie2Client::DisassociateFromMasterAccount(const DisassociateFromMasterAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateFromMasterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateFromMasterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/master/disassociate");
  return DisassociateFromMasterAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFromMasterAccountOutcomeCallable Macie2Client::DisassociateFromMasterAccountCallable(const DisassociateFromMasterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFromMasterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFromMasterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisassociateFromMasterAccountAsync(const DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateFromMasterAccount(request), context);
    } );
}

DisassociateMemberOutcome Macie2Client::DisassociateMember(const DisassociateMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMember", "Required field: Id, is not set");
    return DisassociateMemberOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/disassociate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DisassociateMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMemberOutcomeCallable Macie2Client::DisassociateMemberCallable(const DisassociateMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisassociateMemberAsync(const DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateMember(request), context);
    } );
}

EnableMacieOutcome Macie2Client::EnableMacie(const EnableMacieRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableMacie, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableMacie, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  return EnableMacieOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableMacieOutcomeCallable Macie2Client::EnableMacieCallable(const EnableMacieRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableMacieOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableMacie(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::EnableMacieAsync(const EnableMacieRequest& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableMacie(request), context);
    } );
}

EnableOrganizationAdminAccountOutcome Macie2Client::EnableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  return EnableOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableOrganizationAdminAccountOutcomeCallable Macie2Client::EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableOrganizationAdminAccount(request), context);
    } );
}

GetAdministratorAccountOutcome Macie2Client::GetAdministratorAccount(const GetAdministratorAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  return GetAdministratorAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAdministratorAccountOutcomeCallable Macie2Client::GetAdministratorAccountCallable(const GetAdministratorAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAdministratorAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAdministratorAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetAdministratorAccountAsync(const GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAdministratorAccount(request), context);
    } );
}

GetAllowListOutcome Macie2Client::GetAllowList(const GetAllowListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAllowList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAllowList", "Required field: Id, is not set");
    return GetAllowListOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAllowList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetAllowListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAllowListOutcomeCallable Macie2Client::GetAllowListCallable(const GetAllowListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAllowListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAllowList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetAllowListAsync(const GetAllowListRequest& request, const GetAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAllowList(request), context);
    } );
}

GetAutomatedDiscoveryConfigurationOutcome Macie2Client::GetAutomatedDiscoveryConfiguration(const GetAutomatedDiscoveryConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutomatedDiscoveryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAutomatedDiscoveryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/configuration");
  return GetAutomatedDiscoveryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAutomatedDiscoveryConfigurationOutcomeCallable Macie2Client::GetAutomatedDiscoveryConfigurationCallable(const GetAutomatedDiscoveryConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAutomatedDiscoveryConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAutomatedDiscoveryConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetAutomatedDiscoveryConfigurationAsync(const GetAutomatedDiscoveryConfigurationRequest& request, const GetAutomatedDiscoveryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAutomatedDiscoveryConfiguration(request), context);
    } );
}

GetBucketStatisticsOutcome Macie2Client::GetBucketStatistics(const GetBucketStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/s3/statistics");
  return GetBucketStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketStatisticsOutcomeCallable Macie2Client::GetBucketStatisticsCallable(const GetBucketStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetBucketStatisticsAsync(const GetBucketStatisticsRequest& request, const GetBucketStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketStatistics(request), context);
    } );
}

GetClassificationExportConfigurationOutcome Macie2Client::GetClassificationExportConfiguration(const GetClassificationExportConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetClassificationExportConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetClassificationExportConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/classification-export-configuration");
  return GetClassificationExportConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetClassificationExportConfigurationOutcomeCallable Macie2Client::GetClassificationExportConfigurationCallable(const GetClassificationExportConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClassificationExportConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClassificationExportConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetClassificationExportConfigurationAsync(const GetClassificationExportConfigurationRequest& request, const GetClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetClassificationExportConfiguration(request), context);
    } );
}

GetClassificationScopeOutcome Macie2Client::GetClassificationScope(const GetClassificationScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetClassificationScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetClassificationScope", "Required field: Id, is not set");
    return GetClassificationScopeOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetClassificationScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/classification-scopes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetClassificationScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetClassificationScopeOutcomeCallable Macie2Client::GetClassificationScopeCallable(const GetClassificationScopeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClassificationScopeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClassificationScope(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetClassificationScopeAsync(const GetClassificationScopeRequest& request, const GetClassificationScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetClassificationScope(request), context);
    } );
}

GetCustomDataIdentifierOutcome Macie2Client::GetCustomDataIdentifier(const GetCustomDataIdentifierRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCustomDataIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCustomDataIdentifier", "Required field: Id, is not set");
    return GetCustomDataIdentifierOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCustomDataIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetCustomDataIdentifierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCustomDataIdentifierOutcomeCallable Macie2Client::GetCustomDataIdentifierCallable(const GetCustomDataIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCustomDataIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCustomDataIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetCustomDataIdentifierAsync(const GetCustomDataIdentifierRequest& request, const GetCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCustomDataIdentifier(request), context);
    } );
}

GetFindingStatisticsOutcome Macie2Client::GetFindingStatistics(const GetFindingStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFindingStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFindingStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/statistics");
  return GetFindingStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFindingStatisticsOutcomeCallable Macie2Client::GetFindingStatisticsCallable(const GetFindingStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetFindingStatisticsAsync(const GetFindingStatisticsRequest& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFindingStatistics(request), context);
    } );
}

GetFindingsOutcome Macie2Client::GetFindings(const GetFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/describe");
  return GetFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsOutcomeCallable Macie2Client::GetFindingsCallable(const GetFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetFindingsAsync(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFindings(request), context);
    } );
}

GetFindingsFilterOutcome Macie2Client::GetFindingsFilter(const GetFindingsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFindingsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFindingsFilter", "Required field: Id, is not set");
    return GetFindingsFilterOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFindingsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetFindingsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsFilterOutcomeCallable Macie2Client::GetFindingsFilterCallable(const GetFindingsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetFindingsFilterAsync(const GetFindingsFilterRequest& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFindingsFilter(request), context);
    } );
}

GetFindingsPublicationConfigurationOutcome Macie2Client::GetFindingsPublicationConfiguration(const GetFindingsPublicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFindingsPublicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFindingsPublicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings-publication-configuration");
  return GetFindingsPublicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsPublicationConfigurationOutcomeCallable Macie2Client::GetFindingsPublicationConfigurationCallable(const GetFindingsPublicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsPublicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingsPublicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetFindingsPublicationConfigurationAsync(const GetFindingsPublicationConfigurationRequest& request, const GetFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFindingsPublicationConfiguration(request), context);
    } );
}

GetInvitationsCountOutcome Macie2Client::GetInvitationsCount(const GetInvitationsCountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInvitationsCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInvitationsCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/count");
  return GetInvitationsCountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInvitationsCountOutcomeCallable Macie2Client::GetInvitationsCountCallable(const GetInvitationsCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvitationsCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvitationsCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetInvitationsCountAsync(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInvitationsCount(request), context);
    } );
}

GetMacieSessionOutcome Macie2Client::GetMacieSession(const GetMacieSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMacieSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMacieSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  return GetMacieSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMacieSessionOutcomeCallable Macie2Client::GetMacieSessionCallable(const GetMacieSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMacieSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMacieSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetMacieSessionAsync(const GetMacieSessionRequest& request, const GetMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMacieSession(request), context);
    } );
}

GetMasterAccountOutcome Macie2Client::GetMasterAccount(const GetMasterAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMasterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMasterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/master");
  return GetMasterAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMasterAccountOutcomeCallable Macie2Client::GetMasterAccountCallable(const GetMasterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMasterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMasterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetMasterAccountAsync(const GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMasterAccount(request), context);
    } );
}

GetMemberOutcome Macie2Client::GetMember(const GetMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMember", "Required field: Id, is not set");
    return GetMemberOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMemberOutcomeCallable Macie2Client::GetMemberCallable(const GetMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetMemberAsync(const GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMember(request), context);
    } );
}

GetResourceProfileOutcome Macie2Client::GetResourceProfile(const GetResourceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceProfile", "Required field: ResourceArn, is not set");
    return GetResourceProfileOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles");
  return GetResourceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceProfileOutcomeCallable Macie2Client::GetResourceProfileCallable(const GetResourceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetResourceProfileAsync(const GetResourceProfileRequest& request, const GetResourceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourceProfile(request), context);
    } );
}

GetRevealConfigurationOutcome Macie2Client::GetRevealConfiguration(const GetRevealConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRevealConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRevealConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reveal-configuration");
  return GetRevealConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRevealConfigurationOutcomeCallable Macie2Client::GetRevealConfigurationCallable(const GetRevealConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRevealConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRevealConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetRevealConfigurationAsync(const GetRevealConfigurationRequest& request, const GetRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRevealConfiguration(request), context);
    } );
}

GetSensitiveDataOccurrencesOutcome Macie2Client::GetSensitiveDataOccurrences(const GetSensitiveDataOccurrencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSensitiveDataOccurrences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FindingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSensitiveDataOccurrences", "Required field: FindingId, is not set");
    return GetSensitiveDataOccurrencesOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSensitiveDataOccurrences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFindingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reveal");
  return GetSensitiveDataOccurrencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSensitiveDataOccurrencesOutcomeCallable Macie2Client::GetSensitiveDataOccurrencesCallable(const GetSensitiveDataOccurrencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSensitiveDataOccurrencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSensitiveDataOccurrences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetSensitiveDataOccurrencesAsync(const GetSensitiveDataOccurrencesRequest& request, const GetSensitiveDataOccurrencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSensitiveDataOccurrences(request), context);
    } );
}

GetSensitiveDataOccurrencesAvailabilityOutcome Macie2Client::GetSensitiveDataOccurrencesAvailability(const GetSensitiveDataOccurrencesAvailabilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSensitiveDataOccurrencesAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FindingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSensitiveDataOccurrencesAvailability", "Required field: FindingId, is not set");
    return GetSensitiveDataOccurrencesAvailabilityOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSensitiveDataOccurrencesAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFindingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reveal/availability");
  return GetSensitiveDataOccurrencesAvailabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSensitiveDataOccurrencesAvailabilityOutcomeCallable Macie2Client::GetSensitiveDataOccurrencesAvailabilityCallable(const GetSensitiveDataOccurrencesAvailabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSensitiveDataOccurrencesAvailabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSensitiveDataOccurrencesAvailability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetSensitiveDataOccurrencesAvailabilityAsync(const GetSensitiveDataOccurrencesAvailabilityRequest& request, const GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSensitiveDataOccurrencesAvailability(request), context);
    } );
}

GetSensitivityInspectionTemplateOutcome Macie2Client::GetSensitivityInspectionTemplate(const GetSensitivityInspectionTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSensitivityInspectionTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSensitivityInspectionTemplate", "Required field: Id, is not set");
    return GetSensitivityInspectionTemplateOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSensitivityInspectionTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/sensitivity-inspections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetSensitivityInspectionTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSensitivityInspectionTemplateOutcomeCallable Macie2Client::GetSensitivityInspectionTemplateCallable(const GetSensitivityInspectionTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSensitivityInspectionTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSensitivityInspectionTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetSensitivityInspectionTemplateAsync(const GetSensitivityInspectionTemplateRequest& request, const GetSensitivityInspectionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSensitivityInspectionTemplate(request), context);
    } );
}

GetUsageStatisticsOutcome Macie2Client::GetUsageStatistics(const GetUsageStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUsageStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUsageStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/usage/statistics");
  return GetUsageStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUsageStatisticsOutcomeCallable Macie2Client::GetUsageStatisticsCallable(const GetUsageStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsageStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetUsageStatisticsAsync(const GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUsageStatistics(request), context);
    } );
}

GetUsageTotalsOutcome Macie2Client::GetUsageTotals(const GetUsageTotalsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUsageTotals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUsageTotals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/usage");
  return GetUsageTotalsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUsageTotalsOutcomeCallable Macie2Client::GetUsageTotalsCallable(const GetUsageTotalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageTotalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsageTotals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetUsageTotalsAsync(const GetUsageTotalsRequest& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUsageTotals(request), context);
    } );
}

ListAllowListsOutcome Macie2Client::ListAllowLists(const ListAllowListsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAllowLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAllowLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists");
  return ListAllowListsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAllowListsOutcomeCallable Macie2Client::ListAllowListsCallable(const ListAllowListsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAllowListsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAllowLists(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListAllowListsAsync(const ListAllowListsRequest& request, const ListAllowListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAllowLists(request), context);
    } );
}

ListClassificationJobsOutcome Macie2Client::ListClassificationJobs(const ListClassificationJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListClassificationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListClassificationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/list");
  return ListClassificationJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClassificationJobsOutcomeCallable Macie2Client::ListClassificationJobsCallable(const ListClassificationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClassificationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClassificationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListClassificationJobsAsync(const ListClassificationJobsRequest& request, const ListClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListClassificationJobs(request), context);
    } );
}

ListClassificationScopesOutcome Macie2Client::ListClassificationScopes(const ListClassificationScopesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListClassificationScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListClassificationScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/classification-scopes");
  return ListClassificationScopesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListClassificationScopesOutcomeCallable Macie2Client::ListClassificationScopesCallable(const ListClassificationScopesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClassificationScopesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClassificationScopes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListClassificationScopesAsync(const ListClassificationScopesRequest& request, const ListClassificationScopesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListClassificationScopes(request), context);
    } );
}

ListCustomDataIdentifiersOutcome Macie2Client::ListCustomDataIdentifiers(const ListCustomDataIdentifiersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomDataIdentifiers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomDataIdentifiers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/list");
  return ListCustomDataIdentifiersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomDataIdentifiersOutcomeCallable Macie2Client::ListCustomDataIdentifiersCallable(const ListCustomDataIdentifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomDataIdentifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomDataIdentifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListCustomDataIdentifiersAsync(const ListCustomDataIdentifiersRequest& request, const ListCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomDataIdentifiers(request), context);
    } );
}

ListFindingsOutcome Macie2Client::ListFindings(const ListFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings");
  return ListFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsOutcomeCallable Macie2Client::ListFindingsCallable(const ListFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFindings(request), context);
    } );
}

ListFindingsFiltersOutcome Macie2Client::ListFindingsFilters(const ListFindingsFiltersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFindingsFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFindingsFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters");
  return ListFindingsFiltersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsFiltersOutcomeCallable Macie2Client::ListFindingsFiltersCallable(const ListFindingsFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindingsFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListFindingsFiltersAsync(const ListFindingsFiltersRequest& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFindingsFilters(request), context);
    } );
}

ListInvitationsOutcome Macie2Client::ListInvitations(const ListInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitations");
  return ListInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInvitationsOutcomeCallable Macie2Client::ListInvitationsCallable(const ListInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListInvitationsAsync(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInvitations(request), context);
    } );
}

ListManagedDataIdentifiersOutcome Macie2Client::ListManagedDataIdentifiers(const ListManagedDataIdentifiersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListManagedDataIdentifiers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListManagedDataIdentifiers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/managed-data-identifiers/list");
  return ListManagedDataIdentifiersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListManagedDataIdentifiersOutcomeCallable Macie2Client::ListManagedDataIdentifiersCallable(const ListManagedDataIdentifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedDataIdentifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedDataIdentifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListManagedDataIdentifiersAsync(const ListManagedDataIdentifiersRequest& request, const ListManagedDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListManagedDataIdentifiers(request), context);
    } );
}

ListMembersOutcome Macie2Client::ListMembers(const ListMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  return ListMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMembersOutcomeCallable Macie2Client::ListMembersCallable(const ListMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMembers(request), context);
    } );
}

ListOrganizationAdminAccountsOutcome Macie2Client::ListOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOrganizationAdminAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOrganizationAdminAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  return ListOrganizationAdminAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationAdminAccountsOutcomeCallable Macie2Client::ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationAdminAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationAdminAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOrganizationAdminAccounts(request), context);
    } );
}

ListResourceProfileArtifactsOutcome Macie2Client::ListResourceProfileArtifacts(const ListResourceProfileArtifactsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceProfileArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListResourceProfileArtifacts", "Required field: ResourceArn, is not set");
    return ListResourceProfileArtifactsOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceProfileArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles/artifacts");
  return ListResourceProfileArtifactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResourceProfileArtifactsOutcomeCallable Macie2Client::ListResourceProfileArtifactsCallable(const ListResourceProfileArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceProfileArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceProfileArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListResourceProfileArtifactsAsync(const ListResourceProfileArtifactsRequest& request, const ListResourceProfileArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceProfileArtifacts(request), context);
    } );
}

ListResourceProfileDetectionsOutcome Macie2Client::ListResourceProfileDetections(const ListResourceProfileDetectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceProfileDetections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListResourceProfileDetections", "Required field: ResourceArn, is not set");
    return ListResourceProfileDetectionsOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceProfileDetections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles/detections");
  return ListResourceProfileDetectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResourceProfileDetectionsOutcomeCallable Macie2Client::ListResourceProfileDetectionsCallable(const ListResourceProfileDetectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceProfileDetectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceProfileDetections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListResourceProfileDetectionsAsync(const ListResourceProfileDetectionsRequest& request, const ListResourceProfileDetectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceProfileDetections(request), context);
    } );
}

ListSensitivityInspectionTemplatesOutcome Macie2Client::ListSensitivityInspectionTemplates(const ListSensitivityInspectionTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSensitivityInspectionTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSensitivityInspectionTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/sensitivity-inspections");
  return ListSensitivityInspectionTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSensitivityInspectionTemplatesOutcomeCallable Macie2Client::ListSensitivityInspectionTemplatesCallable(const ListSensitivityInspectionTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSensitivityInspectionTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSensitivityInspectionTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListSensitivityInspectionTemplatesAsync(const ListSensitivityInspectionTemplatesRequest& request, const ListSensitivityInspectionTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSensitivityInspectionTemplates(request), context);
    } );
}

ListTagsForResourceOutcome Macie2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable Macie2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutClassificationExportConfigurationOutcome Macie2Client::PutClassificationExportConfiguration(const PutClassificationExportConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutClassificationExportConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutClassificationExportConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/classification-export-configuration");
  return PutClassificationExportConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutClassificationExportConfigurationOutcomeCallable Macie2Client::PutClassificationExportConfigurationCallable(const PutClassificationExportConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutClassificationExportConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutClassificationExportConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::PutClassificationExportConfigurationAsync(const PutClassificationExportConfigurationRequest& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutClassificationExportConfiguration(request), context);
    } );
}

PutFindingsPublicationConfigurationOutcome Macie2Client::PutFindingsPublicationConfiguration(const PutFindingsPublicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutFindingsPublicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutFindingsPublicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings-publication-configuration");
  return PutFindingsPublicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutFindingsPublicationConfigurationOutcomeCallable Macie2Client::PutFindingsPublicationConfigurationCallable(const PutFindingsPublicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFindingsPublicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFindingsPublicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::PutFindingsPublicationConfigurationAsync(const PutFindingsPublicationConfigurationRequest& request, const PutFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutFindingsPublicationConfiguration(request), context);
    } );
}

SearchResourcesOutcome Macie2Client::SearchResources(const SearchResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/search-resources");
  return SearchResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchResourcesOutcomeCallable Macie2Client::SearchResourcesCallable(const SearchResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::SearchResourcesAsync(const SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchResources(request), context);
    } );
}

TagResourceOutcome Macie2Client::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable Macie2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

TestCustomDataIdentifierOutcome Macie2Client::TestCustomDataIdentifier(const TestCustomDataIdentifierRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestCustomDataIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestCustomDataIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/test");
  return TestCustomDataIdentifierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestCustomDataIdentifierOutcomeCallable Macie2Client::TestCustomDataIdentifierCallable(const TestCustomDataIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestCustomDataIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestCustomDataIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::TestCustomDataIdentifierAsync(const TestCustomDataIdentifierRequest& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestCustomDataIdentifier(request), context);
    } );
}

UntagResourceOutcome Macie2Client::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable Macie2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAllowListOutcome Macie2Client::UpdateAllowList(const UpdateAllowListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAllowList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAllowList", "Required field: Id, is not set");
    return UpdateAllowListOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAllowList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateAllowListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAllowListOutcomeCallable Macie2Client::UpdateAllowListCallable(const UpdateAllowListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAllowListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAllowList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateAllowListAsync(const UpdateAllowListRequest& request, const UpdateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAllowList(request), context);
    } );
}

UpdateAutomatedDiscoveryConfigurationOutcome Macie2Client::UpdateAutomatedDiscoveryConfiguration(const UpdateAutomatedDiscoveryConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAutomatedDiscoveryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAutomatedDiscoveryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/configuration");
  return UpdateAutomatedDiscoveryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAutomatedDiscoveryConfigurationOutcomeCallable Macie2Client::UpdateAutomatedDiscoveryConfigurationCallable(const UpdateAutomatedDiscoveryConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAutomatedDiscoveryConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAutomatedDiscoveryConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateAutomatedDiscoveryConfigurationAsync(const UpdateAutomatedDiscoveryConfigurationRequest& request, const UpdateAutomatedDiscoveryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAutomatedDiscoveryConfiguration(request), context);
    } );
}

UpdateClassificationJobOutcome Macie2Client::UpdateClassificationJob(const UpdateClassificationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateClassificationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClassificationJob", "Required field: JobId, is not set");
    return UpdateClassificationJobOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateClassificationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return UpdateClassificationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateClassificationJobOutcomeCallable Macie2Client::UpdateClassificationJobCallable(const UpdateClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateClassificationJobAsync(const UpdateClassificationJobRequest& request, const UpdateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateClassificationJob(request), context);
    } );
}

UpdateClassificationScopeOutcome Macie2Client::UpdateClassificationScope(const UpdateClassificationScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateClassificationScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClassificationScope", "Required field: Id, is not set");
    return UpdateClassificationScopeOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateClassificationScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/classification-scopes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateClassificationScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateClassificationScopeOutcomeCallable Macie2Client::UpdateClassificationScopeCallable(const UpdateClassificationScopeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClassificationScopeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClassificationScope(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateClassificationScopeAsync(const UpdateClassificationScopeRequest& request, const UpdateClassificationScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateClassificationScope(request), context);
    } );
}

UpdateFindingsFilterOutcome Macie2Client::UpdateFindingsFilter(const UpdateFindingsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFindingsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFindingsFilter", "Required field: Id, is not set");
    return UpdateFindingsFilterOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFindingsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateFindingsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFindingsFilterOutcomeCallable Macie2Client::UpdateFindingsFilterCallable(const UpdateFindingsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFindingsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFindingsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateFindingsFilterAsync(const UpdateFindingsFilterRequest& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFindingsFilter(request), context);
    } );
}

UpdateMacieSessionOutcome Macie2Client::UpdateMacieSession(const UpdateMacieSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMacieSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMacieSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  return UpdateMacieSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMacieSessionOutcomeCallable Macie2Client::UpdateMacieSessionCallable(const UpdateMacieSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMacieSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMacieSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateMacieSessionAsync(const UpdateMacieSessionRequest& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMacieSession(request), context);
    } );
}

UpdateMemberSessionOutcome Macie2Client::UpdateMemberSession(const UpdateMemberSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMemberSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMemberSession", "Required field: Id, is not set");
    return UpdateMemberSessionOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMemberSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/macie/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateMemberSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMemberSessionOutcomeCallable Macie2Client::UpdateMemberSessionCallable(const UpdateMemberSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMemberSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMemberSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateMemberSessionAsync(const UpdateMemberSessionRequest& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMemberSession(request), context);
    } );
}

UpdateOrganizationConfigurationOutcome Macie2Client::UpdateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin/configuration");
  return UpdateOrganizationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateOrganizationConfigurationOutcomeCallable Macie2Client::UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateOrganizationConfiguration(request), context);
    } );
}

UpdateResourceProfileOutcome Macie2Client::UpdateResourceProfile(const UpdateResourceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourceProfile", "Required field: ResourceArn, is not set");
    return UpdateResourceProfileOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles");
  return UpdateResourceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceProfileOutcomeCallable Macie2Client::UpdateResourceProfileCallable(const UpdateResourceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateResourceProfileAsync(const UpdateResourceProfileRequest& request, const UpdateResourceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResourceProfile(request), context);
    } );
}

UpdateResourceProfileDetectionsOutcome Macie2Client::UpdateResourceProfileDetections(const UpdateResourceProfileDetectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourceProfileDetections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourceProfileDetections", "Required field: ResourceArn, is not set");
    return UpdateResourceProfileDetectionsOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourceProfileDetections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles/detections");
  return UpdateResourceProfileDetectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceProfileDetectionsOutcomeCallable Macie2Client::UpdateResourceProfileDetectionsCallable(const UpdateResourceProfileDetectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceProfileDetectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceProfileDetections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateResourceProfileDetectionsAsync(const UpdateResourceProfileDetectionsRequest& request, const UpdateResourceProfileDetectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResourceProfileDetections(request), context);
    } );
}

UpdateRevealConfigurationOutcome Macie2Client::UpdateRevealConfiguration(const UpdateRevealConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRevealConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRevealConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reveal-configuration");
  return UpdateRevealConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRevealConfigurationOutcomeCallable Macie2Client::UpdateRevealConfigurationCallable(const UpdateRevealConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRevealConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRevealConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateRevealConfigurationAsync(const UpdateRevealConfigurationRequest& request, const UpdateRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRevealConfiguration(request), context);
    } );
}

UpdateSensitivityInspectionTemplateOutcome Macie2Client::UpdateSensitivityInspectionTemplate(const UpdateSensitivityInspectionTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSensitivityInspectionTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSensitivityInspectionTemplate", "Required field: Id, is not set");
    return UpdateSensitivityInspectionTemplateOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSensitivityInspectionTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/sensitivity-inspections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateSensitivityInspectionTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSensitivityInspectionTemplateOutcomeCallable Macie2Client::UpdateSensitivityInspectionTemplateCallable(const UpdateSensitivityInspectionTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSensitivityInspectionTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSensitivityInspectionTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateSensitivityInspectionTemplateAsync(const UpdateSensitivityInspectionTemplateRequest& request, const UpdateSensitivityInspectionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSensitivityInspectionTemplate(request), context);
    } );
}

