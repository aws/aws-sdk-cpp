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

#include <aws/iot/IoTClient.h>
#include <aws/iot/IoTEndpoint.h>
#include <aws/iot/IoTErrorMarshaller.h>
#include <aws/iot/model/AcceptCertificateTransferRequest.h>
#include <aws/iot/model/AddThingToBillingGroupRequest.h>
#include <aws/iot/model/AddThingToThingGroupRequest.h>
#include <aws/iot/model/AssociateTargetsWithJobRequest.h>
#include <aws/iot/model/AttachPolicyRequest.h>
#include <aws/iot/model/AttachSecurityProfileRequest.h>
#include <aws/iot/model/AttachThingPrincipalRequest.h>
#include <aws/iot/model/CancelAuditMitigationActionsTaskRequest.h>
#include <aws/iot/model/CancelAuditTaskRequest.h>
#include <aws/iot/model/CancelCertificateTransferRequest.h>
#include <aws/iot/model/CancelDetectMitigationActionsTaskRequest.h>
#include <aws/iot/model/CancelJobRequest.h>
#include <aws/iot/model/CancelJobExecutionRequest.h>
#include <aws/iot/model/ClearDefaultAuthorizerRequest.h>
#include <aws/iot/model/ConfirmTopicRuleDestinationRequest.h>
#include <aws/iot/model/CreateAuditSuppressionRequest.h>
#include <aws/iot/model/CreateAuthorizerRequest.h>
#include <aws/iot/model/CreateBillingGroupRequest.h>
#include <aws/iot/model/CreateCertificateFromCsrRequest.h>
#include <aws/iot/model/CreateCustomMetricRequest.h>
#include <aws/iot/model/CreateDimensionRequest.h>
#include <aws/iot/model/CreateDomainConfigurationRequest.h>
#include <aws/iot/model/CreateDynamicThingGroupRequest.h>
#include <aws/iot/model/CreateFleetMetricRequest.h>
#include <aws/iot/model/CreateJobRequest.h>
#include <aws/iot/model/CreateJobTemplateRequest.h>
#include <aws/iot/model/CreateKeysAndCertificateRequest.h>
#include <aws/iot/model/CreateMitigationActionRequest.h>
#include <aws/iot/model/CreateOTAUpdateRequest.h>
#include <aws/iot/model/CreatePolicyRequest.h>
#include <aws/iot/model/CreatePolicyVersionRequest.h>
#include <aws/iot/model/CreateProvisioningClaimRequest.h>
#include <aws/iot/model/CreateProvisioningTemplateRequest.h>
#include <aws/iot/model/CreateProvisioningTemplateVersionRequest.h>
#include <aws/iot/model/CreateRoleAliasRequest.h>
#include <aws/iot/model/CreateScheduledAuditRequest.h>
#include <aws/iot/model/CreateSecurityProfileRequest.h>
#include <aws/iot/model/CreateStreamRequest.h>
#include <aws/iot/model/CreateThingRequest.h>
#include <aws/iot/model/CreateThingGroupRequest.h>
#include <aws/iot/model/CreateThingTypeRequest.h>
#include <aws/iot/model/CreateTopicRuleRequest.h>
#include <aws/iot/model/CreateTopicRuleDestinationRequest.h>
#include <aws/iot/model/DeleteAccountAuditConfigurationRequest.h>
#include <aws/iot/model/DeleteAuditSuppressionRequest.h>
#include <aws/iot/model/DeleteAuthorizerRequest.h>
#include <aws/iot/model/DeleteBillingGroupRequest.h>
#include <aws/iot/model/DeleteCACertificateRequest.h>
#include <aws/iot/model/DeleteCertificateRequest.h>
#include <aws/iot/model/DeleteCustomMetricRequest.h>
#include <aws/iot/model/DeleteDimensionRequest.h>
#include <aws/iot/model/DeleteDomainConfigurationRequest.h>
#include <aws/iot/model/DeleteDynamicThingGroupRequest.h>
#include <aws/iot/model/DeleteFleetMetricRequest.h>
#include <aws/iot/model/DeleteJobRequest.h>
#include <aws/iot/model/DeleteJobExecutionRequest.h>
#include <aws/iot/model/DeleteJobTemplateRequest.h>
#include <aws/iot/model/DeleteMitigationActionRequest.h>
#include <aws/iot/model/DeleteOTAUpdateRequest.h>
#include <aws/iot/model/DeletePolicyRequest.h>
#include <aws/iot/model/DeletePolicyVersionRequest.h>
#include <aws/iot/model/DeleteProvisioningTemplateRequest.h>
#include <aws/iot/model/DeleteProvisioningTemplateVersionRequest.h>
#include <aws/iot/model/DeleteRegistrationCodeRequest.h>
#include <aws/iot/model/DeleteRoleAliasRequest.h>
#include <aws/iot/model/DeleteScheduledAuditRequest.h>
#include <aws/iot/model/DeleteSecurityProfileRequest.h>
#include <aws/iot/model/DeleteStreamRequest.h>
#include <aws/iot/model/DeleteThingRequest.h>
#include <aws/iot/model/DeleteThingGroupRequest.h>
#include <aws/iot/model/DeleteThingTypeRequest.h>
#include <aws/iot/model/DeleteTopicRuleRequest.h>
#include <aws/iot/model/DeleteTopicRuleDestinationRequest.h>
#include <aws/iot/model/DeleteV2LoggingLevelRequest.h>
#include <aws/iot/model/DeprecateThingTypeRequest.h>
#include <aws/iot/model/DescribeAccountAuditConfigurationRequest.h>
#include <aws/iot/model/DescribeAuditFindingRequest.h>
#include <aws/iot/model/DescribeAuditMitigationActionsTaskRequest.h>
#include <aws/iot/model/DescribeAuditSuppressionRequest.h>
#include <aws/iot/model/DescribeAuditTaskRequest.h>
#include <aws/iot/model/DescribeAuthorizerRequest.h>
#include <aws/iot/model/DescribeBillingGroupRequest.h>
#include <aws/iot/model/DescribeCACertificateRequest.h>
#include <aws/iot/model/DescribeCertificateRequest.h>
#include <aws/iot/model/DescribeCustomMetricRequest.h>
#include <aws/iot/model/DescribeDefaultAuthorizerRequest.h>
#include <aws/iot/model/DescribeDetectMitigationActionsTaskRequest.h>
#include <aws/iot/model/DescribeDimensionRequest.h>
#include <aws/iot/model/DescribeDomainConfigurationRequest.h>
#include <aws/iot/model/DescribeEndpointRequest.h>
#include <aws/iot/model/DescribeEventConfigurationsRequest.h>
#include <aws/iot/model/DescribeFleetMetricRequest.h>
#include <aws/iot/model/DescribeIndexRequest.h>
#include <aws/iot/model/DescribeJobRequest.h>
#include <aws/iot/model/DescribeJobExecutionRequest.h>
#include <aws/iot/model/DescribeJobTemplateRequest.h>
#include <aws/iot/model/DescribeManagedJobTemplateRequest.h>
#include <aws/iot/model/DescribeMitigationActionRequest.h>
#include <aws/iot/model/DescribeProvisioningTemplateRequest.h>
#include <aws/iot/model/DescribeProvisioningTemplateVersionRequest.h>
#include <aws/iot/model/DescribeRoleAliasRequest.h>
#include <aws/iot/model/DescribeScheduledAuditRequest.h>
#include <aws/iot/model/DescribeSecurityProfileRequest.h>
#include <aws/iot/model/DescribeStreamRequest.h>
#include <aws/iot/model/DescribeThingRequest.h>
#include <aws/iot/model/DescribeThingGroupRequest.h>
#include <aws/iot/model/DescribeThingRegistrationTaskRequest.h>
#include <aws/iot/model/DescribeThingTypeRequest.h>
#include <aws/iot/model/DetachPolicyRequest.h>
#include <aws/iot/model/DetachSecurityProfileRequest.h>
#include <aws/iot/model/DetachThingPrincipalRequest.h>
#include <aws/iot/model/DisableTopicRuleRequest.h>
#include <aws/iot/model/EnableTopicRuleRequest.h>
#include <aws/iot/model/GetBehaviorModelTrainingSummariesRequest.h>
#include <aws/iot/model/GetBucketsAggregationRequest.h>
#include <aws/iot/model/GetCardinalityRequest.h>
#include <aws/iot/model/GetEffectivePoliciesRequest.h>
#include <aws/iot/model/GetIndexingConfigurationRequest.h>
#include <aws/iot/model/GetJobDocumentRequest.h>
#include <aws/iot/model/GetLoggingOptionsRequest.h>
#include <aws/iot/model/GetOTAUpdateRequest.h>
#include <aws/iot/model/GetPercentilesRequest.h>
#include <aws/iot/model/GetPolicyRequest.h>
#include <aws/iot/model/GetPolicyVersionRequest.h>
#include <aws/iot/model/GetRegistrationCodeRequest.h>
#include <aws/iot/model/GetStatisticsRequest.h>
#include <aws/iot/model/GetTopicRuleRequest.h>
#include <aws/iot/model/GetTopicRuleDestinationRequest.h>
#include <aws/iot/model/GetV2LoggingOptionsRequest.h>
#include <aws/iot/model/ListActiveViolationsRequest.h>
#include <aws/iot/model/ListAttachedPoliciesRequest.h>
#include <aws/iot/model/ListAuditFindingsRequest.h>
#include <aws/iot/model/ListAuditMitigationActionsExecutionsRequest.h>
#include <aws/iot/model/ListAuditMitigationActionsTasksRequest.h>
#include <aws/iot/model/ListAuditSuppressionsRequest.h>
#include <aws/iot/model/ListAuditTasksRequest.h>
#include <aws/iot/model/ListAuthorizersRequest.h>
#include <aws/iot/model/ListBillingGroupsRequest.h>
#include <aws/iot/model/ListCACertificatesRequest.h>
#include <aws/iot/model/ListCertificatesRequest.h>
#include <aws/iot/model/ListCertificatesByCARequest.h>
#include <aws/iot/model/ListCustomMetricsRequest.h>
#include <aws/iot/model/ListDetectMitigationActionsExecutionsRequest.h>
#include <aws/iot/model/ListDetectMitigationActionsTasksRequest.h>
#include <aws/iot/model/ListDimensionsRequest.h>
#include <aws/iot/model/ListDomainConfigurationsRequest.h>
#include <aws/iot/model/ListFleetMetricsRequest.h>
#include <aws/iot/model/ListIndicesRequest.h>
#include <aws/iot/model/ListJobExecutionsForJobRequest.h>
#include <aws/iot/model/ListJobExecutionsForThingRequest.h>
#include <aws/iot/model/ListJobTemplatesRequest.h>
#include <aws/iot/model/ListJobsRequest.h>
#include <aws/iot/model/ListManagedJobTemplatesRequest.h>
#include <aws/iot/model/ListMetricValuesRequest.h>
#include <aws/iot/model/ListMitigationActionsRequest.h>
#include <aws/iot/model/ListOTAUpdatesRequest.h>
#include <aws/iot/model/ListOutgoingCertificatesRequest.h>
#include <aws/iot/model/ListPoliciesRequest.h>
#include <aws/iot/model/ListPolicyVersionsRequest.h>
#include <aws/iot/model/ListPrincipalThingsRequest.h>
#include <aws/iot/model/ListProvisioningTemplateVersionsRequest.h>
#include <aws/iot/model/ListProvisioningTemplatesRequest.h>
#include <aws/iot/model/ListRoleAliasesRequest.h>
#include <aws/iot/model/ListScheduledAuditsRequest.h>
#include <aws/iot/model/ListSecurityProfilesRequest.h>
#include <aws/iot/model/ListSecurityProfilesForTargetRequest.h>
#include <aws/iot/model/ListStreamsRequest.h>
#include <aws/iot/model/ListTagsForResourceRequest.h>
#include <aws/iot/model/ListTargetsForPolicyRequest.h>
#include <aws/iot/model/ListTargetsForSecurityProfileRequest.h>
#include <aws/iot/model/ListThingGroupsRequest.h>
#include <aws/iot/model/ListThingGroupsForThingRequest.h>
#include <aws/iot/model/ListThingPrincipalsRequest.h>
#include <aws/iot/model/ListThingRegistrationTaskReportsRequest.h>
#include <aws/iot/model/ListThingRegistrationTasksRequest.h>
#include <aws/iot/model/ListThingTypesRequest.h>
#include <aws/iot/model/ListThingsRequest.h>
#include <aws/iot/model/ListThingsInBillingGroupRequest.h>
#include <aws/iot/model/ListThingsInThingGroupRequest.h>
#include <aws/iot/model/ListTopicRuleDestinationsRequest.h>
#include <aws/iot/model/ListTopicRulesRequest.h>
#include <aws/iot/model/ListV2LoggingLevelsRequest.h>
#include <aws/iot/model/ListViolationEventsRequest.h>
#include <aws/iot/model/PutVerificationStateOnViolationRequest.h>
#include <aws/iot/model/RegisterCACertificateRequest.h>
#include <aws/iot/model/RegisterCertificateRequest.h>
#include <aws/iot/model/RegisterCertificateWithoutCARequest.h>
#include <aws/iot/model/RegisterThingRequest.h>
#include <aws/iot/model/RejectCertificateTransferRequest.h>
#include <aws/iot/model/RemoveThingFromBillingGroupRequest.h>
#include <aws/iot/model/RemoveThingFromThingGroupRequest.h>
#include <aws/iot/model/ReplaceTopicRuleRequest.h>
#include <aws/iot/model/SearchIndexRequest.h>
#include <aws/iot/model/SetDefaultAuthorizerRequest.h>
#include <aws/iot/model/SetDefaultPolicyVersionRequest.h>
#include <aws/iot/model/SetLoggingOptionsRequest.h>
#include <aws/iot/model/SetV2LoggingLevelRequest.h>
#include <aws/iot/model/SetV2LoggingOptionsRequest.h>
#include <aws/iot/model/StartAuditMitigationActionsTaskRequest.h>
#include <aws/iot/model/StartDetectMitigationActionsTaskRequest.h>
#include <aws/iot/model/StartOnDemandAuditTaskRequest.h>
#include <aws/iot/model/StartThingRegistrationTaskRequest.h>
#include <aws/iot/model/StopThingRegistrationTaskRequest.h>
#include <aws/iot/model/TagResourceRequest.h>
#include <aws/iot/model/TestAuthorizationRequest.h>
#include <aws/iot/model/TestInvokeAuthorizerRequest.h>
#include <aws/iot/model/TransferCertificateRequest.h>
#include <aws/iot/model/UntagResourceRequest.h>
#include <aws/iot/model/UpdateAccountAuditConfigurationRequest.h>
#include <aws/iot/model/UpdateAuditSuppressionRequest.h>
#include <aws/iot/model/UpdateAuthorizerRequest.h>
#include <aws/iot/model/UpdateBillingGroupRequest.h>
#include <aws/iot/model/UpdateCACertificateRequest.h>
#include <aws/iot/model/UpdateCertificateRequest.h>
#include <aws/iot/model/UpdateCustomMetricRequest.h>
#include <aws/iot/model/UpdateDimensionRequest.h>
#include <aws/iot/model/UpdateDomainConfigurationRequest.h>
#include <aws/iot/model/UpdateDynamicThingGroupRequest.h>
#include <aws/iot/model/UpdateEventConfigurationsRequest.h>
#include <aws/iot/model/UpdateFleetMetricRequest.h>
#include <aws/iot/model/UpdateIndexingConfigurationRequest.h>
#include <aws/iot/model/UpdateJobRequest.h>
#include <aws/iot/model/UpdateMitigationActionRequest.h>
#include <aws/iot/model/UpdateProvisioningTemplateRequest.h>
#include <aws/iot/model/UpdateRoleAliasRequest.h>
#include <aws/iot/model/UpdateScheduledAuditRequest.h>
#include <aws/iot/model/UpdateSecurityProfileRequest.h>
#include <aws/iot/model/UpdateStreamRequest.h>
#include <aws/iot/model/UpdateThingRequest.h>
#include <aws/iot/model/UpdateThingGroupRequest.h>
#include <aws/iot/model/UpdateThingGroupsForThingRequest.h>
#include <aws/iot/model/UpdateTopicRuleDestinationRequest.h>
#include <aws/iot/model/ValidateSecurityProfileBehaviorsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoT;
using namespace Aws::IoT::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* IoTClient::SERVICE_NAME = "execute-api";
const char* IoTClient::ALLOCATION_TAG = "IoTClient";

IoTClient::IoTClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTClient::IoTClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTClient::IoTClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTClient::~IoTClient()
{
}

void IoTClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoT");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoTEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoTClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptCertificateTransferOutcome IoTClient::AcceptCertificateTransfer(const AcceptCertificateTransferRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptCertificateTransfer", "Required field: CertificateId, is not set");
    return AcceptCertificateTransferOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accept-certificate-transfer/");
  uri.AddPathSegment(request.GetCertificateId());
  return AcceptCertificateTransferOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

