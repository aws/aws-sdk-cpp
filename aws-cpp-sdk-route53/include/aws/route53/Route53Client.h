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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/AssociateVPCWithHostedZoneResult.h>
#include <aws/route53/model/ChangeResourceRecordSetsResult.h>
#include <aws/route53/model/ChangeTagsForResourceResult.h>
#include <aws/route53/model/CreateHealthCheckResult.h>
#include <aws/route53/model/CreateHostedZoneResult.h>
#include <aws/route53/model/CreateReusableDelegationSetResult.h>
#include <aws/route53/model/CreateTrafficPolicyResult.h>
#include <aws/route53/model/CreateTrafficPolicyInstanceResult.h>
#include <aws/route53/model/CreateTrafficPolicyVersionResult.h>
#include <aws/route53/model/CreateVPCAssociationAuthorizationResult.h>
#include <aws/route53/model/DeleteHealthCheckResult.h>
#include <aws/route53/model/DeleteHostedZoneResult.h>
#include <aws/route53/model/DeleteReusableDelegationSetResult.h>
#include <aws/route53/model/DeleteTrafficPolicyResult.h>
#include <aws/route53/model/DeleteTrafficPolicyInstanceResult.h>
#include <aws/route53/model/DeleteVPCAssociationAuthorizationResult.h>
#include <aws/route53/model/DisassociateVPCFromHostedZoneResult.h>
#include <aws/route53/model/GetChangeResult.h>
#include <aws/route53/model/GetCheckerIpRangesResult.h>
#include <aws/route53/model/GetGeoLocationResult.h>
#include <aws/route53/model/GetHealthCheckResult.h>
#include <aws/route53/model/GetHealthCheckCountResult.h>
#include <aws/route53/model/GetHealthCheckLastFailureReasonResult.h>
#include <aws/route53/model/GetHealthCheckStatusResult.h>
#include <aws/route53/model/GetHostedZoneResult.h>
#include <aws/route53/model/GetHostedZoneCountResult.h>
#include <aws/route53/model/GetReusableDelegationSetResult.h>
#include <aws/route53/model/GetTrafficPolicyResult.h>
#include <aws/route53/model/GetTrafficPolicyInstanceResult.h>
#include <aws/route53/model/GetTrafficPolicyInstanceCountResult.h>
#include <aws/route53/model/ListGeoLocationsResult.h>
#include <aws/route53/model/ListHealthChecksResult.h>
#include <aws/route53/model/ListHostedZonesResult.h>
#include <aws/route53/model/ListHostedZonesByNameResult.h>
#include <aws/route53/model/ListResourceRecordSetsResult.h>
#include <aws/route53/model/ListReusableDelegationSetsResult.h>
#include <aws/route53/model/ListTagsForResourceResult.h>
#include <aws/route53/model/ListTagsForResourcesResult.h>
#include <aws/route53/model/ListTrafficPoliciesResult.h>
#include <aws/route53/model/ListTrafficPolicyInstancesResult.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByHostedZoneResult.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByPolicyResult.h>
#include <aws/route53/model/ListTrafficPolicyVersionsResult.h>
#include <aws/route53/model/ListVPCAssociationAuthorizationsResult.h>
#include <aws/route53/model/TestDNSAnswerResult.h>
#include <aws/route53/model/UpdateHealthCheckResult.h>
#include <aws/route53/model/UpdateHostedZoneCommentResult.h>
#include <aws/route53/model/UpdateTrafficPolicyCommentResult.h>
#include <aws/route53/model/UpdateTrafficPolicyInstanceResult.h>
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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace Route53
{

namespace Model
{
        class AssociateVPCWithHostedZoneRequest;
        class ChangeResourceRecordSetsRequest;
        class ChangeTagsForResourceRequest;
        class CreateHealthCheckRequest;
        class CreateHostedZoneRequest;
        class CreateReusableDelegationSetRequest;
        class CreateTrafficPolicyRequest;
        class CreateTrafficPolicyInstanceRequest;
        class CreateTrafficPolicyVersionRequest;
        class CreateVPCAssociationAuthorizationRequest;
        class DeleteHealthCheckRequest;
        class DeleteHostedZoneRequest;
        class DeleteReusableDelegationSetRequest;
        class DeleteTrafficPolicyRequest;
        class DeleteTrafficPolicyInstanceRequest;
        class DeleteVPCAssociationAuthorizationRequest;
        class DisassociateVPCFromHostedZoneRequest;
        class GetChangeRequest;
        class GetCheckerIpRangesRequest;
        class GetGeoLocationRequest;
        class GetHealthCheckRequest;
        class GetHealthCheckCountRequest;
        class GetHealthCheckLastFailureReasonRequest;
        class GetHealthCheckStatusRequest;
        class GetHostedZoneRequest;
        class GetHostedZoneCountRequest;
        class GetReusableDelegationSetRequest;
        class GetTrafficPolicyRequest;
        class GetTrafficPolicyInstanceRequest;
        class GetTrafficPolicyInstanceCountRequest;
        class ListGeoLocationsRequest;
        class ListHealthChecksRequest;
        class ListHostedZonesRequest;
        class ListHostedZonesByNameRequest;
        class ListResourceRecordSetsRequest;
        class ListReusableDelegationSetsRequest;
        class ListTagsForResourceRequest;
        class ListTagsForResourcesRequest;
        class ListTrafficPoliciesRequest;
        class ListTrafficPolicyInstancesRequest;
        class ListTrafficPolicyInstancesByHostedZoneRequest;
        class ListTrafficPolicyInstancesByPolicyRequest;
        class ListTrafficPolicyVersionsRequest;
        class ListVPCAssociationAuthorizationsRequest;
        class TestDNSAnswerRequest;
        class UpdateHealthCheckRequest;
        class UpdateHostedZoneCommentRequest;
        class UpdateTrafficPolicyCommentRequest;
        class UpdateTrafficPolicyInstanceRequest;

        typedef Aws::Utils::Outcome<AssociateVPCWithHostedZoneResult, Aws::Client::AWSError<Route53Errors>> AssociateVPCWithHostedZoneOutcome;
        typedef Aws::Utils::Outcome<ChangeResourceRecordSetsResult, Aws::Client::AWSError<Route53Errors>> ChangeResourceRecordSetsOutcome;
        typedef Aws::Utils::Outcome<ChangeTagsForResourceResult, Aws::Client::AWSError<Route53Errors>> ChangeTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<CreateHealthCheckResult, Aws::Client::AWSError<Route53Errors>> CreateHealthCheckOutcome;
        typedef Aws::Utils::Outcome<CreateHostedZoneResult, Aws::Client::AWSError<Route53Errors>> CreateHostedZoneOutcome;
        typedef Aws::Utils::Outcome<CreateReusableDelegationSetResult, Aws::Client::AWSError<Route53Errors>> CreateReusableDelegationSetOutcome;
        typedef Aws::Utils::Outcome<CreateTrafficPolicyResult, Aws::Client::AWSError<Route53Errors>> CreateTrafficPolicyOutcome;
        typedef Aws::Utils::Outcome<CreateTrafficPolicyInstanceResult, Aws::Client::AWSError<Route53Errors>> CreateTrafficPolicyInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateTrafficPolicyVersionResult, Aws::Client::AWSError<Route53Errors>> CreateTrafficPolicyVersionOutcome;
        typedef Aws::Utils::Outcome<CreateVPCAssociationAuthorizationResult, Aws::Client::AWSError<Route53Errors>> CreateVPCAssociationAuthorizationOutcome;
        typedef Aws::Utils::Outcome<DeleteHealthCheckResult, Aws::Client::AWSError<Route53Errors>> DeleteHealthCheckOutcome;
        typedef Aws::Utils::Outcome<DeleteHostedZoneResult, Aws::Client::AWSError<Route53Errors>> DeleteHostedZoneOutcome;
        typedef Aws::Utils::Outcome<DeleteReusableDelegationSetResult, Aws::Client::AWSError<Route53Errors>> DeleteReusableDelegationSetOutcome;
        typedef Aws::Utils::Outcome<DeleteTrafficPolicyResult, Aws::Client::AWSError<Route53Errors>> DeleteTrafficPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteTrafficPolicyInstanceResult, Aws::Client::AWSError<Route53Errors>> DeleteTrafficPolicyInstanceOutcome;
        typedef Aws::Utils::Outcome<DeleteVPCAssociationAuthorizationResult, Aws::Client::AWSError<Route53Errors>> DeleteVPCAssociationAuthorizationOutcome;
        typedef Aws::Utils::Outcome<DisassociateVPCFromHostedZoneResult, Aws::Client::AWSError<Route53Errors>> DisassociateVPCFromHostedZoneOutcome;
        typedef Aws::Utils::Outcome<GetChangeResult, Aws::Client::AWSError<Route53Errors>> GetChangeOutcome;
        typedef Aws::Utils::Outcome<GetCheckerIpRangesResult, Aws::Client::AWSError<Route53Errors>> GetCheckerIpRangesOutcome;
        typedef Aws::Utils::Outcome<GetGeoLocationResult, Aws::Client::AWSError<Route53Errors>> GetGeoLocationOutcome;
        typedef Aws::Utils::Outcome<GetHealthCheckResult, Aws::Client::AWSError<Route53Errors>> GetHealthCheckOutcome;
        typedef Aws::Utils::Outcome<GetHealthCheckCountResult, Aws::Client::AWSError<Route53Errors>> GetHealthCheckCountOutcome;
        typedef Aws::Utils::Outcome<GetHealthCheckLastFailureReasonResult, Aws::Client::AWSError<Route53Errors>> GetHealthCheckLastFailureReasonOutcome;
        typedef Aws::Utils::Outcome<GetHealthCheckStatusResult, Aws::Client::AWSError<Route53Errors>> GetHealthCheckStatusOutcome;
        typedef Aws::Utils::Outcome<GetHostedZoneResult, Aws::Client::AWSError<Route53Errors>> GetHostedZoneOutcome;
        typedef Aws::Utils::Outcome<GetHostedZoneCountResult, Aws::Client::AWSError<Route53Errors>> GetHostedZoneCountOutcome;
        typedef Aws::Utils::Outcome<GetReusableDelegationSetResult, Aws::Client::AWSError<Route53Errors>> GetReusableDelegationSetOutcome;
        typedef Aws::Utils::Outcome<GetTrafficPolicyResult, Aws::Client::AWSError<Route53Errors>> GetTrafficPolicyOutcome;
        typedef Aws::Utils::Outcome<GetTrafficPolicyInstanceResult, Aws::Client::AWSError<Route53Errors>> GetTrafficPolicyInstanceOutcome;
        typedef Aws::Utils::Outcome<GetTrafficPolicyInstanceCountResult, Aws::Client::AWSError<Route53Errors>> GetTrafficPolicyInstanceCountOutcome;
        typedef Aws::Utils::Outcome<ListGeoLocationsResult, Aws::Client::AWSError<Route53Errors>> ListGeoLocationsOutcome;
        typedef Aws::Utils::Outcome<ListHealthChecksResult, Aws::Client::AWSError<Route53Errors>> ListHealthChecksOutcome;
        typedef Aws::Utils::Outcome<ListHostedZonesResult, Aws::Client::AWSError<Route53Errors>> ListHostedZonesOutcome;
        typedef Aws::Utils::Outcome<ListHostedZonesByNameResult, Aws::Client::AWSError<Route53Errors>> ListHostedZonesByNameOutcome;
        typedef Aws::Utils::Outcome<ListResourceRecordSetsResult, Aws::Client::AWSError<Route53Errors>> ListResourceRecordSetsOutcome;
        typedef Aws::Utils::Outcome<ListReusableDelegationSetsResult, Aws::Client::AWSError<Route53Errors>> ListReusableDelegationSetsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<Route53Errors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourcesResult, Aws::Client::AWSError<Route53Errors>> ListTagsForResourcesOutcome;
        typedef Aws::Utils::Outcome<ListTrafficPoliciesResult, Aws::Client::AWSError<Route53Errors>> ListTrafficPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListTrafficPolicyInstancesResult, Aws::Client::AWSError<Route53Errors>> ListTrafficPolicyInstancesOutcome;
        typedef Aws::Utils::Outcome<ListTrafficPolicyInstancesByHostedZoneResult, Aws::Client::AWSError<Route53Errors>> ListTrafficPolicyInstancesByHostedZoneOutcome;
        typedef Aws::Utils::Outcome<ListTrafficPolicyInstancesByPolicyResult, Aws::Client::AWSError<Route53Errors>> ListTrafficPolicyInstancesByPolicyOutcome;
        typedef Aws::Utils::Outcome<ListTrafficPolicyVersionsResult, Aws::Client::AWSError<Route53Errors>> ListTrafficPolicyVersionsOutcome;
        typedef Aws::Utils::Outcome<ListVPCAssociationAuthorizationsResult, Aws::Client::AWSError<Route53Errors>> ListVPCAssociationAuthorizationsOutcome;
        typedef Aws::Utils::Outcome<TestDNSAnswerResult, Aws::Client::AWSError<Route53Errors>> TestDNSAnswerOutcome;
        typedef Aws::Utils::Outcome<UpdateHealthCheckResult, Aws::Client::AWSError<Route53Errors>> UpdateHealthCheckOutcome;
        typedef Aws::Utils::Outcome<UpdateHostedZoneCommentResult, Aws::Client::AWSError<Route53Errors>> UpdateHostedZoneCommentOutcome;
        typedef Aws::Utils::Outcome<UpdateTrafficPolicyCommentResult, Aws::Client::AWSError<Route53Errors>> UpdateTrafficPolicyCommentOutcome;
        typedef Aws::Utils::Outcome<UpdateTrafficPolicyInstanceResult, Aws::Client::AWSError<Route53Errors>> UpdateTrafficPolicyInstanceOutcome;

        typedef std::future<AssociateVPCWithHostedZoneOutcome> AssociateVPCWithHostedZoneOutcomeCallable;
        typedef std::future<ChangeResourceRecordSetsOutcome> ChangeResourceRecordSetsOutcomeCallable;
        typedef std::future<ChangeTagsForResourceOutcome> ChangeTagsForResourceOutcomeCallable;
        typedef std::future<CreateHealthCheckOutcome> CreateHealthCheckOutcomeCallable;
        typedef std::future<CreateHostedZoneOutcome> CreateHostedZoneOutcomeCallable;
        typedef std::future<CreateReusableDelegationSetOutcome> CreateReusableDelegationSetOutcomeCallable;
        typedef std::future<CreateTrafficPolicyOutcome> CreateTrafficPolicyOutcomeCallable;
        typedef std::future<CreateTrafficPolicyInstanceOutcome> CreateTrafficPolicyInstanceOutcomeCallable;
        typedef std::future<CreateTrafficPolicyVersionOutcome> CreateTrafficPolicyVersionOutcomeCallable;
        typedef std::future<CreateVPCAssociationAuthorizationOutcome> CreateVPCAssociationAuthorizationOutcomeCallable;
        typedef std::future<DeleteHealthCheckOutcome> DeleteHealthCheckOutcomeCallable;
        typedef std::future<DeleteHostedZoneOutcome> DeleteHostedZoneOutcomeCallable;
        typedef std::future<DeleteReusableDelegationSetOutcome> DeleteReusableDelegationSetOutcomeCallable;
        typedef std::future<DeleteTrafficPolicyOutcome> DeleteTrafficPolicyOutcomeCallable;
        typedef std::future<DeleteTrafficPolicyInstanceOutcome> DeleteTrafficPolicyInstanceOutcomeCallable;
        typedef std::future<DeleteVPCAssociationAuthorizationOutcome> DeleteVPCAssociationAuthorizationOutcomeCallable;
        typedef std::future<DisassociateVPCFromHostedZoneOutcome> DisassociateVPCFromHostedZoneOutcomeCallable;
        typedef std::future<GetChangeOutcome> GetChangeOutcomeCallable;
        typedef std::future<GetCheckerIpRangesOutcome> GetCheckerIpRangesOutcomeCallable;
        typedef std::future<GetGeoLocationOutcome> GetGeoLocationOutcomeCallable;
        typedef std::future<GetHealthCheckOutcome> GetHealthCheckOutcomeCallable;
        typedef std::future<GetHealthCheckCountOutcome> GetHealthCheckCountOutcomeCallable;
        typedef std::future<GetHealthCheckLastFailureReasonOutcome> GetHealthCheckLastFailureReasonOutcomeCallable;
        typedef std::future<GetHealthCheckStatusOutcome> GetHealthCheckStatusOutcomeCallable;
        typedef std::future<GetHostedZoneOutcome> GetHostedZoneOutcomeCallable;
        typedef std::future<GetHostedZoneCountOutcome> GetHostedZoneCountOutcomeCallable;
        typedef std::future<GetReusableDelegationSetOutcome> GetReusableDelegationSetOutcomeCallable;
        typedef std::future<GetTrafficPolicyOutcome> GetTrafficPolicyOutcomeCallable;
        typedef std::future<GetTrafficPolicyInstanceOutcome> GetTrafficPolicyInstanceOutcomeCallable;
        typedef std::future<GetTrafficPolicyInstanceCountOutcome> GetTrafficPolicyInstanceCountOutcomeCallable;
        typedef std::future<ListGeoLocationsOutcome> ListGeoLocationsOutcomeCallable;
        typedef std::future<ListHealthChecksOutcome> ListHealthChecksOutcomeCallable;
        typedef std::future<ListHostedZonesOutcome> ListHostedZonesOutcomeCallable;
        typedef std::future<ListHostedZonesByNameOutcome> ListHostedZonesByNameOutcomeCallable;
        typedef std::future<ListResourceRecordSetsOutcome> ListResourceRecordSetsOutcomeCallable;
        typedef std::future<ListReusableDelegationSetsOutcome> ListReusableDelegationSetsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTagsForResourcesOutcome> ListTagsForResourcesOutcomeCallable;
        typedef std::future<ListTrafficPoliciesOutcome> ListTrafficPoliciesOutcomeCallable;
        typedef std::future<ListTrafficPolicyInstancesOutcome> ListTrafficPolicyInstancesOutcomeCallable;
        typedef std::future<ListTrafficPolicyInstancesByHostedZoneOutcome> ListTrafficPolicyInstancesByHostedZoneOutcomeCallable;
        typedef std::future<ListTrafficPolicyInstancesByPolicyOutcome> ListTrafficPolicyInstancesByPolicyOutcomeCallable;
        typedef std::future<ListTrafficPolicyVersionsOutcome> ListTrafficPolicyVersionsOutcomeCallable;
        typedef std::future<ListVPCAssociationAuthorizationsOutcome> ListVPCAssociationAuthorizationsOutcomeCallable;
        typedef std::future<TestDNSAnswerOutcome> TestDNSAnswerOutcomeCallable;
        typedef std::future<UpdateHealthCheckOutcome> UpdateHealthCheckOutcomeCallable;
        typedef std::future<UpdateHostedZoneCommentOutcome> UpdateHostedZoneCommentOutcomeCallable;
        typedef std::future<UpdateTrafficPolicyCommentOutcome> UpdateTrafficPolicyCommentOutcomeCallable;
        typedef std::future<UpdateTrafficPolicyInstanceOutcome> UpdateTrafficPolicyInstanceOutcomeCallable;
} // namespace Model

  class Route53Client;

    typedef std::function<void(const Route53Client*, const Model::AssociateVPCWithHostedZoneRequest&, const Model::AssociateVPCWithHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateVPCWithHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ChangeResourceRecordSetsRequest&, const Model::ChangeResourceRecordSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeResourceRecordSetsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ChangeTagsForResourceRequest&, const Model::ChangeTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateHealthCheckRequest&, const Model::CreateHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHealthCheckResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateHostedZoneRequest&, const Model::CreateHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateReusableDelegationSetRequest&, const Model::CreateReusableDelegationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReusableDelegationSetResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateTrafficPolicyRequest&, const Model::CreateTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateTrafficPolicyInstanceRequest&, const Model::CreateTrafficPolicyInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficPolicyInstanceResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateTrafficPolicyVersionRequest&, const Model::CreateTrafficPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateVPCAssociationAuthorizationRequest&, const Model::CreateVPCAssociationAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVPCAssociationAuthorizationResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteHealthCheckRequest&, const Model::DeleteHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHealthCheckResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteHostedZoneRequest&, const Model::DeleteHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteReusableDelegationSetRequest&, const Model::DeleteReusableDelegationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReusableDelegationSetResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteTrafficPolicyRequest&, const Model::DeleteTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteTrafficPolicyInstanceRequest&, const Model::DeleteTrafficPolicyInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficPolicyInstanceResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteVPCAssociationAuthorizationRequest&, const Model::DeleteVPCAssociationAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVPCAssociationAuthorizationResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DisassociateVPCFromHostedZoneRequest&, const Model::DisassociateVPCFromHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateVPCFromHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetChangeRequest&, const Model::GetChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChangeResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetCheckerIpRangesRequest&, const Model::GetCheckerIpRangesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCheckerIpRangesResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetGeoLocationRequest&, const Model::GetGeoLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGeoLocationResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHealthCheckRequest&, const Model::GetHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHealthCheckResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHealthCheckCountRequest&, const Model::GetHealthCheckCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHealthCheckCountResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHealthCheckLastFailureReasonRequest&, const Model::GetHealthCheckLastFailureReasonOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHealthCheckLastFailureReasonResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHealthCheckStatusRequest&, const Model::GetHealthCheckStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHealthCheckStatusResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHostedZoneRequest&, const Model::GetHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHostedZoneCountRequest&, const Model::GetHostedZoneCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostedZoneCountResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetReusableDelegationSetRequest&, const Model::GetReusableDelegationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReusableDelegationSetResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetTrafficPolicyRequest&, const Model::GetTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetTrafficPolicyInstanceRequest&, const Model::GetTrafficPolicyInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrafficPolicyInstanceResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetTrafficPolicyInstanceCountRequest&, const Model::GetTrafficPolicyInstanceCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrafficPolicyInstanceCountResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListGeoLocationsRequest&, const Model::ListGeoLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGeoLocationsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListHealthChecksRequest&, const Model::ListHealthChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHealthChecksResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListHostedZonesRequest&, const Model::ListHostedZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostedZonesResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListHostedZonesByNameRequest&, const Model::ListHostedZonesByNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostedZonesByNameResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListResourceRecordSetsRequest&, const Model::ListResourceRecordSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceRecordSetsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListReusableDelegationSetsRequest&, const Model::ListReusableDelegationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReusableDelegationSetsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListTagsForResourcesRequest&, const Model::ListTagsForResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourcesResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListTrafficPoliciesRequest&, const Model::ListTrafficPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrafficPoliciesResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListTrafficPolicyInstancesRequest&, const Model::ListTrafficPolicyInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrafficPolicyInstancesResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListTrafficPolicyInstancesByHostedZoneRequest&, const Model::ListTrafficPolicyInstancesByHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListTrafficPolicyInstancesByPolicyRequest&, const Model::ListTrafficPolicyInstancesByPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrafficPolicyInstancesByPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListTrafficPolicyVersionsRequest&, const Model::ListTrafficPolicyVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrafficPolicyVersionsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListVPCAssociationAuthorizationsRequest&, const Model::ListVPCAssociationAuthorizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVPCAssociationAuthorizationsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::TestDNSAnswerRequest&, const Model::TestDNSAnswerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestDNSAnswerResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::UpdateHealthCheckRequest&, const Model::UpdateHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHealthCheckResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::UpdateHostedZoneCommentRequest&, const Model::UpdateHostedZoneCommentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHostedZoneCommentResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::UpdateTrafficPolicyCommentRequest&, const Model::UpdateTrafficPolicyCommentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrafficPolicyCommentResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::UpdateTrafficPolicyInstanceRequest&, const Model::UpdateTrafficPolicyInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrafficPolicyInstanceResponseReceivedHandler;

  class AWS_ROUTE53_API Route53Client : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53Client(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53Client(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53Client(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~Route53Client();

        /**
         * <p>Associates an Amazon VPC with a private hosted zone. </p> <important> <p>To
         * perform the association, the VPC and the private hosted zone must already exist.
         * You can't convert a public hosted zone into a private hosted zone.</p>
         * </important> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone ID</i>/associatevpc</code> resource.
         * The request body must include a document with an
         * <code>AssociateVPCWithHostedZoneRequest</code> element. The response contains a
         * <code>ChangeInfo</code> data type that you can use to track the progress of the
         * request. </p> <note> <p>If you want to associate a VPC that was created by using
         * one AWS account with a private hosted zone that was created by using a different
         * account, the AWS account that created the private hosted zone must first submit
         * a <code>CreateVPCAssociationAuthorization</code> request. Then the account that
         * created the VPC must submit an <code>AssociateVPCWithHostedZone</code>
         * request.</p> </note>
         */
        virtual Model::AssociateVPCWithHostedZoneOutcome AssociateVPCWithHostedZone(const Model::AssociateVPCWithHostedZoneRequest& request) const;

        /**
         * <p>Associates an Amazon VPC with a private hosted zone. </p> <important> <p>To
         * perform the association, the VPC and the private hosted zone must already exist.
         * You can't convert a public hosted zone into a private hosted zone.</p>
         * </important> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone ID</i>/associatevpc</code> resource.
         * The request body must include a document with an
         * <code>AssociateVPCWithHostedZoneRequest</code> element. The response contains a
         * <code>ChangeInfo</code> data type that you can use to track the progress of the
         * request. </p> <note> <p>If you want to associate a VPC that was created by using
         * one AWS account with a private hosted zone that was created by using a different
         * account, the AWS account that created the private hosted zone must first submit
         * a <code>CreateVPCAssociationAuthorization</code> request. Then the account that
         * created the VPC must submit an <code>AssociateVPCWithHostedZone</code>
         * request.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateVPCWithHostedZoneOutcomeCallable AssociateVPCWithHostedZoneCallable(const Model::AssociateVPCWithHostedZoneRequest& request) const;

        /**
         * <p>Associates an Amazon VPC with a private hosted zone. </p> <important> <p>To
         * perform the association, the VPC and the private hosted zone must already exist.
         * You can't convert a public hosted zone into a private hosted zone.</p>
         * </important> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone ID</i>/associatevpc</code> resource.
         * The request body must include a document with an
         * <code>AssociateVPCWithHostedZoneRequest</code> element. The response contains a
         * <code>ChangeInfo</code> data type that you can use to track the progress of the
         * request. </p> <note> <p>If you want to associate a VPC that was created by using
         * one AWS account with a private hosted zone that was created by using a different
         * account, the AWS account that created the private hosted zone must first submit
         * a <code>CreateVPCAssociationAuthorization</code> request. Then the account that
         * created the VPC must submit an <code>AssociateVPCWithHostedZone</code>
         * request.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateVPCWithHostedZoneAsync(const Model::AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create, change, update, or delete authoritative DNS information on all Amazon
         * Route 53 servers. Send a <code>POST</code> request to: </p> <p>
         * <code>/2013-04-01/hostedzone/<i>Amazon Route 53 hosted Zone ID</i>/rrset</code>
         * resource. </p> <p>The request body must include a document with a
         * <code>ChangeResourceRecordSetsRequest</code> element. The request body contains
         * a list of change items, known as a change batch. Change batches are considered
         * transactional changes. When using the Amazon Route 53 API to change resource
         * record sets, Amazon Route 53 either makes all or none of the changes in a change
         * batch request. This ensures that Amazon Route 53 never partially implements the
         * intended changes to the resource record sets in a hosted zone. </p> <p>For
         * example, a change batch request that deletes the <code>CNAME</code> record for
         * www.example.com and creates an alias resource record set for www.example.com.
         * Amazon Route 53 deletes the first resource record set and creates the second
         * resource record set in a single operation. If either the <code>DELETE</code> or
         * the <code>CREATE</code> action fails, then both changes (plus any other changes
         * in the batch) fail, and the original <code>CNAME</code> record continues to
         * exist.</p> <important> <p>Due to the nature of transactional changes, you can't
         * delete the same resource record set more than once in a single change batch. If
         * you attempt to delete the same change batch more than once, Amazon Route 53
         * returns an <code>InvalidChangeBatch</code> error.</p> </important> <note> <p>To
         * create resource record sets for complex routing configurations, use either the
         * traffic flow visual editor in the Amazon Route 53 console or the API actions for
         * traffic policies and traffic policy instances. Save the configuration as a
         * traffic policy, then associate the traffic policy with one or more domain names
         * (such as example.com) or subdomain names (such as www.example.com), in the same
         * hosted zone or in multiple hosted zones. You can roll back the updates if the
         * new configuration isn't performing as expected. For more information, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/traffic-flow.html">Using
         * Traffic Flow to Route DNS Traffic</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p> </note> <p>Use <code>ChangeResourceRecordsSetsRequest</code> to
         * perform the following actions:</p> <ul> <li> <p> <code>CREATE</code>: Creates a
         * resource record set that has the specified values.</p> </li> <li> <p>
         * <code>DELETE</code>: Deletes an existing resource record set that has the
         * applicable values for the following elements:</p> <ul> <li> <p>
         * <code>Name</code>: required to delete any resource record set</p> </li> <li> <p>
         * <code>Type</code>: required to delete any resource record set</p> </li> <li> <p>
         * <code>AliasTarget</code>, <code>DNSName</code>,
         * <code>EvaluateTargetHealth</code>, and <code>HostedZoneId</code>: required to
         * delete an alias resource record set</p> </li> <li> <p>
         * <code>SetIdentifier</code>: required to delete a failover, geolocation, latency,
         * or weighted resource record set </p> </li> <li> <p> <code>TTL</code>: required
         * to delete any resource record set except an alias resource record set (For alias
         * resource record sets, the TTL is determined by the AWS resource tat you're
         * routing traffic to.)</p> </li> </ul> </li> <li> <p> <code>UPSERT</code>: If a
         * resource record set does not already exist, AWS creates it. If a resource set
         * does exist, Amazon Route 53 updates it with the values in the request. Amazon
         * Route 53 can update an existing resource record set only when all of the
         * following values match: <code>Name</code>, <code>Type</code>, and <code>Set
         * Identifier</code> (for weighted, latency, geolocation, and failover resource
         * record sets).</p> </li> </ul> <p>In response to a
         * <code>ChangeResourceRecordSets</code> request, the DNS data is changed on all
         * Amazon Route 53 DNS servers. Initially, the status of a change is
         * <code>PENDING</code>, meaning the change has not yet propagated to all the
         * authoritative Amazon Route 53 DNS servers. When the change is propagated to all
         * hosts, the change returns a status of <code>INSYNC</code>.</p> <p>After sending
         * a change request, confirm your change has propagated to all Amazon Route 53 DNS
         * servers. Changes generally propagate to all Amazon Route 53 name servers in a
         * few minutes. In rare circumstances, propagation can take up to 30 minutes. For
         * more information, see <a>GetChange</a>.</p> <p>For information about the limits
         * on a <code>ChangeResourceRecordSets</code> request, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a>
         * in the <i>Amazon Route 53 Developer Guide</i>.</p>
         */
        virtual Model::ChangeResourceRecordSetsOutcome ChangeResourceRecordSets(const Model::ChangeResourceRecordSetsRequest& request) const;

        /**
         * <p>Create, change, update, or delete authoritative DNS information on all Amazon
         * Route 53 servers. Send a <code>POST</code> request to: </p> <p>
         * <code>/2013-04-01/hostedzone/<i>Amazon Route 53 hosted Zone ID</i>/rrset</code>
         * resource. </p> <p>The request body must include a document with a
         * <code>ChangeResourceRecordSetsRequest</code> element. The request body contains
         * a list of change items, known as a change batch. Change batches are considered
         * transactional changes. When using the Amazon Route 53 API to change resource
         * record sets, Amazon Route 53 either makes all or none of the changes in a change
         * batch request. This ensures that Amazon Route 53 never partially implements the
         * intended changes to the resource record sets in a hosted zone. </p> <p>For
         * example, a change batch request that deletes the <code>CNAME</code> record for
         * www.example.com and creates an alias resource record set for www.example.com.
         * Amazon Route 53 deletes the first resource record set and creates the second
         * resource record set in a single operation. If either the <code>DELETE</code> or
         * the <code>CREATE</code> action fails, then both changes (plus any other changes
         * in the batch) fail, and the original <code>CNAME</code> record continues to
         * exist.</p> <important> <p>Due to the nature of transactional changes, you can't
         * delete the same resource record set more than once in a single change batch. If
         * you attempt to delete the same change batch more than once, Amazon Route 53
         * returns an <code>InvalidChangeBatch</code> error.</p> </important> <note> <p>To
         * create resource record sets for complex routing configurations, use either the
         * traffic flow visual editor in the Amazon Route 53 console or the API actions for
         * traffic policies and traffic policy instances. Save the configuration as a
         * traffic policy, then associate the traffic policy with one or more domain names
         * (such as example.com) or subdomain names (such as www.example.com), in the same
         * hosted zone or in multiple hosted zones. You can roll back the updates if the
         * new configuration isn't performing as expected. For more information, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/traffic-flow.html">Using
         * Traffic Flow to Route DNS Traffic</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p> </note> <p>Use <code>ChangeResourceRecordsSetsRequest</code> to
         * perform the following actions:</p> <ul> <li> <p> <code>CREATE</code>: Creates a
         * resource record set that has the specified values.</p> </li> <li> <p>
         * <code>DELETE</code>: Deletes an existing resource record set that has the
         * applicable values for the following elements:</p> <ul> <li> <p>
         * <code>Name</code>: required to delete any resource record set</p> </li> <li> <p>
         * <code>Type</code>: required to delete any resource record set</p> </li> <li> <p>
         * <code>AliasTarget</code>, <code>DNSName</code>,
         * <code>EvaluateTargetHealth</code>, and <code>HostedZoneId</code>: required to
         * delete an alias resource record set</p> </li> <li> <p>
         * <code>SetIdentifier</code>: required to delete a failover, geolocation, latency,
         * or weighted resource record set </p> </li> <li> <p> <code>TTL</code>: required
         * to delete any resource record set except an alias resource record set (For alias
         * resource record sets, the TTL is determined by the AWS resource tat you're
         * routing traffic to.)</p> </li> </ul> </li> <li> <p> <code>UPSERT</code>: If a
         * resource record set does not already exist, AWS creates it. If a resource set
         * does exist, Amazon Route 53 updates it with the values in the request. Amazon
         * Route 53 can update an existing resource record set only when all of the
         * following values match: <code>Name</code>, <code>Type</code>, and <code>Set
         * Identifier</code> (for weighted, latency, geolocation, and failover resource
         * record sets).</p> </li> </ul> <p>In response to a
         * <code>ChangeResourceRecordSets</code> request, the DNS data is changed on all
         * Amazon Route 53 DNS servers. Initially, the status of a change is
         * <code>PENDING</code>, meaning the change has not yet propagated to all the
         * authoritative Amazon Route 53 DNS servers. When the change is propagated to all
         * hosts, the change returns a status of <code>INSYNC</code>.</p> <p>After sending
         * a change request, confirm your change has propagated to all Amazon Route 53 DNS
         * servers. Changes generally propagate to all Amazon Route 53 name servers in a
         * few minutes. In rare circumstances, propagation can take up to 30 minutes. For
         * more information, see <a>GetChange</a>.</p> <p>For information about the limits
         * on a <code>ChangeResourceRecordSets</code> request, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a>
         * in the <i>Amazon Route 53 Developer Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeResourceRecordSetsOutcomeCallable ChangeResourceRecordSetsCallable(const Model::ChangeResourceRecordSetsRequest& request) const;

        /**
         * <p>Create, change, update, or delete authoritative DNS information on all Amazon
         * Route 53 servers. Send a <code>POST</code> request to: </p> <p>
         * <code>/2013-04-01/hostedzone/<i>Amazon Route 53 hosted Zone ID</i>/rrset</code>
         * resource. </p> <p>The request body must include a document with a
         * <code>ChangeResourceRecordSetsRequest</code> element. The request body contains
         * a list of change items, known as a change batch. Change batches are considered
         * transactional changes. When using the Amazon Route 53 API to change resource
         * record sets, Amazon Route 53 either makes all or none of the changes in a change
         * batch request. This ensures that Amazon Route 53 never partially implements the
         * intended changes to the resource record sets in a hosted zone. </p> <p>For
         * example, a change batch request that deletes the <code>CNAME</code> record for
         * www.example.com and creates an alias resource record set for www.example.com.
         * Amazon Route 53 deletes the first resource record set and creates the second
         * resource record set in a single operation. If either the <code>DELETE</code> or
         * the <code>CREATE</code> action fails, then both changes (plus any other changes
         * in the batch) fail, and the original <code>CNAME</code> record continues to
         * exist.</p> <important> <p>Due to the nature of transactional changes, you can't
         * delete the same resource record set more than once in a single change batch. If
         * you attempt to delete the same change batch more than once, Amazon Route 53
         * returns an <code>InvalidChangeBatch</code> error.</p> </important> <note> <p>To
         * create resource record sets for complex routing configurations, use either the
         * traffic flow visual editor in the Amazon Route 53 console or the API actions for
         * traffic policies and traffic policy instances. Save the configuration as a
         * traffic policy, then associate the traffic policy with one or more domain names
         * (such as example.com) or subdomain names (such as www.example.com), in the same
         * hosted zone or in multiple hosted zones. You can roll back the updates if the
         * new configuration isn't performing as expected. For more information, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/traffic-flow.html">Using
         * Traffic Flow to Route DNS Traffic</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p> </note> <p>Use <code>ChangeResourceRecordsSetsRequest</code> to
         * perform the following actions:</p> <ul> <li> <p> <code>CREATE</code>: Creates a
         * resource record set that has the specified values.</p> </li> <li> <p>
         * <code>DELETE</code>: Deletes an existing resource record set that has the
         * applicable values for the following elements:</p> <ul> <li> <p>
         * <code>Name</code>: required to delete any resource record set</p> </li> <li> <p>
         * <code>Type</code>: required to delete any resource record set</p> </li> <li> <p>
         * <code>AliasTarget</code>, <code>DNSName</code>,
         * <code>EvaluateTargetHealth</code>, and <code>HostedZoneId</code>: required to
         * delete an alias resource record set</p> </li> <li> <p>
         * <code>SetIdentifier</code>: required to delete a failover, geolocation, latency,
         * or weighted resource record set </p> </li> <li> <p> <code>TTL</code>: required
         * to delete any resource record set except an alias resource record set (For alias
         * resource record sets, the TTL is determined by the AWS resource tat you're
         * routing traffic to.)</p> </li> </ul> </li> <li> <p> <code>UPSERT</code>: If a
         * resource record set does not already exist, AWS creates it. If a resource set
         * does exist, Amazon Route 53 updates it with the values in the request. Amazon
         * Route 53 can update an existing resource record set only when all of the
         * following values match: <code>Name</code>, <code>Type</code>, and <code>Set
         * Identifier</code> (for weighted, latency, geolocation, and failover resource
         * record sets).</p> </li> </ul> <p>In response to a
         * <code>ChangeResourceRecordSets</code> request, the DNS data is changed on all
         * Amazon Route 53 DNS servers. Initially, the status of a change is
         * <code>PENDING</code>, meaning the change has not yet propagated to all the
         * authoritative Amazon Route 53 DNS servers. When the change is propagated to all
         * hosts, the change returns a status of <code>INSYNC</code>.</p> <p>After sending
         * a change request, confirm your change has propagated to all Amazon Route 53 DNS
         * servers. Changes generally propagate to all Amazon Route 53 name servers in a
         * few minutes. In rare circumstances, propagation can take up to 30 minutes. For
         * more information, see <a>GetChange</a>.</p> <p>For information about the limits
         * on a <code>ChangeResourceRecordSets</code> request, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a>
         * in the <i>Amazon Route 53 Developer Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeResourceRecordSetsAsync(const Model::ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds, edits, or deletes tags for a health check or a hosted zone.</p> <p>For
         * information about using tags for cost allocation, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p>
         */
        virtual Model::ChangeTagsForResourceOutcome ChangeTagsForResource(const Model::ChangeTagsForResourceRequest& request) const;

        /**
         * <p>Adds, edits, or deletes tags for a health check or a hosted zone.</p> <p>For
         * information about using tags for cost allocation, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeTagsForResourceOutcomeCallable ChangeTagsForResourceCallable(const Model::ChangeTagsForResourceRequest& request) const;

        /**
         * <p>Adds, edits, or deletes tags for a health check or a hosted zone.</p> <p>For
         * information about using tags for cost allocation, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeTagsForResourceAsync(const Model::ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new health check.</p> <p>To create a new health check, send a
         * <code>POST</code> request to the <code>/2013-04-01/healthcheck</code> resource.
         * The request body must include a document with a
         * <code>CreateHealthCheckRequest</code> element. The response returns the
         * <code>CreateHealthCheckResponse</code> element, containing the health check ID
         * specified when adding health check to a resource record set. For information
         * about adding health checks to resource record sets, see
         * <a>ResourceRecordSet$HealthCheckId</a> in <a>ChangeResourceRecordSets</a>. </p>
         * <p>If you are registering EC2 instances with an Elastic Load Balancing (ELB)
         * load balancer, do not create Amazon Route 53 health checks for the EC2
         * instances. When you register an EC2 instance with a load balancer, you configure
         * settings for an ELB health check, which performs a similar function to an Amazon
         * Route 53 health check.</p> <p>You can associate health checks with failover
         * resource record sets in a private hosted zone. Note the following:</p> <ul> <li>
         * <p>Amazon Route 53 health checkers are outside the VPC. To check the health of
         * an endpoint within a VPC by IP address, you must assign a public IP address to
         * the instance in the VPC.</p> </li> <li> <p>You can configure a health checker to
         * check the health of an external resource that the instance relies on, such as a
         * database server.</p> </li> <li> <p>You can create a CloudWatch metric, associate
         * an alarm with the metric, and then create a health check that is based on the
         * state of the alarm. For example, you might create a CloudWatch metric that
         * checks the status of the Amazon EC2 <code>StatusCheckFailed</code> metric, add
         * an alarm to the metric, and then create a health check that is based on the
         * state of the alarm. For information about creating CloudWatch metrics and alarms
         * by using the CloudWatch console, see the <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/WhatIsCloudWatch.html">Amazon
         * CloudWatch User Guide</a>.</p> </li> </ul>
         */
        virtual Model::CreateHealthCheckOutcome CreateHealthCheck(const Model::CreateHealthCheckRequest& request) const;

        /**
         * <p>Creates a new health check.</p> <p>To create a new health check, send a
         * <code>POST</code> request to the <code>/2013-04-01/healthcheck</code> resource.
         * The request body must include a document with a
         * <code>CreateHealthCheckRequest</code> element. The response returns the
         * <code>CreateHealthCheckResponse</code> element, containing the health check ID
         * specified when adding health check to a resource record set. For information
         * about adding health checks to resource record sets, see
         * <a>ResourceRecordSet$HealthCheckId</a> in <a>ChangeResourceRecordSets</a>. </p>
         * <p>If you are registering EC2 instances with an Elastic Load Balancing (ELB)
         * load balancer, do not create Amazon Route 53 health checks for the EC2
         * instances. When you register an EC2 instance with a load balancer, you configure
         * settings for an ELB health check, which performs a similar function to an Amazon
         * Route 53 health check.</p> <p>You can associate health checks with failover
         * resource record sets in a private hosted zone. Note the following:</p> <ul> <li>
         * <p>Amazon Route 53 health checkers are outside the VPC. To check the health of
         * an endpoint within a VPC by IP address, you must assign a public IP address to
         * the instance in the VPC.</p> </li> <li> <p>You can configure a health checker to
         * check the health of an external resource that the instance relies on, such as a
         * database server.</p> </li> <li> <p>You can create a CloudWatch metric, associate
         * an alarm with the metric, and then create a health check that is based on the
         * state of the alarm. For example, you might create a CloudWatch metric that
         * checks the status of the Amazon EC2 <code>StatusCheckFailed</code> metric, add
         * an alarm to the metric, and then create a health check that is based on the
         * state of the alarm. For information about creating CloudWatch metrics and alarms
         * by using the CloudWatch console, see the <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/WhatIsCloudWatch.html">Amazon
         * CloudWatch User Guide</a>.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHealthCheckOutcomeCallable CreateHealthCheckCallable(const Model::CreateHealthCheckRequest& request) const;

        /**
         * <p>Creates a new health check.</p> <p>To create a new health check, send a
         * <code>POST</code> request to the <code>/2013-04-01/healthcheck</code> resource.
         * The request body must include a document with a
         * <code>CreateHealthCheckRequest</code> element. The response returns the
         * <code>CreateHealthCheckResponse</code> element, containing the health check ID
         * specified when adding health check to a resource record set. For information
         * about adding health checks to resource record sets, see
         * <a>ResourceRecordSet$HealthCheckId</a> in <a>ChangeResourceRecordSets</a>. </p>
         * <p>If you are registering EC2 instances with an Elastic Load Balancing (ELB)
         * load balancer, do not create Amazon Route 53 health checks for the EC2
         * instances. When you register an EC2 instance with a load balancer, you configure
         * settings for an ELB health check, which performs a similar function to an Amazon
         * Route 53 health check.</p> <p>You can associate health checks with failover
         * resource record sets in a private hosted zone. Note the following:</p> <ul> <li>
         * <p>Amazon Route 53 health checkers are outside the VPC. To check the health of
         * an endpoint within a VPC by IP address, you must assign a public IP address to
         * the instance in the VPC.</p> </li> <li> <p>You can configure a health checker to
         * check the health of an external resource that the instance relies on, such as a
         * database server.</p> </li> <li> <p>You can create a CloudWatch metric, associate
         * an alarm with the metric, and then create a health check that is based on the
         * state of the alarm. For example, you might create a CloudWatch metric that
         * checks the status of the Amazon EC2 <code>StatusCheckFailed</code> metric, add
         * an alarm to the metric, and then create a health check that is based on the
         * state of the alarm. For information about creating CloudWatch metrics and alarms
         * by using the CloudWatch console, see the <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/WhatIsCloudWatch.html">Amazon
         * CloudWatch User Guide</a>.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHealthCheckAsync(const Model::CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new public hosted zone, used to specify how the Domain Name System
         * (DNS) routes traffic on the Internet for a domain, such as example.com, and its
         * subdomains. </p> <important> <p>Public hosted zones can't be converted to a
         * private hosted zone or vice versa. Instead, create a new hosted zone with the
         * same name and create new resource record sets.</p> </important> <p>Send a
         * <code>POST</code> request to the <code>/2013-04-01/hostedzone</code> resource.
         * The request body must include a document with a
         * <code>CreateHostedZoneRequest</code> element. The response returns the
         * <code>CreateHostedZoneResponse</code> element containing metadata about the
         * hosted zone.</p> <p>Fore more information about charges for hosted zones, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</p>
         * <p>Note the following:</p> <ul> <li> <p>You can't create a hosted zone for a
         * top-level domain (TLD).</p> </li> <li> <p>Amazon Route 53 automatically creates
         * a default SOA record and four NS records for the zone. For more information
         * about SOA and NS records, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/SOA-NSrecords.html">NS
         * and SOA Records that Amazon Route 53 Creates for a Hosted Zone</a> in the
         * <i>Amazon Route 53 Developer Guide</i>.</p> </li> <li> <p>If your domain is
         * registered with a registrar other than Amazon Route 53, you must update the name
         * servers with your registrar to make Amazon Route 53 your DNS service. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/creating-migrating.html">Configuring
         * Amazon Route 53 as your DNS Service</a> in the <i>Amazon Route 53 Developer's
         * Guide</i>.</p> </li> </ul> <p>After creating a zone, its initial status is
         * <code>PENDING</code>. This means that it is not yet available on all DNS
         * servers. The status of the zone changes to <code>INSYNC</code> when the NS and
         * SOA records are available on all Amazon Route 53 DNS servers. </p> <p>When
         * trying to create a hosted zone using a reusable delegation set, specify an
         * optional DelegationSetId, and Amazon Route 53 would assign those 4 NS records
         * for the zone, instead of allotting a new one.</p>
         */
        virtual Model::CreateHostedZoneOutcome CreateHostedZone(const Model::CreateHostedZoneRequest& request) const;

        /**
         * <p>Creates a new public hosted zone, used to specify how the Domain Name System
         * (DNS) routes traffic on the Internet for a domain, such as example.com, and its
         * subdomains. </p> <important> <p>Public hosted zones can't be converted to a
         * private hosted zone or vice versa. Instead, create a new hosted zone with the
         * same name and create new resource record sets.</p> </important> <p>Send a
         * <code>POST</code> request to the <code>/2013-04-01/hostedzone</code> resource.
         * The request body must include a document with a
         * <code>CreateHostedZoneRequest</code> element. The response returns the
         * <code>CreateHostedZoneResponse</code> element containing metadata about the
         * hosted zone.</p> <p>Fore more information about charges for hosted zones, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</p>
         * <p>Note the following:</p> <ul> <li> <p>You can't create a hosted zone for a
         * top-level domain (TLD).</p> </li> <li> <p>Amazon Route 53 automatically creates
         * a default SOA record and four NS records for the zone. For more information
         * about SOA and NS records, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/SOA-NSrecords.html">NS
         * and SOA Records that Amazon Route 53 Creates for a Hosted Zone</a> in the
         * <i>Amazon Route 53 Developer Guide</i>.</p> </li> <li> <p>If your domain is
         * registered with a registrar other than Amazon Route 53, you must update the name
         * servers with your registrar to make Amazon Route 53 your DNS service. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/creating-migrating.html">Configuring
         * Amazon Route 53 as your DNS Service</a> in the <i>Amazon Route 53 Developer's
         * Guide</i>.</p> </li> </ul> <p>After creating a zone, its initial status is
         * <code>PENDING</code>. This means that it is not yet available on all DNS
         * servers. The status of the zone changes to <code>INSYNC</code> when the NS and
         * SOA records are available on all Amazon Route 53 DNS servers. </p> <p>When
         * trying to create a hosted zone using a reusable delegation set, specify an
         * optional DelegationSetId, and Amazon Route 53 would assign those 4 NS records
         * for the zone, instead of allotting a new one.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHostedZoneOutcomeCallable CreateHostedZoneCallable(const Model::CreateHostedZoneRequest& request) const;

        /**
         * <p>Creates a new public hosted zone, used to specify how the Domain Name System
         * (DNS) routes traffic on the Internet for a domain, such as example.com, and its
         * subdomains. </p> <important> <p>Public hosted zones can't be converted to a
         * private hosted zone or vice versa. Instead, create a new hosted zone with the
         * same name and create new resource record sets.</p> </important> <p>Send a
         * <code>POST</code> request to the <code>/2013-04-01/hostedzone</code> resource.
         * The request body must include a document with a
         * <code>CreateHostedZoneRequest</code> element. The response returns the
         * <code>CreateHostedZoneResponse</code> element containing metadata about the
         * hosted zone.</p> <p>Fore more information about charges for hosted zones, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</p>
         * <p>Note the following:</p> <ul> <li> <p>You can't create a hosted zone for a
         * top-level domain (TLD).</p> </li> <li> <p>Amazon Route 53 automatically creates
         * a default SOA record and four NS records for the zone. For more information
         * about SOA and NS records, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/SOA-NSrecords.html">NS
         * and SOA Records that Amazon Route 53 Creates for a Hosted Zone</a> in the
         * <i>Amazon Route 53 Developer Guide</i>.</p> </li> <li> <p>If your domain is
         * registered with a registrar other than Amazon Route 53, you must update the name
         * servers with your registrar to make Amazon Route 53 your DNS service. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/creating-migrating.html">Configuring
         * Amazon Route 53 as your DNS Service</a> in the <i>Amazon Route 53 Developer's
         * Guide</i>.</p> </li> </ul> <p>After creating a zone, its initial status is
         * <code>PENDING</code>. This means that it is not yet available on all DNS
         * servers. The status of the zone changes to <code>INSYNC</code> when the NS and
         * SOA records are available on all Amazon Route 53 DNS servers. </p> <p>When
         * trying to create a hosted zone using a reusable delegation set, specify an
         * optional DelegationSetId, and Amazon Route 53 would assign those 4 NS records
         * for the zone, instead of allotting a new one.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHostedZoneAsync(const Model::CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a delegation set (a group of four name servers) that can be reused by
         * multiple hosted zones. If a hosted zoned ID is specified,
         * <code>CreateReusableDelegationSet</code> marks the delegation set associated
         * with that zone as reusable</p> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/delegationset</code> resource. The request body must include a
         * document with a <code>CreateReusableDelegationSetRequest</code> element.</p>
         * <note> <p>A reusable delegation set can't be associated with a private hosted
         * zone/</p> </note> <p>For more information, including a procedure on how to
         * create and configure a reusable delegation set (also known as white label name
         * servers), see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/white-label-name-servers.html">Configuring
         * White Label Name Servers</a>.</p>
         */
        virtual Model::CreateReusableDelegationSetOutcome CreateReusableDelegationSet(const Model::CreateReusableDelegationSetRequest& request) const;

        /**
         * <p>Creates a delegation set (a group of four name servers) that can be reused by
         * multiple hosted zones. If a hosted zoned ID is specified,
         * <code>CreateReusableDelegationSet</code> marks the delegation set associated
         * with that zone as reusable</p> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/delegationset</code> resource. The request body must include a
         * document with a <code>CreateReusableDelegationSetRequest</code> element.</p>
         * <note> <p>A reusable delegation set can't be associated with a private hosted
         * zone/</p> </note> <p>For more information, including a procedure on how to
         * create and configure a reusable delegation set (also known as white label name
         * servers), see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/white-label-name-servers.html">Configuring
         * White Label Name Servers</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReusableDelegationSetOutcomeCallable CreateReusableDelegationSetCallable(const Model::CreateReusableDelegationSetRequest& request) const;

        /**
         * <p>Creates a delegation set (a group of four name servers) that can be reused by
         * multiple hosted zones. If a hosted zoned ID is specified,
         * <code>CreateReusableDelegationSet</code> marks the delegation set associated
         * with that zone as reusable</p> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/delegationset</code> resource. The request body must include a
         * document with a <code>CreateReusableDelegationSetRequest</code> element.</p>
         * <note> <p>A reusable delegation set can't be associated with a private hosted
         * zone/</p> </note> <p>For more information, including a procedure on how to
         * create and configure a reusable delegation set (also known as white label name
         * servers), see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/white-label-name-servers.html">Configuring
         * White Label Name Servers</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReusableDelegationSetAsync(const Model::CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a traffic policy, which you use to create multiple DNS resource
         * record sets for one domain name (such as example.com) or one subdomain name
         * (such as www.example.com).</p> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/trafficpolicy</code> resource. The request body must include a
         * document with a <code>CreateTrafficPolicyRequest</code> element. The response
         * includes the <code>CreateTrafficPolicyResponse</code> element, which contains
         * information about the new traffic policy.</p>
         */
        virtual Model::CreateTrafficPolicyOutcome CreateTrafficPolicy(const Model::CreateTrafficPolicyRequest& request) const;

        /**
         * <p>Creates a traffic policy, which you use to create multiple DNS resource
         * record sets for one domain name (such as example.com) or one subdomain name
         * (such as www.example.com).</p> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/trafficpolicy</code> resource. The request body must include a
         * document with a <code>CreateTrafficPolicyRequest</code> element. The response
         * includes the <code>CreateTrafficPolicyResponse</code> element, which contains
         * information about the new traffic policy.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficPolicyOutcomeCallable CreateTrafficPolicyCallable(const Model::CreateTrafficPolicyRequest& request) const;

        /**
         * <p>Creates a traffic policy, which you use to create multiple DNS resource
         * record sets for one domain name (such as example.com) or one subdomain name
         * (such as www.example.com).</p> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/trafficpolicy</code> resource. The request body must include a
         * document with a <code>CreateTrafficPolicyRequest</code> element. The response
         * includes the <code>CreateTrafficPolicyResponse</code> element, which contains
         * information about the new traffic policy.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficPolicyAsync(const Model::CreateTrafficPolicyRequest& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates resource record sets in a specified hosted zone based on the settings
         * in a specified traffic policy version. In addition,
         * <code>CreateTrafficPolicyInstance</code> associates the resource record sets
         * with a specified domain name (such as example.com) or subdomain name (such as
         * www.example.com). Amazon Route 53 responds to DNS queries for the domain or
         * subdomain name by using the resource record sets that
         * <code>CreateTrafficPolicyInstance</code> created.</p> <p>Send a
         * <code>POST</code> request to the <code>/2013-04-01/trafficpolicyinstance</code>
         * resource. The request body must include a document with a
         * <code>CreateTrafficPolicyRequest</code> element. The response returns the
         * <code>CreateTrafficPolicyInstanceResponse</code> element, which contains
         * information about the traffic policy instance.</p>
         */
        virtual Model::CreateTrafficPolicyInstanceOutcome CreateTrafficPolicyInstance(const Model::CreateTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Creates resource record sets in a specified hosted zone based on the settings
         * in a specified traffic policy version. In addition,
         * <code>CreateTrafficPolicyInstance</code> associates the resource record sets
         * with a specified domain name (such as example.com) or subdomain name (such as
         * www.example.com). Amazon Route 53 responds to DNS queries for the domain or
         * subdomain name by using the resource record sets that
         * <code>CreateTrafficPolicyInstance</code> created.</p> <p>Send a
         * <code>POST</code> request to the <code>/2013-04-01/trafficpolicyinstance</code>
         * resource. The request body must include a document with a
         * <code>CreateTrafficPolicyRequest</code> element. The response returns the
         * <code>CreateTrafficPolicyInstanceResponse</code> element, which contains
         * information about the traffic policy instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficPolicyInstanceOutcomeCallable CreateTrafficPolicyInstanceCallable(const Model::CreateTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Creates resource record sets in a specified hosted zone based on the settings
         * in a specified traffic policy version. In addition,
         * <code>CreateTrafficPolicyInstance</code> associates the resource record sets
         * with a specified domain name (such as example.com) or subdomain name (such as
         * www.example.com). Amazon Route 53 responds to DNS queries for the domain or
         * subdomain name by using the resource record sets that
         * <code>CreateTrafficPolicyInstance</code> created.</p> <p>Send a
         * <code>POST</code> request to the <code>/2013-04-01/trafficpolicyinstance</code>
         * resource. The request body must include a document with a
         * <code>CreateTrafficPolicyRequest</code> element. The response returns the
         * <code>CreateTrafficPolicyInstanceResponse</code> element, which contains
         * information about the traffic policy instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficPolicyInstanceAsync(const Model::CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of an existing traffic policy. When you create a new
         * version of a traffic policy, you specify the ID of the traffic policy that you
         * want to update and a JSON-formatted document that describes the new version. You
         * use traffic policies to create multiple DNS resource record sets for one domain
         * name (such as example.com) or one subdomain name (such as www.example.com). You
         * can create a maximum of 1000 versions of a traffic policy. If you reach the
         * limit and need to create another version, you'll need to start a new traffic
         * policy.</p> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/trafficpolicy/</code> resource. The request body includes a
         * document with a <code>CreateTrafficPolicyVersionRequest</code> element. The
         * response returns the <code>CreateTrafficPolicyVersionResponse</code> element,
         * which contains information about the new version of the traffic policy.</p>
         */
        virtual Model::CreateTrafficPolicyVersionOutcome CreateTrafficPolicyVersion(const Model::CreateTrafficPolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of an existing traffic policy. When you create a new
         * version of a traffic policy, you specify the ID of the traffic policy that you
         * want to update and a JSON-formatted document that describes the new version. You
         * use traffic policies to create multiple DNS resource record sets for one domain
         * name (such as example.com) or one subdomain name (such as www.example.com). You
         * can create a maximum of 1000 versions of a traffic policy. If you reach the
         * limit and need to create another version, you'll need to start a new traffic
         * policy.</p> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/trafficpolicy/</code> resource. The request body includes a
         * document with a <code>CreateTrafficPolicyVersionRequest</code> element. The
         * response returns the <code>CreateTrafficPolicyVersionResponse</code> element,
         * which contains information about the new version of the traffic policy.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficPolicyVersionOutcomeCallable CreateTrafficPolicyVersionCallable(const Model::CreateTrafficPolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of an existing traffic policy. When you create a new
         * version of a traffic policy, you specify the ID of the traffic policy that you
         * want to update and a JSON-formatted document that describes the new version. You
         * use traffic policies to create multiple DNS resource record sets for one domain
         * name (such as example.com) or one subdomain name (such as www.example.com). You
         * can create a maximum of 1000 versions of a traffic policy. If you reach the
         * limit and need to create another version, you'll need to start a new traffic
         * policy.</p> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/trafficpolicy/</code> resource. The request body includes a
         * document with a <code>CreateTrafficPolicyVersionRequest</code> element. The
         * response returns the <code>CreateTrafficPolicyVersionResponse</code> element,
         * which contains information about the new version of the traffic policy.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficPolicyVersionAsync(const Model::CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Authorizes the AWS account that created a specified VPC to submit an
         * <code>AssociateVPCWithHostedZone</code> request to associate the VPC with a
         * specified hosted zone that was created by a different account. To submit a
         * <code>CreateVPCAssociationAuthorization</code> request, you must use the account
         * that created the hosted zone. After you authorize the association, use the
         * account that created the VPC to submit an
         * <code>AssociateVPCWithHostedZone</code> request.</p> <note> <p>If you want to
         * associate multiple VPCs that you created by using one account with a hosted zone
         * that you created by using a different account, you must submit one authorization
         * request for each VPC.</p> </note> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation</code> resource. The request body must include a
         * document with a <code>CreateVPCAssociationAuthorizationRequest</code> element.
         * The response contains information about the authorization.</p>
         */
        virtual Model::CreateVPCAssociationAuthorizationOutcome CreateVPCAssociationAuthorization(const Model::CreateVPCAssociationAuthorizationRequest& request) const;

        /**
         * <p>Authorizes the AWS account that created a specified VPC to submit an
         * <code>AssociateVPCWithHostedZone</code> request to associate the VPC with a
         * specified hosted zone that was created by a different account. To submit a
         * <code>CreateVPCAssociationAuthorization</code> request, you must use the account
         * that created the hosted zone. After you authorize the association, use the
         * account that created the VPC to submit an
         * <code>AssociateVPCWithHostedZone</code> request.</p> <note> <p>If you want to
         * associate multiple VPCs that you created by using one account with a hosted zone
         * that you created by using a different account, you must submit one authorization
         * request for each VPC.</p> </note> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation</code> resource. The request body must include a
         * document with a <code>CreateVPCAssociationAuthorizationRequest</code> element.
         * The response contains information about the authorization.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVPCAssociationAuthorizationOutcomeCallable CreateVPCAssociationAuthorizationCallable(const Model::CreateVPCAssociationAuthorizationRequest& request) const;

        /**
         * <p>Authorizes the AWS account that created a specified VPC to submit an
         * <code>AssociateVPCWithHostedZone</code> request to associate the VPC with a
         * specified hosted zone that was created by a different account. To submit a
         * <code>CreateVPCAssociationAuthorization</code> request, you must use the account
         * that created the hosted zone. After you authorize the association, use the
         * account that created the VPC to submit an
         * <code>AssociateVPCWithHostedZone</code> request.</p> <note> <p>If you want to
         * associate multiple VPCs that you created by using one account with a hosted zone
         * that you created by using a different account, you must submit one authorization
         * request for each VPC.</p> </note> <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation</code> resource. The request body must include a
         * document with a <code>CreateVPCAssociationAuthorizationRequest</code> element.
         * The response contains information about the authorization.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVPCAssociationAuthorizationAsync(const Model::CreateVPCAssociationAuthorizationRequest& request, const CreateVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a health check. Send a <code>DELETE</code> request to the
         * <code>/2013-04-01/healthcheck/<i>health check ID</i> </code> resource.</p>
         * <important> <p>Amazon Route 53 does not prevent you from deleting a health check
         * even if the health check is associated with one or more resource record sets. If
         * you delete a health check and you don't update the associated resource record
         * sets, the future status of the health check can't be predicted and may change.
         * This will affect the routing of DNS queries for your DNS failover configuration.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html#health-checks-deleting.html">Replacing
         * and Deleting Health Checks</a> in the Amazon Route 53 Developer Guide.</p>
         * </important>
         */
        virtual Model::DeleteHealthCheckOutcome DeleteHealthCheck(const Model::DeleteHealthCheckRequest& request) const;

        /**
         * <p>Deletes a health check. Send a <code>DELETE</code> request to the
         * <code>/2013-04-01/healthcheck/<i>health check ID</i> </code> resource.</p>
         * <important> <p>Amazon Route 53 does not prevent you from deleting a health check
         * even if the health check is associated with one or more resource record sets. If
         * you delete a health check and you don't update the associated resource record
         * sets, the future status of the health check can't be predicted and may change.
         * This will affect the routing of DNS queries for your DNS failover configuration.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html#health-checks-deleting.html">Replacing
         * and Deleting Health Checks</a> in the Amazon Route 53 Developer Guide.</p>
         * </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHealthCheckOutcomeCallable DeleteHealthCheckCallable(const Model::DeleteHealthCheckRequest& request) const;

        /**
         * <p>Deletes a health check. Send a <code>DELETE</code> request to the
         * <code>/2013-04-01/healthcheck/<i>health check ID</i> </code> resource.</p>
         * <important> <p>Amazon Route 53 does not prevent you from deleting a health check
         * even if the health check is associated with one or more resource record sets. If
         * you delete a health check and you don't update the associated resource record
         * sets, the future status of the health check can't be predicted and may change.
         * This will affect the routing of DNS queries for your DNS failover configuration.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html#health-checks-deleting.html">Replacing
         * and Deleting Health Checks</a> in the Amazon Route 53 Developer Guide.</p>
         * </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHealthCheckAsync(const Model::DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a hosted zone. Send a <code>DELETE</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/hostedzone/<i>hosted zone ID</i>
         * </code> resource.</p> <important> <p>Delete a hosted zone only if there are no
         * resource record sets other than the default SOA record and NS resource record
         * sets. If the hosted zone contains other resource record sets, delete them before
         * deleting the hosted zone. If you try to delete a hosted zone that contains other
         * resource record sets, Amazon Route 53 denies your request with a
         * <code>HostedZoneNotEmpty</code> error. For information about deleting records
         * from your hosted zone, see <a>ChangeResourceRecordSets</a>.</p> </important>
         */
        virtual Model::DeleteHostedZoneOutcome DeleteHostedZone(const Model::DeleteHostedZoneRequest& request) const;

        /**
         * <p>Deletes a hosted zone. Send a <code>DELETE</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/hostedzone/<i>hosted zone ID</i>
         * </code> resource.</p> <important> <p>Delete a hosted zone only if there are no
         * resource record sets other than the default SOA record and NS resource record
         * sets. If the hosted zone contains other resource record sets, delete them before
         * deleting the hosted zone. If you try to delete a hosted zone that contains other
         * resource record sets, Amazon Route 53 denies your request with a
         * <code>HostedZoneNotEmpty</code> error. For information about deleting records
         * from your hosted zone, see <a>ChangeResourceRecordSets</a>.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHostedZoneOutcomeCallable DeleteHostedZoneCallable(const Model::DeleteHostedZoneRequest& request) const;

        /**
         * <p>Deletes a hosted zone. Send a <code>DELETE</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/hostedzone/<i>hosted zone ID</i>
         * </code> resource.</p> <important> <p>Delete a hosted zone only if there are no
         * resource record sets other than the default SOA record and NS resource record
         * sets. If the hosted zone contains other resource record sets, delete them before
         * deleting the hosted zone. If you try to delete a hosted zone that contains other
         * resource record sets, Amazon Route 53 denies your request with a
         * <code>HostedZoneNotEmpty</code> error. For information about deleting records
         * from your hosted zone, see <a>ChangeResourceRecordSets</a>.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHostedZoneAsync(const Model::DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a reusable delegation set. Send a <code>DELETE</code> request to the
         * <code>/2013-04-01/delegationset/<i>delegation set ID</i> </code> resource.</p>
         * <important> <p> You can delete a reusable delegation set only if there are no
         * associated hosted zones.</p> </important> <p>To verify that the reusable
         * delegation set is not associated with any hosted zones, run the
         * <a>GetReusableDelegationSet</a> action and specify the ID of the reusable
         * delegation set that you want to delete.</p>
         */
        virtual Model::DeleteReusableDelegationSetOutcome DeleteReusableDelegationSet(const Model::DeleteReusableDelegationSetRequest& request) const;

        /**
         * <p>Deletes a reusable delegation set. Send a <code>DELETE</code> request to the
         * <code>/2013-04-01/delegationset/<i>delegation set ID</i> </code> resource.</p>
         * <important> <p> You can delete a reusable delegation set only if there are no
         * associated hosted zones.</p> </important> <p>To verify that the reusable
         * delegation set is not associated with any hosted zones, run the
         * <a>GetReusableDelegationSet</a> action and specify the ID of the reusable
         * delegation set that you want to delete.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReusableDelegationSetOutcomeCallable DeleteReusableDelegationSetCallable(const Model::DeleteReusableDelegationSetRequest& request) const;

        /**
         * <p>Deletes a reusable delegation set. Send a <code>DELETE</code> request to the
         * <code>/2013-04-01/delegationset/<i>delegation set ID</i> </code> resource.</p>
         * <important> <p> You can delete a reusable delegation set only if there are no
         * associated hosted zones.</p> </important> <p>To verify that the reusable
         * delegation set is not associated with any hosted zones, run the
         * <a>GetReusableDelegationSet</a> action and specify the ID of the reusable
         * delegation set that you want to delete.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReusableDelegationSetAsync(const Model::DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a traffic policy.</p> <p>Send a <code>DELETE</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicy</code> resource.</p>
         */
        virtual Model::DeleteTrafficPolicyOutcome DeleteTrafficPolicy(const Model::DeleteTrafficPolicyRequest& request) const;

        /**
         * <p>Deletes a traffic policy.</p> <p>Send a <code>DELETE</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicy</code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficPolicyOutcomeCallable DeleteTrafficPolicyCallable(const Model::DeleteTrafficPolicyRequest& request) const;

        /**
         * <p>Deletes a traffic policy.</p> <p>Send a <code>DELETE</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicy</code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficPolicyAsync(const Model::DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a traffic policy instance and all of the resource record sets that
         * Amazon Route 53 created when you created the instance.</p> <p>Send a
         * <code>DELETE</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/trafficpolicy/<i>traffic policy instance ID</i> </code>
         * resource.</p> <note> <p>In the Amazon Route 53 console, traffic policy instances
         * are known as policy records.</p> </note>
         */
        virtual Model::DeleteTrafficPolicyInstanceOutcome DeleteTrafficPolicyInstance(const Model::DeleteTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Deletes a traffic policy instance and all of the resource record sets that
         * Amazon Route 53 created when you created the instance.</p> <p>Send a
         * <code>DELETE</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/trafficpolicy/<i>traffic policy instance ID</i> </code>
         * resource.</p> <note> <p>In the Amazon Route 53 console, traffic policy instances
         * are known as policy records.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficPolicyInstanceOutcomeCallable DeleteTrafficPolicyInstanceCallable(const Model::DeleteTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Deletes a traffic policy instance and all of the resource record sets that
         * Amazon Route 53 created when you created the instance.</p> <p>Send a
         * <code>DELETE</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/trafficpolicy/<i>traffic policy instance ID</i> </code>
         * resource.</p> <note> <p>In the Amazon Route 53 console, traffic policy instances
         * are known as policy records.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficPolicyInstanceAsync(const Model::DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes authorization to submit an <code>AssociateVPCWithHostedZone</code>
         * request to associate a specified VPC with a hosted zone that was created by a
         * different account. You must use the account that created the hosted zone to
         * submit a <code>DeleteVPCAssociationAuthorization</code> request.</p> <important>
         * <p>Sending this request only prevents the AWS account that created the VPC from
         * associating the VPC with the Amazon Route 53 hosted zone in the future. If the
         * VPC is already associated with the hosted zone,
         * <code>DeleteVPCAssociationAuthorization</code> won't disassociate the VPC from
         * the hosted zone. If you want to delete an existing association, use
         * <code>DisassociateVPCFromHostedZone</code>.</p> </important> <p>Send a
         * <code>DELETE</code> request to the <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/deauthorizevpcassociation</code> resource. The request body must include
         * a document with a <code>DeleteVPCAssociationAuthorizationRequest</code>
         * element.</p>
         */
        virtual Model::DeleteVPCAssociationAuthorizationOutcome DeleteVPCAssociationAuthorization(const Model::DeleteVPCAssociationAuthorizationRequest& request) const;

        /**
         * <p>Removes authorization to submit an <code>AssociateVPCWithHostedZone</code>
         * request to associate a specified VPC with a hosted zone that was created by a
         * different account. You must use the account that created the hosted zone to
         * submit a <code>DeleteVPCAssociationAuthorization</code> request.</p> <important>
         * <p>Sending this request only prevents the AWS account that created the VPC from
         * associating the VPC with the Amazon Route 53 hosted zone in the future. If the
         * VPC is already associated with the hosted zone,
         * <code>DeleteVPCAssociationAuthorization</code> won't disassociate the VPC from
         * the hosted zone. If you want to delete an existing association, use
         * <code>DisassociateVPCFromHostedZone</code>.</p> </important> <p>Send a
         * <code>DELETE</code> request to the <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/deauthorizevpcassociation</code> resource. The request body must include
         * a document with a <code>DeleteVPCAssociationAuthorizationRequest</code>
         * element.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVPCAssociationAuthorizationOutcomeCallable DeleteVPCAssociationAuthorizationCallable(const Model::DeleteVPCAssociationAuthorizationRequest& request) const;

        /**
         * <p>Removes authorization to submit an <code>AssociateVPCWithHostedZone</code>
         * request to associate a specified VPC with a hosted zone that was created by a
         * different account. You must use the account that created the hosted zone to
         * submit a <code>DeleteVPCAssociationAuthorization</code> request.</p> <important>
         * <p>Sending this request only prevents the AWS account that created the VPC from
         * associating the VPC with the Amazon Route 53 hosted zone in the future. If the
         * VPC is already associated with the hosted zone,
         * <code>DeleteVPCAssociationAuthorization</code> won't disassociate the VPC from
         * the hosted zone. If you want to delete an existing association, use
         * <code>DisassociateVPCFromHostedZone</code>.</p> </important> <p>Send a
         * <code>DELETE</code> request to the <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/deauthorizevpcassociation</code> resource. The request body must include
         * a document with a <code>DeleteVPCAssociationAuthorizationRequest</code>
         * element.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVPCAssociationAuthorizationAsync(const Model::DeleteVPCAssociationAuthorizationRequest& request, const DeleteVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a VPC from a Amazon Route 53 private hosted zone. </p> <note>
         * <p>You can't disassociate the last VPC from a private hosted zone.</p> </note>
         * <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone ID</i>/disassociatevpc</code>
         * resource. The request body must include a document with a
         * <code>DisassociateVPCFromHostedZoneRequest</code> element. The response includes
         * a <code>DisassociateVPCFromHostedZoneResponse</code> element.</p> <important>
         * <p>You can't disassociate a VPC from a private hosted zone when only one VPC is
         * associated with the hosted zone. You also can't convert a private hosted zone
         * into a public hosted zone.</p> </important>
         */
        virtual Model::DisassociateVPCFromHostedZoneOutcome DisassociateVPCFromHostedZone(const Model::DisassociateVPCFromHostedZoneRequest& request) const;

        /**
         * <p>Disassociates a VPC from a Amazon Route 53 private hosted zone. </p> <note>
         * <p>You can't disassociate the last VPC from a private hosted zone.</p> </note>
         * <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone ID</i>/disassociatevpc</code>
         * resource. The request body must include a document with a
         * <code>DisassociateVPCFromHostedZoneRequest</code> element. The response includes
         * a <code>DisassociateVPCFromHostedZoneResponse</code> element.</p> <important>
         * <p>You can't disassociate a VPC from a private hosted zone when only one VPC is
         * associated with the hosted zone. You also can't convert a private hosted zone
         * into a public hosted zone.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateVPCFromHostedZoneOutcomeCallable DisassociateVPCFromHostedZoneCallable(const Model::DisassociateVPCFromHostedZoneRequest& request) const;

        /**
         * <p>Disassociates a VPC from a Amazon Route 53 private hosted zone. </p> <note>
         * <p>You can't disassociate the last VPC from a private hosted zone.</p> </note>
         * <p>Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone ID</i>/disassociatevpc</code>
         * resource. The request body must include a document with a
         * <code>DisassociateVPCFromHostedZoneRequest</code> element. The response includes
         * a <code>DisassociateVPCFromHostedZoneResponse</code> element.</p> <important>
         * <p>You can't disassociate a VPC from a private hosted zone when only one VPC is
         * associated with the hosted zone. You also can't convert a private hosted zone
         * into a public hosted zone.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateVPCFromHostedZoneAsync(const Model::DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of a change batch request. The status is one of
         * the following values:</p> <ul> <li> <p> <code>PENDING</code> indicates that the
         * changes in this request have not replicated to all Amazon Route 53 DNS servers.
         * This is the initial status of all change batch requests.</p> </li> <li> <p>
         * <code>INSYNC</code> indicates that the changes have replicated to all Amazon
         * Route 53 DNS servers. </p> </li> </ul>
         */
        virtual Model::GetChangeOutcome GetChange(const Model::GetChangeRequest& request) const;

        /**
         * <p>Returns the current status of a change batch request. The status is one of
         * the following values:</p> <ul> <li> <p> <code>PENDING</code> indicates that the
         * changes in this request have not replicated to all Amazon Route 53 DNS servers.
         * This is the initial status of all change batch requests.</p> </li> <li> <p>
         * <code>INSYNC</code> indicates that the changes have replicated to all Amazon
         * Route 53 DNS servers. </p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChangeOutcomeCallable GetChangeCallable(const Model::GetChangeRequest& request) const;

        /**
         * <p>Returns the current status of a change batch request. The status is one of
         * the following values:</p> <ul> <li> <p> <code>PENDING</code> indicates that the
         * changes in this request have not replicated to all Amazon Route 53 DNS servers.
         * This is the initial status of all change batch requests.</p> </li> <li> <p>
         * <code>INSYNC</code> indicates that the changes have replicated to all Amazon
         * Route 53 DNS servers. </p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChangeAsync(const Model::GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of the IP ranges used by Amazon Route 53 health checkers to
         * check the health of your resources. Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/checkeripranges</code> resource. Use
         * these IP addresses to configure router and firewall rules to allow health
         * checkers to check the health of your resources.</p>
         */
        virtual Model::GetCheckerIpRangesOutcome GetCheckerIpRanges(const Model::GetCheckerIpRangesRequest& request) const;

        /**
         * <p>Retrieves a list of the IP ranges used by Amazon Route 53 health checkers to
         * check the health of your resources. Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/checkeripranges</code> resource. Use
         * these IP addresses to configure router and firewall rules to allow health
         * checkers to check the health of your resources.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCheckerIpRangesOutcomeCallable GetCheckerIpRangesCallable(const Model::GetCheckerIpRangesRequest& request) const;

        /**
         * <p>Retrieves a list of the IP ranges used by Amazon Route 53 health checkers to
         * check the health of your resources. Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/checkeripranges</code> resource. Use
         * these IP addresses to configure router and firewall rules to allow health
         * checkers to check the health of your resources.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCheckerIpRangesAsync(const Model::GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a single geo location. Send a <code>GET</code> request to the
         * <code>/2013-04-01/geolocation</code> resource with one of these options:
         * continentcode | countrycode | countrycode and subdivisioncode.</p>
         */
        virtual Model::GetGeoLocationOutcome GetGeoLocation(const Model::GetGeoLocationRequest& request) const;

        /**
         * <p>Retrieves a single geo location. Send a <code>GET</code> request to the
         * <code>/2013-04-01/geolocation</code> resource with one of these options:
         * continentcode | countrycode | countrycode and subdivisioncode.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGeoLocationOutcomeCallable GetGeoLocationCallable(const Model::GetGeoLocationRequest& request) const;

        /**
         * <p>Retrieves a single geo location. Send a <code>GET</code> request to the
         * <code>/2013-04-01/geolocation</code> resource with one of these options:
         * continentcode | countrycode | countrycode and subdivisioncode.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGeoLocationAsync(const Model::GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified health check. Send a <code>GET</code>
         * request to the <code>/2013-04-01/healthcheck/<i>health check ID</i> </code>
         * resource. For more information about using the console to perform this
         * operation, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover.html">Amazon
         * Route 53 Health Checks and DNS Failover</a> in the Amazon Route 53 Developer
         * Guide.</p>
         */
        virtual Model::GetHealthCheckOutcome GetHealthCheck(const Model::GetHealthCheckRequest& request) const;

        /**
         * <p>Gets information about a specified health check. Send a <code>GET</code>
         * request to the <code>/2013-04-01/healthcheck/<i>health check ID</i> </code>
         * resource. For more information about using the console to perform this
         * operation, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover.html">Amazon
         * Route 53 Health Checks and DNS Failover</a> in the Amazon Route 53 Developer
         * Guide.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckOutcomeCallable GetHealthCheckCallable(const Model::GetHealthCheckRequest& request) const;

        /**
         * <p>Gets information about a specified health check. Send a <code>GET</code>
         * request to the <code>/2013-04-01/healthcheck/<i>health check ID</i> </code>
         * resource. For more information about using the console to perform this
         * operation, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover.html">Amazon
         * Route 53 Health Checks and DNS Failover</a> in the Amazon Route 53 Developer
         * Guide.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckAsync(const Model::GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a count of all your health checks, send a <code>GET</code>
         * request to the <code>/2013-04-01/healthcheckcount</code> resource.</p>
         */
        virtual Model::GetHealthCheckCountOutcome GetHealthCheckCount(const Model::GetHealthCheckCountRequest& request) const;

        /**
         * <p>To retrieve a count of all your health checks, send a <code>GET</code>
         * request to the <code>/2013-04-01/healthcheckcount</code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckCountOutcomeCallable GetHealthCheckCountCallable(const Model::GetHealthCheckCountRequest& request) const;

        /**
         * <p>To retrieve a count of all your health checks, send a <code>GET</code>
         * request to the <code>/2013-04-01/healthcheckcount</code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckCountAsync(const Model::GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If you want to learn why a health check is currently failing or why it failed
         * most recently (if at all), you can get the failure reason for the most recent
         * failure. Send a <code>GET</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/healthcheck/<i>health check ID</i>/lastfailurereason</code>
         * resource.</p>
         */
        virtual Model::GetHealthCheckLastFailureReasonOutcome GetHealthCheckLastFailureReason(const Model::GetHealthCheckLastFailureReasonRequest& request) const;

        /**
         * <p>If you want to learn why a health check is currently failing or why it failed
         * most recently (if at all), you can get the failure reason for the most recent
         * failure. Send a <code>GET</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/healthcheck/<i>health check ID</i>/lastfailurereason</code>
         * resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckLastFailureReasonOutcomeCallable GetHealthCheckLastFailureReasonCallable(const Model::GetHealthCheckLastFailureReasonRequest& request) const;

        /**
         * <p>If you want to learn why a health check is currently failing or why it failed
         * most recently (if at all), you can get the failure reason for the most recent
         * failure. Send a <code>GET</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/healthcheck/<i>health check ID</i>/lastfailurereason</code>
         * resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckLastFailureReasonAsync(const Model::GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets status of a specified health check. Send a <code>GET</code> request to
         * the <code>/2013-04-01/healthcheck/<i>health check ID</i>/status</code> resource.
         * You can use this call to get a health check's current status. </p>
         */
        virtual Model::GetHealthCheckStatusOutcome GetHealthCheckStatus(const Model::GetHealthCheckStatusRequest& request) const;

        /**
         * <p>Gets status of a specified health check. Send a <code>GET</code> request to
         * the <code>/2013-04-01/healthcheck/<i>health check ID</i>/status</code> resource.
         * You can use this call to get a health check's current status. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckStatusOutcomeCallable GetHealthCheckStatusCallable(const Model::GetHealthCheckStatusRequest& request) const;

        /**
         * <p>Gets status of a specified health check. Send a <code>GET</code> request to
         * the <code>/2013-04-01/healthcheck/<i>health check ID</i>/status</code> resource.
         * You can use this call to get a health check's current status. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckStatusAsync(const Model::GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the delegation set for a hosted zone, including the four name
         * servers assigned to the hosted zone. Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/hostedzone/<i>hosted zone ID</i>
         * </code> resource. </p>
         */
        virtual Model::GetHostedZoneOutcome GetHostedZone(const Model::GetHostedZoneRequest& request) const;

        /**
         * <p>Retrieves the delegation set for a hosted zone, including the four name
         * servers assigned to the hosted zone. Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/hostedzone/<i>hosted zone ID</i>
         * </code> resource. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostedZoneOutcomeCallable GetHostedZoneCallable(const Model::GetHostedZoneRequest& request) const;

        /**
         * <p>Retrieves the delegation set for a hosted zone, including the four name
         * servers assigned to the hosted zone. Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/hostedzone/<i>hosted zone ID</i>
         * </code> resource. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostedZoneAsync(const Model::GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a count of all your hosted zones. Send a <code>GET</code> request
         * to the <code>/2013-04-01/hostedzonecount</code> resource.</p>
         */
        virtual Model::GetHostedZoneCountOutcome GetHostedZoneCount(const Model::GetHostedZoneCountRequest& request) const;

        /**
         * <p>Retrieves a count of all your hosted zones. Send a <code>GET</code> request
         * to the <code>/2013-04-01/hostedzonecount</code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostedZoneCountOutcomeCallable GetHostedZoneCountCallable(const Model::GetHostedZoneCountRequest& request) const;

        /**
         * <p>Retrieves a count of all your hosted zones. Send a <code>GET</code> request
         * to the <code>/2013-04-01/hostedzonecount</code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostedZoneCountAsync(const Model::GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the reusable delegation set. Send a <code>GET</code> request to the
         * <code>/2013-04-01/delegationset/<i>delegation set ID</i> </code> resource.</p>
         */
        virtual Model::GetReusableDelegationSetOutcome GetReusableDelegationSet(const Model::GetReusableDelegationSetRequest& request) const;

        /**
         * <p>Retrieves the reusable delegation set. Send a <code>GET</code> request to the
         * <code>/2013-04-01/delegationset/<i>delegation set ID</i> </code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReusableDelegationSetOutcomeCallable GetReusableDelegationSetCallable(const Model::GetReusableDelegationSetRequest& request) const;

        /**
         * <p>Retrieves the reusable delegation set. Send a <code>GET</code> request to the
         * <code>/2013-04-01/delegationset/<i>delegation set ID</i> </code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReusableDelegationSetAsync(const Model::GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specific traffic policy version.</p> <p>Send a
         * <code>GET</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/trafficpolicy</code> resource.</p>
         */
        virtual Model::GetTrafficPolicyOutcome GetTrafficPolicy(const Model::GetTrafficPolicyRequest& request) const;

        /**
         * <p>Gets information about a specific traffic policy version.</p> <p>Send a
         * <code>GET</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/trafficpolicy</code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrafficPolicyOutcomeCallable GetTrafficPolicyCallable(const Model::GetTrafficPolicyRequest& request) const;

        /**
         * <p>Gets information about a specific traffic policy version.</p> <p>Send a
         * <code>GET</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/trafficpolicy</code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrafficPolicyAsync(const Model::GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified traffic policy instance.</p> <p>Send a
         * <code>GET</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/trafficpolicyinstance</code> resource.</p> <note> <p>After you
         * submit a <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <note> <p>In the Amazon Route 53 console, traffic
         * policy instances are known as policy records.</p> </note>
         */
        virtual Model::GetTrafficPolicyInstanceOutcome GetTrafficPolicyInstance(const Model::GetTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Gets information about a specified traffic policy instance.</p> <p>Send a
         * <code>GET</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/trafficpolicyinstance</code> resource.</p> <note> <p>After you
         * submit a <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <note> <p>In the Amazon Route 53 console, traffic
         * policy instances are known as policy records.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrafficPolicyInstanceOutcomeCallable GetTrafficPolicyInstanceCallable(const Model::GetTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Gets information about a specified traffic policy instance.</p> <p>Send a
         * <code>GET</code> request to the <code>/<i>Amazon Route 53 API
         * version</i>/trafficpolicyinstance</code> resource.</p> <note> <p>After you
         * submit a <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <note> <p>In the Amazon Route 53 console, traffic
         * policy instances are known as policy records.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrafficPolicyInstanceAsync(const Model::GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the number of traffic policy instances that are associated with the
         * current AWS account.</p> <p>To get the number of traffic policy instances, send
         * a <code>GET</code> request to the
         * <code>/2013-04-01/trafficpolicyinstancecount</code> resource.</p>
         */
        virtual Model::GetTrafficPolicyInstanceCountOutcome GetTrafficPolicyInstanceCount(const Model::GetTrafficPolicyInstanceCountRequest& request) const;

        /**
         * <p>Gets the number of traffic policy instances that are associated with the
         * current AWS account.</p> <p>To get the number of traffic policy instances, send
         * a <code>GET</code> request to the
         * <code>/2013-04-01/trafficpolicyinstancecount</code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrafficPolicyInstanceCountOutcomeCallable GetTrafficPolicyInstanceCountCallable(const Model::GetTrafficPolicyInstanceCountRequest& request) const;

        /**
         * <p>Gets the number of traffic policy instances that are associated with the
         * current AWS account.</p> <p>To get the number of traffic policy instances, send
         * a <code>GET</code> request to the
         * <code>/2013-04-01/trafficpolicyinstancecount</code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrafficPolicyInstanceCountAsync(const Model::GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of supported geo locations. Send a <code>GET</code> request
         * to the <code>/2013-04-01/geolocations</code> resource. The response to this
         * request includes a <code>GeoLocationDetailsList</code> element for each location
         * that Amazon Route 53 supports.</p> <p>Countries are listed first, and continents
         * are listed last. If Amazon Route 53 supports subdivisions for a country (for
         * example, states or provinces), the subdivisions for that country are listed in
         * alphabetical order immediately after the corresponding country. </p>
         */
        virtual Model::ListGeoLocationsOutcome ListGeoLocations(const Model::ListGeoLocationsRequest& request) const;

        /**
         * <p>Retrieves a list of supported geo locations. Send a <code>GET</code> request
         * to the <code>/2013-04-01/geolocations</code> resource. The response to this
         * request includes a <code>GeoLocationDetailsList</code> element for each location
         * that Amazon Route 53 supports.</p> <p>Countries are listed first, and continents
         * are listed last. If Amazon Route 53 supports subdivisions for a country (for
         * example, states or provinces), the subdivisions for that country are listed in
         * alphabetical order immediately after the corresponding country. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGeoLocationsOutcomeCallable ListGeoLocationsCallable(const Model::ListGeoLocationsRequest& request) const;

        /**
         * <p>Retrieves a list of supported geo locations. Send a <code>GET</code> request
         * to the <code>/2013-04-01/geolocations</code> resource. The response to this
         * request includes a <code>GeoLocationDetailsList</code> element for each location
         * that Amazon Route 53 supports.</p> <p>Countries are listed first, and continents
         * are listed last. If Amazon Route 53 supports subdivisions for a country (for
         * example, states or provinces), the subdivisions for that country are listed in
         * alphabetical order immediately after the corresponding country. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGeoLocationsAsync(const Model::ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of your health checks. Send a <code>GET</code> request to the
         * <code>/2013-04-01/healthcheck</code> resource. The response to this request
         * includes a <code>HealthChecks</code> element with zero or more
         * <code>HealthCheck</code> child elements. By default, the list of health checks
         * is displayed on a single page. You can control the length of the page that is
         * displayed by using the <code>MaxItems</code> parameter. You can use the
         * <code>Marker</code> parameter to control the health check that the list begins
         * with.</p> <p>For information about listing health checks using the Amazon Route
         * 53 console, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover.html">Amazon
         * Route 53 Health Checks and DNS Failover</a>.</p>
         */
        virtual Model::ListHealthChecksOutcome ListHealthChecks(const Model::ListHealthChecksRequest& request) const;

        /**
         * <p>Retrieve a list of your health checks. Send a <code>GET</code> request to the
         * <code>/2013-04-01/healthcheck</code> resource. The response to this request
         * includes a <code>HealthChecks</code> element with zero or more
         * <code>HealthCheck</code> child elements. By default, the list of health checks
         * is displayed on a single page. You can control the length of the page that is
         * displayed by using the <code>MaxItems</code> parameter. You can use the
         * <code>Marker</code> parameter to control the health check that the list begins
         * with.</p> <p>For information about listing health checks using the Amazon Route
         * 53 console, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover.html">Amazon
         * Route 53 Health Checks and DNS Failover</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHealthChecksOutcomeCallable ListHealthChecksCallable(const Model::ListHealthChecksRequest& request) const;

        /**
         * <p>Retrieve a list of your health checks. Send a <code>GET</code> request to the
         * <code>/2013-04-01/healthcheck</code> resource. The response to this request
         * includes a <code>HealthChecks</code> element with zero or more
         * <code>HealthCheck</code> child elements. By default, the list of health checks
         * is displayed on a single page. You can control the length of the page that is
         * displayed by using the <code>MaxItems</code> parameter. You can use the
         * <code>Marker</code> parameter to control the health check that the list begins
         * with.</p> <p>For information about listing health checks using the Amazon Route
         * 53 console, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover.html">Amazon
         * Route 53 Health Checks and DNS Failover</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHealthChecksAsync(const Model::ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a list of your public and private hosted zones, send a
         * <code>GET</code> request to the <code>/2013-04-01/hostedzone</code> resource.
         * The response to this request includes a <code>HostedZones</code> child element
         * for each hosted zone created by the current AWS account.</p> <p>Amazon Route 53
         * returns a maximum of 100 items in each response. If you have a lot of hosted
         * zones, you can use the <code>maxitems</code> parameter to list them in groups of
         * up to 100. The response includes four values that help navigate from one group
         * of <code>maxitems</code> hosted zones to the next:</p> <ul> <li> <p>
         * <code>MaxItems</code> is the value specified for the <code>maxitems</code>
         * parameter in the request that produced the current response.</p> </li> <li>
         * <p>If the value of <code>IsTruncated</code> in the response is true, there are
         * more hosted zones associated with the current AWS account. </p> </li> <li> <p>
         * <code>NextMarker</code> is the hosted zone ID of the next hosted zone that is
         * associated with the current AWS account. If you want to list more hosted zones,
         * make another call to <code>ListHostedZones</code>, and specify the value of the
         * <code>NextMarker</code> element in the marker parameter. </p> <p>If
         * <code>IsTruncated</code> is false, the <code>NextMarker</code> element is
         * omitted from the response.</p> </li> <li> <p>If you're making the second or
         * subsequent call to <code>ListHostedZones</code>, the <code>Marker</code> element
         * matches the value that you specified in the <code>marker</code> parameter in the
         * previous request.</p> </li> </ul>
         */
        virtual Model::ListHostedZonesOutcome ListHostedZones(const Model::ListHostedZonesRequest& request) const;

        /**
         * <p>To retrieve a list of your public and private hosted zones, send a
         * <code>GET</code> request to the <code>/2013-04-01/hostedzone</code> resource.
         * The response to this request includes a <code>HostedZones</code> child element
         * for each hosted zone created by the current AWS account.</p> <p>Amazon Route 53
         * returns a maximum of 100 items in each response. If you have a lot of hosted
         * zones, you can use the <code>maxitems</code> parameter to list them in groups of
         * up to 100. The response includes four values that help navigate from one group
         * of <code>maxitems</code> hosted zones to the next:</p> <ul> <li> <p>
         * <code>MaxItems</code> is the value specified for the <code>maxitems</code>
         * parameter in the request that produced the current response.</p> </li> <li>
         * <p>If the value of <code>IsTruncated</code> in the response is true, there are
         * more hosted zones associated with the current AWS account. </p> </li> <li> <p>
         * <code>NextMarker</code> is the hosted zone ID of the next hosted zone that is
         * associated with the current AWS account. If you want to list more hosted zones,
         * make another call to <code>ListHostedZones</code>, and specify the value of the
         * <code>NextMarker</code> element in the marker parameter. </p> <p>If
         * <code>IsTruncated</code> is false, the <code>NextMarker</code> element is
         * omitted from the response.</p> </li> <li> <p>If you're making the second or
         * subsequent call to <code>ListHostedZones</code>, the <code>Marker</code> element
         * matches the value that you specified in the <code>marker</code> parameter in the
         * previous request.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHostedZonesOutcomeCallable ListHostedZonesCallable(const Model::ListHostedZonesRequest& request) const;

        /**
         * <p>To retrieve a list of your public and private hosted zones, send a
         * <code>GET</code> request to the <code>/2013-04-01/hostedzone</code> resource.
         * The response to this request includes a <code>HostedZones</code> child element
         * for each hosted zone created by the current AWS account.</p> <p>Amazon Route 53
         * returns a maximum of 100 items in each response. If you have a lot of hosted
         * zones, you can use the <code>maxitems</code> parameter to list them in groups of
         * up to 100. The response includes four values that help navigate from one group
         * of <code>maxitems</code> hosted zones to the next:</p> <ul> <li> <p>
         * <code>MaxItems</code> is the value specified for the <code>maxitems</code>
         * parameter in the request that produced the current response.</p> </li> <li>
         * <p>If the value of <code>IsTruncated</code> in the response is true, there are
         * more hosted zones associated with the current AWS account. </p> </li> <li> <p>
         * <code>NextMarker</code> is the hosted zone ID of the next hosted zone that is
         * associated with the current AWS account. If you want to list more hosted zones,
         * make another call to <code>ListHostedZones</code>, and specify the value of the
         * <code>NextMarker</code> element in the marker parameter. </p> <p>If
         * <code>IsTruncated</code> is false, the <code>NextMarker</code> element is
         * omitted from the response.</p> </li> <li> <p>If you're making the second or
         * subsequent call to <code>ListHostedZones</code>, the <code>Marker</code> element
         * matches the value that you specified in the <code>marker</code> parameter in the
         * previous request.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHostedZonesAsync(const Model::ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of your hosted zones in lexicographic order. Send a
         * <code>GET</code> request to the <code>/2013-04-01/hostedzonesbyname</code>
         * resource. The response includes a <code>HostedZones</code> child element for
         * each hosted zone created by the current AWS account. </p> <p>
         * <code>ListHostedZonesByName</code> sorts hosted zones by name with the labels
         * reversed. For example:</p> <ul> <li> <p> <code>com.example.www.</code> </p>
         * </li> </ul> <p>Note the trailing dot, which can change the sort order in some
         * circumstances.</p> <p>If the domain name includes escape characters or Punycode,
         * <code>ListHostedZonesByName</code> alphabetizes the domain name using the
         * escaped or Punycoded value, which is the format that Amazon Route 53 saves in
         * its database. For example, to create a hosted zone for example.com, specify
         * ex\344mple.com for the domain name. <code>ListHostedZonesByName</code>
         * alphabetizes it as:</p> <ul> <li> <p> <code>com.ex\344mple.</code> </p> </li>
         * </ul> <p>The labels are reversed and alphabetized using the escaped value. For
         * more information about valid domain name formats, including internationalized
         * domain names, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DomainNameFormat.html">DNS
         * Domain Name Format</a> in the Amazon Route 53 Developer Guide.</p> <p>Amazon
         * Route 53 returns up to 100 items in each response. If you have a lot of hosted
         * zones, use the <code>MaxItems</code> parameter to list them in groups of up to
         * 100. The response includes values that help navigate from one group of
         * <code>MaxItems</code> hosted zones to the next:</p> <ul> <li> <p>The
         * <code>DNSName</code> and <code>HostedZoneId</code> elements in the response
         * contain the values, if any, specified for the <code>dnsname</code> and
         * <code>hostedzoneid</code> parameters in the request that produced the current
         * response.</p> </li> <li> <p>The <code>MaxItems</code> element in the response
         * contains the value, if any, that you specified for the <code>maxitems</code>
         * parameter in the request that produced the current response.</p> </li> <li>
         * <p>If the value of <code>IsTruncated</code> in the response is true, there are
         * more hosted zones associated with the current AWS account. </p> <p>If
         * <code>IsTruncated</code> is false, this response includes the last hosted zone
         * that is associated with the current account. The <code>NextDNSName</code>
         * element and <code>NextHostedZoneId</code> elements are omitted from the
         * response.</p> </li> <li> <p>The <code>NextDNSName</code> and
         * <code>NextHostedZoneId</code> elements in the response contain the domain name
         * and the hosted zone ID of the next hosted zone that is associated with the
         * current AWS account. If you want to list more hosted zones, make another call to
         * <code>ListHostedZonesByName</code>, and specify the value of
         * <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
         * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
         * </li> </ul>
         */
        virtual Model::ListHostedZonesByNameOutcome ListHostedZonesByName(const Model::ListHostedZonesByNameRequest& request) const;

        /**
         * <p>Retrieves a list of your hosted zones in lexicographic order. Send a
         * <code>GET</code> request to the <code>/2013-04-01/hostedzonesbyname</code>
         * resource. The response includes a <code>HostedZones</code> child element for
         * each hosted zone created by the current AWS account. </p> <p>
         * <code>ListHostedZonesByName</code> sorts hosted zones by name with the labels
         * reversed. For example:</p> <ul> <li> <p> <code>com.example.www.</code> </p>
         * </li> </ul> <p>Note the trailing dot, which can change the sort order in some
         * circumstances.</p> <p>If the domain name includes escape characters or Punycode,
         * <code>ListHostedZonesByName</code> alphabetizes the domain name using the
         * escaped or Punycoded value, which is the format that Amazon Route 53 saves in
         * its database. For example, to create a hosted zone for example.com, specify
         * ex\344mple.com for the domain name. <code>ListHostedZonesByName</code>
         * alphabetizes it as:</p> <ul> <li> <p> <code>com.ex\344mple.</code> </p> </li>
         * </ul> <p>The labels are reversed and alphabetized using the escaped value. For
         * more information about valid domain name formats, including internationalized
         * domain names, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DomainNameFormat.html">DNS
         * Domain Name Format</a> in the Amazon Route 53 Developer Guide.</p> <p>Amazon
         * Route 53 returns up to 100 items in each response. If you have a lot of hosted
         * zones, use the <code>MaxItems</code> parameter to list them in groups of up to
         * 100. The response includes values that help navigate from one group of
         * <code>MaxItems</code> hosted zones to the next:</p> <ul> <li> <p>The
         * <code>DNSName</code> and <code>HostedZoneId</code> elements in the response
         * contain the values, if any, specified for the <code>dnsname</code> and
         * <code>hostedzoneid</code> parameters in the request that produced the current
         * response.</p> </li> <li> <p>The <code>MaxItems</code> element in the response
         * contains the value, if any, that you specified for the <code>maxitems</code>
         * parameter in the request that produced the current response.</p> </li> <li>
         * <p>If the value of <code>IsTruncated</code> in the response is true, there are
         * more hosted zones associated with the current AWS account. </p> <p>If
         * <code>IsTruncated</code> is false, this response includes the last hosted zone
         * that is associated with the current account. The <code>NextDNSName</code>
         * element and <code>NextHostedZoneId</code> elements are omitted from the
         * response.</p> </li> <li> <p>The <code>NextDNSName</code> and
         * <code>NextHostedZoneId</code> elements in the response contain the domain name
         * and the hosted zone ID of the next hosted zone that is associated with the
         * current AWS account. If you want to list more hosted zones, make another call to
         * <code>ListHostedZonesByName</code>, and specify the value of
         * <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
         * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
         * </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHostedZonesByNameOutcomeCallable ListHostedZonesByNameCallable(const Model::ListHostedZonesByNameRequest& request) const;

        /**
         * <p>Retrieves a list of your hosted zones in lexicographic order. Send a
         * <code>GET</code> request to the <code>/2013-04-01/hostedzonesbyname</code>
         * resource. The response includes a <code>HostedZones</code> child element for
         * each hosted zone created by the current AWS account. </p> <p>
         * <code>ListHostedZonesByName</code> sorts hosted zones by name with the labels
         * reversed. For example:</p> <ul> <li> <p> <code>com.example.www.</code> </p>
         * </li> </ul> <p>Note the trailing dot, which can change the sort order in some
         * circumstances.</p> <p>If the domain name includes escape characters or Punycode,
         * <code>ListHostedZonesByName</code> alphabetizes the domain name using the
         * escaped or Punycoded value, which is the format that Amazon Route 53 saves in
         * its database. For example, to create a hosted zone for example.com, specify
         * ex\344mple.com for the domain name. <code>ListHostedZonesByName</code>
         * alphabetizes it as:</p> <ul> <li> <p> <code>com.ex\344mple.</code> </p> </li>
         * </ul> <p>The labels are reversed and alphabetized using the escaped value. For
         * more information about valid domain name formats, including internationalized
         * domain names, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DomainNameFormat.html">DNS
         * Domain Name Format</a> in the Amazon Route 53 Developer Guide.</p> <p>Amazon
         * Route 53 returns up to 100 items in each response. If you have a lot of hosted
         * zones, use the <code>MaxItems</code> parameter to list them in groups of up to
         * 100. The response includes values that help navigate from one group of
         * <code>MaxItems</code> hosted zones to the next:</p> <ul> <li> <p>The
         * <code>DNSName</code> and <code>HostedZoneId</code> elements in the response
         * contain the values, if any, specified for the <code>dnsname</code> and
         * <code>hostedzoneid</code> parameters in the request that produced the current
         * response.</p> </li> <li> <p>The <code>MaxItems</code> element in the response
         * contains the value, if any, that you specified for the <code>maxitems</code>
         * parameter in the request that produced the current response.</p> </li> <li>
         * <p>If the value of <code>IsTruncated</code> in the response is true, there are
         * more hosted zones associated with the current AWS account. </p> <p>If
         * <code>IsTruncated</code> is false, this response includes the last hosted zone
         * that is associated with the current account. The <code>NextDNSName</code>
         * element and <code>NextHostedZoneId</code> elements are omitted from the
         * response.</p> </li> <li> <p>The <code>NextDNSName</code> and
         * <code>NextHostedZoneId</code> elements in the response contain the domain name
         * and the hosted zone ID of the next hosted zone that is associated with the
         * current AWS account. If you want to list more hosted zones, make another call to
         * <code>ListHostedZonesByName</code>, and specify the value of
         * <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
         * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
         * </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHostedZonesByNameAsync(const Model::ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resource record sets in a specified hosted zone.</p> <p>
         * <code>ListResourceRecordSets</code> returns up to 100 resource record sets at a
         * time in ASCII order, beginning at a position specified by the <code>name</code>
         * and <code>type</code> elements. The action sorts results first by DNS name with
         * the labels reversed, for example:</p> <p> <code>com.example.www.</code> </p>
         * <p>Note the trailing dot, which can change the sort order in some
         * circumstances.</p> <p>When multiple records have the same DNS name, the action
         * sorts results by the record type.</p> <p>You can use the name and type elements
         * to adjust the beginning position of the list of resource record sets
         * returned:</p> <dl> <dt>If you do not specify Name or Type</dt> <dd> <p>The
         * results begin with the first resource record set that the hosted zone
         * contains.</p> </dd> <dt>If you specify Name but not Type</dt> <dd> <p>The
         * results begin with the first resource record set in the list whose name is
         * greater than or equal to <code>Name</code>.</p> </dd> <dt>If you specify Type
         * but not Name</dt> <dd> <p>Amazon Route 53 returns the <code>InvalidInput</code>
         * error.</p> </dd> <dt>If you specify both Name and Type</dt> <dd> <p>The results
         * begin with the first resource record set in the list whose name is greater than
         * or equal to <code>Name</code>, and whose type is greater than or equal to
         * <code>Type</code>.</p> </dd> </dl> <p>This action returns the most current
         * version of the records. This includes records that are <code>PENDING</code>, and
         * that are not yet available on all Amazon Route 53 DNS servers.</p> <p>To ensure
         * that you get an accurate listing of the resource record sets for a hosted zone
         * at a point in time, do not submit a <code>ChangeResourceRecordSets</code>
         * request while you're paging through the results of a
         * <code>ListResourceRecordSets</code> request. If you do, some pages may display
         * results without the latest changes while other pages display results with the
         * latest changes.</p>
         */
        virtual Model::ListResourceRecordSetsOutcome ListResourceRecordSets(const Model::ListResourceRecordSetsRequest& request) const;

        /**
         * <p>Lists the resource record sets in a specified hosted zone.</p> <p>
         * <code>ListResourceRecordSets</code> returns up to 100 resource record sets at a
         * time in ASCII order, beginning at a position specified by the <code>name</code>
         * and <code>type</code> elements. The action sorts results first by DNS name with
         * the labels reversed, for example:</p> <p> <code>com.example.www.</code> </p>
         * <p>Note the trailing dot, which can change the sort order in some
         * circumstances.</p> <p>When multiple records have the same DNS name, the action
         * sorts results by the record type.</p> <p>You can use the name and type elements
         * to adjust the beginning position of the list of resource record sets
         * returned:</p> <dl> <dt>If you do not specify Name or Type</dt> <dd> <p>The
         * results begin with the first resource record set that the hosted zone
         * contains.</p> </dd> <dt>If you specify Name but not Type</dt> <dd> <p>The
         * results begin with the first resource record set in the list whose name is
         * greater than or equal to <code>Name</code>.</p> </dd> <dt>If you specify Type
         * but not Name</dt> <dd> <p>Amazon Route 53 returns the <code>InvalidInput</code>
         * error.</p> </dd> <dt>If you specify both Name and Type</dt> <dd> <p>The results
         * begin with the first resource record set in the list whose name is greater than
         * or equal to <code>Name</code>, and whose type is greater than or equal to
         * <code>Type</code>.</p> </dd> </dl> <p>This action returns the most current
         * version of the records. This includes records that are <code>PENDING</code>, and
         * that are not yet available on all Amazon Route 53 DNS servers.</p> <p>To ensure
         * that you get an accurate listing of the resource record sets for a hosted zone
         * at a point in time, do not submit a <code>ChangeResourceRecordSets</code>
         * request while you're paging through the results of a
         * <code>ListResourceRecordSets</code> request. If you do, some pages may display
         * results without the latest changes while other pages display results with the
         * latest changes.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceRecordSetsOutcomeCallable ListResourceRecordSetsCallable(const Model::ListResourceRecordSetsRequest& request) const;

        /**
         * <p>Lists the resource record sets in a specified hosted zone.</p> <p>
         * <code>ListResourceRecordSets</code> returns up to 100 resource record sets at a
         * time in ASCII order, beginning at a position specified by the <code>name</code>
         * and <code>type</code> elements. The action sorts results first by DNS name with
         * the labels reversed, for example:</p> <p> <code>com.example.www.</code> </p>
         * <p>Note the trailing dot, which can change the sort order in some
         * circumstances.</p> <p>When multiple records have the same DNS name, the action
         * sorts results by the record type.</p> <p>You can use the name and type elements
         * to adjust the beginning position of the list of resource record sets
         * returned:</p> <dl> <dt>If you do not specify Name or Type</dt> <dd> <p>The
         * results begin with the first resource record set that the hosted zone
         * contains.</p> </dd> <dt>If you specify Name but not Type</dt> <dd> <p>The
         * results begin with the first resource record set in the list whose name is
         * greater than or equal to <code>Name</code>.</p> </dd> <dt>If you specify Type
         * but not Name</dt> <dd> <p>Amazon Route 53 returns the <code>InvalidInput</code>
         * error.</p> </dd> <dt>If you specify both Name and Type</dt> <dd> <p>The results
         * begin with the first resource record set in the list whose name is greater than
         * or equal to <code>Name</code>, and whose type is greater than or equal to
         * <code>Type</code>.</p> </dd> </dl> <p>This action returns the most current
         * version of the records. This includes records that are <code>PENDING</code>, and
         * that are not yet available on all Amazon Route 53 DNS servers.</p> <p>To ensure
         * that you get an accurate listing of the resource record sets for a hosted zone
         * at a point in time, do not submit a <code>ChangeResourceRecordSets</code>
         * request while you're paging through the results of a
         * <code>ListResourceRecordSets</code> request. If you do, some pages may display
         * results without the latest changes while other pages display results with the
         * latest changes.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceRecordSetsAsync(const Model::ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a list of your reusable delegation sets, send a <code>GET</code>
         * request to the <code>/2013-04-01/delegationset</code> resource. The response to
         * this request includes a <code>DelegationSets</code> element with zero, one, or
         * multiple <code>DelegationSet</code> child elements. By default, the list of
         * delegation sets is displayed on a single page. You can control the length of the
         * page that is displayed by using the <code>MaxItems</code> parameter. You can use
         * the <code>Marker</code> parameter to control the delegation set that the list
         * begins with. </p> <note> <p> Amazon Route 53 returns a maximum of 100 items. If
         * you set MaxItems to a value greater than 100, Amazon Route 53 returns only the
         * first 100.</p> </note>
         */
        virtual Model::ListReusableDelegationSetsOutcome ListReusableDelegationSets(const Model::ListReusableDelegationSetsRequest& request) const;

        /**
         * <p>To retrieve a list of your reusable delegation sets, send a <code>GET</code>
         * request to the <code>/2013-04-01/delegationset</code> resource. The response to
         * this request includes a <code>DelegationSets</code> element with zero, one, or
         * multiple <code>DelegationSet</code> child elements. By default, the list of
         * delegation sets is displayed on a single page. You can control the length of the
         * page that is displayed by using the <code>MaxItems</code> parameter. You can use
         * the <code>Marker</code> parameter to control the delegation set that the list
         * begins with. </p> <note> <p> Amazon Route 53 returns a maximum of 100 items. If
         * you set MaxItems to a value greater than 100, Amazon Route 53 returns only the
         * first 100.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReusableDelegationSetsOutcomeCallable ListReusableDelegationSetsCallable(const Model::ListReusableDelegationSetsRequest& request) const;

        /**
         * <p>To retrieve a list of your reusable delegation sets, send a <code>GET</code>
         * request to the <code>/2013-04-01/delegationset</code> resource. The response to
         * this request includes a <code>DelegationSets</code> element with zero, one, or
         * multiple <code>DelegationSet</code> child elements. By default, the list of
         * delegation sets is displayed on a single page. You can control the length of the
         * page that is displayed by using the <code>MaxItems</code> parameter. You can use
         * the <code>Marker</code> parameter to control the delegation set that the list
         * begins with. </p> <note> <p> Amazon Route 53 returns a maximum of 100 items. If
         * you set MaxItems to a value greater than 100, Amazon Route 53 returns only the
         * first 100.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReusableDelegationSetsAsync(const Model::ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags for one health check or hosted zone. </p> <p>For information about
         * using tags for cost allocation, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for one health check or hosted zone. </p> <p>For information about
         * using tags for cost allocation, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for one health check or hosted zone. </p> <p>For information about
         * using tags for cost allocation, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags for up to 10 health checks or hosted zones.</p> <p>For information
         * about using tags for cost allocation, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p>
         */
        virtual Model::ListTagsForResourcesOutcome ListTagsForResources(const Model::ListTagsForResourcesRequest& request) const;

        /**
         * <p>Lists tags for up to 10 health checks or hosted zones.</p> <p>For information
         * about using tags for cost allocation, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourcesOutcomeCallable ListTagsForResourcesCallable(const Model::ListTagsForResourcesRequest& request) const;

        /**
         * <p>Lists tags for up to 10 health checks or hosted zones.</p> <p>For information
         * about using tags for cost allocation, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourcesAsync(const Model::ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the latest version for every traffic policy that is
         * associated with the current AWS account. Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicy</code> resource.</p>
         * <p>Amazon Route 53 returns a maximum of 100 items in each response. If you have
         * a lot of traffic policies, you can use the <code>maxitems</code> parameter to
         * list them in groups of up to 100.</p> <p>The response includes three values that
         * help you navigate from one group of <code>maxitems</code> traffic policies to
         * the next:</p> <ul> <li> <p> <b>IsTruncated</b> </p> <p>If the value of
         * <code>IsTruncated</code> in the response is <code>true</code>, there are more
         * traffic policies associated with the current AWS account.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, this response includes the last
         * traffic policy that is associated with the current account.</p> </li> <li> <p>
         * <b>TrafficPolicyIdMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, <code>TrafficPolicyIdMarker</code> is the ID of the first
         * traffic policy in the next group of <code>MaxItems</code> traffic policies. If
         * you want to list more traffic policies, make another call to
         * <code>ListTrafficPolicies</code>, and specify the value of the
         * <code>TrafficPolicyIdMarker</code> element from the response in the
         * <code>TrafficPolicyIdMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, the
         * <code>TrafficPolicyIdMarker</code> element is omitted from the response.</p>
         * </li> <li> <p> <b>MaxItems</b> </p> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> </ul>
         */
        virtual Model::ListTrafficPoliciesOutcome ListTrafficPolicies(const Model::ListTrafficPoliciesRequest& request) const;

        /**
         * <p>Gets information about the latest version for every traffic policy that is
         * associated with the current AWS account. Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicy</code> resource.</p>
         * <p>Amazon Route 53 returns a maximum of 100 items in each response. If you have
         * a lot of traffic policies, you can use the <code>maxitems</code> parameter to
         * list them in groups of up to 100.</p> <p>The response includes three values that
         * help you navigate from one group of <code>maxitems</code> traffic policies to
         * the next:</p> <ul> <li> <p> <b>IsTruncated</b> </p> <p>If the value of
         * <code>IsTruncated</code> in the response is <code>true</code>, there are more
         * traffic policies associated with the current AWS account.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, this response includes the last
         * traffic policy that is associated with the current account.</p> </li> <li> <p>
         * <b>TrafficPolicyIdMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, <code>TrafficPolicyIdMarker</code> is the ID of the first
         * traffic policy in the next group of <code>MaxItems</code> traffic policies. If
         * you want to list more traffic policies, make another call to
         * <code>ListTrafficPolicies</code>, and specify the value of the
         * <code>TrafficPolicyIdMarker</code> element from the response in the
         * <code>TrafficPolicyIdMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, the
         * <code>TrafficPolicyIdMarker</code> element is omitted from the response.</p>
         * </li> <li> <p> <b>MaxItems</b> </p> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPoliciesOutcomeCallable ListTrafficPoliciesCallable(const Model::ListTrafficPoliciesRequest& request) const;

        /**
         * <p>Gets information about the latest version for every traffic policy that is
         * associated with the current AWS account. Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicy</code> resource.</p>
         * <p>Amazon Route 53 returns a maximum of 100 items in each response. If you have
         * a lot of traffic policies, you can use the <code>maxitems</code> parameter to
         * list them in groups of up to 100.</p> <p>The response includes three values that
         * help you navigate from one group of <code>maxitems</code> traffic policies to
         * the next:</p> <ul> <li> <p> <b>IsTruncated</b> </p> <p>If the value of
         * <code>IsTruncated</code> in the response is <code>true</code>, there are more
         * traffic policies associated with the current AWS account.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, this response includes the last
         * traffic policy that is associated with the current account.</p> </li> <li> <p>
         * <b>TrafficPolicyIdMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, <code>TrafficPolicyIdMarker</code> is the ID of the first
         * traffic policy in the next group of <code>MaxItems</code> traffic policies. If
         * you want to list more traffic policies, make another call to
         * <code>ListTrafficPolicies</code>, and specify the value of the
         * <code>TrafficPolicyIdMarker</code> element from the response in the
         * <code>TrafficPolicyIdMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, the
         * <code>TrafficPolicyIdMarker</code> element is omitted from the response.</p>
         * </li> <li> <p> <b>MaxItems</b> </p> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPoliciesAsync(const Model::ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * the current AWS account.</p> <note> <p>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <p>Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicyinstance</code>
         * resource.</p> <p>Amazon Route 53 returns a maximum of 100 items in each
         * response. If you have a lot of traffic policy instances, you can use the
         * <code>MaxItems</code> parameter to list them in groups of up to 100.</p> <p>The
         * response includes five values that help you navigate from one group of
         * <code>MaxItems</code> traffic policy instances to the next:</p> <ul> <li> <p>
         * <b>IsTruncated</b> </p> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> </li> <li> <p> <b>MaxItems</b> </p>
         * <p>The value that you specified for the <code>MaxItems</code> parameter in the
         * request that produced the current response.</p> </li> <li> <p>
         * <b>HostedZoneIdMarker</b>, <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these three values in the response represent the first
         * traffic policy instance in the next group of <code>MaxItems</code> traffic
         * policy instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstances</code>, and specify these values in the
         * corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </li>
         * </ul>
         */
        virtual Model::ListTrafficPolicyInstancesOutcome ListTrafficPolicyInstances(const Model::ListTrafficPolicyInstancesRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * the current AWS account.</p> <note> <p>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <p>Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicyinstance</code>
         * resource.</p> <p>Amazon Route 53 returns a maximum of 100 items in each
         * response. If you have a lot of traffic policy instances, you can use the
         * <code>MaxItems</code> parameter to list them in groups of up to 100.</p> <p>The
         * response includes five values that help you navigate from one group of
         * <code>MaxItems</code> traffic policy instances to the next:</p> <ul> <li> <p>
         * <b>IsTruncated</b> </p> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> </li> <li> <p> <b>MaxItems</b> </p>
         * <p>The value that you specified for the <code>MaxItems</code> parameter in the
         * request that produced the current response.</p> </li> <li> <p>
         * <b>HostedZoneIdMarker</b>, <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these three values in the response represent the first
         * traffic policy instance in the next group of <code>MaxItems</code> traffic
         * policy instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstances</code>, and specify these values in the
         * corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </li>
         * </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyInstancesOutcomeCallable ListTrafficPolicyInstancesCallable(const Model::ListTrafficPolicyInstancesRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * the current AWS account.</p> <note> <p>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <p>Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicyinstance</code>
         * resource.</p> <p>Amazon Route 53 returns a maximum of 100 items in each
         * response. If you have a lot of traffic policy instances, you can use the
         * <code>MaxItems</code> parameter to list them in groups of up to 100.</p> <p>The
         * response includes five values that help you navigate from one group of
         * <code>MaxItems</code> traffic policy instances to the next:</p> <ul> <li> <p>
         * <b>IsTruncated</b> </p> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> </li> <li> <p> <b>MaxItems</b> </p>
         * <p>The value that you specified for the <code>MaxItems</code> parameter in the
         * request that produced the current response.</p> </li> <li> <p>
         * <b>HostedZoneIdMarker</b>, <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these three values in the response represent the first
         * traffic policy instance in the next group of <code>MaxItems</code> traffic
         * policy instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstances</code>, and specify these values in the
         * corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </li>
         * </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyInstancesAsync(const Model::ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the traffic policy instances that you created in a
         * specified hosted zone.</p> <note> <p>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <p>Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicyinstance</code> resource
         * and include the ID of the hosted zone.</p> <p>Amazon Route 53 returns a maximum
         * of 100 items in each response. If you have a lot of traffic policy instances,
         * you can use the <code>MaxItems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes four values that help you navigate from one
         * group of <code>MaxItems</code> traffic policy instances to the next:</p> <ul>
         * <li> <p> <b>IsTruncated</b> </p> <p>If the value of <code/>IsTruncated in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> </li> <li> <p> <b>MaxItems</b> </p>
         * <p>The value that you specified for the <code>MaxItems</code> parameter in the
         * request that produced the current response.</p> </li> <li> <p>
         * <b>TrafficPolicyInstanceNameMarker</b> and
         * <b>TrafficPolicyInstanceTypeMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these two values in the response represent the first traffic
         * policy instance in the next group of <code>MaxItems</code> traffic policy
         * instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstancesByHostedZone</code>, and specify these values in
         * the corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </li>
         * </ul>
         */
        virtual Model::ListTrafficPolicyInstancesByHostedZoneOutcome ListTrafficPolicyInstancesByHostedZone(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created in a
         * specified hosted zone.</p> <note> <p>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <p>Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicyinstance</code> resource
         * and include the ID of the hosted zone.</p> <p>Amazon Route 53 returns a maximum
         * of 100 items in each response. If you have a lot of traffic policy instances,
         * you can use the <code>MaxItems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes four values that help you navigate from one
         * group of <code>MaxItems</code> traffic policy instances to the next:</p> <ul>
         * <li> <p> <b>IsTruncated</b> </p> <p>If the value of <code/>IsTruncated in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> </li> <li> <p> <b>MaxItems</b> </p>
         * <p>The value that you specified for the <code>MaxItems</code> parameter in the
         * request that produced the current response.</p> </li> <li> <p>
         * <b>TrafficPolicyInstanceNameMarker</b> and
         * <b>TrafficPolicyInstanceTypeMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these two values in the response represent the first traffic
         * policy instance in the next group of <code>MaxItems</code> traffic policy
         * instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstancesByHostedZone</code>, and specify these values in
         * the corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </li>
         * </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyInstancesByHostedZoneOutcomeCallable ListTrafficPolicyInstancesByHostedZoneCallable(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created in a
         * specified hosted zone.</p> <note> <p>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <p>Send a <code>GET</code> request to the
         * <code>/<i>Amazon Route 53 API version</i>/trafficpolicyinstance</code> resource
         * and include the ID of the hosted zone.</p> <p>Amazon Route 53 returns a maximum
         * of 100 items in each response. If you have a lot of traffic policy instances,
         * you can use the <code>MaxItems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes four values that help you navigate from one
         * group of <code>MaxItems</code> traffic policy instances to the next:</p> <ul>
         * <li> <p> <b>IsTruncated</b> </p> <p>If the value of <code/>IsTruncated in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> </li> <li> <p> <b>MaxItems</b> </p>
         * <p>The value that you specified for the <code>MaxItems</code> parameter in the
         * request that produced the current response.</p> </li> <li> <p>
         * <b>TrafficPolicyInstanceNameMarker</b> and
         * <b>TrafficPolicyInstanceTypeMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these two values in the response represent the first traffic
         * policy instance in the next group of <code>MaxItems</code> traffic policy
         * instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstancesByHostedZone</code>, and specify these values in
         * the corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </li>
         * </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyInstancesByHostedZoneAsync(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * a specify traffic policy version.</p> <note> <p>After you submit a
         * <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <p>Send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code> resource and
         * include the ID and version of the traffic policy.</p> <p>Amazon Route 53 returns
         * a maximum of 100 items in each response. If you have a lot of traffic policy
         * instances, you can use the <code>MaxItems</code> parameter to list them in
         * groups of up to 100.</p> <p>The response includes five values that help you
         * navigate from one group of <code>MaxItems</code> traffic policy instances to the
         * next:</p> <ul> <li> <p> <b>IsTruncated</b> </p> <p>If the value of
         * <code>IsTruncated</code> in the response is <code>true</code>, there are more
         * traffic policy instances associated with the specified traffic policy.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, this response includes the last
         * traffic policy instance that is associated with the specified traffic
         * policy.</p> </li> <li> <p> <b>MaxItems</b> </p> <p>The value that you specified
         * for the <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> <li> <p> <b>HostedZoneIdMarker</b>,
         * <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these values in the response represent the first traffic
         * policy instance in the next group of <code>MaxItems</code> traffic policy
         * instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstancesByPolicy</code>, and specify these values in the
         * corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </li>
         * </ul>
         */
        virtual Model::ListTrafficPolicyInstancesByPolicyOutcome ListTrafficPolicyInstancesByPolicy(const Model::ListTrafficPolicyInstancesByPolicyRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * a specify traffic policy version.</p> <note> <p>After you submit a
         * <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <p>Send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code> resource and
         * include the ID and version of the traffic policy.</p> <p>Amazon Route 53 returns
         * a maximum of 100 items in each response. If you have a lot of traffic policy
         * instances, you can use the <code>MaxItems</code> parameter to list them in
         * groups of up to 100.</p> <p>The response includes five values that help you
         * navigate from one group of <code>MaxItems</code> traffic policy instances to the
         * next:</p> <ul> <li> <p> <b>IsTruncated</b> </p> <p>If the value of
         * <code>IsTruncated</code> in the response is <code>true</code>, there are more
         * traffic policy instances associated with the specified traffic policy.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, this response includes the last
         * traffic policy instance that is associated with the specified traffic
         * policy.</p> </li> <li> <p> <b>MaxItems</b> </p> <p>The value that you specified
         * for the <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> <li> <p> <b>HostedZoneIdMarker</b>,
         * <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these values in the response represent the first traffic
         * policy instance in the next group of <code>MaxItems</code> traffic policy
         * instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstancesByPolicy</code>, and specify these values in the
         * corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </li>
         * </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyInstancesByPolicyOutcomeCallable ListTrafficPolicyInstancesByPolicyCallable(const Model::ListTrafficPolicyInstancesByPolicyRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * a specify traffic policy version.</p> <note> <p>After you submit a
         * <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p> </note> <p>Send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code> resource and
         * include the ID and version of the traffic policy.</p> <p>Amazon Route 53 returns
         * a maximum of 100 items in each response. If you have a lot of traffic policy
         * instances, you can use the <code>MaxItems</code> parameter to list them in
         * groups of up to 100.</p> <p>The response includes five values that help you
         * navigate from one group of <code>MaxItems</code> traffic policy instances to the
         * next:</p> <ul> <li> <p> <b>IsTruncated</b> </p> <p>If the value of
         * <code>IsTruncated</code> in the response is <code>true</code>, there are more
         * traffic policy instances associated with the specified traffic policy.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, this response includes the last
         * traffic policy instance that is associated with the specified traffic
         * policy.</p> </li> <li> <p> <b>MaxItems</b> </p> <p>The value that you specified
         * for the <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> <li> <p> <b>HostedZoneIdMarker</b>,
         * <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b> </p> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these values in the response represent the first traffic
         * policy instance in the next group of <code>MaxItems</code> traffic policy
         * instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstancesByPolicy</code>, and specify these values in the
         * corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </li>
         * </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyInstancesByPolicyAsync(const Model::ListTrafficPolicyInstancesByPolicyRequest& request, const ListTrafficPolicyInstancesByPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about all of the versions for a specified traffic
         * policy.</p> <p>Send a <code>GET</code> request to the <code>/<i>Amazon Route 53
         * API version</i>/trafficpolicy</code> resource and specify the ID of the traffic
         * policy for which you want to list versions.</p> <p>Amazon Route 53 returns a
         * maximum of 100 items in each response. If you have a lot of traffic policies,
         * you can use the <code>maxitems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes three values that help you navigate from one
         * group of <code>maxitems</code> traffic policies to the next:</p> <ul> <li> <p>
         * <b>IsTruncated</b> </p> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy versions associated
         * with the specified traffic policy.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy version that
         * is associated with the specified traffic policy.</p> </li> <li> <p>
         * <b>TrafficPolicyVersionMarker</b> </p> <p>The ID of the next traffic policy
         * version that is associated with the current AWS account. If you want to list
         * more traffic policies, make another call to
         * <code>ListTrafficPolicyVersions</code>, and specify the value of the
         * <code>TrafficPolicyVersionMarker</code> element in the
         * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, Amazon Route 53 omits the
         * <code>TrafficPolicyVersionMarker</code> element from the response.</p> </li>
         * <li> <p> <b>MaxItems</b> </p> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> </ul>
         */
        virtual Model::ListTrafficPolicyVersionsOutcome ListTrafficPolicyVersions(const Model::ListTrafficPolicyVersionsRequest& request) const;

        /**
         * <p>Gets information about all of the versions for a specified traffic
         * policy.</p> <p>Send a <code>GET</code> request to the <code>/<i>Amazon Route 53
         * API version</i>/trafficpolicy</code> resource and specify the ID of the traffic
         * policy for which you want to list versions.</p> <p>Amazon Route 53 returns a
         * maximum of 100 items in each response. If you have a lot of traffic policies,
         * you can use the <code>maxitems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes three values that help you navigate from one
         * group of <code>maxitems</code> traffic policies to the next:</p> <ul> <li> <p>
         * <b>IsTruncated</b> </p> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy versions associated
         * with the specified traffic policy.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy version that
         * is associated with the specified traffic policy.</p> </li> <li> <p>
         * <b>TrafficPolicyVersionMarker</b> </p> <p>The ID of the next traffic policy
         * version that is associated with the current AWS account. If you want to list
         * more traffic policies, make another call to
         * <code>ListTrafficPolicyVersions</code>, and specify the value of the
         * <code>TrafficPolicyVersionMarker</code> element in the
         * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, Amazon Route 53 omits the
         * <code>TrafficPolicyVersionMarker</code> element from the response.</p> </li>
         * <li> <p> <b>MaxItems</b> </p> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyVersionsOutcomeCallable ListTrafficPolicyVersionsCallable(const Model::ListTrafficPolicyVersionsRequest& request) const;

        /**
         * <p>Gets information about all of the versions for a specified traffic
         * policy.</p> <p>Send a <code>GET</code> request to the <code>/<i>Amazon Route 53
         * API version</i>/trafficpolicy</code> resource and specify the ID of the traffic
         * policy for which you want to list versions.</p> <p>Amazon Route 53 returns a
         * maximum of 100 items in each response. If you have a lot of traffic policies,
         * you can use the <code>maxitems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes three values that help you navigate from one
         * group of <code>maxitems</code> traffic policies to the next:</p> <ul> <li> <p>
         * <b>IsTruncated</b> </p> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy versions associated
         * with the specified traffic policy.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy version that
         * is associated with the specified traffic policy.</p> </li> <li> <p>
         * <b>TrafficPolicyVersionMarker</b> </p> <p>The ID of the next traffic policy
         * version that is associated with the current AWS account. If you want to list
         * more traffic policies, make another call to
         * <code>ListTrafficPolicyVersions</code>, and specify the value of the
         * <code>TrafficPolicyVersionMarker</code> element in the
         * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, Amazon Route 53 omits the
         * <code>TrafficPolicyVersionMarker</code> element from the response.</p> </li>
         * <li> <p> <b>MaxItems</b> </p> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyVersionsAsync(const Model::ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the VPCs that were created by other accounts and that can be
         * associated with a specified hosted zone because you've submitted one or more
         * <code>CreateVPCAssociationAuthorization</code> requests. </p> <p>Send a
         * <code>GET</code> request to the <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation</code> resource. The response to this request
         * includes a <code>VPCs</code> element with a <code>VPC</code> child element for
         * each VPC that can be associated with the hosted zone.</p> <p>Amazon Route 53
         * returns up to 50 VPCs per page. To return fewer VPCs per page, include the
         * <code>MaxResults</code> parameter: </p> <p>
         * <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i> </code> </p> <p>If
         * the response includes a <code>NextToken</code> element, there are more VPCs to
         * list. To get the next page of VPCs, submit another
         * <code>ListVPCAssociationAuthorizations</code> request, and include the value of
         * the <code>NextToken</code> element from the response in the
         * <code>NextToken</code> request parameter:</p> <p>
         * <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
         * </code> </p>
         */
        virtual Model::ListVPCAssociationAuthorizationsOutcome ListVPCAssociationAuthorizations(const Model::ListVPCAssociationAuthorizationsRequest& request) const;

        /**
         * <p>Gets a list of the VPCs that were created by other accounts and that can be
         * associated with a specified hosted zone because you've submitted one or more
         * <code>CreateVPCAssociationAuthorization</code> requests. </p> <p>Send a
         * <code>GET</code> request to the <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation</code> resource. The response to this request
         * includes a <code>VPCs</code> element with a <code>VPC</code> child element for
         * each VPC that can be associated with the hosted zone.</p> <p>Amazon Route 53
         * returns up to 50 VPCs per page. To return fewer VPCs per page, include the
         * <code>MaxResults</code> parameter: </p> <p>
         * <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i> </code> </p> <p>If
         * the response includes a <code>NextToken</code> element, there are more VPCs to
         * list. To get the next page of VPCs, submit another
         * <code>ListVPCAssociationAuthorizations</code> request, and include the value of
         * the <code>NextToken</code> element from the response in the
         * <code>NextToken</code> request parameter:</p> <p>
         * <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
         * </code> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVPCAssociationAuthorizationsOutcomeCallable ListVPCAssociationAuthorizationsCallable(const Model::ListVPCAssociationAuthorizationsRequest& request) const;

        /**
         * <p>Gets a list of the VPCs that were created by other accounts and that can be
         * associated with a specified hosted zone because you've submitted one or more
         * <code>CreateVPCAssociationAuthorization</code> requests. </p> <p>Send a
         * <code>GET</code> request to the <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation</code> resource. The response to this request
         * includes a <code>VPCs</code> element with a <code>VPC</code> child element for
         * each VPC that can be associated with the hosted zone.</p> <p>Amazon Route 53
         * returns up to 50 VPCs per page. To return fewer VPCs per page, include the
         * <code>MaxResults</code> parameter: </p> <p>
         * <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i> </code> </p> <p>If
         * the response includes a <code>NextToken</code> element, there are more VPCs to
         * list. To get the next page of VPCs, submit another
         * <code>ListVPCAssociationAuthorizations</code> request, and include the value of
         * the <code>NextToken</code> element from the response in the
         * <code>NextToken</code> request parameter:</p> <p>
         * <code>/2013-04-01/hostedzone/<i>hosted zone
         * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
         * </code> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVPCAssociationAuthorizationsAsync(const Model::ListVPCAssociationAuthorizationsRequest& request, const ListVPCAssociationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the value that Amazon Route 53 returns in response to a DNS request for
         * a specified record name and type. You can optionally specify the IP address of a
         * DNS resolver, an EDNS0 client subnet IP address, and a subnet mask. </p>
         */
        virtual Model::TestDNSAnswerOutcome TestDNSAnswer(const Model::TestDNSAnswerRequest& request) const;

        /**
         * <p>Gets the value that Amazon Route 53 returns in response to a DNS request for
         * a specified record name and type. You can optionally specify the IP address of a
         * DNS resolver, an EDNS0 client subnet IP address, and a subnet mask. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestDNSAnswerOutcomeCallable TestDNSAnswerCallable(const Model::TestDNSAnswerRequest& request) const;

        /**
         * <p>Gets the value that Amazon Route 53 returns in response to a DNS request for
         * a specified record name and type. You can optionally specify the IP address of a
         * DNS resolver, an EDNS0 client subnet IP address, and a subnet mask. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestDNSAnswerAsync(const Model::TestDNSAnswerRequest& request, const TestDNSAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing health check.</p> <p>Send a <code>POST</code> request to
         * the <code>/2013-04-01/healthcheck/<i>health check ID</i> </code> resource. The
         * request body must include a document with an
         * <code>UpdateHealthCheckRequest</code> element. For more information about
         * updating health checks, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html">Creating,
         * Updating, and Deleting Health Checks</a> in the Amazon Route 53 Developer
         * Guide.</p>
         */
        virtual Model::UpdateHealthCheckOutcome UpdateHealthCheck(const Model::UpdateHealthCheckRequest& request) const;

        /**
         * <p>Updates an existing health check.</p> <p>Send a <code>POST</code> request to
         * the <code>/2013-04-01/healthcheck/<i>health check ID</i> </code> resource. The
         * request body must include a document with an
         * <code>UpdateHealthCheckRequest</code> element. For more information about
         * updating health checks, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html">Creating,
         * Updating, and Deleting Health Checks</a> in the Amazon Route 53 Developer
         * Guide.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHealthCheckOutcomeCallable UpdateHealthCheckCallable(const Model::UpdateHealthCheckRequest& request) const;

        /**
         * <p>Updates an existing health check.</p> <p>Send a <code>POST</code> request to
         * the <code>/2013-04-01/healthcheck/<i>health check ID</i> </code> resource. The
         * request body must include a document with an
         * <code>UpdateHealthCheckRequest</code> element. For more information about
         * updating health checks, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html">Creating,
         * Updating, and Deleting Health Checks</a> in the Amazon Route 53 Developer
         * Guide.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHealthCheckAsync(const Model::UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the hosted zone comment. Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone ID</i> </code> resource. </p>
         */
        virtual Model::UpdateHostedZoneCommentOutcome UpdateHostedZoneComment(const Model::UpdateHostedZoneCommentRequest& request) const;

        /**
         * <p>Updates the hosted zone comment. Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone ID</i> </code> resource. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHostedZoneCommentOutcomeCallable UpdateHostedZoneCommentCallable(const Model::UpdateHostedZoneCommentRequest& request) const;

        /**
         * <p>Updates the hosted zone comment. Send a <code>POST</code> request to the
         * <code>/2013-04-01/hostedzone/<i>hosted zone ID</i> </code> resource. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHostedZoneCommentAsync(const Model::UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the comment for a specified traffic policy version.</p> <p>Send a
         * <code>POST</code> request to the <code>/2013-04-01/trafficpolicy/</code>
         * resource.</p> <p>The request body must include a document with an
         * <code>UpdateTrafficPolicyCommentRequest</code> element.</p>
         */
        virtual Model::UpdateTrafficPolicyCommentOutcome UpdateTrafficPolicyComment(const Model::UpdateTrafficPolicyCommentRequest& request) const;

        /**
         * <p>Updates the comment for a specified traffic policy version.</p> <p>Send a
         * <code>POST</code> request to the <code>/2013-04-01/trafficpolicy/</code>
         * resource.</p> <p>The request body must include a document with an
         * <code>UpdateTrafficPolicyCommentRequest</code> element.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrafficPolicyCommentOutcomeCallable UpdateTrafficPolicyCommentCallable(const Model::UpdateTrafficPolicyCommentRequest& request) const;

        /**
         * <p>Updates the comment for a specified traffic policy version.</p> <p>Send a
         * <code>POST</code> request to the <code>/2013-04-01/trafficpolicy/</code>
         * resource.</p> <p>The request body must include a document with an
         * <code>UpdateTrafficPolicyCommentRequest</code> element.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrafficPolicyCommentAsync(const Model::UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the resource record sets in a specified hosted zone that were created
         * based on the settings in a specified traffic policy version.</p> <p>Send a
         * <code>POST</code> request to the
         * <code>/2013-04-01/trafficpolicyinstance/<i>traffic policy ID</i> </code>
         * resource. The request body must include a document with an
         * <code>UpdateTrafficPolicyInstanceRequest</code> element.</p> <p>When you update
         * a traffic policy instance, Amazon Route 53 continues to respond to DNS queries
         * for the root resource record set name (such as example.com) while it replaces
         * one group of resource record sets with another. Amazon Route 53 performs the
         * following operations:</p> <ol> <li> <p>Amazon Route 53 creates a new group of
         * resource record sets based on the specified traffic policy. This is true
         * regardless of how substantial the differences are between the existing resource
         * record sets and the new resource record sets. </p> </li> <li> <p>When all of the
         * new resource record sets have been created, Amazon Route 53 starts to respond to
         * DNS queries for the root resource record set name (such as example.com) by using
         * the new resource record sets.</p> </li> <li> <p>Amazon Route 53 deletes the old
         * group of resource record sets that are associated with the root resource record
         * set name.</p> </li> </ol>
         */
        virtual Model::UpdateTrafficPolicyInstanceOutcome UpdateTrafficPolicyInstance(const Model::UpdateTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Updates the resource record sets in a specified hosted zone that were created
         * based on the settings in a specified traffic policy version.</p> <p>Send a
         * <code>POST</code> request to the
         * <code>/2013-04-01/trafficpolicyinstance/<i>traffic policy ID</i> </code>
         * resource. The request body must include a document with an
         * <code>UpdateTrafficPolicyInstanceRequest</code> element.</p> <p>When you update
         * a traffic policy instance, Amazon Route 53 continues to respond to DNS queries
         * for the root resource record set name (such as example.com) while it replaces
         * one group of resource record sets with another. Amazon Route 53 performs the
         * following operations:</p> <ol> <li> <p>Amazon Route 53 creates a new group of
         * resource record sets based on the specified traffic policy. This is true
         * regardless of how substantial the differences are between the existing resource
         * record sets and the new resource record sets. </p> </li> <li> <p>When all of the
         * new resource record sets have been created, Amazon Route 53 starts to respond to
         * DNS queries for the root resource record set name (such as example.com) by using
         * the new resource record sets.</p> </li> <li> <p>Amazon Route 53 deletes the old
         * group of resource record sets that are associated with the root resource record
         * set name.</p> </li> </ol>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrafficPolicyInstanceOutcomeCallable UpdateTrafficPolicyInstanceCallable(const Model::UpdateTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Updates the resource record sets in a specified hosted zone that were created
         * based on the settings in a specified traffic policy version.</p> <p>Send a
         * <code>POST</code> request to the
         * <code>/2013-04-01/trafficpolicyinstance/<i>traffic policy ID</i> </code>
         * resource. The request body must include a document with an
         * <code>UpdateTrafficPolicyInstanceRequest</code> element.</p> <p>When you update
         * a traffic policy instance, Amazon Route 53 continues to respond to DNS queries
         * for the root resource record set name (such as example.com) while it replaces
         * one group of resource record sets with another. Amazon Route 53 performs the
         * following operations:</p> <ol> <li> <p>Amazon Route 53 creates a new group of
         * resource record sets based on the specified traffic policy. This is true
         * regardless of how substantial the differences are between the existing resource
         * record sets and the new resource record sets. </p> </li> <li> <p>When all of the
         * new resource record sets have been created, Amazon Route 53 starts to respond to
         * DNS queries for the root resource record set name (such as example.com) by using
         * the new resource record sets.</p> </li> <li> <p>Amazon Route 53 deletes the old
         * group of resource record sets that are associated with the root resource record
         * set name.</p> </li> </ol>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrafficPolicyInstanceAsync(const Model::UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AssociateVPCWithHostedZoneAsyncHelper(const Model::AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangeResourceRecordSetsAsyncHelper(const Model::ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangeTagsForResourceAsyncHelper(const Model::ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHealthCheckAsyncHelper(const Model::CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHostedZoneAsyncHelper(const Model::CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReusableDelegationSetAsyncHelper(const Model::CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrafficPolicyAsyncHelper(const Model::CreateTrafficPolicyRequest& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrafficPolicyInstanceAsyncHelper(const Model::CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrafficPolicyVersionAsyncHelper(const Model::CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVPCAssociationAuthorizationAsyncHelper(const Model::CreateVPCAssociationAuthorizationRequest& request, const CreateVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHealthCheckAsyncHelper(const Model::DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHostedZoneAsyncHelper(const Model::DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReusableDelegationSetAsyncHelper(const Model::DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrafficPolicyAsyncHelper(const Model::DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrafficPolicyInstanceAsyncHelper(const Model::DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVPCAssociationAuthorizationAsyncHelper(const Model::DeleteVPCAssociationAuthorizationRequest& request, const DeleteVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateVPCFromHostedZoneAsyncHelper(const Model::DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChangeAsyncHelper(const Model::GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCheckerIpRangesAsyncHelper(const Model::GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGeoLocationAsyncHelper(const Model::GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHealthCheckAsyncHelper(const Model::GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHealthCheckCountAsyncHelper(const Model::GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHealthCheckLastFailureReasonAsyncHelper(const Model::GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHealthCheckStatusAsyncHelper(const Model::GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHostedZoneAsyncHelper(const Model::GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHostedZoneCountAsyncHelper(const Model::GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReusableDelegationSetAsyncHelper(const Model::GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTrafficPolicyAsyncHelper(const Model::GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTrafficPolicyInstanceAsyncHelper(const Model::GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTrafficPolicyInstanceCountAsyncHelper(const Model::GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGeoLocationsAsyncHelper(const Model::ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHealthChecksAsyncHelper(const Model::ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHostedZonesAsyncHelper(const Model::ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHostedZonesByNameAsyncHelper(const Model::ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceRecordSetsAsyncHelper(const Model::ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReusableDelegationSetsAsyncHelper(const Model::ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourcesAsyncHelper(const Model::ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrafficPoliciesAsyncHelper(const Model::ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrafficPolicyInstancesAsyncHelper(const Model::ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrafficPolicyInstancesByHostedZoneAsyncHelper(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrafficPolicyInstancesByPolicyAsyncHelper(const Model::ListTrafficPolicyInstancesByPolicyRequest& request, const ListTrafficPolicyInstancesByPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrafficPolicyVersionsAsyncHelper(const Model::ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVPCAssociationAuthorizationsAsyncHelper(const Model::ListVPCAssociationAuthorizationsRequest& request, const ListVPCAssociationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestDNSAnswerAsyncHelper(const Model::TestDNSAnswerRequest& request, const TestDNSAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateHealthCheckAsyncHelper(const Model::UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateHostedZoneCommentAsyncHelper(const Model::UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrafficPolicyCommentAsyncHelper(const Model::UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrafficPolicyInstanceAsyncHelper(const Model::UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Route53
} // namespace Aws
