/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/AttachThingPrincipalResult.h>
#include <aws/iot/model/CreateCertificateFromCsrResult.h>
#include <aws/iot/model/CreateKeysAndCertificateResult.h>
#include <aws/iot/model/CreatePolicyResult.h>
#include <aws/iot/model/CreatePolicyVersionResult.h>
#include <aws/iot/model/CreateThingResult.h>
#include <aws/iot/model/CreateThingTypeResult.h>
#include <aws/iot/model/DeleteCACertificateResult.h>
#include <aws/iot/model/DeleteRegistrationCodeResult.h>
#include <aws/iot/model/DeleteThingResult.h>
#include <aws/iot/model/DeleteThingTypeResult.h>
#include <aws/iot/model/DeprecateThingTypeResult.h>
#include <aws/iot/model/DescribeCACertificateResult.h>
#include <aws/iot/model/DescribeCertificateResult.h>
#include <aws/iot/model/DescribeEndpointResult.h>
#include <aws/iot/model/DescribeThingResult.h>
#include <aws/iot/model/DescribeThingTypeResult.h>
#include <aws/iot/model/DetachThingPrincipalResult.h>
#include <aws/iot/model/GetLoggingOptionsResult.h>
#include <aws/iot/model/GetPolicyResult.h>
#include <aws/iot/model/GetPolicyVersionResult.h>
#include <aws/iot/model/GetRegistrationCodeResult.h>
#include <aws/iot/model/GetTopicRuleResult.h>
#include <aws/iot/model/ListCACertificatesResult.h>
#include <aws/iot/model/ListCertificatesResult.h>
#include <aws/iot/model/ListCertificatesByCAResult.h>
#include <aws/iot/model/ListOutgoingCertificatesResult.h>
#include <aws/iot/model/ListPoliciesResult.h>
#include <aws/iot/model/ListPolicyPrincipalsResult.h>
#include <aws/iot/model/ListPolicyVersionsResult.h>
#include <aws/iot/model/ListPrincipalPoliciesResult.h>
#include <aws/iot/model/ListPrincipalThingsResult.h>
#include <aws/iot/model/ListThingPrincipalsResult.h>
#include <aws/iot/model/ListThingTypesResult.h>
#include <aws/iot/model/ListThingsResult.h>
#include <aws/iot/model/ListTopicRulesResult.h>
#include <aws/iot/model/RegisterCACertificateResult.h>
#include <aws/iot/model/RegisterCertificateResult.h>
#include <aws/iot/model/TransferCertificateResult.h>
#include <aws/iot/model/UpdateThingResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace IoT
{

namespace Model
{
        class AcceptCertificateTransferRequest;
        class AttachPrincipalPolicyRequest;
        class AttachThingPrincipalRequest;
        class CancelCertificateTransferRequest;
        class CreateCertificateFromCsrRequest;
        class CreateKeysAndCertificateRequest;
        class CreatePolicyRequest;
        class CreatePolicyVersionRequest;
        class CreateThingRequest;
        class CreateThingTypeRequest;
        class CreateTopicRuleRequest;
        class DeleteCACertificateRequest;
        class DeleteCertificateRequest;
        class DeletePolicyRequest;
        class DeletePolicyVersionRequest;
        class DeleteRegistrationCodeRequest;
        class DeleteThingRequest;
        class DeleteThingTypeRequest;
        class DeleteTopicRuleRequest;
        class DeprecateThingTypeRequest;
        class DescribeCACertificateRequest;
        class DescribeCertificateRequest;
        class DescribeEndpointRequest;
        class DescribeThingRequest;
        class DescribeThingTypeRequest;
        class DetachPrincipalPolicyRequest;
        class DetachThingPrincipalRequest;
        class DisableTopicRuleRequest;
        class EnableTopicRuleRequest;
        class GetLoggingOptionsRequest;
        class GetPolicyRequest;
        class GetPolicyVersionRequest;
        class GetRegistrationCodeRequest;
        class GetTopicRuleRequest;
        class ListCACertificatesRequest;
        class ListCertificatesRequest;
        class ListCertificatesByCARequest;
        class ListOutgoingCertificatesRequest;
        class ListPoliciesRequest;
        class ListPolicyPrincipalsRequest;
        class ListPolicyVersionsRequest;
        class ListPrincipalPoliciesRequest;
        class ListPrincipalThingsRequest;
        class ListThingPrincipalsRequest;
        class ListThingTypesRequest;
        class ListThingsRequest;
        class ListTopicRulesRequest;
        class RegisterCACertificateRequest;
        class RegisterCertificateRequest;
        class RejectCertificateTransferRequest;
        class ReplaceTopicRuleRequest;
        class SetDefaultPolicyVersionRequest;
        class SetLoggingOptionsRequest;
        class TransferCertificateRequest;
        class UpdateCACertificateRequest;
        class UpdateCertificateRequest;
        class UpdateThingRequest;

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> AcceptCertificateTransferOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> AttachPrincipalPolicyOutcome;
        typedef Aws::Utils::Outcome<AttachThingPrincipalResult, Aws::Client::AWSError<IoTErrors>> AttachThingPrincipalOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> CancelCertificateTransferOutcome;
        typedef Aws::Utils::Outcome<CreateCertificateFromCsrResult, Aws::Client::AWSError<IoTErrors>> CreateCertificateFromCsrOutcome;
        typedef Aws::Utils::Outcome<CreateKeysAndCertificateResult, Aws::Client::AWSError<IoTErrors>> CreateKeysAndCertificateOutcome;
        typedef Aws::Utils::Outcome<CreatePolicyResult, Aws::Client::AWSError<IoTErrors>> CreatePolicyOutcome;
        typedef Aws::Utils::Outcome<CreatePolicyVersionResult, Aws::Client::AWSError<IoTErrors>> CreatePolicyVersionOutcome;
        typedef Aws::Utils::Outcome<CreateThingResult, Aws::Client::AWSError<IoTErrors>> CreateThingOutcome;
        typedef Aws::Utils::Outcome<CreateThingTypeResult, Aws::Client::AWSError<IoTErrors>> CreateThingTypeOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> CreateTopicRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteCACertificateResult, Aws::Client::AWSError<IoTErrors>> DeleteCACertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> DeleteCertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> DeletePolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> DeletePolicyVersionOutcome;
        typedef Aws::Utils::Outcome<DeleteRegistrationCodeResult, Aws::Client::AWSError<IoTErrors>> DeleteRegistrationCodeOutcome;
        typedef Aws::Utils::Outcome<DeleteThingResult, Aws::Client::AWSError<IoTErrors>> DeleteThingOutcome;
        typedef Aws::Utils::Outcome<DeleteThingTypeResult, Aws::Client::AWSError<IoTErrors>> DeleteThingTypeOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> DeleteTopicRuleOutcome;
        typedef Aws::Utils::Outcome<DeprecateThingTypeResult, Aws::Client::AWSError<IoTErrors>> DeprecateThingTypeOutcome;
        typedef Aws::Utils::Outcome<DescribeCACertificateResult, Aws::Client::AWSError<IoTErrors>> DescribeCACertificateOutcome;
        typedef Aws::Utils::Outcome<DescribeCertificateResult, Aws::Client::AWSError<IoTErrors>> DescribeCertificateOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointResult, Aws::Client::AWSError<IoTErrors>> DescribeEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeThingResult, Aws::Client::AWSError<IoTErrors>> DescribeThingOutcome;
        typedef Aws::Utils::Outcome<DescribeThingTypeResult, Aws::Client::AWSError<IoTErrors>> DescribeThingTypeOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> DetachPrincipalPolicyOutcome;
        typedef Aws::Utils::Outcome<DetachThingPrincipalResult, Aws::Client::AWSError<IoTErrors>> DetachThingPrincipalOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> DisableTopicRuleOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> EnableTopicRuleOutcome;
        typedef Aws::Utils::Outcome<GetLoggingOptionsResult, Aws::Client::AWSError<IoTErrors>> GetLoggingOptionsOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, Aws::Client::AWSError<IoTErrors>> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<GetPolicyVersionResult, Aws::Client::AWSError<IoTErrors>> GetPolicyVersionOutcome;
        typedef Aws::Utils::Outcome<GetRegistrationCodeResult, Aws::Client::AWSError<IoTErrors>> GetRegistrationCodeOutcome;
        typedef Aws::Utils::Outcome<GetTopicRuleResult, Aws::Client::AWSError<IoTErrors>> GetTopicRuleOutcome;
        typedef Aws::Utils::Outcome<ListCACertificatesResult, Aws::Client::AWSError<IoTErrors>> ListCACertificatesOutcome;
        typedef Aws::Utils::Outcome<ListCertificatesResult, Aws::Client::AWSError<IoTErrors>> ListCertificatesOutcome;
        typedef Aws::Utils::Outcome<ListCertificatesByCAResult, Aws::Client::AWSError<IoTErrors>> ListCertificatesByCAOutcome;
        typedef Aws::Utils::Outcome<ListOutgoingCertificatesResult, Aws::Client::AWSError<IoTErrors>> ListOutgoingCertificatesOutcome;
        typedef Aws::Utils::Outcome<ListPoliciesResult, Aws::Client::AWSError<IoTErrors>> ListPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListPolicyPrincipalsResult, Aws::Client::AWSError<IoTErrors>> ListPolicyPrincipalsOutcome;
        typedef Aws::Utils::Outcome<ListPolicyVersionsResult, Aws::Client::AWSError<IoTErrors>> ListPolicyVersionsOutcome;
        typedef Aws::Utils::Outcome<ListPrincipalPoliciesResult, Aws::Client::AWSError<IoTErrors>> ListPrincipalPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListPrincipalThingsResult, Aws::Client::AWSError<IoTErrors>> ListPrincipalThingsOutcome;
        typedef Aws::Utils::Outcome<ListThingPrincipalsResult, Aws::Client::AWSError<IoTErrors>> ListThingPrincipalsOutcome;
        typedef Aws::Utils::Outcome<ListThingTypesResult, Aws::Client::AWSError<IoTErrors>> ListThingTypesOutcome;
        typedef Aws::Utils::Outcome<ListThingsResult, Aws::Client::AWSError<IoTErrors>> ListThingsOutcome;
        typedef Aws::Utils::Outcome<ListTopicRulesResult, Aws::Client::AWSError<IoTErrors>> ListTopicRulesOutcome;
        typedef Aws::Utils::Outcome<RegisterCACertificateResult, Aws::Client::AWSError<IoTErrors>> RegisterCACertificateOutcome;
        typedef Aws::Utils::Outcome<RegisterCertificateResult, Aws::Client::AWSError<IoTErrors>> RegisterCertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> RejectCertificateTransferOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> ReplaceTopicRuleOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> SetDefaultPolicyVersionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> SetLoggingOptionsOutcome;
        typedef Aws::Utils::Outcome<TransferCertificateResult, Aws::Client::AWSError<IoTErrors>> TransferCertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> UpdateCACertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IoTErrors>> UpdateCertificateOutcome;
        typedef Aws::Utils::Outcome<UpdateThingResult, Aws::Client::AWSError<IoTErrors>> UpdateThingOutcome;

        typedef std::future<AcceptCertificateTransferOutcome> AcceptCertificateTransferOutcomeCallable;
        typedef std::future<AttachPrincipalPolicyOutcome> AttachPrincipalPolicyOutcomeCallable;
        typedef std::future<AttachThingPrincipalOutcome> AttachThingPrincipalOutcomeCallable;
        typedef std::future<CancelCertificateTransferOutcome> CancelCertificateTransferOutcomeCallable;
        typedef std::future<CreateCertificateFromCsrOutcome> CreateCertificateFromCsrOutcomeCallable;
        typedef std::future<CreateKeysAndCertificateOutcome> CreateKeysAndCertificateOutcomeCallable;
        typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
        typedef std::future<CreatePolicyVersionOutcome> CreatePolicyVersionOutcomeCallable;
        typedef std::future<CreateThingOutcome> CreateThingOutcomeCallable;
        typedef std::future<CreateThingTypeOutcome> CreateThingTypeOutcomeCallable;
        typedef std::future<CreateTopicRuleOutcome> CreateTopicRuleOutcomeCallable;
        typedef std::future<DeleteCACertificateOutcome> DeleteCACertificateOutcomeCallable;
        typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
        typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
        typedef std::future<DeletePolicyVersionOutcome> DeletePolicyVersionOutcomeCallable;
        typedef std::future<DeleteRegistrationCodeOutcome> DeleteRegistrationCodeOutcomeCallable;
        typedef std::future<DeleteThingOutcome> DeleteThingOutcomeCallable;
        typedef std::future<DeleteThingTypeOutcome> DeleteThingTypeOutcomeCallable;
        typedef std::future<DeleteTopicRuleOutcome> DeleteTopicRuleOutcomeCallable;
        typedef std::future<DeprecateThingTypeOutcome> DeprecateThingTypeOutcomeCallable;
        typedef std::future<DescribeCACertificateOutcome> DescribeCACertificateOutcomeCallable;
        typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
        typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
        typedef std::future<DescribeThingOutcome> DescribeThingOutcomeCallable;
        typedef std::future<DescribeThingTypeOutcome> DescribeThingTypeOutcomeCallable;
        typedef std::future<DetachPrincipalPolicyOutcome> DetachPrincipalPolicyOutcomeCallable;
        typedef std::future<DetachThingPrincipalOutcome> DetachThingPrincipalOutcomeCallable;
        typedef std::future<DisableTopicRuleOutcome> DisableTopicRuleOutcomeCallable;
        typedef std::future<EnableTopicRuleOutcome> EnableTopicRuleOutcomeCallable;
        typedef std::future<GetLoggingOptionsOutcome> GetLoggingOptionsOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
        typedef std::future<GetRegistrationCodeOutcome> GetRegistrationCodeOutcomeCallable;
        typedef std::future<GetTopicRuleOutcome> GetTopicRuleOutcomeCallable;
        typedef std::future<ListCACertificatesOutcome> ListCACertificatesOutcomeCallable;
        typedef std::future<ListCertificatesOutcome> ListCertificatesOutcomeCallable;
        typedef std::future<ListCertificatesByCAOutcome> ListCertificatesByCAOutcomeCallable;
        typedef std::future<ListOutgoingCertificatesOutcome> ListOutgoingCertificatesOutcomeCallable;
        typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
        typedef std::future<ListPolicyPrincipalsOutcome> ListPolicyPrincipalsOutcomeCallable;
        typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
        typedef std::future<ListPrincipalPoliciesOutcome> ListPrincipalPoliciesOutcomeCallable;
        typedef std::future<ListPrincipalThingsOutcome> ListPrincipalThingsOutcomeCallable;
        typedef std::future<ListThingPrincipalsOutcome> ListThingPrincipalsOutcomeCallable;
        typedef std::future<ListThingTypesOutcome> ListThingTypesOutcomeCallable;
        typedef std::future<ListThingsOutcome> ListThingsOutcomeCallable;
        typedef std::future<ListTopicRulesOutcome> ListTopicRulesOutcomeCallable;
        typedef std::future<RegisterCACertificateOutcome> RegisterCACertificateOutcomeCallable;
        typedef std::future<RegisterCertificateOutcome> RegisterCertificateOutcomeCallable;
        typedef std::future<RejectCertificateTransferOutcome> RejectCertificateTransferOutcomeCallable;
        typedef std::future<ReplaceTopicRuleOutcome> ReplaceTopicRuleOutcomeCallable;
        typedef std::future<SetDefaultPolicyVersionOutcome> SetDefaultPolicyVersionOutcomeCallable;
        typedef std::future<SetLoggingOptionsOutcome> SetLoggingOptionsOutcomeCallable;
        typedef std::future<TransferCertificateOutcome> TransferCertificateOutcomeCallable;
        typedef std::future<UpdateCACertificateOutcome> UpdateCACertificateOutcomeCallable;
        typedef std::future<UpdateCertificateOutcome> UpdateCertificateOutcomeCallable;
        typedef std::future<UpdateThingOutcome> UpdateThingOutcomeCallable;
} // namespace Model

  class IoTClient;

    typedef std::function<void(const IoTClient*, const Model::AcceptCertificateTransferRequest&, const Model::AcceptCertificateTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptCertificateTransferResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::AttachPrincipalPolicyRequest&, const Model::AttachPrincipalPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachPrincipalPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::AttachThingPrincipalRequest&, const Model::AttachThingPrincipalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachThingPrincipalResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CancelCertificateTransferRequest&, const Model::CancelCertificateTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelCertificateTransferResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateCertificateFromCsrRequest&, const Model::CreateCertificateFromCsrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCertificateFromCsrResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateKeysAndCertificateRequest&, const Model::CreateKeysAndCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeysAndCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreatePolicyVersionRequest&, const Model::CreatePolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateThingRequest&, const Model::CreateThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateThingTypeRequest&, const Model::CreateThingTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThingTypeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateTopicRuleRequest&, const Model::CreateTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteCACertificateRequest&, const Model::DeleteCACertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCACertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteCertificateRequest&, const Model::DeleteCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeletePolicyVersionRequest&, const Model::DeletePolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteRegistrationCodeRequest&, const Model::DeleteRegistrationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegistrationCodeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteThingRequest&, const Model::DeleteThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteThingTypeRequest&, const Model::DeleteThingTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThingTypeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteTopicRuleRequest&, const Model::DeleteTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeprecateThingTypeRequest&, const Model::DeprecateThingTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprecateThingTypeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeCACertificateRequest&, const Model::DescribeCACertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCACertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeCertificateRequest&, const Model::DescribeCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeThingRequest&, const Model::DescribeThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeThingTypeRequest&, const Model::DescribeThingTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThingTypeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DetachPrincipalPolicyRequest&, const Model::DetachPrincipalPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachPrincipalPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DetachThingPrincipalRequest&, const Model::DetachThingPrincipalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachThingPrincipalResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DisableTopicRuleRequest&, const Model::DisableTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::EnableTopicRuleRequest&, const Model::EnableTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetLoggingOptionsRequest&, const Model::GetLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetPolicyVersionRequest&, const Model::GetPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetRegistrationCodeRequest&, const Model::GetRegistrationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegistrationCodeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetTopicRuleRequest&, const Model::GetTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListCACertificatesRequest&, const Model::ListCACertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCACertificatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListCertificatesRequest&, const Model::ListCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListCertificatesByCARequest&, const Model::ListCertificatesByCAOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificatesByCAResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListOutgoingCertificatesRequest&, const Model::ListOutgoingCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOutgoingCertificatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPolicyPrincipalsRequest&, const Model::ListPolicyPrincipalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyPrincipalsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPolicyVersionsRequest&, const Model::ListPolicyVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyVersionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPrincipalPoliciesRequest&, const Model::ListPrincipalPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalPoliciesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPrincipalThingsRequest&, const Model::ListPrincipalThingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalThingsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingPrincipalsRequest&, const Model::ListThingPrincipalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingPrincipalsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingTypesRequest&, const Model::ListThingTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingTypesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingsRequest&, const Model::ListThingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListTopicRulesRequest&, const Model::ListTopicRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicRulesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RegisterCACertificateRequest&, const Model::RegisterCACertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterCACertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RegisterCertificateRequest&, const Model::RegisterCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RejectCertificateTransferRequest&, const Model::RejectCertificateTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectCertificateTransferResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ReplaceTopicRuleRequest&, const Model::ReplaceTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::SetDefaultPolicyVersionRequest&, const Model::SetDefaultPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::SetLoggingOptionsRequest&, const Model::SetLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::TransferCertificateRequest&, const Model::TransferCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateCACertificateRequest&, const Model::UpdateCACertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCACertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateCertificateRequest&, const Model::UpdateCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateThingRequest&, const Model::UpdateThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThingResponseReceivedHandler;

  /**
   * <fullname>AWS IoT</fullname> <p>AWS IoT provides secure, bi-directional
   * communication between Internet-connected things (such as sensors, actuators,
   * embedded devices, or smart appliances) and the AWS cloud. You can discover your
   * custom IoT-Data endpoint to communicate with, configure rules for data
   * processing and integration with other services, organize resources associated
   * with each thing (Thing Registry), configure logging, and create and manage
   * policies and credentials to authenticate things.</p> <p>For more information
   * about how AWS IoT works, see the <a
   * href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
   * Guide</a>.</p>
   */
  class AWS_IOT_API IoTClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~IoTClient();

        /**
         * <p>Accepts a pending certificate transfer. The default state of the certificate
         * is INACTIVE.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p>
         */
        virtual Model::AcceptCertificateTransferOutcome AcceptCertificateTransfer(const Model::AcceptCertificateTransferRequest& request) const;

        /**
         * <p>Accepts a pending certificate transfer. The default state of the certificate
         * is INACTIVE.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptCertificateTransferOutcomeCallable AcceptCertificateTransferCallable(const Model::AcceptCertificateTransferRequest& request) const;

        /**
         * <p>Accepts a pending certificate transfer. The default state of the certificate
         * is INACTIVE.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptCertificateTransferAsync(const Model::AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified policy to the specified principal (certificate or
         * other credential).</p>
         */
        virtual Model::AttachPrincipalPolicyOutcome AttachPrincipalPolicy(const Model::AttachPrincipalPolicyRequest& request) const;

        /**
         * <p>Attaches the specified policy to the specified principal (certificate or
         * other credential).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachPrincipalPolicyOutcomeCallable AttachPrincipalPolicyCallable(const Model::AttachPrincipalPolicyRequest& request) const;

        /**
         * <p>Attaches the specified policy to the specified principal (certificate or
         * other credential).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachPrincipalPolicyAsync(const Model::AttachPrincipalPolicyRequest& request, const AttachPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified principal to the specified thing.</p>
         */
        virtual Model::AttachThingPrincipalOutcome AttachThingPrincipal(const Model::AttachThingPrincipalRequest& request) const;

        /**
         * <p>Attaches the specified principal to the specified thing.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachThingPrincipalOutcomeCallable AttachThingPrincipalCallable(const Model::AttachThingPrincipalRequest& request) const;

        /**
         * <p>Attaches the specified principal to the specified thing.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachThingPrincipalAsync(const Model::AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a pending transfer for the specified certificate.</p> <p><b>Note</b>
         * Only the transfer source account can use this operation to cancel a transfer.
         * (Transfer destinations can use <a>RejectCertificateTransfer</a> instead.) After
         * transfer, AWS IoT returns the certificate to the source account in the INACTIVE
         * state. After the destination account has accepted the transfer, the transfer
         * cannot be cancelled.</p> <p>After a certificate transfer is cancelled, the
         * status of the certificate changes from PENDING_TRANSFER to INACTIVE.</p>
         */
        virtual Model::CancelCertificateTransferOutcome CancelCertificateTransfer(const Model::CancelCertificateTransferRequest& request) const;

        /**
         * <p>Cancels a pending transfer for the specified certificate.</p> <p><b>Note</b>
         * Only the transfer source account can use this operation to cancel a transfer.
         * (Transfer destinations can use <a>RejectCertificateTransfer</a> instead.) After
         * transfer, AWS IoT returns the certificate to the source account in the INACTIVE
         * state. After the destination account has accepted the transfer, the transfer
         * cannot be cancelled.</p> <p>After a certificate transfer is cancelled, the
         * status of the certificate changes from PENDING_TRANSFER to INACTIVE.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelCertificateTransferOutcomeCallable CancelCertificateTransferCallable(const Model::CancelCertificateTransferRequest& request) const;

        /**
         * <p>Cancels a pending transfer for the specified certificate.</p> <p><b>Note</b>
         * Only the transfer source account can use this operation to cancel a transfer.
         * (Transfer destinations can use <a>RejectCertificateTransfer</a> instead.) After
         * transfer, AWS IoT returns the certificate to the source account in the INACTIVE
         * state. After the destination account has accepted the transfer, the transfer
         * cannot be cancelled.</p> <p>After a certificate transfer is cancelled, the
         * status of the certificate changes from PENDING_TRANSFER to INACTIVE.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelCertificateTransferAsync(const Model::CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an X.509 certificate using the specified certificate signing
         * request.</p> <p><b>Note</b> Reusing the same certificate signing request (CSR)
         * results in a distinct certificate.</p> <p>You can create multiple certificates
         * in a batch by creating a directory, copying multiple .csr files into that
         * directory, and then specifying that directory on the command line. The following
         * commands show how to create a batch of certificates given a batch of CSRs. </p>
         * <p>Assuming a set of CSRs are located inside of the directory
         * my-csr-directory:</p> <p>On Linux and OS X, the command is:</p> <p>$ ls
         * my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/{}</p> <p> This command
         * lists all of the CSRs in my-csr-directory and pipes each CSR file name to the
         * aws iot create-certificate-from-csr AWS CLI command to create a certificate for
         * the corresponding CSR. </p> <p> The aws iot create-certificate-from-csr part of
         * the command can also be run in parallel to speed up the certificate creation
         * process: </p> <p> $ ls my-csr-directory/ | xargs -P 10 -I {} aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://my-csr-directory/{} </p> <p> On Windows PowerShell, the command to create
         * certificates for all CSRs in my-csr-directory is: </p> <p> &gt; ls -Name
         * my-csr-directory | %{aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/$_} </p> <p> On a Windows
         * command prompt, the command to create certificates for all CSRs in
         * my-csr-directory is: </p> <p> &gt; forfiles /p my-csr-directory /c "cmd /c aws
         * iot create-certificate-from-csr --certificate-signing-request file://@path"</p>
         */
        virtual Model::CreateCertificateFromCsrOutcome CreateCertificateFromCsr(const Model::CreateCertificateFromCsrRequest& request) const;

        /**
         * <p>Creates an X.509 certificate using the specified certificate signing
         * request.</p> <p><b>Note</b> Reusing the same certificate signing request (CSR)
         * results in a distinct certificate.</p> <p>You can create multiple certificates
         * in a batch by creating a directory, copying multiple .csr files into that
         * directory, and then specifying that directory on the command line. The following
         * commands show how to create a batch of certificates given a batch of CSRs. </p>
         * <p>Assuming a set of CSRs are located inside of the directory
         * my-csr-directory:</p> <p>On Linux and OS X, the command is:</p> <p>$ ls
         * my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/{}</p> <p> This command
         * lists all of the CSRs in my-csr-directory and pipes each CSR file name to the
         * aws iot create-certificate-from-csr AWS CLI command to create a certificate for
         * the corresponding CSR. </p> <p> The aws iot create-certificate-from-csr part of
         * the command can also be run in parallel to speed up the certificate creation
         * process: </p> <p> $ ls my-csr-directory/ | xargs -P 10 -I {} aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://my-csr-directory/{} </p> <p> On Windows PowerShell, the command to create
         * certificates for all CSRs in my-csr-directory is: </p> <p> &gt; ls -Name
         * my-csr-directory | %{aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/$_} </p> <p> On a Windows
         * command prompt, the command to create certificates for all CSRs in
         * my-csr-directory is: </p> <p> &gt; forfiles /p my-csr-directory /c "cmd /c aws
         * iot create-certificate-from-csr --certificate-signing-request file://@path"</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCertificateFromCsrOutcomeCallable CreateCertificateFromCsrCallable(const Model::CreateCertificateFromCsrRequest& request) const;

        /**
         * <p>Creates an X.509 certificate using the specified certificate signing
         * request.</p> <p><b>Note</b> Reusing the same certificate signing request (CSR)
         * results in a distinct certificate.</p> <p>You can create multiple certificates
         * in a batch by creating a directory, copying multiple .csr files into that
         * directory, and then specifying that directory on the command line. The following
         * commands show how to create a batch of certificates given a batch of CSRs. </p>
         * <p>Assuming a set of CSRs are located inside of the directory
         * my-csr-directory:</p> <p>On Linux and OS X, the command is:</p> <p>$ ls
         * my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/{}</p> <p> This command
         * lists all of the CSRs in my-csr-directory and pipes each CSR file name to the
         * aws iot create-certificate-from-csr AWS CLI command to create a certificate for
         * the corresponding CSR. </p> <p> The aws iot create-certificate-from-csr part of
         * the command can also be run in parallel to speed up the certificate creation
         * process: </p> <p> $ ls my-csr-directory/ | xargs -P 10 -I {} aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://my-csr-directory/{} </p> <p> On Windows PowerShell, the command to create
         * certificates for all CSRs in my-csr-directory is: </p> <p> &gt; ls -Name
         * my-csr-directory | %{aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/$_} </p> <p> On a Windows
         * command prompt, the command to create certificates for all CSRs in
         * my-csr-directory is: </p> <p> &gt; forfiles /p my-csr-directory /c "cmd /c aws
         * iot create-certificate-from-csr --certificate-signing-request file://@path"</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCertificateFromCsrAsync(const Model::CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a 2048-bit RSA key pair and issues an X.509 certificate using the
         * issued public key.</p> <p><b>Note</b> This is the only time AWS IoT issues the
         * private key for this certificate, so it is important to keep it in a secure
         * location.</p>
         */
        virtual Model::CreateKeysAndCertificateOutcome CreateKeysAndCertificate(const Model::CreateKeysAndCertificateRequest& request) const;

        /**
         * <p>Creates a 2048-bit RSA key pair and issues an X.509 certificate using the
         * issued public key.</p> <p><b>Note</b> This is the only time AWS IoT issues the
         * private key for this certificate, so it is important to keep it in a secure
         * location.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeysAndCertificateOutcomeCallable CreateKeysAndCertificateCallable(const Model::CreateKeysAndCertificateRequest& request) const;

        /**
         * <p>Creates a 2048-bit RSA key pair and issues an X.509 certificate using the
         * issued public key.</p> <p><b>Note</b> This is the only time AWS IoT issues the
         * private key for this certificate, so it is important to keep it in a secure
         * location.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeysAndCertificateAsync(const Model::CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS IoT policy.</p> <p>The created policy is the default version
         * for the policy. This operation creates a policy version with a version
         * identifier of <b>1</b> and sets <b>1</b> as the policy's default version.</p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates an AWS IoT policy.</p> <p>The created policy is the default version
         * for the policy. This operation creates a policy version with a version
         * identifier of <b>1</b> and sets <b>1</b> as the policy's default version.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates an AWS IoT policy.</p> <p>The created policy is the default version
         * for the policy. This operation creates a policy version with a version
         * identifier of <b>1</b> and sets <b>1</b> as the policy's default version.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the specified AWS IoT policy. To update a policy,
         * create a new policy version. A managed policy can have up to five versions. If
         * the policy has five versions, you must use <a>DeletePolicyVersion</a> to delete
         * an existing version before you create a new one.</p> <p>Optionally, you can set
         * the new version as the policy's default version. The default version is the
         * operative version (that is, the version that is in effect for the certificates
         * to which the policy is attached).</p>
         */
        virtual Model::CreatePolicyVersionOutcome CreatePolicyVersion(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified AWS IoT policy. To update a policy,
         * create a new policy version. A managed policy can have up to five versions. If
         * the policy has five versions, you must use <a>DeletePolicyVersion</a> to delete
         * an existing version before you create a new one.</p> <p>Optionally, you can set
         * the new version as the policy's default version. The default version is the
         * operative version (that is, the version that is in effect for the certificates
         * to which the policy is attached).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyVersionOutcomeCallable CreatePolicyVersionCallable(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified AWS IoT policy. To update a policy,
         * create a new policy version. A managed policy can have up to five versions. If
         * the policy has five versions, you must use <a>DeletePolicyVersion</a> to delete
         * an existing version before you create a new one.</p> <p>Optionally, you can set
         * the new version as the policy's default version. The default version is the
         * operative version (that is, the version that is in effect for the certificates
         * to which the policy is attached).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a thing record in the thing registry.</p>
         */
        virtual Model::CreateThingOutcome CreateThing(const Model::CreateThingRequest& request) const;

        /**
         * <p>Creates a thing record in the thing registry.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThingOutcomeCallable CreateThingCallable(const Model::CreateThingRequest& request) const;

        /**
         * <p>Creates a thing record in the thing registry.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThingAsync(const Model::CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new thing type.</p>
         */
        virtual Model::CreateThingTypeOutcome CreateThingType(const Model::CreateThingTypeRequest& request) const;

        /**
         * <p>Creates a new thing type.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThingTypeOutcomeCallable CreateThingTypeCallable(const Model::CreateThingTypeRequest& request) const;

        /**
         * <p>Creates a new thing type.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThingTypeAsync(const Model::CreateThingTypeRequest& request, const CreateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a rule. Creating rules is an administrator-level action. Any user who
         * has permission to create rules will be able to access data processed by the
         * rule.</p>
         */
        virtual Model::CreateTopicRuleOutcome CreateTopicRule(const Model::CreateTopicRuleRequest& request) const;

        /**
         * <p>Creates a rule. Creating rules is an administrator-level action. Any user who
         * has permission to create rules will be able to access data processed by the
         * rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTopicRuleOutcomeCallable CreateTopicRuleCallable(const Model::CreateTopicRuleRequest& request) const;

        /**
         * <p>Creates a rule. Creating rules is an administrator-level action. Any user who
         * has permission to create rules will be able to access data processed by the
         * rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTopicRuleAsync(const Model::CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a registered CA certificate.</p>
         */
        virtual Model::DeleteCACertificateOutcome DeleteCACertificate(const Model::DeleteCACertificateRequest& request) const;

        /**
         * <p>Deletes a registered CA certificate.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCACertificateOutcomeCallable DeleteCACertificateCallable(const Model::DeleteCACertificateRequest& request) const;

        /**
         * <p>Deletes a registered CA certificate.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCACertificateAsync(const Model::DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified certificate.</p> <p>A certificate cannot be deleted if
         * it has a policy attached to it or if its status is set to ACTIVE. To delete a
         * certificate, first use the <a>DetachPrincipalPolicy</a> API to detach all
         * policies. Next, use the <a>UpdateCertificate</a> API to set the certificate to
         * the INACTIVE status.</p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * <p>Deletes the specified certificate.</p> <p>A certificate cannot be deleted if
         * it has a policy attached to it or if its status is set to ACTIVE. To delete a
         * certificate, first use the <a>DetachPrincipalPolicy</a> API to detach all
         * policies. Next, use the <a>UpdateCertificate</a> API to set the certificate to
         * the INACTIVE status.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * <p>Deletes the specified certificate.</p> <p>A certificate cannot be deleted if
         * it has a policy attached to it or if its status is set to ACTIVE. To delete a
         * certificate, first use the <a>DetachPrincipalPolicy</a> API to detach all
         * policies. Next, use the <a>UpdateCertificate</a> API to set the certificate to
         * the INACTIVE status.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified policy.</p> <p>A policy cannot be deleted if it has
         * non-default versions or it is attached to any certificate.</p> <p>To delete a
         * policy, use the DeletePolicyVersion API to delete all non-default versions of
         * the policy; use the DetachPrincipalPolicy API to detach the policy from any
         * certificate; and then use the DeletePolicy API to delete the policy.</p> <p>When
         * a policy is deleted using DeletePolicy, its default version is deleted with
         * it.</p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified policy.</p> <p>A policy cannot be deleted if it has
         * non-default versions or it is attached to any certificate.</p> <p>To delete a
         * policy, use the DeletePolicyVersion API to delete all non-default versions of
         * the policy; use the DetachPrincipalPolicy API to detach the policy from any
         * certificate; and then use the DeletePolicy API to delete the policy.</p> <p>When
         * a policy is deleted using DeletePolicy, its default version is deleted with
         * it.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified policy.</p> <p>A policy cannot be deleted if it has
         * non-default versions or it is attached to any certificate.</p> <p>To delete a
         * policy, use the DeletePolicyVersion API to delete all non-default versions of
         * the policy; use the DetachPrincipalPolicy API to detach the policy from any
         * certificate; and then use the DeletePolicy API to delete the policy.</p> <p>When
         * a policy is deleted using DeletePolicy, its default version is deleted with
         * it.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified version of the specified policy. You cannot delete the
         * default version of a policy using this API. To delete the default version of a
         * policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked
         * as the default version, use ListPolicyVersions.</p>
         */
        virtual Model::DeletePolicyVersionOutcome DeletePolicyVersion(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * <p>Deletes the specified version of the specified policy. You cannot delete the
         * default version of a policy using this API. To delete the default version of a
         * policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked
         * as the default version, use ListPolicyVersions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyVersionOutcomeCallable DeletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * <p>Deletes the specified version of the specified policy. You cannot delete the
         * default version of a policy using this API. To delete the default version of a
         * policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked
         * as the default version, use ListPolicyVersions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a CA certificate registration code.</p>
         */
        virtual Model::DeleteRegistrationCodeOutcome DeleteRegistrationCode(const Model::DeleteRegistrationCodeRequest& request) const;

        /**
         * <p>Deletes a CA certificate registration code.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegistrationCodeOutcomeCallable DeleteRegistrationCodeCallable(const Model::DeleteRegistrationCodeRequest& request) const;

        /**
         * <p>Deletes a CA certificate registration code.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegistrationCodeAsync(const Model::DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified thing.</p>
         */
        virtual Model::DeleteThingOutcome DeleteThing(const Model::DeleteThingRequest& request) const;

        /**
         * <p>Deletes the specified thing.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThingOutcomeCallable DeleteThingCallable(const Model::DeleteThingRequest& request) const;

        /**
         * <p>Deletes the specified thing.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThingAsync(const Model::DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified thing type . You cannot delete a thing type if it has
         * things associated with it. To delete a thing type, first mark it as deprecated
         * by calling <a>DeprecateThingType</a>, then remove any associated things by
         * calling <a>UpdateThing</a> to change the thing type on any associated thing, and
         * finally use <a>DeleteThingType</a> to delete the thing type.</p>
         */
        virtual Model::DeleteThingTypeOutcome DeleteThingType(const Model::DeleteThingTypeRequest& request) const;

        /**
         * <p>Deletes the specified thing type . You cannot delete a thing type if it has
         * things associated with it. To delete a thing type, first mark it as deprecated
         * by calling <a>DeprecateThingType</a>, then remove any associated things by
         * calling <a>UpdateThing</a> to change the thing type on any associated thing, and
         * finally use <a>DeleteThingType</a> to delete the thing type.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThingTypeOutcomeCallable DeleteThingTypeCallable(const Model::DeleteThingTypeRequest& request) const;

        /**
         * <p>Deletes the specified thing type . You cannot delete a thing type if it has
         * things associated with it. To delete a thing type, first mark it as deprecated
         * by calling <a>DeprecateThingType</a>, then remove any associated things by
         * calling <a>UpdateThing</a> to change the thing type on any associated thing, and
         * finally use <a>DeleteThingType</a> to delete the thing type.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThingTypeAsync(const Model::DeleteThingTypeRequest& request, const DeleteThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified rule.</p>
         */
        virtual Model::DeleteTopicRuleOutcome DeleteTopicRule(const Model::DeleteTopicRuleRequest& request) const;

        /**
         * <p>Deletes the specified rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTopicRuleOutcomeCallable DeleteTopicRuleCallable(const Model::DeleteTopicRuleRequest& request) const;

        /**
         * <p>Deletes the specified rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTopicRuleAsync(const Model::DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecates a thing type. You can not associate new things with deprecated
         * thing type.</p>
         */
        virtual Model::DeprecateThingTypeOutcome DeprecateThingType(const Model::DeprecateThingTypeRequest& request) const;

        /**
         * <p>Deprecates a thing type. You can not associate new things with deprecated
         * thing type.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprecateThingTypeOutcomeCallable DeprecateThingTypeCallable(const Model::DeprecateThingTypeRequest& request) const;

        /**
         * <p>Deprecates a thing type. You can not associate new things with deprecated
         * thing type.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprecateThingTypeAsync(const Model::DeprecateThingTypeRequest& request, const DeprecateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a registered CA certificate.</p>
         */
        virtual Model::DescribeCACertificateOutcome DescribeCACertificate(const Model::DescribeCACertificateRequest& request) const;

        /**
         * <p>Describes a registered CA certificate.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCACertificateOutcomeCallable DescribeCACertificateCallable(const Model::DescribeCACertificateRequest& request) const;

        /**
         * <p>Describes a registered CA certificate.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCACertificateAsync(const Model::DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified certificate.</p>
         */
        virtual Model::DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest& request) const;

        /**
         * <p>Gets information about the specified certificate.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request) const;

        /**
         * <p>Gets information about the specified certificate.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a unique endpoint specific to the AWS account making the call.</p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Returns a unique endpoint specific to the AWS account making the call.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Returns a unique endpoint specific to the AWS account making the call.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointAsync(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified thing.</p>
         */
        virtual Model::DescribeThingOutcome DescribeThing(const Model::DescribeThingRequest& request) const;

        /**
         * <p>Gets information about the specified thing.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingOutcomeCallable DescribeThingCallable(const Model::DescribeThingRequest& request) const;

        /**
         * <p>Gets information about the specified thing.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingAsync(const Model::DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified thing type.</p>
         */
        virtual Model::DescribeThingTypeOutcome DescribeThingType(const Model::DescribeThingTypeRequest& request) const;

        /**
         * <p>Gets information about the specified thing type.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingTypeOutcomeCallable DescribeThingTypeCallable(const Model::DescribeThingTypeRequest& request) const;

        /**
         * <p>Gets information about the specified thing type.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingTypeAsync(const Model::DescribeThingTypeRequest& request, const DescribeThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified policy from the specified certificate.</p>
         */
        virtual Model::DetachPrincipalPolicyOutcome DetachPrincipalPolicy(const Model::DetachPrincipalPolicyRequest& request) const;

        /**
         * <p>Removes the specified policy from the specified certificate.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachPrincipalPolicyOutcomeCallable DetachPrincipalPolicyCallable(const Model::DetachPrincipalPolicyRequest& request) const;

        /**
         * <p>Removes the specified policy from the specified certificate.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachPrincipalPolicyAsync(const Model::DetachPrincipalPolicyRequest& request, const DetachPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches the specified principal from the specified thing.</p>
         */
        virtual Model::DetachThingPrincipalOutcome DetachThingPrincipal(const Model::DetachThingPrincipalRequest& request) const;

        /**
         * <p>Detaches the specified principal from the specified thing.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachThingPrincipalOutcomeCallable DetachThingPrincipalCallable(const Model::DetachThingPrincipalRequest& request) const;

        /**
         * <p>Detaches the specified principal from the specified thing.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachThingPrincipalAsync(const Model::DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the specified rule.</p>
         */
        virtual Model::DisableTopicRuleOutcome DisableTopicRule(const Model::DisableTopicRuleRequest& request) const;

        /**
         * <p>Disables the specified rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableTopicRuleOutcomeCallable DisableTopicRuleCallable(const Model::DisableTopicRuleRequest& request) const;

        /**
         * <p>Disables the specified rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableTopicRuleAsync(const Model::DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified rule.</p>
         */
        virtual Model::EnableTopicRuleOutcome EnableTopicRule(const Model::EnableTopicRuleRequest& request) const;

        /**
         * <p>Enables the specified rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableTopicRuleOutcomeCallable EnableTopicRuleCallable(const Model::EnableTopicRuleRequest& request) const;

        /**
         * <p>Enables the specified rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableTopicRuleAsync(const Model::EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the logging options.</p>
         */
        virtual Model::GetLoggingOptionsOutcome GetLoggingOptions(const Model::GetLoggingOptionsRequest& request) const;

        /**
         * <p>Gets the logging options.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggingOptionsOutcomeCallable GetLoggingOptionsCallable(const Model::GetLoggingOptionsRequest& request) const;

        /**
         * <p>Gets the logging options.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggingOptionsAsync(const Model::GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified policy with the policy document of the
         * default version.</p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Gets information about the specified policy with the policy document of the
         * default version.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Gets information about the specified policy with the policy document of the
         * default version.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified policy version.</p>
         */
        virtual Model::GetPolicyVersionOutcome GetPolicyVersion(const Model::GetPolicyVersionRequest& request) const;

        /**
         * <p>Gets information about the specified policy version.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const Model::GetPolicyVersionRequest& request) const;

        /**
         * <p>Gets information about the specified policy version.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a registration code used to register a CA certificate with AWS IoT.</p>
         */
        virtual Model::GetRegistrationCodeOutcome GetRegistrationCode(const Model::GetRegistrationCodeRequest& request) const;

        /**
         * <p>Gets a registration code used to register a CA certificate with AWS IoT.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegistrationCodeOutcomeCallable GetRegistrationCodeCallable(const Model::GetRegistrationCodeRequest& request) const;

        /**
         * <p>Gets a registration code used to register a CA certificate with AWS IoT.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegistrationCodeAsync(const Model::GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified rule.</p>
         */
        virtual Model::GetTopicRuleOutcome GetTopicRule(const Model::GetTopicRuleRequest& request) const;

        /**
         * <p>Gets information about the specified rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTopicRuleOutcomeCallable GetTopicRuleCallable(const Model::GetTopicRuleRequest& request) const;

        /**
         * <p>Gets information about the specified rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTopicRuleAsync(const Model::GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the CA certificates registered for your AWS account.</p> <p>The results
         * are paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p>
         */
        virtual Model::ListCACertificatesOutcome ListCACertificates(const Model::ListCACertificatesRequest& request) const;

        /**
         * <p>Lists the CA certificates registered for your AWS account.</p> <p>The results
         * are paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCACertificatesOutcomeCallable ListCACertificatesCallable(const Model::ListCACertificatesRequest& request) const;

        /**
         * <p>Lists the CA certificates registered for your AWS account.</p> <p>The results
         * are paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCACertificatesAsync(const Model::ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the certificates registered in your AWS account.</p> <p>The results are
         * paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p>
         */
        virtual Model::ListCertificatesOutcome ListCertificates(const Model::ListCertificatesRequest& request) const;

        /**
         * <p>Lists the certificates registered in your AWS account.</p> <p>The results are
         * paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const Model::ListCertificatesRequest& request) const;

        /**
         * <p>Lists the certificates registered in your AWS account.</p> <p>The results are
         * paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesAsync(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the device certificates signed by the specified CA certificate.</p>
         */
        virtual Model::ListCertificatesByCAOutcome ListCertificatesByCA(const Model::ListCertificatesByCARequest& request) const;

        /**
         * <p>List the device certificates signed by the specified CA certificate.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificatesByCAOutcomeCallable ListCertificatesByCACallable(const Model::ListCertificatesByCARequest& request) const;

        /**
         * <p>List the device certificates signed by the specified CA certificate.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesByCAAsync(const Model::ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists certificates that are being transfered but not yet accepted.</p>
         */
        virtual Model::ListOutgoingCertificatesOutcome ListOutgoingCertificates(const Model::ListOutgoingCertificatesRequest& request) const;

        /**
         * <p>Lists certificates that are being transfered but not yet accepted.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOutgoingCertificatesOutcomeCallable ListOutgoingCertificatesCallable(const Model::ListOutgoingCertificatesRequest& request) const;

        /**
         * <p>Lists certificates that are being transfered but not yet accepted.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOutgoingCertificatesAsync(const Model::ListOutgoingCertificatesRequest& request, const ListOutgoingCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your policies.</p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Lists your policies.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Lists your policies.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the principals associated with the specified policy.</p>
         */
        virtual Model::ListPolicyPrincipalsOutcome ListPolicyPrincipals(const Model::ListPolicyPrincipalsRequest& request) const;

        /**
         * <p>Lists the principals associated with the specified policy.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPolicyPrincipalsOutcomeCallable ListPolicyPrincipalsCallable(const Model::ListPolicyPrincipalsRequest& request) const;

        /**
         * <p>Lists the principals associated with the specified policy.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyPrincipalsAsync(const Model::ListPolicyPrincipalsRequest& request, const ListPolicyPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the versions of the specified policy and identifies the default
         * version.</p>
         */
        virtual Model::ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * <p>Lists the versions of the specified policy and identifies the default
         * version.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * <p>Lists the versions of the specified policy and identifies the default
         * version.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the policies attached to the specified principal. If you use an Cognito
         * identity, the ID must be in <a
         * href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_GetCredentialsForIdentity.html#API_GetCredentialsForIdentity_RequestSyntax">AmazonCognito
         * Identity format</a>.</p>
         */
        virtual Model::ListPrincipalPoliciesOutcome ListPrincipalPolicies(const Model::ListPrincipalPoliciesRequest& request) const;

        /**
         * <p>Lists the policies attached to the specified principal. If you use an Cognito
         * identity, the ID must be in <a
         * href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_GetCredentialsForIdentity.html#API_GetCredentialsForIdentity_RequestSyntax">AmazonCognito
         * Identity format</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrincipalPoliciesOutcomeCallable ListPrincipalPoliciesCallable(const Model::ListPrincipalPoliciesRequest& request) const;

        /**
         * <p>Lists the policies attached to the specified principal. If you use an Cognito
         * identity, the ID must be in <a
         * href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_GetCredentialsForIdentity.html#API_GetCredentialsForIdentity_RequestSyntax">AmazonCognito
         * Identity format</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPrincipalPoliciesAsync(const Model::ListPrincipalPoliciesRequest& request, const ListPrincipalPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the things associated with the specified principal.</p>
         */
        virtual Model::ListPrincipalThingsOutcome ListPrincipalThings(const Model::ListPrincipalThingsRequest& request) const;

        /**
         * <p>Lists the things associated with the specified principal.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrincipalThingsOutcomeCallable ListPrincipalThingsCallable(const Model::ListPrincipalThingsRequest& request) const;

        /**
         * <p>Lists the things associated with the specified principal.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPrincipalThingsAsync(const Model::ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the principals associated with the specified thing.</p>
         */
        virtual Model::ListThingPrincipalsOutcome ListThingPrincipals(const Model::ListThingPrincipalsRequest& request) const;

        /**
         * <p>Lists the principals associated with the specified thing.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingPrincipalsOutcomeCallable ListThingPrincipalsCallable(const Model::ListThingPrincipalsRequest& request) const;

        /**
         * <p>Lists the principals associated with the specified thing.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingPrincipalsAsync(const Model::ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing thing types.</p>
         */
        virtual Model::ListThingTypesOutcome ListThingTypes(const Model::ListThingTypesRequest& request) const;

        /**
         * <p>Lists the existing thing types.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingTypesOutcomeCallable ListThingTypesCallable(const Model::ListThingTypesRequest& request) const;

        /**
         * <p>Lists the existing thing types.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingTypesAsync(const Model::ListThingTypesRequest& request, const ListThingTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b>
         * parameters to filter your things. For example, calling <code>ListThings</code>
         * with attributeName=Color and attributeValue=Red retrieves all things in the
         * registry that contain an attribute <b>Color</b> with the value <b>Red</b>. </p>
         */
        virtual Model::ListThingsOutcome ListThings(const Model::ListThingsRequest& request) const;

        /**
         * <p>Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b>
         * parameters to filter your things. For example, calling <code>ListThings</code>
         * with attributeName=Color and attributeValue=Red retrieves all things in the
         * registry that contain an attribute <b>Color</b> with the value <b>Red</b>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingsOutcomeCallable ListThingsCallable(const Model::ListThingsRequest& request) const;

        /**
         * <p>Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b>
         * parameters to filter your things. For example, calling <code>ListThings</code>
         * with attributeName=Color and attributeValue=Red retrieves all things in the
         * registry that contain an attribute <b>Color</b> with the value <b>Red</b>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingsAsync(const Model::ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the rules for the specific topic.</p>
         */
        virtual Model::ListTopicRulesOutcome ListTopicRules(const Model::ListTopicRulesRequest& request) const;

        /**
         * <p>Lists the rules for the specific topic.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTopicRulesOutcomeCallable ListTopicRulesCallable(const Model::ListTopicRulesRequest& request) const;

        /**
         * <p>Lists the rules for the specific topic.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTopicRulesAsync(const Model::ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a CA certificate with AWS IoT. This CA certificate can then be used
         * to sign device certificates, which can be then registered with AWS IoT. You can
         * register up to 10 CA certificates per AWS account that have the same subject
         * field and public key. This enables you to have up to 10 certificate authorities
         * sign your device certificates. If you have more than one CA certificate
         * registered, make sure you pass the CA certificate when you register your device
         * certificates with the RegisterCertificate API.</p>
         */
        virtual Model::RegisterCACertificateOutcome RegisterCACertificate(const Model::RegisterCACertificateRequest& request) const;

        /**
         * <p>Registers a CA certificate with AWS IoT. This CA certificate can then be used
         * to sign device certificates, which can be then registered with AWS IoT. You can
         * register up to 10 CA certificates per AWS account that have the same subject
         * field and public key. This enables you to have up to 10 certificate authorities
         * sign your device certificates. If you have more than one CA certificate
         * registered, make sure you pass the CA certificate when you register your device
         * certificates with the RegisterCertificate API.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCACertificateOutcomeCallable RegisterCACertificateCallable(const Model::RegisterCACertificateRequest& request) const;

        /**
         * <p>Registers a CA certificate with AWS IoT. This CA certificate can then be used
         * to sign device certificates, which can be then registered with AWS IoT. You can
         * register up to 10 CA certificates per AWS account that have the same subject
         * field and public key. This enables you to have up to 10 certificate authorities
         * sign your device certificates. If you have more than one CA certificate
         * registered, make sure you pass the CA certificate when you register your device
         * certificates with the RegisterCertificate API.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCACertificateAsync(const Model::RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a device certificate with AWS IoT. If you have more than one CA
         * certificate that has the same subject field, you must specify the CA certificate
         * that was used to sign the device certificate being registered.</p>
         */
        virtual Model::RegisterCertificateOutcome RegisterCertificate(const Model::RegisterCertificateRequest& request) const;

        /**
         * <p>Registers a device certificate with AWS IoT. If you have more than one CA
         * certificate that has the same subject field, you must specify the CA certificate
         * that was used to sign the device certificate being registered.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCertificateOutcomeCallable RegisterCertificateCallable(const Model::RegisterCertificateRequest& request) const;

        /**
         * <p>Registers a device certificate with AWS IoT. If you have more than one CA
         * certificate that has the same subject field, you must specify the CA certificate
         * that was used to sign the device certificate being registered.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCertificateAsync(const Model::RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a pending certificate transfer. After AWS IoT rejects a certificate
         * transfer, the certificate status changes from <b>PENDING_TRANSFER</b> to
         * <b>INACTIVE</b>.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p> <p>This operation
         * can only be called by the transfer destination. After it is called, the
         * certificate will be returned to the source's account in the INACTIVE state.</p>
         */
        virtual Model::RejectCertificateTransferOutcome RejectCertificateTransfer(const Model::RejectCertificateTransferRequest& request) const;

        /**
         * <p>Rejects a pending certificate transfer. After AWS IoT rejects a certificate
         * transfer, the certificate status changes from <b>PENDING_TRANSFER</b> to
         * <b>INACTIVE</b>.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p> <p>This operation
         * can only be called by the transfer destination. After it is called, the
         * certificate will be returned to the source's account in the INACTIVE state.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectCertificateTransferOutcomeCallable RejectCertificateTransferCallable(const Model::RejectCertificateTransferRequest& request) const;

        /**
         * <p>Rejects a pending certificate transfer. After AWS IoT rejects a certificate
         * transfer, the certificate status changes from <b>PENDING_TRANSFER</b> to
         * <b>INACTIVE</b>.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p> <p>This operation
         * can only be called by the transfer destination. After it is called, the
         * certificate will be returned to the source's account in the INACTIVE state.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectCertificateTransferAsync(const Model::RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the specified rule. You must specify all parameters for the new
         * rule. Creating rules is an administrator-level action. Any user who has
         * permission to create rules will be able to access data processed by the
         * rule.</p>
         */
        virtual Model::ReplaceTopicRuleOutcome ReplaceTopicRule(const Model::ReplaceTopicRuleRequest& request) const;

        /**
         * <p>Replaces the specified rule. You must specify all parameters for the new
         * rule. Creating rules is an administrator-level action. Any user who has
         * permission to create rules will be able to access data processed by the
         * rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceTopicRuleOutcomeCallable ReplaceTopicRuleCallable(const Model::ReplaceTopicRuleRequest& request) const;

        /**
         * <p>Replaces the specified rule. You must specify all parameters for the new
         * rule. Creating rules is an administrator-level action. Any user who has
         * permission to create rules will be able to access data processed by the
         * rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceTopicRuleAsync(const Model::ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version. This action affects all certificates to which the policy is
         * attached. To list the principals the policy is attached to, use the
         * ListPrincipalPolicy API.</p>
         */
        virtual Model::SetDefaultPolicyVersionOutcome SetDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version. This action affects all certificates to which the policy is
         * attached. To list the principals the policy is attached to, use the
         * ListPrincipalPolicy API.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version. This action affects all certificates to which the policy is
         * attached. To list the principals the policy is attached to, use the
         * ListPrincipalPolicy API.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the logging options.</p>
         */
        virtual Model::SetLoggingOptionsOutcome SetLoggingOptions(const Model::SetLoggingOptionsRequest& request) const;

        /**
         * <p>Sets the logging options.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLoggingOptionsOutcomeCallable SetLoggingOptionsCallable(const Model::SetLoggingOptionsRequest& request) const;

        /**
         * <p>Sets the logging options.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLoggingOptionsAsync(const Model::SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transfers the specified certificate to the specified AWS account.</p> <p>You
         * can cancel the transfer until it is acknowledged by the recipient.</p> <p>No
         * notification is sent to the transfer destination's account. It is up to the
         * caller to notify the transfer target.</p> <p>The certificate being transferred
         * must not be in the ACTIVE state. You can use the UpdateCertificate API to
         * deactivate it.</p> <p>The certificate must not have any policies attached to it.
         * You can use the DetachPrincipalPolicy API to detach them.</p>
         */
        virtual Model::TransferCertificateOutcome TransferCertificate(const Model::TransferCertificateRequest& request) const;

        /**
         * <p>Transfers the specified certificate to the specified AWS account.</p> <p>You
         * can cancel the transfer until it is acknowledged by the recipient.</p> <p>No
         * notification is sent to the transfer destination's account. It is up to the
         * caller to notify the transfer target.</p> <p>The certificate being transferred
         * must not be in the ACTIVE state. You can use the UpdateCertificate API to
         * deactivate it.</p> <p>The certificate must not have any policies attached to it.
         * You can use the DetachPrincipalPolicy API to detach them.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransferCertificateOutcomeCallable TransferCertificateCallable(const Model::TransferCertificateRequest& request) const;

        /**
         * <p>Transfers the specified certificate to the specified AWS account.</p> <p>You
         * can cancel the transfer until it is acknowledged by the recipient.</p> <p>No
         * notification is sent to the transfer destination's account. It is up to the
         * caller to notify the transfer target.</p> <p>The certificate being transferred
         * must not be in the ACTIVE state. You can use the UpdateCertificate API to
         * deactivate it.</p> <p>The certificate must not have any policies attached to it.
         * You can use the DetachPrincipalPolicy API to detach them.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransferCertificateAsync(const Model::TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a registered CA certificate.</p>
         */
        virtual Model::UpdateCACertificateOutcome UpdateCACertificate(const Model::UpdateCACertificateRequest& request) const;

        /**
         * <p>Updates a registered CA certificate.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCACertificateOutcomeCallable UpdateCACertificateCallable(const Model::UpdateCACertificateRequest& request) const;

        /**
         * <p>Updates a registered CA certificate.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCACertificateAsync(const Model::UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of the specified certificate. This operation is
         * idempotent.</p> <p>Moving a certificate from the ACTIVE state (including
         * REVOKED) will not disconnect currently connected devices, but these devices will
         * be unable to reconnect.</p> <p>The ACTIVE state is required to authenticate
         * devices connecting to AWS IoT using a certificate.</p>
         */
        virtual Model::UpdateCertificateOutcome UpdateCertificate(const Model::UpdateCertificateRequest& request) const;

        /**
         * <p>Updates the status of the specified certificate. This operation is
         * idempotent.</p> <p>Moving a certificate from the ACTIVE state (including
         * REVOKED) will not disconnect currently connected devices, but these devices will
         * be unable to reconnect.</p> <p>The ACTIVE state is required to authenticate
         * devices connecting to AWS IoT using a certificate.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCertificateOutcomeCallable UpdateCertificateCallable(const Model::UpdateCertificateRequest& request) const;

        /**
         * <p>Updates the status of the specified certificate. This operation is
         * idempotent.</p> <p>Moving a certificate from the ACTIVE state (including
         * REVOKED) will not disconnect currently connected devices, but these devices will
         * be unable to reconnect.</p> <p>The ACTIVE state is required to authenticate
         * devices connecting to AWS IoT using a certificate.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCertificateAsync(const Model::UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the data for a thing.</p>
         */
        virtual Model::UpdateThingOutcome UpdateThing(const Model::UpdateThingRequest& request) const;

        /**
         * <p>Updates the data for a thing.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThingOutcomeCallable UpdateThingCallable(const Model::UpdateThingRequest& request) const;

        /**
         * <p>Updates the data for a thing.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThingAsync(const Model::UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AcceptCertificateTransferAsyncHelper(const Model::AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachPrincipalPolicyAsyncHelper(const Model::AttachPrincipalPolicyRequest& request, const AttachPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachThingPrincipalAsyncHelper(const Model::AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelCertificateTransferAsyncHelper(const Model::CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCertificateFromCsrAsyncHelper(const Model::CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateKeysAndCertificateAsyncHelper(const Model::CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePolicyAsyncHelper(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePolicyVersionAsyncHelper(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateThingAsyncHelper(const Model::CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateThingTypeAsyncHelper(const Model::CreateThingTypeRequest& request, const CreateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTopicRuleAsyncHelper(const Model::CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCACertificateAsyncHelper(const Model::DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCertificateAsyncHelper(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyVersionAsyncHelper(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRegistrationCodeAsyncHelper(const Model::DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteThingAsyncHelper(const Model::DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteThingTypeAsyncHelper(const Model::DeleteThingTypeRequest& request, const DeleteThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTopicRuleAsyncHelper(const Model::DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeprecateThingTypeAsyncHelper(const Model::DeprecateThingTypeRequest& request, const DeprecateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCACertificateAsyncHelper(const Model::DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCertificateAsyncHelper(const Model::DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointAsyncHelper(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeThingAsyncHelper(const Model::DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeThingTypeAsyncHelper(const Model::DescribeThingTypeRequest& request, const DescribeThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachPrincipalPolicyAsyncHelper(const Model::DetachPrincipalPolicyRequest& request, const DetachPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachThingPrincipalAsyncHelper(const Model::DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableTopicRuleAsyncHelper(const Model::DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableTopicRuleAsyncHelper(const Model::EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoggingOptionsAsyncHelper(const Model::GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyVersionAsyncHelper(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegistrationCodeAsyncHelper(const Model::GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTopicRuleAsyncHelper(const Model::GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCACertificatesAsyncHelper(const Model::ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCertificatesAsyncHelper(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCertificatesByCAAsyncHelper(const Model::ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOutgoingCertificatesAsyncHelper(const Model::ListOutgoingCertificatesRequest& request, const ListOutgoingCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPoliciesAsyncHelper(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPolicyPrincipalsAsyncHelper(const Model::ListPolicyPrincipalsRequest& request, const ListPolicyPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPolicyVersionsAsyncHelper(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPrincipalPoliciesAsyncHelper(const Model::ListPrincipalPoliciesRequest& request, const ListPrincipalPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPrincipalThingsAsyncHelper(const Model::ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingPrincipalsAsyncHelper(const Model::ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingTypesAsyncHelper(const Model::ListThingTypesRequest& request, const ListThingTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingsAsyncHelper(const Model::ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTopicRulesAsyncHelper(const Model::ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterCACertificateAsyncHelper(const Model::RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterCertificateAsyncHelper(const Model::RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectCertificateTransferAsyncHelper(const Model::RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReplaceTopicRuleAsyncHelper(const Model::ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDefaultPolicyVersionAsyncHelper(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetLoggingOptionsAsyncHelper(const Model::SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TransferCertificateAsyncHelper(const Model::TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCACertificateAsyncHelper(const Model::UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCertificateAsyncHelper(const Model::UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThingAsyncHelper(const Model::UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace IoT
} // namespace Aws