AcceptCertificateTransferOutcomeCallable IoTClient::AcceptCertificateTransferCallable(const AcceptCertificateTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptCertificateTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptCertificateTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AcceptCertificateTransferAsync(const AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AcceptCertificateTransfer(request), context);
    } );
}

AddThingToBillingGroupOutcome IoTClient::AddThingToBillingGroup(const AddThingToBillingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/billing-groups/addThingToBillingGroup");
  return AddThingToBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AddThingToBillingGroupOutcomeCallable IoTClient::AddThingToBillingGroupCallable(const AddThingToBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddThingToBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddThingToBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AddThingToBillingGroupAsync(const AddThingToBillingGroupRequest& request, const AddThingToBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddThingToBillingGroup(request), context);
    } );
}

AddThingToThingGroupOutcome IoTClient::AddThingToThingGroup(const AddThingToThingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-groups/addThingToThingGroup");
  return AddThingToThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AddThingToThingGroupOutcomeCallable IoTClient::AddThingToThingGroupCallable(const AddThingToThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddThingToThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddThingToThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AddThingToThingGroupAsync(const AddThingToThingGroupRequest& request, const AddThingToThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddThingToThingGroup(request), context);
    } );
}

AssociateTargetsWithJobOutcome IoTClient::AssociateTargetsWithJob(const AssociateTargetsWithJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTargetsWithJob", "Required field: JobId, is not set");
    return AssociateTargetsWithJobOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  uri.AddPathSegments("/targets");
  return AssociateTargetsWithJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTargetsWithJobOutcomeCallable IoTClient::AssociateTargetsWithJobCallable(const AssociateTargetsWithJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTargetsWithJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTargetsWithJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AssociateTargetsWithJobAsync(const AssociateTargetsWithJobRequest& request, const AssociateTargetsWithJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateTargetsWithJob(request), context);
    } );
}

AttachPolicyOutcome IoTClient::AttachPolicy(const AttachPolicyRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AttachPolicy", "Required field: PolicyName, is not set");
    return AttachPolicyOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/target-policies/");
  uri.AddPathSegment(request.GetPolicyName());
  return AttachPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AttachPolicyOutcomeCallable IoTClient::AttachPolicyCallable(const AttachPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AttachPolicyAsync(const AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachPolicy(request), context);
    } );
}

AttachSecurityProfileOutcome IoTClient::AttachSecurityProfile(const AttachSecurityProfileRequest& request) const
{
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AttachSecurityProfile", "Required field: SecurityProfileName, is not set");
    return AttachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  if (!request.SecurityProfileTargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AttachSecurityProfile", "Required field: SecurityProfileTargetArn, is not set");
    return AttachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileTargetArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetSecurityProfileName());
  uri.AddPathSegments("/targets");
  return AttachSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AttachSecurityProfileOutcomeCallable IoTClient::AttachSecurityProfileCallable(const AttachSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AttachSecurityProfileAsync(const AttachSecurityProfileRequest& request, const AttachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachSecurityProfile(request), context);
    } );
}

AttachThingPrincipalOutcome IoTClient::AttachThingPrincipal(const AttachThingPrincipalRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AttachThingPrincipal", "Required field: ThingName, is not set");
    return AttachThingPrincipalOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.PrincipalHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AttachThingPrincipal", "Required field: Principal, is not set");
    return AttachThingPrincipalOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/principals");
  return AttachThingPrincipalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AttachThingPrincipalOutcomeCallable IoTClient::AttachThingPrincipalCallable(const AttachThingPrincipalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachThingPrincipalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachThingPrincipal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AttachThingPrincipalAsync(const AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachThingPrincipal(request), context);
    } );
}

CancelAuditMitigationActionsTaskOutcome IoTClient::CancelAuditMitigationActionsTask(const CancelAuditMitigationActionsTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelAuditMitigationActionsTask", "Required field: TaskId, is not set");
    return CancelAuditMitigationActionsTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/mitigationactions/tasks/");
  uri.AddPathSegment(request.GetTaskId());
  uri.AddPathSegments("/cancel");
  return CancelAuditMitigationActionsTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelAuditMitigationActionsTaskOutcomeCallable IoTClient::CancelAuditMitigationActionsTaskCallable(const CancelAuditMitigationActionsTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelAuditMitigationActionsTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelAuditMitigationActionsTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CancelAuditMitigationActionsTaskAsync(const CancelAuditMitigationActionsTaskRequest& request, const CancelAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelAuditMitigationActionsTask(request), context);
    } );
}

CancelAuditTaskOutcome IoTClient::CancelAuditTask(const CancelAuditTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelAuditTask", "Required field: TaskId, is not set");
    return CancelAuditTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/tasks/");
  uri.AddPathSegment(request.GetTaskId());
  uri.AddPathSegments("/cancel");
  return CancelAuditTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelAuditTaskOutcomeCallable IoTClient::CancelAuditTaskCallable(const CancelAuditTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelAuditTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelAuditTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CancelAuditTaskAsync(const CancelAuditTaskRequest& request, const CancelAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelAuditTask(request), context);
    } );
}

CancelCertificateTransferOutcome IoTClient::CancelCertificateTransfer(const CancelCertificateTransferRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelCertificateTransfer", "Required field: CertificateId, is not set");
    return CancelCertificateTransferOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cancel-certificate-transfer/");
  uri.AddPathSegment(request.GetCertificateId());
  return CancelCertificateTransferOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

CancelCertificateTransferOutcomeCallable IoTClient::CancelCertificateTransferCallable(const CancelCertificateTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelCertificateTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelCertificateTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CancelCertificateTransferAsync(const CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelCertificateTransfer(request), context);
    } );
}

CancelDetectMitigationActionsTaskOutcome IoTClient::CancelDetectMitigationActionsTask(const CancelDetectMitigationActionsTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelDetectMitigationActionsTask", "Required field: TaskId, is not set");
    return CancelDetectMitigationActionsTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detect/mitigationactions/tasks/");
  uri.AddPathSegment(request.GetTaskId());
  uri.AddPathSegments("/cancel");
  return CancelDetectMitigationActionsTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelDetectMitigationActionsTaskOutcomeCallable IoTClient::CancelDetectMitigationActionsTaskCallable(const CancelDetectMitigationActionsTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelDetectMitigationActionsTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelDetectMitigationActionsTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CancelDetectMitigationActionsTaskAsync(const CancelDetectMitigationActionsTaskRequest& request, const CancelDetectMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelDetectMitigationActionsTask(request), context);
    } );
}

CancelJobOutcome IoTClient::CancelJob(const CancelJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: JobId, is not set");
    return CancelJobOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  uri.AddPathSegments("/cancel");
  return CancelJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelJobOutcomeCallable IoTClient::CancelJobCallable(const CancelJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelJob(request), context);
    } );
}

CancelJobExecutionOutcome IoTClient::CancelJobExecution(const CancelJobExecutionRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJobExecution", "Required field: JobId, is not set");
    return CancelJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJobExecution", "Required field: ThingName, is not set");
    return CancelJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  uri.AddPathSegments("/cancel");
  return CancelJobExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelJobExecutionOutcomeCallable IoTClient::CancelJobExecutionCallable(const CancelJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CancelJobExecutionAsync(const CancelJobExecutionRequest& request, const CancelJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelJobExecution(request), context);
    } );
}

ClearDefaultAuthorizerOutcome IoTClient::ClearDefaultAuthorizer(const ClearDefaultAuthorizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/default-authorizer");
  return ClearDefaultAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

ClearDefaultAuthorizerOutcomeCallable IoTClient::ClearDefaultAuthorizerCallable(const ClearDefaultAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ClearDefaultAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ClearDefaultAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ClearDefaultAuthorizerAsync(const ClearDefaultAuthorizerRequest& request, const ClearDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ClearDefaultAuthorizer(request), context);
    } );
}

ConfirmTopicRuleDestinationOutcome IoTClient::ConfirmTopicRuleDestination(const ConfirmTopicRuleDestinationRequest& request) const
{
  if (!request.ConfirmationTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ConfirmTopicRuleDestination", "Required field: ConfirmationToken, is not set");
    return ConfirmTopicRuleDestinationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfirmationToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/confirmdestination/");
  uri.AddPathSegments(request.GetConfirmationToken());
  return ConfirmTopicRuleDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ConfirmTopicRuleDestinationOutcomeCallable IoTClient::ConfirmTopicRuleDestinationCallable(const ConfirmTopicRuleDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfirmTopicRuleDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmTopicRuleDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ConfirmTopicRuleDestinationAsync(const ConfirmTopicRuleDestinationRequest& request, const ConfirmTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ConfirmTopicRuleDestination(request), context);
    } );
}

CreateAuditSuppressionOutcome IoTClient::CreateAuditSuppression(const CreateAuditSuppressionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/suppressions/create");
  return CreateAuditSuppressionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAuditSuppressionOutcomeCallable IoTClient::CreateAuditSuppressionCallable(const CreateAuditSuppressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAuditSuppressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAuditSuppression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateAuditSuppressionAsync(const CreateAuditSuppressionRequest& request, const CreateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAuditSuppression(request), context);
    } );
}

CreateAuthorizerOutcome IoTClient::CreateAuthorizer(const CreateAuthorizerRequest& request) const
{
  if (!request.AuthorizerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAuthorizer", "Required field: AuthorizerName, is not set");
    return CreateAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/authorizer/");
  uri.AddPathSegment(request.GetAuthorizerName());
  return CreateAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAuthorizerOutcomeCallable IoTClient::CreateAuthorizerCallable(const CreateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateAuthorizerAsync(const CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAuthorizer(request), context);
    } );
}

CreateBillingGroupOutcome IoTClient::CreateBillingGroup(const CreateBillingGroupRequest& request) const
{
  if (!request.BillingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBillingGroup", "Required field: BillingGroupName, is not set");
    return CreateBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BillingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/billing-groups/");
  uri.AddPathSegment(request.GetBillingGroupName());
  return CreateBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBillingGroupOutcomeCallable IoTClient::CreateBillingGroupCallable(const CreateBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateBillingGroupAsync(const CreateBillingGroupRequest& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBillingGroup(request), context);
    } );
}

CreateCertificateFromCsrOutcome IoTClient::CreateCertificateFromCsr(const CreateCertificateFromCsrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/certificates");
  return CreateCertificateFromCsrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCertificateFromCsrOutcomeCallable IoTClient::CreateCertificateFromCsrCallable(const CreateCertificateFromCsrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCertificateFromCsrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCertificateFromCsr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateCertificateFromCsrAsync(const CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCertificateFromCsr(request), context);
    } );
}

CreateCustomMetricOutcome IoTClient::CreateCustomMetric(const CreateCustomMetricRequest& request) const
{
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCustomMetric", "Required field: MetricName, is not set");
    return CreateCustomMetricOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-metric/");
  uri.AddPathSegment(request.GetMetricName());
  return CreateCustomMetricOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomMetricOutcomeCallable IoTClient::CreateCustomMetricCallable(const CreateCustomMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateCustomMetricAsync(const CreateCustomMetricRequest& request, const CreateCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomMetric(request), context);
    } );
}

CreateDimensionOutcome IoTClient::CreateDimension(const CreateDimensionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDimension", "Required field: Name, is not set");
    return CreateDimensionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/dimensions/");
  uri.AddPathSegment(request.GetName());
  return CreateDimensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDimensionOutcomeCallable IoTClient::CreateDimensionCallable(const CreateDimensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDimensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDimension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateDimensionAsync(const CreateDimensionRequest& request, const CreateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDimension(request), context);
    } );
}

CreateDomainConfigurationOutcome IoTClient::CreateDomainConfiguration(const CreateDomainConfigurationRequest& request) const
{
  if (!request.DomainConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDomainConfiguration", "Required field: DomainConfigurationName, is not set");
    return CreateDomainConfigurationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainConfigurations/");
  uri.AddPathSegment(request.GetDomainConfigurationName());
  return CreateDomainConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainConfigurationOutcomeCallable IoTClient::CreateDomainConfigurationCallable(const CreateDomainConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomainConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateDomainConfigurationAsync(const CreateDomainConfigurationRequest& request, const CreateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDomainConfiguration(request), context);
    } );
}

CreateDynamicThingGroupOutcome IoTClient::CreateDynamicThingGroup(const CreateDynamicThingGroupRequest& request) const
{
  if (!request.ThingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDynamicThingGroup", "Required field: ThingGroupName, is not set");
    return CreateDynamicThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/dynamic-thing-groups/");
  uri.AddPathSegment(request.GetThingGroupName());
  return CreateDynamicThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDynamicThingGroupOutcomeCallable IoTClient::CreateDynamicThingGroupCallable(const CreateDynamicThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDynamicThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDynamicThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateDynamicThingGroupAsync(const CreateDynamicThingGroupRequest& request, const CreateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDynamicThingGroup(request), context);
    } );
}

CreateFleetMetricOutcome IoTClient::CreateFleetMetric(const CreateFleetMetricRequest& request) const
{
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFleetMetric", "Required field: MetricName, is not set");
    return CreateFleetMetricOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fleet-metric/");
  uri.AddPathSegment(request.GetMetricName());
  return CreateFleetMetricOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateFleetMetricOutcomeCallable IoTClient::CreateFleetMetricCallable(const CreateFleetMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleetMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateFleetMetricAsync(const CreateFleetMetricRequest& request, const CreateFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFleetMetric(request), context);
    } );
}

CreateJobOutcome IoTClient::CreateJob(const CreateJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: JobId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return CreateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcomeCallable IoTClient::CreateJobCallable(const CreateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateJob(request), context);
    } );
}

CreateJobTemplateOutcome IoTClient::CreateJobTemplate(const CreateJobTemplateRequest& request) const
{
  if (!request.JobTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJobTemplate", "Required field: JobTemplateId, is not set");
    return CreateJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobTemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/job-templates/");
  uri.AddPathSegment(request.GetJobTemplateId());
  return CreateJobTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateJobTemplateOutcomeCallable IoTClient::CreateJobTemplateCallable(const CreateJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateJobTemplateAsync(const CreateJobTemplateRequest& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateJobTemplate(request), context);
    } );
}

CreateKeysAndCertificateOutcome IoTClient::CreateKeysAndCertificate(const CreateKeysAndCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/keys-and-certificate");
  return CreateKeysAndCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateKeysAndCertificateOutcomeCallable IoTClient::CreateKeysAndCertificateCallable(const CreateKeysAndCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKeysAndCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKeysAndCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateKeysAndCertificateAsync(const CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateKeysAndCertificate(request), context);
    } );
}

CreateMitigationActionOutcome IoTClient::CreateMitigationAction(const CreateMitigationActionRequest& request) const
{
  if (!request.ActionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMitigationAction", "Required field: ActionName, is not set");
    return CreateMitigationActionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/mitigationactions/actions/");
  uri.AddPathSegment(request.GetActionName());
  return CreateMitigationActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMitigationActionOutcomeCallable IoTClient::CreateMitigationActionCallable(const CreateMitigationActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMitigationActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMitigationAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateMitigationActionAsync(const CreateMitigationActionRequest& request, const CreateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMitigationAction(request), context);
    } );
}

CreateOTAUpdateOutcome IoTClient::CreateOTAUpdate(const CreateOTAUpdateRequest& request) const
{
  if (!request.OtaUpdateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateOTAUpdate", "Required field: OtaUpdateId, is not set");
    return CreateOTAUpdateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OtaUpdateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/otaUpdates/");
  uri.AddPathSegment(request.GetOtaUpdateId());
  return CreateOTAUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOTAUpdateOutcomeCallable IoTClient::CreateOTAUpdateCallable(const CreateOTAUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOTAUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOTAUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateOTAUpdateAsync(const CreateOTAUpdateRequest& request, const CreateOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateOTAUpdate(request), context);
    } );
}

CreatePolicyOutcome IoTClient::CreatePolicy(const CreatePolicyRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePolicy", "Required field: PolicyName, is not set");
    return CreatePolicyOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  return CreatePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePolicyOutcomeCallable IoTClient::CreatePolicyCallable(const CreatePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePolicy(request), context);
    } );
}

CreatePolicyVersionOutcome IoTClient::CreatePolicyVersion(const CreatePolicyVersionRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePolicyVersion", "Required field: PolicyName, is not set");
    return CreatePolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  uri.AddPathSegments("/version");
  return CreatePolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePolicyVersionOutcomeCallable IoTClient::CreatePolicyVersionCallable(const CreatePolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreatePolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePolicyVersion(request), context);
    } );
}

CreateProvisioningClaimOutcome IoTClient::CreateProvisioningClaim(const CreateProvisioningClaimRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProvisioningClaim", "Required field: TemplateName, is not set");
    return CreateProvisioningClaimOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/provisioning-claim");
  return CreateProvisioningClaimOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProvisioningClaimOutcomeCallable IoTClient::CreateProvisioningClaimCallable(const CreateProvisioningClaimRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisioningClaimOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProvisioningClaim(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateProvisioningClaimAsync(const CreateProvisioningClaimRequest& request, const CreateProvisioningClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProvisioningClaim(request), context);
    } );
}

