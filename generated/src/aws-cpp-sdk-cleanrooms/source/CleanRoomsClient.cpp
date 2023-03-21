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

#include <aws/cleanrooms/CleanRoomsClient.h>
#include <aws/cleanrooms/CleanRoomsErrorMarshaller.h>
#include <aws/cleanrooms/CleanRoomsEndpointProvider.h>
#include <aws/cleanrooms/model/BatchGetSchemaRequest.h>
#include <aws/cleanrooms/model/CreateCollaborationRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/CreateMembershipRequest.h>
#include <aws/cleanrooms/model/DeleteCollaborationRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/DeleteMemberRequest.h>
#include <aws/cleanrooms/model/DeleteMembershipRequest.h>
#include <aws/cleanrooms/model/GetCollaborationRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/GetMembershipRequest.h>
#include <aws/cleanrooms/model/GetProtectedQueryRequest.h>
#include <aws/cleanrooms/model/GetSchemaRequest.h>
#include <aws/cleanrooms/model/GetSchemaAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/ListCollaborationsRequest.h>
#include <aws/cleanrooms/model/ListConfiguredTableAssociationsRequest.h>
#include <aws/cleanrooms/model/ListConfiguredTablesRequest.h>
#include <aws/cleanrooms/model/ListMembersRequest.h>
#include <aws/cleanrooms/model/ListMembershipsRequest.h>
#include <aws/cleanrooms/model/ListProtectedQueriesRequest.h>
#include <aws/cleanrooms/model/ListSchemasRequest.h>
#include <aws/cleanrooms/model/ListTagsForResourceRequest.h>
#include <aws/cleanrooms/model/StartProtectedQueryRequest.h>
#include <aws/cleanrooms/model/TagResourceRequest.h>
#include <aws/cleanrooms/model/UntagResourceRequest.h>
#include <aws/cleanrooms/model/UpdateCollaborationRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/UpdateMembershipRequest.h>
#include <aws/cleanrooms/model/UpdateProtectedQueryRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CleanRooms;
using namespace Aws::CleanRooms::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CleanRoomsClient::SERVICE_NAME = "cleanrooms";
const char* CleanRoomsClient::ALLOCATION_TAG = "CleanRoomsClient";