CreateProvisioningTemplateOutcome IoTClient::CreateProvisioningTemplate(const CreateProvisioningTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates");
  return CreateProvisioningTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProvisioningTemplateOutcomeCallable IoTClient::CreateProvisioningTemplateCallable(const CreateProvisioningTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisioningTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProvisioningTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateProvisioningTemplateAsync(const CreateProvisioningTemplateRequest& request, const CreateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProvisioningTemplate(request), context);
    } );
}

CreateProvisioningTemplateVersionOutcome IoTClient::CreateProvisioningTemplateVersion(const CreateProvisioningTemplateVersionRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProvisioningTemplateVersion", "Required field: TemplateName, is not set");
    return CreateProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/versions");
  return CreateProvisioningTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProvisioningTemplateVersionOutcomeCallable IoTClient::CreateProvisioningTemplateVersionCallable(const CreateProvisioningTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisioningTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProvisioningTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateProvisioningTemplateVersionAsync(const CreateProvisioningTemplateVersionRequest& request, const CreateProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProvisioningTemplateVersion(request), context);
    } );
}

CreateRoleAliasOutcome IoTClient::CreateRoleAlias(const CreateRoleAliasRequest& request) const
{
  if (!request.RoleAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoleAlias", "Required field: RoleAlias, is not set");
    return CreateRoleAliasOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/role-aliases/");
  uri.AddPathSegment(request.GetRoleAlias());
  return CreateRoleAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRoleAliasOutcomeCallable IoTClient::CreateRoleAliasCallable(const CreateRoleAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoleAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoleAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateRoleAliasAsync(const CreateRoleAliasRequest& request, const CreateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRoleAlias(request), context);
    } );
}

CreateScheduledAuditOutcome IoTClient::CreateScheduledAudit(const CreateScheduledAuditRequest& request) const
{
  if (!request.ScheduledAuditNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateScheduledAudit", "Required field: ScheduledAuditName, is not set");
    return CreateScheduledAuditOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduledAuditName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/scheduledaudits/");
  uri.AddPathSegment(request.GetScheduledAuditName());
  return CreateScheduledAuditOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateScheduledAuditOutcomeCallable IoTClient::CreateScheduledAuditCallable(const CreateScheduledAuditRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScheduledAuditOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScheduledAudit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateScheduledAuditAsync(const CreateScheduledAuditRequest& request, const CreateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateScheduledAudit(request), context);
    } );
}

CreateSecurityProfileOutcome IoTClient::CreateSecurityProfile(const CreateSecurityProfileRequest& request) const
{
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSecurityProfile", "Required field: SecurityProfileName, is not set");
    return CreateSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetSecurityProfileName());
  return CreateSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecurityProfileOutcomeCallable IoTClient::CreateSecurityProfileCallable(const CreateSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateSecurityProfileAsync(const CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSecurityProfile(request), context);
    } );
}

CreateStreamOutcome IoTClient::CreateStream(const CreateStreamRequest& request) const
{
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStream", "Required field: StreamId, is not set");
    return CreateStreamOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/streams/");
  uri.AddPathSegment(request.GetStreamId());
  return CreateStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamOutcomeCallable IoTClient::CreateStreamCallable(const CreateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateStreamAsync(const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStream(request), context);
    } );
}

CreateThingOutcome IoTClient::CreateThing(const CreateThingRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThing", "Required field: ThingName, is not set");
    return CreateThingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  return CreateThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThingOutcomeCallable IoTClient::CreateThingCallable(const CreateThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateThingAsync(const CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateThing(request), context);
    } );
}

CreateThingGroupOutcome IoTClient::CreateThingGroup(const CreateThingGroupRequest& request) const
{
  if (!request.ThingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThingGroup", "Required field: ThingGroupName, is not set");
    return CreateThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-groups/");
  uri.AddPathSegment(request.GetThingGroupName());
  return CreateThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThingGroupOutcomeCallable IoTClient::CreateThingGroupCallable(const CreateThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateThingGroupAsync(const CreateThingGroupRequest& request, const CreateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateThingGroup(request), context);
    } );
}

CreateThingTypeOutcome IoTClient::CreateThingType(const CreateThingTypeRequest& request) const
{
  if (!request.ThingTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThingType", "Required field: ThingTypeName, is not set");
    return CreateThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-types/");
  uri.AddPathSegment(request.GetThingTypeName());
  return CreateThingTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThingTypeOutcomeCallable IoTClient::CreateThingTypeCallable(const CreateThingTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThingTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThingType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateThingTypeAsync(const CreateThingTypeRequest& request, const CreateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateThingType(request), context);
    } );
}

CreateTopicRuleOutcome IoTClient::CreateTopicRule(const CreateTopicRuleRequest& request) const
{
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTopicRule", "Required field: RuleName, is not set");
    return CreateTopicRuleOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rules/");
  uri.AddPathSegment(request.GetRuleName());
  return CreateTopicRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTopicRuleOutcomeCallable IoTClient::CreateTopicRuleCallable(const CreateTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateTopicRuleAsync(const CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTopicRule(request), context);
    } );
}

CreateTopicRuleDestinationOutcome IoTClient::CreateTopicRuleDestination(const CreateTopicRuleDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations");
  return CreateTopicRuleDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTopicRuleDestinationOutcomeCallable IoTClient::CreateTopicRuleDestinationCallable(const CreateTopicRuleDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTopicRuleDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTopicRuleDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateTopicRuleDestinationAsync(const CreateTopicRuleDestinationRequest& request, const CreateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTopicRuleDestination(request), context);
    } );
}

DeleteAccountAuditConfigurationOutcome IoTClient::DeleteAccountAuditConfiguration(const DeleteAccountAuditConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/configuration");
  return DeleteAccountAuditConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountAuditConfigurationOutcomeCallable IoTClient::DeleteAccountAuditConfigurationCallable(const DeleteAccountAuditConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountAuditConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountAuditConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteAccountAuditConfigurationAsync(const DeleteAccountAuditConfigurationRequest& request, const DeleteAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccountAuditConfiguration(request), context);
    } );
}

DeleteAuditSuppressionOutcome IoTClient::DeleteAuditSuppression(const DeleteAuditSuppressionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/suppressions/delete");
  return DeleteAuditSuppressionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAuditSuppressionOutcomeCallable IoTClient::DeleteAuditSuppressionCallable(const DeleteAuditSuppressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAuditSuppressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAuditSuppression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteAuditSuppressionAsync(const DeleteAuditSuppressionRequest& request, const DeleteAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAuditSuppression(request), context);
    } );
}

DeleteAuthorizerOutcome IoTClient::DeleteAuthorizer(const DeleteAuthorizerRequest& request) const
{
  if (!request.AuthorizerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: AuthorizerName, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/authorizer/");
  uri.AddPathSegment(request.GetAuthorizerName());
  return DeleteAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAuthorizerOutcomeCallable IoTClient::DeleteAuthorizerCallable(const DeleteAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteAuthorizerAsync(const DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAuthorizer(request), context);
    } );
}

DeleteBillingGroupOutcome IoTClient::DeleteBillingGroup(const DeleteBillingGroupRequest& request) const
{
  if (!request.BillingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBillingGroup", "Required field: BillingGroupName, is not set");
    return DeleteBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BillingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/billing-groups/");
  uri.AddPathSegment(request.GetBillingGroupName());
  return DeleteBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBillingGroupOutcomeCallable IoTClient::DeleteBillingGroupCallable(const DeleteBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteBillingGroupAsync(const DeleteBillingGroupRequest& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBillingGroup(request), context);
    } );
}

DeleteCACertificateOutcome IoTClient::DeleteCACertificate(const DeleteCACertificateRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCACertificate", "Required field: CertificateId, is not set");
    return DeleteCACertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cacertificate/");
  uri.AddPathSegment(request.GetCertificateId());
  return DeleteCACertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCACertificateOutcomeCallable IoTClient::DeleteCACertificateCallable(const DeleteCACertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCACertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCACertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteCACertificateAsync(const DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCACertificate(request), context);
    } );
}

DeleteCertificateOutcome IoTClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCertificate", "Required field: CertificateId, is not set");
    return DeleteCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/certificates/");
  uri.AddPathSegment(request.GetCertificateId());
  return DeleteCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCertificateOutcomeCallable IoTClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCertificate(request), context);
    } );
}

DeleteCustomMetricOutcome IoTClient::DeleteCustomMetric(const DeleteCustomMetricRequest& request) const
{
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomMetric", "Required field: MetricName, is not set");
    return DeleteCustomMetricOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-metric/");
  uri.AddPathSegment(request.GetMetricName());
  return DeleteCustomMetricOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomMetricOutcomeCallable IoTClient::DeleteCustomMetricCallable(const DeleteCustomMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteCustomMetricAsync(const DeleteCustomMetricRequest& request, const DeleteCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomMetric(request), context);
    } );
}

DeleteDimensionOutcome IoTClient::DeleteDimension(const DeleteDimensionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDimension", "Required field: Name, is not set");
    return DeleteDimensionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/dimensions/");
  uri.AddPathSegment(request.GetName());
  return DeleteDimensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDimensionOutcomeCallable IoTClient::DeleteDimensionCallable(const DeleteDimensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDimensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDimension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteDimensionAsync(const DeleteDimensionRequest& request, const DeleteDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDimension(request), context);
    } );
}

DeleteDomainConfigurationOutcome IoTClient::DeleteDomainConfiguration(const DeleteDomainConfigurationRequest& request) const
{
  if (!request.DomainConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainConfiguration", "Required field: DomainConfigurationName, is not set");
    return DeleteDomainConfigurationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainConfigurations/");
  uri.AddPathSegment(request.GetDomainConfigurationName());
  return DeleteDomainConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainConfigurationOutcomeCallable IoTClient::DeleteDomainConfigurationCallable(const DeleteDomainConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomainConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteDomainConfigurationAsync(const DeleteDomainConfigurationRequest& request, const DeleteDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDomainConfiguration(request), context);
    } );
}

DeleteDynamicThingGroupOutcome IoTClient::DeleteDynamicThingGroup(const DeleteDynamicThingGroupRequest& request) const
{
  if (!request.ThingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDynamicThingGroup", "Required field: ThingGroupName, is not set");
    return DeleteDynamicThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/dynamic-thing-groups/");
  uri.AddPathSegment(request.GetThingGroupName());
  return DeleteDynamicThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDynamicThingGroupOutcomeCallable IoTClient::DeleteDynamicThingGroupCallable(const DeleteDynamicThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDynamicThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDynamicThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteDynamicThingGroupAsync(const DeleteDynamicThingGroupRequest& request, const DeleteDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDynamicThingGroup(request), context);
    } );
}

DeleteFleetMetricOutcome IoTClient::DeleteFleetMetric(const DeleteFleetMetricRequest& request) const
{
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFleetMetric", "Required field: MetricName, is not set");
    return DeleteFleetMetricOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fleet-metric/");
  uri.AddPathSegment(request.GetMetricName());
  return DeleteFleetMetricOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetMetricOutcomeCallable IoTClient::DeleteFleetMetricCallable(const DeleteFleetMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleetMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteFleetMetricAsync(const DeleteFleetMetricRequest& request, const DeleteFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFleetMetric(request), context);
    } );
}

DeleteJobOutcome IoTClient::DeleteJob(const DeleteJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: JobId, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DeleteJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobOutcomeCallable IoTClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJob(request), context);
    } );
}

DeleteJobExecutionOutcome IoTClient::DeleteJobExecution(const DeleteJobExecutionRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobExecution", "Required field: JobId, is not set");
    return DeleteJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobExecution", "Required field: ThingName, is not set");
    return DeleteJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.ExecutionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobExecution", "Required field: ExecutionNumber, is not set");
    return DeleteJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionNumber]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  uri.AddPathSegments("/executionNumber/");
  uri.AddPathSegment(request.GetExecutionNumber());
  return DeleteJobExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobExecutionOutcomeCallable IoTClient::DeleteJobExecutionCallable(const DeleteJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteJobExecutionAsync(const DeleteJobExecutionRequest& request, const DeleteJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJobExecution(request), context);
    } );
}

DeleteJobTemplateOutcome IoTClient::DeleteJobTemplate(const DeleteJobTemplateRequest& request) const
{
  if (!request.JobTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTemplate", "Required field: JobTemplateId, is not set");
    return DeleteJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobTemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/job-templates/");
  uri.AddPathSegment(request.GetJobTemplateId());
  return DeleteJobTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobTemplateOutcomeCallable IoTClient::DeleteJobTemplateCallable(const DeleteJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteJobTemplateAsync(const DeleteJobTemplateRequest& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJobTemplate(request), context);
    } );
}

DeleteMitigationActionOutcome IoTClient::DeleteMitigationAction(const DeleteMitigationActionRequest& request) const
{
  if (!request.ActionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMitigationAction", "Required field: ActionName, is not set");
    return DeleteMitigationActionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/mitigationactions/actions/");
  uri.AddPathSegment(request.GetActionName());
  return DeleteMitigationActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMitigationActionOutcomeCallable IoTClient::DeleteMitigationActionCallable(const DeleteMitigationActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMitigationActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMitigationAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteMitigationActionAsync(const DeleteMitigationActionRequest& request, const DeleteMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMitigationAction(request), context);
    } );
}

DeleteOTAUpdateOutcome IoTClient::DeleteOTAUpdate(const DeleteOTAUpdateRequest& request) const
{
  if (!request.OtaUpdateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOTAUpdate", "Required field: OtaUpdateId, is not set");
    return DeleteOTAUpdateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OtaUpdateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/otaUpdates/");
  uri.AddPathSegment(request.GetOtaUpdateId());
  return DeleteOTAUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteOTAUpdateOutcomeCallable IoTClient::DeleteOTAUpdateCallable(const DeleteOTAUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOTAUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOTAUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteOTAUpdateAsync(const DeleteOTAUpdateRequest& request, const DeleteOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteOTAUpdate(request), context);
    } );
}

DeletePolicyOutcome IoTClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePolicy", "Required field: PolicyName, is not set");
    return DeletePolicyOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  return DeletePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePolicyOutcomeCallable IoTClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePolicy(request), context);
    } );
}

DeletePolicyVersionOutcome IoTClient::DeletePolicyVersion(const DeletePolicyVersionRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePolicyVersion", "Required field: PolicyName, is not set");
    return DeletePolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePolicyVersion", "Required field: PolicyVersionId, is not set");
    return DeletePolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  uri.AddPathSegments("/version/");
  uri.AddPathSegment(request.GetPolicyVersionId());
  return DeletePolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePolicyVersionOutcomeCallable IoTClient::DeletePolicyVersionCallable(const DeletePolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePolicyVersion(request), context);
    } );
}

DeleteProvisioningTemplateOutcome IoTClient::DeleteProvisioningTemplate(const DeleteProvisioningTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProvisioningTemplate", "Required field: TemplateName, is not set");
    return DeleteProvisioningTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return DeleteProvisioningTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProvisioningTemplateOutcomeCallable IoTClient::DeleteProvisioningTemplateCallable(const DeleteProvisioningTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisioningTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProvisioningTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteProvisioningTemplateAsync(const DeleteProvisioningTemplateRequest& request, const DeleteProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProvisioningTemplate(request), context);
    } );
}

DeleteProvisioningTemplateVersionOutcome IoTClient::DeleteProvisioningTemplateVersion(const DeleteProvisioningTemplateVersionRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProvisioningTemplateVersion", "Required field: TemplateName, is not set");
    return DeleteProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProvisioningTemplateVersion", "Required field: VersionId, is not set");
    return DeleteProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersionId());
  return DeleteProvisioningTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProvisioningTemplateVersionOutcomeCallable IoTClient::DeleteProvisioningTemplateVersionCallable(const DeleteProvisioningTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisioningTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProvisioningTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteProvisioningTemplateVersionAsync(const DeleteProvisioningTemplateVersionRequest& request, const DeleteProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProvisioningTemplateVersion(request), context);
    } );
}

DeleteRegistrationCodeOutcome IoTClient::DeleteRegistrationCode(const DeleteRegistrationCodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/registrationcode");
  return DeleteRegistrationCodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegistrationCodeOutcomeCallable IoTClient::DeleteRegistrationCodeCallable(const DeleteRegistrationCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegistrationCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegistrationCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteRegistrationCodeAsync(const DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRegistrationCode(request), context);
    } );
}

DeleteRoleAliasOutcome IoTClient::DeleteRoleAlias(const DeleteRoleAliasRequest& request) const
{
  if (!request.RoleAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoleAlias", "Required field: RoleAlias, is not set");
    return DeleteRoleAliasOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/role-aliases/");
  uri.AddPathSegment(request.GetRoleAlias());
  return DeleteRoleAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRoleAliasOutcomeCallable IoTClient::DeleteRoleAliasCallable(const DeleteRoleAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoleAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoleAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteRoleAliasAsync(const DeleteRoleAliasRequest& request, const DeleteRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRoleAlias(request), context);
    } );
}

DeleteScheduledAuditOutcome IoTClient::DeleteScheduledAudit(const DeleteScheduledAuditRequest& request) const
{
  if (!request.ScheduledAuditNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteScheduledAudit", "Required field: ScheduledAuditName, is not set");
    return DeleteScheduledAuditOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduledAuditName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/scheduledaudits/");
  uri.AddPathSegment(request.GetScheduledAuditName());
  return DeleteScheduledAuditOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteScheduledAuditOutcomeCallable IoTClient::DeleteScheduledAuditCallable(const DeleteScheduledAuditRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduledAuditOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScheduledAudit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteScheduledAuditAsync(const DeleteScheduledAuditRequest& request, const DeleteScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteScheduledAudit(request), context);
    } );
}

DeleteSecurityProfileOutcome IoTClient::DeleteSecurityProfile(const DeleteSecurityProfileRequest& request) const
{
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSecurityProfile", "Required field: SecurityProfileName, is not set");
    return DeleteSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetSecurityProfileName());
  return DeleteSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecurityProfileOutcomeCallable IoTClient::DeleteSecurityProfileCallable(const DeleteSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteSecurityProfileAsync(const DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSecurityProfile(request), context);
    } );
}

DeleteStreamOutcome IoTClient::DeleteStream(const DeleteStreamRequest& request) const
{
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStream", "Required field: StreamId, is not set");
    return DeleteStreamOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/streams/");
  uri.AddPathSegment(request.GetStreamId());
  return DeleteStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStreamOutcomeCallable IoTClient::DeleteStreamCallable(const DeleteStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteStreamAsync(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStream(request), context);
    } );
}

DeleteThingOutcome IoTClient::DeleteThing(const DeleteThingRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThing", "Required field: ThingName, is not set");
    return DeleteThingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  return DeleteThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThingOutcomeCallable IoTClient::DeleteThingCallable(const DeleteThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteThingAsync(const DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteThing(request), context);
    } );
}

DeleteThingGroupOutcome IoTClient::DeleteThingGroup(const DeleteThingGroupRequest& request) const
{
  if (!request.ThingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThingGroup", "Required field: ThingGroupName, is not set");
    return DeleteThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-groups/");
  uri.AddPathSegment(request.GetThingGroupName());
  return DeleteThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThingGroupOutcomeCallable IoTClient::DeleteThingGroupCallable(const DeleteThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteThingGroupAsync(const DeleteThingGroupRequest& request, const DeleteThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteThingGroup(request), context);
    } );
}

DeleteThingTypeOutcome IoTClient::DeleteThingType(const DeleteThingTypeRequest& request) const
{
  if (!request.ThingTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThingType", "Required field: ThingTypeName, is not set");
    return DeleteThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-types/");
  uri.AddPathSegment(request.GetThingTypeName());
  return DeleteThingTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThingTypeOutcomeCallable IoTClient::DeleteThingTypeCallable(const DeleteThingTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThingTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThingType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteThingTypeAsync(const DeleteThingTypeRequest& request, const DeleteThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteThingType(request), context);
    } );
}

DeleteTopicRuleOutcome IoTClient::DeleteTopicRule(const DeleteTopicRuleRequest& request) const
{
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTopicRule", "Required field: RuleName, is not set");
    return DeleteTopicRuleOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rules/");
  uri.AddPathSegment(request.GetRuleName());
  return DeleteTopicRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTopicRuleOutcomeCallable IoTClient::DeleteTopicRuleCallable(const DeleteTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteTopicRuleAsync(const DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTopicRule(request), context);
    } );
}

DeleteTopicRuleDestinationOutcome IoTClient::DeleteTopicRuleDestination(const DeleteTopicRuleDestinationRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTopicRuleDestination", "Required field: Arn, is not set");
    return DeleteTopicRuleDestinationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations/");
  uri.AddPathSegments(request.GetArn());
  return DeleteTopicRuleDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTopicRuleDestinationOutcomeCallable IoTClient::DeleteTopicRuleDestinationCallable(const DeleteTopicRuleDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTopicRuleDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTopicRuleDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteTopicRuleDestinationAsync(const DeleteTopicRuleDestinationRequest& request, const DeleteTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTopicRuleDestination(request), context);
    } );
}

DeleteV2LoggingLevelOutcome IoTClient::DeleteV2LoggingLevel(const DeleteV2LoggingLevelRequest& request) const
{
  if (!request.TargetTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteV2LoggingLevel", "Required field: TargetType, is not set");
    return DeleteV2LoggingLevelOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetType]", false));
  }
  if (!request.TargetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteV2LoggingLevel", "Required field: TargetName, is not set");
    return DeleteV2LoggingLevelOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2LoggingLevel");
  return DeleteV2LoggingLevelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteV2LoggingLevelOutcomeCallable IoTClient::DeleteV2LoggingLevelCallable(const DeleteV2LoggingLevelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteV2LoggingLevelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteV2LoggingLevel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteV2LoggingLevelAsync(const DeleteV2LoggingLevelRequest& request, const DeleteV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteV2LoggingLevel(request), context);
    } );
}

DeprecateThingTypeOutcome IoTClient::DeprecateThingType(const DeprecateThingTypeRequest& request) const
{
  if (!request.ThingTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeprecateThingType", "Required field: ThingTypeName, is not set");
    return DeprecateThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-types/");
  uri.AddPathSegment(request.GetThingTypeName());
  uri.AddPathSegments("/deprecate");
  return DeprecateThingTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeprecateThingTypeOutcomeCallable IoTClient::DeprecateThingTypeCallable(const DeprecateThingTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateThingTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateThingType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeprecateThingTypeAsync(const DeprecateThingTypeRequest& request, const DeprecateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeprecateThingType(request), context);
    } );
}

DescribeAccountAuditConfigurationOutcome IoTClient::DescribeAccountAuditConfiguration(const DescribeAccountAuditConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/configuration");
  return DescribeAccountAuditConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAuditConfigurationOutcomeCallable IoTClient::DescribeAccountAuditConfigurationCallable(const DescribeAccountAuditConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAuditConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAuditConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeAccountAuditConfigurationAsync(const DescribeAccountAuditConfigurationRequest& request, const DescribeAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountAuditConfiguration(request), context);
    } );
}

DescribeAuditFindingOutcome IoTClient::DescribeAuditFinding(const DescribeAuditFindingRequest& request) const
{
  if (!request.FindingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAuditFinding", "Required field: FindingId, is not set");
    return DescribeAuditFindingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/findings/");
  uri.AddPathSegment(request.GetFindingId());
  return DescribeAuditFindingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAuditFindingOutcomeCallable IoTClient::DescribeAuditFindingCallable(const DescribeAuditFindingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAuditFindingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAuditFinding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeAuditFindingAsync(const DescribeAuditFindingRequest& request, const DescribeAuditFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAuditFinding(request), context);
    } );
}

DescribeAuditMitigationActionsTaskOutcome IoTClient::DescribeAuditMitigationActionsTask(const DescribeAuditMitigationActionsTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAuditMitigationActionsTask", "Required field: TaskId, is not set");
    return DescribeAuditMitigationActionsTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/mitigationactions/tasks/");
  uri.AddPathSegment(request.GetTaskId());
  return DescribeAuditMitigationActionsTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAuditMitigationActionsTaskOutcomeCallable IoTClient::DescribeAuditMitigationActionsTaskCallable(const DescribeAuditMitigationActionsTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAuditMitigationActionsTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAuditMitigationActionsTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeAuditMitigationActionsTaskAsync(const DescribeAuditMitigationActionsTaskRequest& request, const DescribeAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAuditMitigationActionsTask(request), context);
    } );
}

DescribeAuditSuppressionOutcome IoTClient::DescribeAuditSuppression(const DescribeAuditSuppressionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/suppressions/describe");
  return DescribeAuditSuppressionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAuditSuppressionOutcomeCallable IoTClient::DescribeAuditSuppressionCallable(const DescribeAuditSuppressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAuditSuppressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAuditSuppression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeAuditSuppressionAsync(const DescribeAuditSuppressionRequest& request, const DescribeAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAuditSuppression(request), context);
    } );
}

DescribeAuditTaskOutcome IoTClient::DescribeAuditTask(const DescribeAuditTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAuditTask", "Required field: TaskId, is not set");
    return DescribeAuditTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/tasks/");
  uri.AddPathSegment(request.GetTaskId());
  return DescribeAuditTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAuditTaskOutcomeCallable IoTClient::DescribeAuditTaskCallable(const DescribeAuditTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAuditTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAuditTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeAuditTaskAsync(const DescribeAuditTaskRequest& request, const DescribeAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAuditTask(request), context);
    } );
}

DescribeAuthorizerOutcome IoTClient::DescribeAuthorizer(const DescribeAuthorizerRequest& request) const
{
  if (!request.AuthorizerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAuthorizer", "Required field: AuthorizerName, is not set");
    return DescribeAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/authorizer/");
  uri.AddPathSegment(request.GetAuthorizerName());
  return DescribeAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAuthorizerOutcomeCallable IoTClient::DescribeAuthorizerCallable(const DescribeAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeAuthorizerAsync(const DescribeAuthorizerRequest& request, const DescribeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAuthorizer(request), context);
    } );
}

DescribeBillingGroupOutcome IoTClient::DescribeBillingGroup(const DescribeBillingGroupRequest& request) const
{
  if (!request.BillingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBillingGroup", "Required field: BillingGroupName, is not set");
    return DescribeBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BillingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/billing-groups/");
  uri.AddPathSegment(request.GetBillingGroupName());
  return DescribeBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBillingGroupOutcomeCallable IoTClient::DescribeBillingGroupCallable(const DescribeBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeBillingGroupAsync(const DescribeBillingGroupRequest& request, const DescribeBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBillingGroup(request), context);
    } );
}

DescribeCACertificateOutcome IoTClient::DescribeCACertificate(const DescribeCACertificateRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCACertificate", "Required field: CertificateId, is not set");
    return DescribeCACertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cacertificate/");
  uri.AddPathSegment(request.GetCertificateId());
  return DescribeCACertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeCACertificateOutcomeCallable IoTClient::DescribeCACertificateCallable(const DescribeCACertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCACertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCACertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeCACertificateAsync(const DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCACertificate(request), context);
    } );
}

DescribeCertificateOutcome IoTClient::DescribeCertificate(const DescribeCertificateRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCertificate", "Required field: CertificateId, is not set");
    return DescribeCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/certificates/");
  uri.AddPathSegment(request.GetCertificateId());
  return DescribeCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeCertificateOutcomeCallable IoTClient::DescribeCertificateCallable(const DescribeCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCertificate(request), context);
    } );
}

DescribeCustomMetricOutcome IoTClient::DescribeCustomMetric(const DescribeCustomMetricRequest& request) const
{
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCustomMetric", "Required field: MetricName, is not set");
    return DescribeCustomMetricOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-metric/");
  uri.AddPathSegment(request.GetMetricName());
  return DescribeCustomMetricOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomMetricOutcomeCallable IoTClient::DescribeCustomMetricCallable(const DescribeCustomMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeCustomMetricAsync(const DescribeCustomMetricRequest& request, const DescribeCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCustomMetric(request), context);
    } );
}

DescribeDefaultAuthorizerOutcome IoTClient::DescribeDefaultAuthorizer(const DescribeDefaultAuthorizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/default-authorizer");
  return DescribeDefaultAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDefaultAuthorizerOutcomeCallable IoTClient::DescribeDefaultAuthorizerCallable(const DescribeDefaultAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDefaultAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDefaultAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeDefaultAuthorizerAsync(const DescribeDefaultAuthorizerRequest& request, const DescribeDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDefaultAuthorizer(request), context);
    } );
}

DescribeDetectMitigationActionsTaskOutcome IoTClient::DescribeDetectMitigationActionsTask(const DescribeDetectMitigationActionsTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDetectMitigationActionsTask", "Required field: TaskId, is not set");
    return DescribeDetectMitigationActionsTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detect/mitigationactions/tasks/");
  uri.AddPathSegment(request.GetTaskId());
  return DescribeDetectMitigationActionsTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDetectMitigationActionsTaskOutcomeCallable IoTClient::DescribeDetectMitigationActionsTaskCallable(const DescribeDetectMitigationActionsTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDetectMitigationActionsTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDetectMitigationActionsTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeDetectMitigationActionsTaskAsync(const DescribeDetectMitigationActionsTaskRequest& request, const DescribeDetectMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDetectMitigationActionsTask(request), context);
    } );
}

DescribeDimensionOutcome IoTClient::DescribeDimension(const DescribeDimensionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDimension", "Required field: Name, is not set");
    return DescribeDimensionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/dimensions/");
  uri.AddPathSegment(request.GetName());
  return DescribeDimensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDimensionOutcomeCallable IoTClient::DescribeDimensionCallable(const DescribeDimensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDimensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDimension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeDimensionAsync(const DescribeDimensionRequest& request, const DescribeDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDimension(request), context);
    } );
}

DescribeDomainConfigurationOutcome IoTClient::DescribeDomainConfiguration(const DescribeDomainConfigurationRequest& request) const
{
  if (!request.DomainConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainConfiguration", "Required field: DomainConfigurationName, is not set");
    return DescribeDomainConfigurationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainConfigurations/");
  uri.AddPathSegment(request.GetDomainConfigurationName());
  return DescribeDomainConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainConfigurationOutcomeCallable IoTClient::DescribeDomainConfigurationCallable(const DescribeDomainConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeDomainConfigurationAsync(const DescribeDomainConfigurationRequest& request, const DescribeDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomainConfiguration(request), context);
    } );
}

DescribeEndpointOutcome IoTClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/endpoint");
  return DescribeEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointOutcomeCallable IoTClient::DescribeEndpointCallable(const DescribeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeEndpointAsync(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpoint(request), context);
    } );
}

DescribeEventConfigurationsOutcome IoTClient::DescribeEventConfigurations(const DescribeEventConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/event-configurations");
  return DescribeEventConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventConfigurationsOutcomeCallable IoTClient::DescribeEventConfigurationsCallable(const DescribeEventConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeEventConfigurationsAsync(const DescribeEventConfigurationsRequest& request, const DescribeEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEventConfigurations(request), context);
    } );
}

DescribeFleetMetricOutcome IoTClient::DescribeFleetMetric(const DescribeFleetMetricRequest& request) const
{
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFleetMetric", "Required field: MetricName, is not set");
    return DescribeFleetMetricOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fleet-metric/");
  uri.AddPathSegment(request.GetMetricName());
  return DescribeFleetMetricOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetMetricOutcomeCallable IoTClient::DescribeFleetMetricCallable(const DescribeFleetMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeFleetMetricAsync(const DescribeFleetMetricRequest& request, const DescribeFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFleetMetric(request), context);
    } );
}

DescribeIndexOutcome IoTClient::DescribeIndex(const DescribeIndexRequest& request) const
{
  if (!request.IndexNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIndex", "Required field: IndexName, is not set");
    return DescribeIndexOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/indices/");
  uri.AddPathSegment(request.GetIndexName());
  return DescribeIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIndexOutcomeCallable IoTClient::DescribeIndexCallable(const DescribeIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeIndexAsync(const DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeIndex(request), context);
    } );
}

DescribeJobOutcome IoTClient::DescribeJob(const DescribeJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: JobId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DescribeJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobOutcomeCallable IoTClient::DescribeJobCallable(const DescribeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJob(request), context);
    } );
}

DescribeJobExecutionOutcome IoTClient::DescribeJobExecution(const DescribeJobExecutionRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobExecution", "Required field: JobId, is not set");
    return DescribeJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobExecution", "Required field: ThingName, is not set");
    return DescribeJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DescribeJobExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobExecutionOutcomeCallable IoTClient::DescribeJobExecutionCallable(const DescribeJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeJobExecutionAsync(const DescribeJobExecutionRequest& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobExecution(request), context);
    } );
}

DescribeJobTemplateOutcome IoTClient::DescribeJobTemplate(const DescribeJobTemplateRequest& request) const
{
  if (!request.JobTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobTemplate", "Required field: JobTemplateId, is not set");
    return DescribeJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobTemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/job-templates/");
  uri.AddPathSegment(request.GetJobTemplateId());
  return DescribeJobTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobTemplateOutcomeCallable IoTClient::DescribeJobTemplateCallable(const DescribeJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeJobTemplateAsync(const DescribeJobTemplateRequest& request, const DescribeJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobTemplate(request), context);
    } );
}