CleanRoomsClient::CleanRoomsClient(const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const AWSCredentials& credentials,
                                   std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider,
                                   const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider,
                                   const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CleanRoomsClient::CleanRoomsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CleanRoomsClient::~CleanRoomsClient()
{
}

std::shared_ptr<CleanRoomsEndpointProviderBase>& CleanRoomsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CleanRoomsClient::init(const CleanRooms::CleanRoomsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CleanRooms");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CleanRoomsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchGetSchemaOutcome CleanRoomsClient::BatchGetSchema(const BatchGetSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetSchema", "Required field: CollaborationIdentifier, is not set");
    return BatchGetSchemaOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batch-schema");
  return BatchGetSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCollaborationOutcome CleanRoomsClient::CreateCollaboration(const CreateCollaborationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations");
  return CreateCollaborationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfiguredTableOutcome CleanRoomsClient::CreateConfiguredTable(const CreateConfiguredTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables");
  return CreateConfiguredTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfiguredTableAnalysisRuleOutcome CleanRoomsClient::CreateConfiguredTableAnalysisRule(const CreateConfiguredTableAnalysisRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return CreateConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule");
  return CreateConfiguredTableAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfiguredTableAssociationOutcome CleanRoomsClient::CreateConfiguredTableAssociation(const CreateConfiguredTableAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return CreateConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations");
  return CreateConfiguredTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMembershipOutcome CleanRoomsClient::CreateMembership(const CreateMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  return CreateMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCollaborationOutcome CleanRoomsClient::DeleteCollaboration(const DeleteCollaborationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCollaboration", "Required field: CollaborationIdentifier, is not set");
    return DeleteCollaborationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  return DeleteCollaborationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfiguredTableOutcome CleanRoomsClient::DeleteConfiguredTable(const DeleteConfiguredTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTable", "Required field: ConfiguredTableIdentifier, is not set");
    return DeleteConfiguredTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  return DeleteConfiguredTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfiguredTableAnalysisRuleOutcome CleanRoomsClient::DeleteConfiguredTableAnalysisRule(const DeleteConfiguredTableAnalysisRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return DeleteConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return DeleteConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
  return DeleteConfiguredTableAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfiguredTableAssociationOutcome CleanRoomsClient::DeleteConfiguredTableAssociation(const DeleteConfiguredTableAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociation", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return DeleteConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return DeleteConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
  return DeleteConfiguredTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMemberOutcome CleanRoomsClient::DeleteMember(const DeleteMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: CollaborationIdentifier, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: AccountId, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: AccountId has invalid value");
    return DeleteMemberOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  return DeleteMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMembershipOutcome CleanRoomsClient::DeleteMembership(const DeleteMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMembership", "Required field: MembershipIdentifier, is not set");
    return DeleteMembershipOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  return DeleteMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetCollaborationOutcome CleanRoomsClient::GetCollaboration(const GetCollaborationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaboration", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  return GetCollaborationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfiguredTableOutcome CleanRoomsClient::GetConfiguredTable(const GetConfiguredTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTable", "Required field: ConfiguredTableIdentifier, is not set");
    return GetConfiguredTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  return GetConfiguredTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfiguredTableAnalysisRuleOutcome CleanRoomsClient::GetConfiguredTableAnalysisRule(const GetConfiguredTableAnalysisRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return GetConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return GetConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
  return GetConfiguredTableAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfiguredTableAssociationOutcome CleanRoomsClient::GetConfiguredTableAssociation(const GetConfiguredTableAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociation", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return GetConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return GetConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
  return GetConfiguredTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMembershipOutcome CleanRoomsClient::GetMembership(const GetMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMembership", "Required field: MembershipIdentifier, is not set");
    return GetMembershipOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  return GetMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProtectedQueryOutcome CleanRoomsClient::GetProtectedQuery(const GetProtectedQueryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProtectedQuery", "Required field: MembershipIdentifier, is not set");
    return GetProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ProtectedQueryIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProtectedQuery", "Required field: ProtectedQueryIdentifier, is not set");
    return GetProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProtectedQueryIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProtectedQueryIdentifier());
  return GetProtectedQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSchemaOutcome CleanRoomsClient::GetSchema(const GetSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchema", "Required field: CollaborationIdentifier, is not set");
    return GetSchemaOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchema", "Required field: Name, is not set");
    return GetSchemaOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSchemaAnalysisRuleOutcome CleanRoomsClient::GetSchemaAnalysisRule(const GetSchemaAnalysisRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSchemaAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchemaAnalysisRule", "Required field: CollaborationIdentifier, is not set");
    return GetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchemaAnalysisRule", "Required field: Name, is not set");
    return GetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchemaAnalysisRule", "Required field: Type, is not set");
    return GetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSchemaAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(AnalysisRuleTypeMapper::GetNameForAnalysisRuleType(request.GetType()));
  return GetSchemaAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCollaborationsOutcome CleanRoomsClient::ListCollaborations(const ListCollaborationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCollaborations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations");
  return ListCollaborationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfiguredTableAssociationsOutcome CleanRoomsClient::ListConfiguredTableAssociations(const ListConfiguredTableAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfiguredTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConfiguredTableAssociations", "Required field: MembershipIdentifier, is not set");
    return ListConfiguredTableAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfiguredTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations");
  return ListConfiguredTableAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfiguredTablesOutcome CleanRoomsClient::ListConfiguredTables(const ListConfiguredTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfiguredTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfiguredTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables");
  return ListConfiguredTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMembersOutcome CleanRoomsClient::ListMembers(const ListMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMembers", "Required field: CollaborationIdentifier, is not set");
    return ListMembersOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  return ListMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMembershipsOutcome CleanRoomsClient::ListMemberships(const ListMembershipsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  return ListMembershipsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProtectedQueriesOutcome CleanRoomsClient::ListProtectedQueries(const ListProtectedQueriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProtectedQueries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProtectedQueries", "Required field: MembershipIdentifier, is not set");
    return ListProtectedQueriesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProtectedQueries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries");
  return ListProtectedQueriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSchemasOutcome CleanRoomsClient::ListSchemas(const ListSchemasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSchemas", "Required field: CollaborationIdentifier, is not set");
    return ListSchemasOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas");
  return ListSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome CleanRoomsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StartProtectedQueryOutcome CleanRoomsClient::StartProtectedQuery(const StartProtectedQueryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartProtectedQuery", "Required field: MembershipIdentifier, is not set");
    return StartProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries");
  return StartProtectedQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome CleanRoomsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome CleanRoomsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateCollaborationOutcome CleanRoomsClient::UpdateCollaboration(const UpdateCollaborationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCollaboration", "Required field: CollaborationIdentifier, is not set");
    return UpdateCollaborationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  return UpdateCollaborationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfiguredTableOutcome CleanRoomsClient::UpdateConfiguredTable(const UpdateConfiguredTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTable", "Required field: ConfiguredTableIdentifier, is not set");
    return UpdateConfiguredTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  return UpdateConfiguredTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfiguredTableAnalysisRuleOutcome CleanRoomsClient::UpdateConfiguredTableAnalysisRule(const UpdateConfiguredTableAnalysisRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return UpdateConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return UpdateConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
  return UpdateConfiguredTableAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfiguredTableAssociationOutcome CleanRoomsClient::UpdateConfiguredTableAssociation(const UpdateConfiguredTableAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociation", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return UpdateConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return UpdateConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
  return UpdateConfiguredTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMembershipOutcome CleanRoomsClient::UpdateMembership(const UpdateMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMembership", "Required field: MembershipIdentifier, is not set");
    return UpdateMembershipOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  return UpdateMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateProtectedQueryOutcome CleanRoomsClient::UpdateProtectedQuery(const UpdateProtectedQueryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProtectedQuery", "Required field: MembershipIdentifier, is not set");
    return UpdateProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ProtectedQueryIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProtectedQuery", "Required field: ProtectedQueryIdentifier, is not set");
    return UpdateProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProtectedQueryIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProtectedQueryIdentifier());
  return UpdateProtectedQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