DescribeManagedJobTemplateOutcome IoTClient::DescribeManagedJobTemplate(const DescribeManagedJobTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeManagedJobTemplate", "Required field: TemplateName, is not set");
    return DescribeManagedJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/managed-job-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return DescribeManagedJobTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeManagedJobTemplateOutcomeCallable IoTClient::DescribeManagedJobTemplateCallable(const DescribeManagedJobTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeManagedJobTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeManagedJobTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeManagedJobTemplateAsync(const DescribeManagedJobTemplateRequest& request, const DescribeManagedJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeManagedJobTemplate(request), context);
    } );
}

DescribeMitigationActionOutcome IoTClient::DescribeMitigationAction(const DescribeMitigationActionRequest& request) const
{
  if (!request.ActionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMitigationAction", "Required field: ActionName, is not set");
    return DescribeMitigationActionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/mitigationactions/actions/");
  uri.AddPathSegment(request.GetActionName());
  return DescribeMitigationActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeMitigationActionOutcomeCallable IoTClient::DescribeMitigationActionCallable(const DescribeMitigationActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMitigationActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMitigationAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeMitigationActionAsync(const DescribeMitigationActionRequest& request, const DescribeMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMitigationAction(request), context);
    } );
}

DescribeProvisioningTemplateOutcome IoTClient::DescribeProvisioningTemplate(const DescribeProvisioningTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProvisioningTemplate", "Required field: TemplateName, is not set");
    return DescribeProvisioningTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return DescribeProvisioningTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisioningTemplateOutcomeCallable IoTClient::DescribeProvisioningTemplateCallable(const DescribeProvisioningTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisioningTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeProvisioningTemplateAsync(const DescribeProvisioningTemplateRequest& request, const DescribeProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProvisioningTemplate(request), context);
    } );
}

DescribeProvisioningTemplateVersionOutcome IoTClient::DescribeProvisioningTemplateVersion(const DescribeProvisioningTemplateVersionRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProvisioningTemplateVersion", "Required field: TemplateName, is not set");
    return DescribeProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProvisioningTemplateVersion", "Required field: VersionId, is not set");
    return DescribeProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersionId());
  return DescribeProvisioningTemplateVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProvisioningTemplateVersionOutcomeCallable IoTClient::DescribeProvisioningTemplateVersionCallable(const DescribeProvisioningTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisioningTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeProvisioningTemplateVersionAsync(const DescribeProvisioningTemplateVersionRequest& request, const DescribeProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProvisioningTemplateVersion(request), context);
    } );
}

DescribeRoleAliasOutcome IoTClient::DescribeRoleAlias(const DescribeRoleAliasRequest& request) const
{
  if (!request.RoleAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRoleAlias", "Required field: RoleAlias, is not set");
    return DescribeRoleAliasOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/role-aliases/");
  uri.AddPathSegment(request.GetRoleAlias());
  return DescribeRoleAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRoleAliasOutcomeCallable IoTClient::DescribeRoleAliasCallable(const DescribeRoleAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRoleAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRoleAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeRoleAliasAsync(const DescribeRoleAliasRequest& request, const DescribeRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRoleAlias(request), context);
    } );
}

DescribeScheduledAuditOutcome IoTClient::DescribeScheduledAudit(const DescribeScheduledAuditRequest& request) const
{
  if (!request.ScheduledAuditNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeScheduledAudit", "Required field: ScheduledAuditName, is not set");
    return DescribeScheduledAuditOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduledAuditName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/scheduledaudits/");
  uri.AddPathSegment(request.GetScheduledAuditName());
  return DescribeScheduledAuditOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeScheduledAuditOutcomeCallable IoTClient::DescribeScheduledAuditCallable(const DescribeScheduledAuditRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledAuditOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScheduledAudit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeScheduledAuditAsync(const DescribeScheduledAuditRequest& request, const DescribeScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeScheduledAudit(request), context);
    } );
}

DescribeSecurityProfileOutcome IoTClient::DescribeSecurityProfile(const DescribeSecurityProfileRequest& request) const
{
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSecurityProfile", "Required field: SecurityProfileName, is not set");
    return DescribeSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetSecurityProfileName());
  return DescribeSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSecurityProfileOutcomeCallable IoTClient::DescribeSecurityProfileCallable(const DescribeSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeSecurityProfileAsync(const DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSecurityProfile(request), context);
    } );
}

DescribeStreamOutcome IoTClient::DescribeStream(const DescribeStreamRequest& request) const
{
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeStream", "Required field: StreamId, is not set");
    return DescribeStreamOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/streams/");
  uri.AddPathSegment(request.GetStreamId());
  return DescribeStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamOutcomeCallable IoTClient::DescribeStreamCallable(const DescribeStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStream(request), context);
    } );
}

DescribeThingOutcome IoTClient::DescribeThing(const DescribeThingRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThing", "Required field: ThingName, is not set");
    return DescribeThingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  return DescribeThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThingOutcomeCallable IoTClient::DescribeThingCallable(const DescribeThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeThingAsync(const DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeThing(request), context);
    } );
}

DescribeThingGroupOutcome IoTClient::DescribeThingGroup(const DescribeThingGroupRequest& request) const
{
  if (!request.ThingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThingGroup", "Required field: ThingGroupName, is not set");
    return DescribeThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-groups/");
  uri.AddPathSegment(request.GetThingGroupName());
  return DescribeThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThingGroupOutcomeCallable IoTClient::DescribeThingGroupCallable(const DescribeThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeThingGroupAsync(const DescribeThingGroupRequest& request, const DescribeThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeThingGroup(request), context);
    } );
}

DescribeThingRegistrationTaskOutcome IoTClient::DescribeThingRegistrationTask(const DescribeThingRegistrationTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThingRegistrationTask", "Required field: TaskId, is not set");
    return DescribeThingRegistrationTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-registration-tasks/");
  uri.AddPathSegment(request.GetTaskId());
  return DescribeThingRegistrationTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThingRegistrationTaskOutcomeCallable IoTClient::DescribeThingRegistrationTaskCallable(const DescribeThingRegistrationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThingRegistrationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThingRegistrationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeThingRegistrationTaskAsync(const DescribeThingRegistrationTaskRequest& request, const DescribeThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeThingRegistrationTask(request), context);
    } );
}

DescribeThingTypeOutcome IoTClient::DescribeThingType(const DescribeThingTypeRequest& request) const
{
  if (!request.ThingTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThingType", "Required field: ThingTypeName, is not set");
    return DescribeThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-types/");
  uri.AddPathSegment(request.GetThingTypeName());
  return DescribeThingTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThingTypeOutcomeCallable IoTClient::DescribeThingTypeCallable(const DescribeThingTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThingTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThingType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeThingTypeAsync(const DescribeThingTypeRequest& request, const DescribeThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeThingType(request), context);
    } );
}

DetachPolicyOutcome IoTClient::DetachPolicy(const DetachPolicyRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachPolicy", "Required field: PolicyName, is not set");
    return DetachPolicyOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/target-policies/");
  uri.AddPathSegment(request.GetPolicyName());
  return DetachPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachPolicyOutcomeCallable IoTClient::DetachPolicyCallable(const DetachPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DetachPolicyAsync(const DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachPolicy(request), context);
    } );
}

DetachSecurityProfileOutcome IoTClient::DetachSecurityProfile(const DetachSecurityProfileRequest& request) const
{
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachSecurityProfile", "Required field: SecurityProfileName, is not set");
    return DetachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  if (!request.SecurityProfileTargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachSecurityProfile", "Required field: SecurityProfileTargetArn, is not set");
    return DetachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileTargetArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetSecurityProfileName());
  uri.AddPathSegments("/targets");
  return DetachSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DetachSecurityProfileOutcomeCallable IoTClient::DetachSecurityProfileCallable(const DetachSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DetachSecurityProfileAsync(const DetachSecurityProfileRequest& request, const DetachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachSecurityProfile(request), context);
    } );
}

DetachThingPrincipalOutcome IoTClient::DetachThingPrincipal(const DetachThingPrincipalRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachThingPrincipal", "Required field: ThingName, is not set");
    return DetachThingPrincipalOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.PrincipalHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachThingPrincipal", "Required field: Principal, is not set");
    return DetachThingPrincipalOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/principals");
  return DetachThingPrincipalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DetachThingPrincipalOutcomeCallable IoTClient::DetachThingPrincipalCallable(const DetachThingPrincipalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachThingPrincipalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachThingPrincipal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DetachThingPrincipalAsync(const DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachThingPrincipal(request), context);
    } );
}

DisableTopicRuleOutcome IoTClient::DisableTopicRule(const DisableTopicRuleRequest& request) const
{
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableTopicRule", "Required field: RuleName, is not set");
    return DisableTopicRuleOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rules/");
  uri.AddPathSegment(request.GetRuleName());
  uri.AddPathSegments("/disable");
  return DisableTopicRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableTopicRuleOutcomeCallable IoTClient::DisableTopicRuleCallable(const DisableTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DisableTopicRuleAsync(const DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableTopicRule(request), context);
    } );
}

EnableTopicRuleOutcome IoTClient::EnableTopicRule(const EnableTopicRuleRequest& request) const
{
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableTopicRule", "Required field: RuleName, is not set");
    return EnableTopicRuleOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rules/");
  uri.AddPathSegment(request.GetRuleName());
  uri.AddPathSegments("/enable");
  return EnableTopicRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableTopicRuleOutcomeCallable IoTClient::EnableTopicRuleCallable(const EnableTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::EnableTopicRuleAsync(const EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableTopicRule(request), context);
    } );
}

GetBehaviorModelTrainingSummariesOutcome IoTClient::GetBehaviorModelTrainingSummaries(const GetBehaviorModelTrainingSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/behavior-model-training/summaries");
  return GetBehaviorModelTrainingSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBehaviorModelTrainingSummariesOutcomeCallable IoTClient::GetBehaviorModelTrainingSummariesCallable(const GetBehaviorModelTrainingSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBehaviorModelTrainingSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBehaviorModelTrainingSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetBehaviorModelTrainingSummariesAsync(const GetBehaviorModelTrainingSummariesRequest& request, const GetBehaviorModelTrainingSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBehaviorModelTrainingSummaries(request), context);
    } );
}

GetBucketsAggregationOutcome IoTClient::GetBucketsAggregation(const GetBucketsAggregationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/indices/buckets");
  return GetBucketsAggregationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketsAggregationOutcomeCallable IoTClient::GetBucketsAggregationCallable(const GetBucketsAggregationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketsAggregationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketsAggregation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetBucketsAggregationAsync(const GetBucketsAggregationRequest& request, const GetBucketsAggregationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketsAggregation(request), context);
    } );
}

GetCardinalityOutcome IoTClient::GetCardinality(const GetCardinalityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/indices/cardinality");
  return GetCardinalityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCardinalityOutcomeCallable IoTClient::GetCardinalityCallable(const GetCardinalityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCardinalityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCardinality(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetCardinalityAsync(const GetCardinalityRequest& request, const GetCardinalityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCardinality(request), context);
    } );
}

GetEffectivePoliciesOutcome IoTClient::GetEffectivePolicies(const GetEffectivePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/effective-policies");
  return GetEffectivePoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEffectivePoliciesOutcomeCallable IoTClient::GetEffectivePoliciesCallable(const GetEffectivePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEffectivePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEffectivePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetEffectivePoliciesAsync(const GetEffectivePoliciesRequest& request, const GetEffectivePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEffectivePolicies(request), context);
    } );
}

GetIndexingConfigurationOutcome IoTClient::GetIndexingConfiguration(const GetIndexingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/indexing/config");
  return GetIndexingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIndexingConfigurationOutcomeCallable IoTClient::GetIndexingConfigurationCallable(const GetIndexingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIndexingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIndexingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetIndexingConfigurationAsync(const GetIndexingConfigurationRequest& request, const GetIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetIndexingConfiguration(request), context);
    } );
}

GetJobDocumentOutcome IoTClient::GetJobDocument(const GetJobDocumentRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobDocument", "Required field: JobId, is not set");
    return GetJobDocumentOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  uri.AddPathSegments("/job-document");
  return GetJobDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJobDocumentOutcomeCallable IoTClient::GetJobDocumentCallable(const GetJobDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetJobDocumentAsync(const GetJobDocumentRequest& request, const GetJobDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetJobDocument(request), context);
    } );
}

GetLoggingOptionsOutcome IoTClient::GetLoggingOptions(const GetLoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/loggingOptions");
  return GetLoggingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLoggingOptionsOutcomeCallable IoTClient::GetLoggingOptionsCallable(const GetLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetLoggingOptionsAsync(const GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoggingOptions(request), context);
    } );
}

GetOTAUpdateOutcome IoTClient::GetOTAUpdate(const GetOTAUpdateRequest& request) const
{
  if (!request.OtaUpdateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOTAUpdate", "Required field: OtaUpdateId, is not set");
    return GetOTAUpdateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OtaUpdateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/otaUpdates/");
  uri.AddPathSegment(request.GetOtaUpdateId());
  return GetOTAUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOTAUpdateOutcomeCallable IoTClient::GetOTAUpdateCallable(const GetOTAUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOTAUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOTAUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetOTAUpdateAsync(const GetOTAUpdateRequest& request, const GetOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOTAUpdate(request), context);
    } );
}

GetPercentilesOutcome IoTClient::GetPercentiles(const GetPercentilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/indices/percentiles");
  return GetPercentilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPercentilesOutcomeCallable IoTClient::GetPercentilesCallable(const GetPercentilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPercentilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPercentiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetPercentilesAsync(const GetPercentilesRequest& request, const GetPercentilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPercentiles(request), context);
    } );
}

GetPolicyOutcome IoTClient::GetPolicy(const GetPolicyRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: PolicyName, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  return GetPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPolicyOutcomeCallable IoTClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPolicy(request), context);
    } );
}

GetPolicyVersionOutcome IoTClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPolicyVersion", "Required field: PolicyName, is not set");
    return GetPolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPolicyVersion", "Required field: PolicyVersionId, is not set");
    return GetPolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  uri.AddPathSegments("/version/");
  uri.AddPathSegment(request.GetPolicyVersionId());
  return GetPolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPolicyVersionOutcomeCallable IoTClient::GetPolicyVersionCallable(const GetPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPolicyVersion(request), context);
    } );
}

GetRegistrationCodeOutcome IoTClient::GetRegistrationCode(const GetRegistrationCodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/registrationcode");
  return GetRegistrationCodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRegistrationCodeOutcomeCallable IoTClient::GetRegistrationCodeCallable(const GetRegistrationCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegistrationCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegistrationCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetRegistrationCodeAsync(const GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRegistrationCode(request), context);
    } );
}

GetStatisticsOutcome IoTClient::GetStatistics(const GetStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/indices/statistics");
  return GetStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStatisticsOutcomeCallable IoTClient::GetStatisticsCallable(const GetStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetStatisticsAsync(const GetStatisticsRequest& request, const GetStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStatistics(request), context);
    } );
}

GetTopicRuleOutcome IoTClient::GetTopicRule(const GetTopicRuleRequest& request) const
{
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTopicRule", "Required field: RuleName, is not set");
    return GetTopicRuleOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rules/");
  uri.AddPathSegment(request.GetRuleName());
  return GetTopicRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTopicRuleOutcomeCallable IoTClient::GetTopicRuleCallable(const GetTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetTopicRuleAsync(const GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTopicRule(request), context);
    } );
}

GetTopicRuleDestinationOutcome IoTClient::GetTopicRuleDestination(const GetTopicRuleDestinationRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTopicRuleDestination", "Required field: Arn, is not set");
    return GetTopicRuleDestinationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations/");
  uri.AddPathSegments(request.GetArn());
  return GetTopicRuleDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTopicRuleDestinationOutcomeCallable IoTClient::GetTopicRuleDestinationCallable(const GetTopicRuleDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTopicRuleDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTopicRuleDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetTopicRuleDestinationAsync(const GetTopicRuleDestinationRequest& request, const GetTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTopicRuleDestination(request), context);
    } );
}

GetV2LoggingOptionsOutcome IoTClient::GetV2LoggingOptions(const GetV2LoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2LoggingOptions");
  return GetV2LoggingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetV2LoggingOptionsOutcomeCallable IoTClient::GetV2LoggingOptionsCallable(const GetV2LoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetV2LoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetV2LoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetV2LoggingOptionsAsync(const GetV2LoggingOptionsRequest& request, const GetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetV2LoggingOptions(request), context);
    } );
}

ListActiveViolationsOutcome IoTClient::ListActiveViolations(const ListActiveViolationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/active-violations");
  return ListActiveViolationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListActiveViolationsOutcomeCallable IoTClient::ListActiveViolationsCallable(const ListActiveViolationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActiveViolationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActiveViolations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListActiveViolationsAsync(const ListActiveViolationsRequest& request, const ListActiveViolationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListActiveViolations(request), context);
    } );
}

ListAttachedPoliciesOutcome IoTClient::ListAttachedPolicies(const ListAttachedPoliciesRequest& request) const
{
  if (!request.TargetHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttachedPolicies", "Required field: Target, is not set");
    return ListAttachedPoliciesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Target]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attached-policies/");
  uri.AddPathSegment(request.GetTarget());
  return ListAttachedPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAttachedPoliciesOutcomeCallable IoTClient::ListAttachedPoliciesCallable(const ListAttachedPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachedPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachedPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListAttachedPoliciesAsync(const ListAttachedPoliciesRequest& request, const ListAttachedPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAttachedPolicies(request), context);
    } );
}

ListAuditFindingsOutcome IoTClient::ListAuditFindings(const ListAuditFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/findings");
  return ListAuditFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAuditFindingsOutcomeCallable IoTClient::ListAuditFindingsCallable(const ListAuditFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAuditFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAuditFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListAuditFindingsAsync(const ListAuditFindingsRequest& request, const ListAuditFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAuditFindings(request), context);
    } );
}

ListAuditMitigationActionsExecutionsOutcome IoTClient::ListAuditMitigationActionsExecutions(const ListAuditMitigationActionsExecutionsRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsExecutions", "Required field: TaskId, is not set");
    return ListAuditMitigationActionsExecutionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  if (!request.FindingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsExecutions", "Required field: FindingId, is not set");
    return ListAuditMitigationActionsExecutionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/mitigationactions/executions");
  return ListAuditMitigationActionsExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAuditMitigationActionsExecutionsOutcomeCallable IoTClient::ListAuditMitigationActionsExecutionsCallable(const ListAuditMitigationActionsExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAuditMitigationActionsExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAuditMitigationActionsExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListAuditMitigationActionsExecutionsAsync(const ListAuditMitigationActionsExecutionsRequest& request, const ListAuditMitigationActionsExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAuditMitigationActionsExecutions(request), context);
    } );
}

ListAuditMitigationActionsTasksOutcome IoTClient::ListAuditMitigationActionsTasks(const ListAuditMitigationActionsTasksRequest& request) const
{
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsTasks", "Required field: StartTime, is not set");
    return ListAuditMitigationActionsTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsTasks", "Required field: EndTime, is not set");
    return ListAuditMitigationActionsTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/mitigationactions/tasks");
  return ListAuditMitigationActionsTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAuditMitigationActionsTasksOutcomeCallable IoTClient::ListAuditMitigationActionsTasksCallable(const ListAuditMitigationActionsTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAuditMitigationActionsTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAuditMitigationActionsTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListAuditMitigationActionsTasksAsync(const ListAuditMitigationActionsTasksRequest& request, const ListAuditMitigationActionsTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAuditMitigationActionsTasks(request), context);
    } );
}

ListAuditSuppressionsOutcome IoTClient::ListAuditSuppressions(const ListAuditSuppressionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/suppressions/list");
  return ListAuditSuppressionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAuditSuppressionsOutcomeCallable IoTClient::ListAuditSuppressionsCallable(const ListAuditSuppressionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAuditSuppressionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAuditSuppressions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListAuditSuppressionsAsync(const ListAuditSuppressionsRequest& request, const ListAuditSuppressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAuditSuppressions(request), context);
    } );
}

ListAuditTasksOutcome IoTClient::ListAuditTasks(const ListAuditTasksRequest& request) const
{
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditTasks", "Required field: StartTime, is not set");
    return ListAuditTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditTasks", "Required field: EndTime, is not set");
    return ListAuditTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/tasks");
  return ListAuditTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAuditTasksOutcomeCallable IoTClient::ListAuditTasksCallable(const ListAuditTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAuditTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAuditTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListAuditTasksAsync(const ListAuditTasksRequest& request, const ListAuditTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAuditTasks(request), context);
    } );
}

ListAuthorizersOutcome IoTClient::ListAuthorizers(const ListAuthorizersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/authorizers/");
  return ListAuthorizersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAuthorizersOutcomeCallable IoTClient::ListAuthorizersCallable(const ListAuthorizersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAuthorizersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAuthorizers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListAuthorizersAsync(const ListAuthorizersRequest& request, const ListAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAuthorizers(request), context);
    } );
}

ListBillingGroupsOutcome IoTClient::ListBillingGroups(const ListBillingGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/billing-groups");
  return ListBillingGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBillingGroupsOutcomeCallable IoTClient::ListBillingGroupsCallable(const ListBillingGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBillingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBillingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListBillingGroupsAsync(const ListBillingGroupsRequest& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBillingGroups(request), context);
    } );
}

ListCACertificatesOutcome IoTClient::ListCACertificates(const ListCACertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cacertificates");
  return ListCACertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCACertificatesOutcomeCallable IoTClient::ListCACertificatesCallable(const ListCACertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCACertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCACertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListCACertificatesAsync(const ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCACertificates(request), context);
    } );
}

ListCertificatesOutcome IoTClient::ListCertificates(const ListCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/certificates");
  return ListCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCertificatesOutcomeCallable IoTClient::ListCertificatesCallable(const ListCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListCertificatesAsync(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCertificates(request), context);
    } );
}

ListCertificatesByCAOutcome IoTClient::ListCertificatesByCA(const ListCertificatesByCARequest& request) const
{
  if (!request.CaCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCertificatesByCA", "Required field: CaCertificateId, is not set");
    return ListCertificatesByCAOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaCertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/certificates-by-ca/");
  uri.AddPathSegment(request.GetCaCertificateId());
  return ListCertificatesByCAOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCertificatesByCAOutcomeCallable IoTClient::ListCertificatesByCACallable(const ListCertificatesByCARequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificatesByCAOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificatesByCA(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListCertificatesByCAAsync(const ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCertificatesByCA(request), context);
    } );
}

ListCustomMetricsOutcome IoTClient::ListCustomMetrics(const ListCustomMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-metrics");
  return ListCustomMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCustomMetricsOutcomeCallable IoTClient::ListCustomMetricsCallable(const ListCustomMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListCustomMetricsAsync(const ListCustomMetricsRequest& request, const ListCustomMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomMetrics(request), context);
    } );
}

ListDetectMitigationActionsExecutionsOutcome IoTClient::ListDetectMitigationActionsExecutions(const ListDetectMitigationActionsExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detect/mitigationactions/executions");
  return ListDetectMitigationActionsExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDetectMitigationActionsExecutionsOutcomeCallable IoTClient::ListDetectMitigationActionsExecutionsCallable(const ListDetectMitigationActionsExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDetectMitigationActionsExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDetectMitigationActionsExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListDetectMitigationActionsExecutionsAsync(const ListDetectMitigationActionsExecutionsRequest& request, const ListDetectMitigationActionsExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDetectMitigationActionsExecutions(request), context);
    } );
}

ListDetectMitigationActionsTasksOutcome IoTClient::ListDetectMitigationActionsTasks(const ListDetectMitigationActionsTasksRequest& request) const
{
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDetectMitigationActionsTasks", "Required field: StartTime, is not set");
    return ListDetectMitigationActionsTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDetectMitigationActionsTasks", "Required field: EndTime, is not set");
    return ListDetectMitigationActionsTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detect/mitigationactions/tasks");
  return ListDetectMitigationActionsTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDetectMitigationActionsTasksOutcomeCallable IoTClient::ListDetectMitigationActionsTasksCallable(const ListDetectMitigationActionsTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDetectMitigationActionsTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDetectMitigationActionsTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListDetectMitigationActionsTasksAsync(const ListDetectMitigationActionsTasksRequest& request, const ListDetectMitigationActionsTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDetectMitigationActionsTasks(request), context);
    } );
}

ListDimensionsOutcome IoTClient::ListDimensions(const ListDimensionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/dimensions");
  return ListDimensionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDimensionsOutcomeCallable IoTClient::ListDimensionsCallable(const ListDimensionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDimensionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDimensions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListDimensionsAsync(const ListDimensionsRequest& request, const ListDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDimensions(request), context);
    } );
}

ListDomainConfigurationsOutcome IoTClient::ListDomainConfigurations(const ListDomainConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainConfigurations");
  return ListDomainConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainConfigurationsOutcomeCallable IoTClient::ListDomainConfigurationsCallable(const ListDomainConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListDomainConfigurationsAsync(const ListDomainConfigurationsRequest& request, const ListDomainConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomainConfigurations(request), context);
    } );
}

ListFleetMetricsOutcome IoTClient::ListFleetMetrics(const ListFleetMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fleet-metrics");
  return ListFleetMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFleetMetricsOutcomeCallable IoTClient::ListFleetMetricsCallable(const ListFleetMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFleetMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFleetMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListFleetMetricsAsync(const ListFleetMetricsRequest& request, const ListFleetMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFleetMetrics(request), context);
    } );
}

ListIndicesOutcome IoTClient::ListIndices(const ListIndicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/indices");
  return ListIndicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIndicesOutcomeCallable IoTClient::ListIndicesCallable(const ListIndicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIndicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIndices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListIndicesAsync(const ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIndices(request), context);
    } );
}

ListJobExecutionsForJobOutcome IoTClient::ListJobExecutionsForJob(const ListJobExecutionsForJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobExecutionsForJob", "Required field: JobId, is not set");
    return ListJobExecutionsForJobOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  uri.AddPathSegments("/things");
  return ListJobExecutionsForJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobExecutionsForJobOutcomeCallable IoTClient::ListJobExecutionsForJobCallable(const ListJobExecutionsForJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobExecutionsForJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobExecutionsForJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListJobExecutionsForJobAsync(const ListJobExecutionsForJobRequest& request, const ListJobExecutionsForJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobExecutionsForJob(request), context);
    } );
}

ListJobExecutionsForThingOutcome IoTClient::ListJobExecutionsForThing(const ListJobExecutionsForThingRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobExecutionsForThing", "Required field: ThingName, is not set");
    return ListJobExecutionsForThingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/jobs");
  return ListJobExecutionsForThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobExecutionsForThingOutcomeCallable IoTClient::ListJobExecutionsForThingCallable(const ListJobExecutionsForThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobExecutionsForThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobExecutionsForThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListJobExecutionsForThingAsync(const ListJobExecutionsForThingRequest& request, const ListJobExecutionsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobExecutionsForThing(request), context);
    } );
}

ListJobTemplatesOutcome IoTClient::ListJobTemplates(const ListJobTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/job-templates");
  return ListJobTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobTemplatesOutcomeCallable IoTClient::ListJobTemplatesCallable(const ListJobTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListJobTemplatesAsync(const ListJobTemplatesRequest& request, const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobTemplates(request), context);
    } );
}

ListJobsOutcome IoTClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs");
  return ListJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable IoTClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobs(request), context);
    } );
}

ListManagedJobTemplatesOutcome IoTClient::ListManagedJobTemplates(const ListManagedJobTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/managed-job-templates");
  return ListManagedJobTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListManagedJobTemplatesOutcomeCallable IoTClient::ListManagedJobTemplatesCallable(const ListManagedJobTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedJobTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedJobTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListManagedJobTemplatesAsync(const ListManagedJobTemplatesRequest& request, const ListManagedJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListManagedJobTemplates(request), context);
    } );
}

ListMetricValuesOutcome IoTClient::ListMetricValues(const ListMetricValuesRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: ThingName, is not set");
    return ListMetricValuesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: MetricName, is not set");
    return ListMetricValuesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: StartTime, is not set");
    return ListMetricValuesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: EndTime, is not set");
    return ListMetricValuesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/metric-values");
  return ListMetricValuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMetricValuesOutcomeCallable IoTClient::ListMetricValuesCallable(const ListMetricValuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMetricValuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMetricValues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListMetricValuesAsync(const ListMetricValuesRequest& request, const ListMetricValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMetricValues(request), context);
    } );
}

ListMitigationActionsOutcome IoTClient::ListMitigationActions(const ListMitigationActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/mitigationactions/actions");
  return ListMitigationActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMitigationActionsOutcomeCallable IoTClient::ListMitigationActionsCallable(const ListMitigationActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMitigationActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMitigationActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListMitigationActionsAsync(const ListMitigationActionsRequest& request, const ListMitigationActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMitigationActions(request), context);
    } );
}

ListOTAUpdatesOutcome IoTClient::ListOTAUpdates(const ListOTAUpdatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/otaUpdates");
  return ListOTAUpdatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOTAUpdatesOutcomeCallable IoTClient::ListOTAUpdatesCallable(const ListOTAUpdatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOTAUpdatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOTAUpdates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListOTAUpdatesAsync(const ListOTAUpdatesRequest& request, const ListOTAUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOTAUpdates(request), context);
    } );
}

ListOutgoingCertificatesOutcome IoTClient::ListOutgoingCertificates(const ListOutgoingCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/certificates-out-going");
  return ListOutgoingCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOutgoingCertificatesOutcomeCallable IoTClient::ListOutgoingCertificatesCallable(const ListOutgoingCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOutgoingCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOutgoingCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListOutgoingCertificatesAsync(const ListOutgoingCertificatesRequest& request, const ListOutgoingCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOutgoingCertificates(request), context);
    } );
}

ListPoliciesOutcome IoTClient::ListPolicies(const ListPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policies");
  return ListPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPoliciesOutcomeCallable IoTClient::ListPoliciesCallable(const ListPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPolicies(request), context);
    } );
}

ListPolicyVersionsOutcome IoTClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPolicyVersions", "Required field: PolicyName, is not set");
    return ListPolicyVersionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  uri.AddPathSegments("/version");
  return ListPolicyVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPolicyVersionsOutcomeCallable IoTClient::ListPolicyVersionsCallable(const ListPolicyVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPolicyVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicyVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPolicyVersions(request), context);
    } );
}

ListPrincipalThingsOutcome IoTClient::ListPrincipalThings(const ListPrincipalThingsRequest& request) const
{
  if (!request.PrincipalHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrincipalThings", "Required field: Principal, is not set");
    return ListPrincipalThingsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/principals/things");
  return ListPrincipalThingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPrincipalThingsOutcomeCallable IoTClient::ListPrincipalThingsCallable(const ListPrincipalThingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPrincipalThingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPrincipalThings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListPrincipalThingsAsync(const ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPrincipalThings(request), context);
    } );
}

ListProvisioningTemplateVersionsOutcome IoTClient::ListProvisioningTemplateVersions(const ListProvisioningTemplateVersionsRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProvisioningTemplateVersions", "Required field: TemplateName, is not set");
    return ListProvisioningTemplateVersionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/versions");
  return ListProvisioningTemplateVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProvisioningTemplateVersionsOutcomeCallable IoTClient::ListProvisioningTemplateVersionsCallable(const ListProvisioningTemplateVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisioningTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisioningTemplateVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListProvisioningTemplateVersionsAsync(const ListProvisioningTemplateVersionsRequest& request, const ListProvisioningTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProvisioningTemplateVersions(request), context);
    } );
}

ListProvisioningTemplatesOutcome IoTClient::ListProvisioningTemplates(const ListProvisioningTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates");
  return ListProvisioningTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProvisioningTemplatesOutcomeCallable IoTClient::ListProvisioningTemplatesCallable(const ListProvisioningTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisioningTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisioningTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListProvisioningTemplatesAsync(const ListProvisioningTemplatesRequest& request, const ListProvisioningTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProvisioningTemplates(request), context);
    } );
}

ListRoleAliasesOutcome IoTClient::ListRoleAliases(const ListRoleAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/role-aliases");
  return ListRoleAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRoleAliasesOutcomeCallable IoTClient::ListRoleAliasesCallable(const ListRoleAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoleAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoleAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListRoleAliasesAsync(const ListRoleAliasesRequest& request, const ListRoleAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRoleAliases(request), context);
    } );
}

ListScheduledAuditsOutcome IoTClient::ListScheduledAudits(const ListScheduledAuditsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/scheduledaudits");
  return ListScheduledAuditsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListScheduledAuditsOutcomeCallable IoTClient::ListScheduledAuditsCallable(const ListScheduledAuditsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListScheduledAuditsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListScheduledAudits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListScheduledAuditsAsync(const ListScheduledAuditsRequest& request, const ListScheduledAuditsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListScheduledAudits(request), context);
    } );
}

ListSecurityProfilesOutcome IoTClient::ListSecurityProfiles(const ListSecurityProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles");
  return ListSecurityProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityProfilesOutcomeCallable IoTClient::ListSecurityProfilesCallable(const ListSecurityProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListSecurityProfilesAsync(const ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSecurityProfiles(request), context);
    } );
}

ListSecurityProfilesForTargetOutcome IoTClient::ListSecurityProfilesForTarget(const ListSecurityProfilesForTargetRequest& request) const
{
  if (!request.SecurityProfileTargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSecurityProfilesForTarget", "Required field: SecurityProfileTargetArn, is not set");
    return ListSecurityProfilesForTargetOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileTargetArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles-for-target");
  return ListSecurityProfilesForTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityProfilesForTargetOutcomeCallable IoTClient::ListSecurityProfilesForTargetCallable(const ListSecurityProfilesForTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityProfilesForTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityProfilesForTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListSecurityProfilesForTargetAsync(const ListSecurityProfilesForTargetRequest& request, const ListSecurityProfilesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSecurityProfilesForTarget(request), context);
    } );
}

ListStreamsOutcome IoTClient::ListStreams(const ListStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/streams");
  return ListStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStreamsOutcomeCallable IoTClient::ListStreamsCallable(const ListStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListStreamsAsync(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStreams(request), context);
    } );
}

ListTagsForResourceOutcome IoTClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoTClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTargetsForPolicyOutcome IoTClient::ListTargetsForPolicy(const ListTargetsForPolicyRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTargetsForPolicy", "Required field: PolicyName, is not set");
    return ListTargetsForPolicyOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policy-targets/");
  uri.AddPathSegment(request.GetPolicyName());
  return ListTargetsForPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTargetsForPolicyOutcomeCallable IoTClient::ListTargetsForPolicyCallable(const ListTargetsForPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetsForPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetsForPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListTargetsForPolicyAsync(const ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTargetsForPolicy(request), context);
    } );
}

ListTargetsForSecurityProfileOutcome IoTClient::ListTargetsForSecurityProfile(const ListTargetsForSecurityProfileRequest& request) const
{
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTargetsForSecurityProfile", "Required field: SecurityProfileName, is not set");
    return ListTargetsForSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetSecurityProfileName());
  uri.AddPathSegments("/targets");
  return ListTargetsForSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTargetsForSecurityProfileOutcomeCallable IoTClient::ListTargetsForSecurityProfileCallable(const ListTargetsForSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetsForSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetsForSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListTargetsForSecurityProfileAsync(const ListTargetsForSecurityProfileRequest& request, const ListTargetsForSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTargetsForSecurityProfile(request), context);
    } );
}

ListThingGroupsOutcome IoTClient::ListThingGroups(const ListThingGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-groups");
  return ListThingGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThingGroupsOutcomeCallable IoTClient::ListThingGroupsCallable(const ListThingGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingGroupsAsync(const ListThingGroupsRequest& request, const ListThingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThingGroups(request), context);
    } );
}

ListThingGroupsForThingOutcome IoTClient::ListThingGroupsForThing(const ListThingGroupsForThingRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThingGroupsForThing", "Required field: ThingName, is not set");
    return ListThingGroupsForThingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/thing-groups");
  return ListThingGroupsForThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThingGroupsForThingOutcomeCallable IoTClient::ListThingGroupsForThingCallable(const ListThingGroupsForThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingGroupsForThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingGroupsForThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingGroupsForThingAsync(const ListThingGroupsForThingRequest& request, const ListThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThingGroupsForThing(request), context);
    } );
}

ListThingPrincipalsOutcome IoTClient::ListThingPrincipals(const ListThingPrincipalsRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThingPrincipals", "Required field: ThingName, is not set");
    return ListThingPrincipalsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/principals");
  return ListThingPrincipalsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThingPrincipalsOutcomeCallable IoTClient::ListThingPrincipalsCallable(const ListThingPrincipalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingPrincipalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingPrincipals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingPrincipalsAsync(const ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThingPrincipals(request), context);
    } );
}

ListThingRegistrationTaskReportsOutcome IoTClient::ListThingRegistrationTaskReports(const ListThingRegistrationTaskReportsRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThingRegistrationTaskReports", "Required field: TaskId, is not set");
    return ListThingRegistrationTaskReportsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  if (!request.ReportTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThingRegistrationTaskReports", "Required field: ReportType, is not set");
    return ListThingRegistrationTaskReportsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-registration-tasks/");
  uri.AddPathSegment(request.GetTaskId());
  uri.AddPathSegments("/reports");
  return ListThingRegistrationTaskReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThingRegistrationTaskReportsOutcomeCallable IoTClient::ListThingRegistrationTaskReportsCallable(const ListThingRegistrationTaskReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingRegistrationTaskReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingRegistrationTaskReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingRegistrationTaskReportsAsync(const ListThingRegistrationTaskReportsRequest& request, const ListThingRegistrationTaskReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThingRegistrationTaskReports(request), context);
    } );
}

ListThingRegistrationTasksOutcome IoTClient::ListThingRegistrationTasks(const ListThingRegistrationTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-registration-tasks");
  return ListThingRegistrationTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThingRegistrationTasksOutcomeCallable IoTClient::ListThingRegistrationTasksCallable(const ListThingRegistrationTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingRegistrationTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingRegistrationTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingRegistrationTasksAsync(const ListThingRegistrationTasksRequest& request, const ListThingRegistrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThingRegistrationTasks(request), context);
    } );
}

ListThingTypesOutcome IoTClient::ListThingTypes(const ListThingTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-types");
  return ListThingTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThingTypesOutcomeCallable IoTClient::ListThingTypesCallable(const ListThingTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingTypesAsync(const ListThingTypesRequest& request, const ListThingTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThingTypes(request), context);
    } );
}

ListThingsOutcome IoTClient::ListThings(const ListThingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things");
  return ListThingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThingsOutcomeCallable IoTClient::ListThingsCallable(const ListThingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingsAsync(const ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThings(request), context);
    } );
}

ListThingsInBillingGroupOutcome IoTClient::ListThingsInBillingGroup(const ListThingsInBillingGroupRequest& request) const
{
  if (!request.BillingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThingsInBillingGroup", "Required field: BillingGroupName, is not set");
    return ListThingsInBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BillingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/billing-groups/");
  uri.AddPathSegment(request.GetBillingGroupName());
  uri.AddPathSegments("/things");
  return ListThingsInBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThingsInBillingGroupOutcomeCallable IoTClient::ListThingsInBillingGroupCallable(const ListThingsInBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingsInBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingsInBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingsInBillingGroupAsync(const ListThingsInBillingGroupRequest& request, const ListThingsInBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThingsInBillingGroup(request), context);
    } );
}

ListThingsInThingGroupOutcome IoTClient::ListThingsInThingGroup(const ListThingsInThingGroupRequest& request) const
{
  if (!request.ThingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThingsInThingGroup", "Required field: ThingGroupName, is not set");
    return ListThingsInThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-groups/");
  uri.AddPathSegment(request.GetThingGroupName());
  uri.AddPathSegments("/things");
  return ListThingsInThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThingsInThingGroupOutcomeCallable IoTClient::ListThingsInThingGroupCallable(const ListThingsInThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingsInThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingsInThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingsInThingGroupAsync(const ListThingsInThingGroupRequest& request, const ListThingsInThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThingsInThingGroup(request), context);
    } );
}

ListTopicRuleDestinationsOutcome IoTClient::ListTopicRuleDestinations(const ListTopicRuleDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations");
  return ListTopicRuleDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTopicRuleDestinationsOutcomeCallable IoTClient::ListTopicRuleDestinationsCallable(const ListTopicRuleDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTopicRuleDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTopicRuleDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListTopicRuleDestinationsAsync(const ListTopicRuleDestinationsRequest& request, const ListTopicRuleDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTopicRuleDestinations(request), context);
    } );
}

ListTopicRulesOutcome IoTClient::ListTopicRules(const ListTopicRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rules");
  return ListTopicRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTopicRulesOutcomeCallable IoTClient::ListTopicRulesCallable(const ListTopicRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTopicRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTopicRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListTopicRulesAsync(const ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTopicRules(request), context);
    } );
}

ListV2LoggingLevelsOutcome IoTClient::ListV2LoggingLevels(const ListV2LoggingLevelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2LoggingLevel");
  return ListV2LoggingLevelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListV2LoggingLevelsOutcomeCallable IoTClient::ListV2LoggingLevelsCallable(const ListV2LoggingLevelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListV2LoggingLevelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListV2LoggingLevels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListV2LoggingLevelsAsync(const ListV2LoggingLevelsRequest& request, const ListV2LoggingLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListV2LoggingLevels(request), context);
    } );
}

ListViolationEventsOutcome IoTClient::ListViolationEvents(const ListViolationEventsRequest& request) const
{
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListViolationEvents", "Required field: StartTime, is not set");
    return ListViolationEventsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListViolationEvents", "Required field: EndTime, is not set");
    return ListViolationEventsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/violation-events");
  return ListViolationEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListViolationEventsOutcomeCallable IoTClient::ListViolationEventsCallable(const ListViolationEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListViolationEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListViolationEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListViolationEventsAsync(const ListViolationEventsRequest& request, const ListViolationEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListViolationEvents(request), context);
    } );
}

PutVerificationStateOnViolationOutcome IoTClient::PutVerificationStateOnViolation(const PutVerificationStateOnViolationRequest& request) const
{
  if (!request.ViolationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVerificationStateOnViolation", "Required field: ViolationId, is not set");
    return PutVerificationStateOnViolationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ViolationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/violations/verification-state/");
  uri.AddPathSegment(request.GetViolationId());
  return PutVerificationStateOnViolationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutVerificationStateOnViolationOutcomeCallable IoTClient::PutVerificationStateOnViolationCallable(const PutVerificationStateOnViolationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVerificationStateOnViolationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVerificationStateOnViolation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::PutVerificationStateOnViolationAsync(const PutVerificationStateOnViolationRequest& request, const PutVerificationStateOnViolationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVerificationStateOnViolation(request), context);
    } );
}

RegisterCACertificateOutcome IoTClient::RegisterCACertificate(const RegisterCACertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cacertificate");
  return RegisterCACertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterCACertificateOutcomeCallable IoTClient::RegisterCACertificateCallable(const RegisterCACertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterCACertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterCACertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RegisterCACertificateAsync(const RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterCACertificate(request), context);
    } );
}

RegisterCertificateOutcome IoTClient::RegisterCertificate(const RegisterCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/certificate/register");
  return RegisterCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterCertificateOutcomeCallable IoTClient::RegisterCertificateCallable(const RegisterCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RegisterCertificateAsync(const RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterCertificate(request), context);
    } );
}

RegisterCertificateWithoutCAOutcome IoTClient::RegisterCertificateWithoutCA(const RegisterCertificateWithoutCARequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/certificate/register-no-ca");
  return RegisterCertificateWithoutCAOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterCertificateWithoutCAOutcomeCallable IoTClient::RegisterCertificateWithoutCACallable(const RegisterCertificateWithoutCARequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterCertificateWithoutCAOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterCertificateWithoutCA(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RegisterCertificateWithoutCAAsync(const RegisterCertificateWithoutCARequest& request, const RegisterCertificateWithoutCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterCertificateWithoutCA(request), context);
    } );
}

RegisterThingOutcome IoTClient::RegisterThing(const RegisterThingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things");
  return RegisterThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterThingOutcomeCallable IoTClient::RegisterThingCallable(const RegisterThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RegisterThingAsync(const RegisterThingRequest& request, const RegisterThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterThing(request), context);
    } );
}

RejectCertificateTransferOutcome IoTClient::RejectCertificateTransfer(const RejectCertificateTransferRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectCertificateTransfer", "Required field: CertificateId, is not set");
    return RejectCertificateTransferOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reject-certificate-transfer/");
  uri.AddPathSegment(request.GetCertificateId());
  return RejectCertificateTransferOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

RejectCertificateTransferOutcomeCallable IoTClient::RejectCertificateTransferCallable(const RejectCertificateTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectCertificateTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectCertificateTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RejectCertificateTransferAsync(const RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RejectCertificateTransfer(request), context);
    } );
}

RemoveThingFromBillingGroupOutcome IoTClient::RemoveThingFromBillingGroup(const RemoveThingFromBillingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/billing-groups/removeThingFromBillingGroup");
  return RemoveThingFromBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RemoveThingFromBillingGroupOutcomeCallable IoTClient::RemoveThingFromBillingGroupCallable(const RemoveThingFromBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveThingFromBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveThingFromBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RemoveThingFromBillingGroupAsync(const RemoveThingFromBillingGroupRequest& request, const RemoveThingFromBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveThingFromBillingGroup(request), context);
    } );
}

RemoveThingFromThingGroupOutcome IoTClient::RemoveThingFromThingGroup(const RemoveThingFromThingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-groups/removeThingFromThingGroup");
  return RemoveThingFromThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RemoveThingFromThingGroupOutcomeCallable IoTClient::RemoveThingFromThingGroupCallable(const RemoveThingFromThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveThingFromThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveThingFromThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RemoveThingFromThingGroupAsync(const RemoveThingFromThingGroupRequest& request, const RemoveThingFromThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveThingFromThingGroup(request), context);
    } );
}

ReplaceTopicRuleOutcome IoTClient::ReplaceTopicRule(const ReplaceTopicRuleRequest& request) const
{
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReplaceTopicRule", "Required field: RuleName, is not set");
    return ReplaceTopicRuleOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rules/");
  uri.AddPathSegment(request.GetRuleName());
  return ReplaceTopicRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

ReplaceTopicRuleOutcomeCallable IoTClient::ReplaceTopicRuleCallable(const ReplaceTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplaceTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplaceTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ReplaceTopicRuleAsync(const ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReplaceTopicRule(request), context);
    } );
}

SearchIndexOutcome IoTClient::SearchIndex(const SearchIndexRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/indices/search");
  return SearchIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchIndexOutcomeCallable IoTClient::SearchIndexCallable(const SearchIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SearchIndexAsync(const SearchIndexRequest& request, const SearchIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchIndex(request), context);
    } );
}

SetDefaultAuthorizerOutcome IoTClient::SetDefaultAuthorizer(const SetDefaultAuthorizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/default-authorizer");
  return SetDefaultAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetDefaultAuthorizerOutcomeCallable IoTClient::SetDefaultAuthorizerCallable(const SetDefaultAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDefaultAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDefaultAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetDefaultAuthorizerAsync(const SetDefaultAuthorizerRequest& request, const SetDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetDefaultAuthorizer(request), context);
    } );
}

SetDefaultPolicyVersionOutcome IoTClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest& request) const
{
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetDefaultPolicyVersion", "Required field: PolicyName, is not set");
    return SetDefaultPolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetDefaultPolicyVersion", "Required field: PolicyVersionId, is not set");
    return SetDefaultPolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  uri.AddPathSegments("/version/");
  uri.AddPathSegment(request.GetPolicyVersionId());
  return SetDefaultPolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

SetDefaultPolicyVersionOutcomeCallable IoTClient::SetDefaultPolicyVersionCallable(const SetDefaultPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDefaultPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDefaultPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetDefaultPolicyVersion(request), context);
    } );
}

SetLoggingOptionsOutcome IoTClient::SetLoggingOptions(const SetLoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/loggingOptions");
  return SetLoggingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetLoggingOptionsOutcomeCallable IoTClient::SetLoggingOptionsCallable(const SetLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetLoggingOptionsAsync(const SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetLoggingOptions(request), context);
    } );
}

SetV2LoggingLevelOutcome IoTClient::SetV2LoggingLevel(const SetV2LoggingLevelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2LoggingLevel");
  return SetV2LoggingLevelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetV2LoggingLevelOutcomeCallable IoTClient::SetV2LoggingLevelCallable(const SetV2LoggingLevelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetV2LoggingLevelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetV2LoggingLevel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetV2LoggingLevelAsync(const SetV2LoggingLevelRequest& request, const SetV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetV2LoggingLevel(request), context);
    } );
}

SetV2LoggingOptionsOutcome IoTClient::SetV2LoggingOptions(const SetV2LoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2LoggingOptions");
  return SetV2LoggingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetV2LoggingOptionsOutcomeCallable IoTClient::SetV2LoggingOptionsCallable(const SetV2LoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetV2LoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetV2LoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetV2LoggingOptionsAsync(const SetV2LoggingOptionsRequest& request, const SetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetV2LoggingOptions(request), context);
    } );
}

StartAuditMitigationActionsTaskOutcome IoTClient::StartAuditMitigationActionsTask(const StartAuditMitigationActionsTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartAuditMitigationActionsTask", "Required field: TaskId, is not set");
    return StartAuditMitigationActionsTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/mitigationactions/tasks/");
  uri.AddPathSegment(request.GetTaskId());
  return StartAuditMitigationActionsTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAuditMitigationActionsTaskOutcomeCallable IoTClient::StartAuditMitigationActionsTaskCallable(const StartAuditMitigationActionsTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAuditMitigationActionsTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAuditMitigationActionsTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::StartAuditMitigationActionsTaskAsync(const StartAuditMitigationActionsTaskRequest& request, const StartAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAuditMitigationActionsTask(request), context);
    } );
}

StartDetectMitigationActionsTaskOutcome IoTClient::StartDetectMitigationActionsTask(const StartDetectMitigationActionsTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDetectMitigationActionsTask", "Required field: TaskId, is not set");
    return StartDetectMitigationActionsTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detect/mitigationactions/tasks/");
  uri.AddPathSegment(request.GetTaskId());
  return StartDetectMitigationActionsTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartDetectMitigationActionsTaskOutcomeCallable IoTClient::StartDetectMitigationActionsTaskCallable(const StartDetectMitigationActionsTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDetectMitigationActionsTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDetectMitigationActionsTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::StartDetectMitigationActionsTaskAsync(const StartDetectMitigationActionsTaskRequest& request, const StartDetectMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDetectMitigationActionsTask(request), context);
    } );
}

StartOnDemandAuditTaskOutcome IoTClient::StartOnDemandAuditTask(const StartOnDemandAuditTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/tasks");
  return StartOnDemandAuditTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartOnDemandAuditTaskOutcomeCallable IoTClient::StartOnDemandAuditTaskCallable(const StartOnDemandAuditTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartOnDemandAuditTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartOnDemandAuditTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::StartOnDemandAuditTaskAsync(const StartOnDemandAuditTaskRequest& request, const StartOnDemandAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartOnDemandAuditTask(request), context);
    } );
}

StartThingRegistrationTaskOutcome IoTClient::StartThingRegistrationTask(const StartThingRegistrationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-registration-tasks");
  return StartThingRegistrationTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartThingRegistrationTaskOutcomeCallable IoTClient::StartThingRegistrationTaskCallable(const StartThingRegistrationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartThingRegistrationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartThingRegistrationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::StartThingRegistrationTaskAsync(const StartThingRegistrationTaskRequest& request, const StartThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartThingRegistrationTask(request), context);
    } );
}

StopThingRegistrationTaskOutcome IoTClient::StopThingRegistrationTask(const StopThingRegistrationTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopThingRegistrationTask", "Required field: TaskId, is not set");
    return StopThingRegistrationTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-registration-tasks/");
  uri.AddPathSegment(request.GetTaskId());
  uri.AddPathSegments("/cancel");
  return StopThingRegistrationTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StopThingRegistrationTaskOutcomeCallable IoTClient::StopThingRegistrationTaskCallable(const StopThingRegistrationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopThingRegistrationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopThingRegistrationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::StopThingRegistrationTaskAsync(const StopThingRegistrationTaskRequest& request, const StopThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopThingRegistrationTask(request), context);
    } );
}

TagResourceOutcome IoTClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoTClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

TestAuthorizationOutcome IoTClient::TestAuthorization(const TestAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/test-authorization");
  return TestAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestAuthorizationOutcomeCallable IoTClient::TestAuthorizationCallable(const TestAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::TestAuthorizationAsync(const TestAuthorizationRequest& request, const TestAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestAuthorization(request), context);
    } );
}

TestInvokeAuthorizerOutcome IoTClient::TestInvokeAuthorizer(const TestInvokeAuthorizerRequest& request) const
{
  if (!request.AuthorizerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeAuthorizer", "Required field: AuthorizerName, is not set");
    return TestInvokeAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/authorizer/");
  uri.AddPathSegment(request.GetAuthorizerName());
  uri.AddPathSegments("/test");
  return TestInvokeAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestInvokeAuthorizerOutcomeCallable IoTClient::TestInvokeAuthorizerCallable(const TestInvokeAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestInvokeAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestInvokeAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::TestInvokeAuthorizerAsync(const TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestInvokeAuthorizer(request), context);
    } );
}

TransferCertificateOutcome IoTClient::TransferCertificate(const TransferCertificateRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TransferCertificate", "Required field: CertificateId, is not set");
    return TransferCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  if (!request.TargetAwsAccountHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TransferCertificate", "Required field: TargetAwsAccount, is not set");
    return TransferCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetAwsAccount]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/transfer-certificate/");
  uri.AddPathSegment(request.GetCertificateId());
  return TransferCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

TransferCertificateOutcomeCallable IoTClient::TransferCertificateCallable(const TransferCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransferCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransferCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::TransferCertificateAsync(const TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TransferCertificate(request), context);
    } );
}

UntagResourceOutcome IoTClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/untag");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoTClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAccountAuditConfigurationOutcome IoTClient::UpdateAccountAuditConfiguration(const UpdateAccountAuditConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/configuration");
  return UpdateAccountAuditConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountAuditConfigurationOutcomeCallable IoTClient::UpdateAccountAuditConfigurationCallable(const UpdateAccountAuditConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountAuditConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountAuditConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateAccountAuditConfigurationAsync(const UpdateAccountAuditConfigurationRequest& request, const UpdateAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAccountAuditConfiguration(request), context);
    } );
}

UpdateAuditSuppressionOutcome IoTClient::UpdateAuditSuppression(const UpdateAuditSuppressionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/suppressions/update");
  return UpdateAuditSuppressionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAuditSuppressionOutcomeCallable IoTClient::UpdateAuditSuppressionCallable(const UpdateAuditSuppressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAuditSuppressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAuditSuppression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateAuditSuppressionAsync(const UpdateAuditSuppressionRequest& request, const UpdateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAuditSuppression(request), context);
    } );
}

UpdateAuthorizerOutcome IoTClient::UpdateAuthorizer(const UpdateAuthorizerRequest& request) const
{
  if (!request.AuthorizerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: AuthorizerName, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/authorizer/");
  uri.AddPathSegment(request.GetAuthorizerName());
  return UpdateAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAuthorizerOutcomeCallable IoTClient::UpdateAuthorizerCallable(const UpdateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateAuthorizerAsync(const UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAuthorizer(request), context);
    } );
}

UpdateBillingGroupOutcome IoTClient::UpdateBillingGroup(const UpdateBillingGroupRequest& request) const
{
  if (!request.BillingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBillingGroup", "Required field: BillingGroupName, is not set");
    return UpdateBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BillingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/billing-groups/");
  uri.AddPathSegment(request.GetBillingGroupName());
  return UpdateBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateBillingGroupOutcomeCallable IoTClient::UpdateBillingGroupCallable(const UpdateBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateBillingGroupAsync(const UpdateBillingGroupRequest& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBillingGroup(request), context);
    } );
}

UpdateCACertificateOutcome IoTClient::UpdateCACertificate(const UpdateCACertificateRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCACertificate", "Required field: CertificateId, is not set");
    return UpdateCACertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cacertificate/");
  uri.AddPathSegment(request.GetCertificateId());
  return UpdateCACertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateCACertificateOutcomeCallable IoTClient::UpdateCACertificateCallable(const UpdateCACertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCACertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCACertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateCACertificateAsync(const UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCACertificate(request), context);
    } );
}

UpdateCertificateOutcome IoTClient::UpdateCertificate(const UpdateCertificateRequest& request) const
{
  if (!request.CertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCertificate", "Required field: CertificateId, is not set");
    return UpdateCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateId]", false));
  }
  if (!request.NewStatusHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCertificate", "Required field: NewStatus, is not set");
    return UpdateCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NewStatus]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/certificates/");
  uri.AddPathSegment(request.GetCertificateId());
  return UpdateCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateCertificateOutcomeCallable IoTClient::UpdateCertificateCallable(const UpdateCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateCertificateAsync(const UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCertificate(request), context);
    } );
}

UpdateCustomMetricOutcome IoTClient::UpdateCustomMetric(const UpdateCustomMetricRequest& request) const
{
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCustomMetric", "Required field: MetricName, is not set");
    return UpdateCustomMetricOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-metric/");
  uri.AddPathSegment(request.GetMetricName());
  return UpdateCustomMetricOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomMetricOutcomeCallable IoTClient::UpdateCustomMetricCallable(const UpdateCustomMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateCustomMetricAsync(const UpdateCustomMetricRequest& request, const UpdateCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCustomMetric(request), context);
    } );
}

UpdateDimensionOutcome IoTClient::UpdateDimension(const UpdateDimensionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDimension", "Required field: Name, is not set");
    return UpdateDimensionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/dimensions/");
  uri.AddPathSegment(request.GetName());
  return UpdateDimensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDimensionOutcomeCallable IoTClient::UpdateDimensionCallable(const UpdateDimensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDimensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDimension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateDimensionAsync(const UpdateDimensionRequest& request, const UpdateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDimension(request), context);
    } );
}

UpdateDomainConfigurationOutcome IoTClient::UpdateDomainConfiguration(const UpdateDomainConfigurationRequest& request) const
{
  if (!request.DomainConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainConfiguration", "Required field: DomainConfigurationName, is not set");
    return UpdateDomainConfigurationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainConfigurations/");
  uri.AddPathSegment(request.GetDomainConfigurationName());
  return UpdateDomainConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainConfigurationOutcomeCallable IoTClient::UpdateDomainConfigurationCallable(const UpdateDomainConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateDomainConfigurationAsync(const UpdateDomainConfigurationRequest& request, const UpdateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDomainConfiguration(request), context);
    } );
}

UpdateDynamicThingGroupOutcome IoTClient::UpdateDynamicThingGroup(const UpdateDynamicThingGroupRequest& request) const
{
  if (!request.ThingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDynamicThingGroup", "Required field: ThingGroupName, is not set");
    return UpdateDynamicThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/dynamic-thing-groups/");
  uri.AddPathSegment(request.GetThingGroupName());
  return UpdateDynamicThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDynamicThingGroupOutcomeCallable IoTClient::UpdateDynamicThingGroupCallable(const UpdateDynamicThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDynamicThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDynamicThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateDynamicThingGroupAsync(const UpdateDynamicThingGroupRequest& request, const UpdateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDynamicThingGroup(request), context);
    } );
}

UpdateEventConfigurationsOutcome IoTClient::UpdateEventConfigurations(const UpdateEventConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/event-configurations");
  return UpdateEventConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventConfigurationsOutcomeCallable IoTClient::UpdateEventConfigurationsCallable(const UpdateEventConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateEventConfigurationsAsync(const UpdateEventConfigurationsRequest& request, const UpdateEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEventConfigurations(request), context);
    } );
}

UpdateFleetMetricOutcome IoTClient::UpdateFleetMetric(const UpdateFleetMetricRequest& request) const
{
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFleetMetric", "Required field: MetricName, is not set");
    return UpdateFleetMetricOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fleet-metric/");
  uri.AddPathSegment(request.GetMetricName());
  return UpdateFleetMetricOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFleetMetricOutcomeCallable IoTClient::UpdateFleetMetricCallable(const UpdateFleetMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleetMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateFleetMetricAsync(const UpdateFleetMetricRequest& request, const UpdateFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFleetMetric(request), context);
    } );
}

UpdateIndexingConfigurationOutcome IoTClient::UpdateIndexingConfiguration(const UpdateIndexingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/indexing/config");
  return UpdateIndexingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIndexingConfigurationOutcomeCallable IoTClient::UpdateIndexingConfigurationCallable(const UpdateIndexingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIndexingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIndexingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateIndexingConfigurationAsync(const UpdateIndexingConfigurationRequest& request, const UpdateIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateIndexingConfiguration(request), context);
    } );
}

UpdateJobOutcome IoTClient::UpdateJob(const UpdateJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJob", "Required field: JobId, is not set");
    return UpdateJobOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return UpdateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateJobOutcomeCallable IoTClient::UpdateJobCallable(const UpdateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateJobAsync(const UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateJob(request), context);
    } );
}

UpdateMitigationActionOutcome IoTClient::UpdateMitigationAction(const UpdateMitigationActionRequest& request) const
{
  if (!request.ActionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMitigationAction", "Required field: ActionName, is not set");
    return UpdateMitigationActionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/mitigationactions/actions/");
  uri.AddPathSegment(request.GetActionName());
  return UpdateMitigationActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMitigationActionOutcomeCallable IoTClient::UpdateMitigationActionCallable(const UpdateMitigationActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMitigationActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMitigationAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateMitigationActionAsync(const UpdateMitigationActionRequest& request, const UpdateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMitigationAction(request), context);
    } );
}

UpdateProvisioningTemplateOutcome IoTClient::UpdateProvisioningTemplate(const UpdateProvisioningTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProvisioningTemplate", "Required field: TemplateName, is not set");
    return UpdateProvisioningTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/provisioning-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return UpdateProvisioningTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateProvisioningTemplateOutcomeCallable IoTClient::UpdateProvisioningTemplateCallable(const UpdateProvisioningTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisioningTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProvisioningTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateProvisioningTemplateAsync(const UpdateProvisioningTemplateRequest& request, const UpdateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProvisioningTemplate(request), context);
    } );
}

UpdateRoleAliasOutcome IoTClient::UpdateRoleAlias(const UpdateRoleAliasRequest& request) const
{
  if (!request.RoleAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoleAlias", "Required field: RoleAlias, is not set");
    return UpdateRoleAliasOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/role-aliases/");
  uri.AddPathSegment(request.GetRoleAlias());
  return UpdateRoleAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoleAliasOutcomeCallable IoTClient::UpdateRoleAliasCallable(const UpdateRoleAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoleAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoleAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateRoleAliasAsync(const UpdateRoleAliasRequest& request, const UpdateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRoleAlias(request), context);
    } );
}

UpdateScheduledAuditOutcome IoTClient::UpdateScheduledAudit(const UpdateScheduledAuditRequest& request) const
{
  if (!request.ScheduledAuditNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateScheduledAudit", "Required field: ScheduledAuditName, is not set");
    return UpdateScheduledAuditOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduledAuditName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/scheduledaudits/");
  uri.AddPathSegment(request.GetScheduledAuditName());
  return UpdateScheduledAuditOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateScheduledAuditOutcomeCallable IoTClient::UpdateScheduledAuditCallable(const UpdateScheduledAuditRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScheduledAuditOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateScheduledAudit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateScheduledAuditAsync(const UpdateScheduledAuditRequest& request, const UpdateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateScheduledAudit(request), context);
    } );
}

UpdateSecurityProfileOutcome IoTClient::UpdateSecurityProfile(const UpdateSecurityProfileRequest& request) const
{
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSecurityProfile", "Required field: SecurityProfileName, is not set");
    return UpdateSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetSecurityProfileName());
  return UpdateSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecurityProfileOutcomeCallable IoTClient::UpdateSecurityProfileCallable(const UpdateSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateSecurityProfileAsync(const UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSecurityProfile(request), context);
    } );
}

UpdateStreamOutcome IoTClient::UpdateStream(const UpdateStreamRequest& request) const
{
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStream", "Required field: StreamId, is not set");
    return UpdateStreamOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/streams/");
  uri.AddPathSegment(request.GetStreamId());
  return UpdateStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateStreamOutcomeCallable IoTClient::UpdateStreamCallable(const UpdateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateStreamAsync(const UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStream(request), context);
    } );
}

UpdateThingOutcome IoTClient::UpdateThing(const UpdateThingRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThing", "Required field: ThingName, is not set");
    return UpdateThingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  return UpdateThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateThingOutcomeCallable IoTClient::UpdateThingCallable(const UpdateThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateThingAsync(const UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateThing(request), context);
    } );
}

UpdateThingGroupOutcome IoTClient::UpdateThingGroup(const UpdateThingGroupRequest& request) const
{
  if (!request.ThingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThingGroup", "Required field: ThingGroupName, is not set");
    return UpdateThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-groups/");
  uri.AddPathSegment(request.GetThingGroupName());
  return UpdateThingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateThingGroupOutcomeCallable IoTClient::UpdateThingGroupCallable(const UpdateThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateThingGroupAsync(const UpdateThingGroupRequest& request, const UpdateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateThingGroup(request), context);
    } );
}

UpdateThingGroupsForThingOutcome IoTClient::UpdateThingGroupsForThing(const UpdateThingGroupsForThingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/thing-groups/updateThingGroupsForThing");
  return UpdateThingGroupsForThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThingGroupsForThingOutcomeCallable IoTClient::UpdateThingGroupsForThingCallable(const UpdateThingGroupsForThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThingGroupsForThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThingGroupsForThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateThingGroupsForThingAsync(const UpdateThingGroupsForThingRequest& request, const UpdateThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateThingGroupsForThing(request), context);
    } );
}

UpdateTopicRuleDestinationOutcome IoTClient::UpdateTopicRuleDestination(const UpdateTopicRuleDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations");
  return UpdateTopicRuleDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateTopicRuleDestinationOutcomeCallable IoTClient::UpdateTopicRuleDestinationCallable(const UpdateTopicRuleDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTopicRuleDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTopicRuleDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateTopicRuleDestinationAsync(const UpdateTopicRuleDestinationRequest& request, const UpdateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTopicRuleDestination(request), context);
    } );
}

ValidateSecurityProfileBehaviorsOutcome IoTClient::ValidateSecurityProfileBehaviors(const ValidateSecurityProfileBehaviorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profile-behaviors/validate");
  return ValidateSecurityProfileBehaviorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidateSecurityProfileBehaviorsOutcomeCallable IoTClient::ValidateSecurityProfileBehaviorsCallable(const ValidateSecurityProfileBehaviorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateSecurityProfileBehaviorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateSecurityProfileBehaviors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ValidateSecurityProfileBehaviorsAsync(const ValidateSecurityProfileBehaviorsRequest& request, const ValidateSecurityProfileBehaviorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ValidateSecurityProfileBehaviors(request), context);
    } );
}

