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
#include <aws/route53/model/DeleteHealthCheckResult.h>
#include <aws/route53/model/DeleteHostedZoneResult.h>
#include <aws/route53/model/DeleteReusableDelegationSetResult.h>
#include <aws/route53/model/DeleteTrafficPolicyResult.h>
#include <aws/route53/model/DeleteTrafficPolicyInstanceResult.h>
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
        class DeleteHealthCheckRequest;
        class DeleteHostedZoneRequest;
        class DeleteReusableDelegationSetRequest;
        class DeleteTrafficPolicyRequest;
        class DeleteTrafficPolicyInstanceRequest;
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
        typedef Aws::Utils::Outcome<DeleteHealthCheckResult, Aws::Client::AWSError<Route53Errors>> DeleteHealthCheckOutcome;
        typedef Aws::Utils::Outcome<DeleteHostedZoneResult, Aws::Client::AWSError<Route53Errors>> DeleteHostedZoneOutcome;
        typedef Aws::Utils::Outcome<DeleteReusableDelegationSetResult, Aws::Client::AWSError<Route53Errors>> DeleteReusableDelegationSetOutcome;
        typedef Aws::Utils::Outcome<DeleteTrafficPolicyResult, Aws::Client::AWSError<Route53Errors>> DeleteTrafficPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteTrafficPolicyInstanceResult, Aws::Client::AWSError<Route53Errors>> DeleteTrafficPolicyInstanceOutcome;
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
        typedef std::future<DeleteHealthCheckOutcome> DeleteHealthCheckOutcomeCallable;
        typedef std::future<DeleteHostedZoneOutcome> DeleteHostedZoneOutcomeCallable;
        typedef std::future<DeleteReusableDelegationSetOutcome> DeleteReusableDelegationSetOutcomeCallable;
        typedef std::future<DeleteTrafficPolicyOutcome> DeleteTrafficPolicyOutcomeCallable;
        typedef std::future<DeleteTrafficPolicyInstanceOutcome> DeleteTrafficPolicyInstanceOutcomeCallable;
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
    typedef std::function<void(const Route53Client*, const Model::DeleteHealthCheckRequest&, const Model::DeleteHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHealthCheckResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteHostedZoneRequest&, const Model::DeleteHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteReusableDelegationSetRequest&, const Model::DeleteReusableDelegationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReusableDelegationSetResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteTrafficPolicyRequest&, const Model::DeleteTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteTrafficPolicyInstanceRequest&, const Model::DeleteTrafficPolicyInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficPolicyInstanceResponseReceivedHandler;
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
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        virtual ~Route53Client();

        /**
         * <p>This action associates a VPC with an hosted zone. </p> <p>To associate a VPC
         * with an hosted zone, send a <code>POST</code> request to the <code>/<i>Route 53
         * API version</i>/hostedzone/<i>hosted zone ID</i>/associatevpc</code> resource.
         * The request body must include a document with a
         * <code>AssociateVPCWithHostedZoneRequest</code> element. The response returns the
         * <code>AssociateVPCWithHostedZoneResponse</code> element that contains
         * <code>ChangeInfo</code> for you to track the progress of the
         * <code>AssociateVPCWithHostedZoneRequest</code> you made. See
         * <code>GetChange</code> operation for how to track the progress of your
         * change.</p>
         */
        virtual Model::AssociateVPCWithHostedZoneOutcome AssociateVPCWithHostedZone(const Model::AssociateVPCWithHostedZoneRequest& request) const;

        /**
         * <p>This action associates a VPC with an hosted zone. </p> <p>To associate a VPC
         * with an hosted zone, send a <code>POST</code> request to the <code>/<i>Route 53
         * API version</i>/hostedzone/<i>hosted zone ID</i>/associatevpc</code> resource.
         * The request body must include a document with a
         * <code>AssociateVPCWithHostedZoneRequest</code> element. The response returns the
         * <code>AssociateVPCWithHostedZoneResponse</code> element that contains
         * <code>ChangeInfo</code> for you to track the progress of the
         * <code>AssociateVPCWithHostedZoneRequest</code> you made. See
         * <code>GetChange</code> operation for how to track the progress of your
         * change.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateVPCWithHostedZoneOutcomeCallable AssociateVPCWithHostedZoneCallable(const Model::AssociateVPCWithHostedZoneRequest& request) const;

        /**
         * <p>This action associates a VPC with an hosted zone. </p> <p>To associate a VPC
         * with an hosted zone, send a <code>POST</code> request to the <code>/<i>Route 53
         * API version</i>/hostedzone/<i>hosted zone ID</i>/associatevpc</code> resource.
         * The request body must include a document with a
         * <code>AssociateVPCWithHostedZoneRequest</code> element. The response returns the
         * <code>AssociateVPCWithHostedZoneResponse</code> element that contains
         * <code>ChangeInfo</code> for you to track the progress of the
         * <code>AssociateVPCWithHostedZoneRequest</code> you made. See
         * <code>GetChange</code> operation for how to track the progress of your
         * change.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateVPCWithHostedZoneAsync(const Model::AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this action to create or change your authoritative DNS information. To
         * use this action, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzone/<i>hosted Zone ID</i>/rrset</code> resource. The request
         * body must include a document with a <code>ChangeResourceRecordSetsRequest</code>
         * element.</p> <p>Changes are a list of change items and are considered
         * transactional. For more information on transactional changes, also known as
         * change batches, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/APIReference/API_ChangeResourceRecordSets.html">POST
         * ChangeResourceRecordSets</a> in the <i>Amazon Route 53 API Reference</i>.</p>
         * <important>Due to the nature of transactional changes, you cannot delete the
         * same resource record set more than once in a single change batch. If you attempt
         * to delete the same change batch more than once, Amazon Route 53 returns an
         * <code>InvalidChangeBatch</code> error.</important> <p>In response to a
         * <code>ChangeResourceRecordSets</code> request, your DNS data is changed on all
         * Amazon Route 53 DNS servers. Initially, the status of a change is
         * <code>PENDING</code>. This means the change has not yet propagated to all the
         * authoritative Amazon Route 53 DNS servers. When the change is propagated to all
         * hosts, the change returns a status of <code>INSYNC</code>.</p> <p>Note the
         * following limitations on a <code>ChangeResourceRecordSets</code> request:</p>
         * <ul> <li>A request cannot contain more than 100 Change elements.</li> <li> A
         * request cannot contain more than 1000 ResourceRecord elements.</li> <li>The sum
         * of the number of characters (including spaces) in all <code>Value</code>
         * elements in a request cannot exceed 32,000 characters.</li> </ul>
         */
        virtual Model::ChangeResourceRecordSetsOutcome ChangeResourceRecordSets(const Model::ChangeResourceRecordSetsRequest& request) const;

        /**
         * <p>Use this action to create or change your authoritative DNS information. To
         * use this action, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzone/<i>hosted Zone ID</i>/rrset</code> resource. The request
         * body must include a document with a <code>ChangeResourceRecordSetsRequest</code>
         * element.</p> <p>Changes are a list of change items and are considered
         * transactional. For more information on transactional changes, also known as
         * change batches, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/APIReference/API_ChangeResourceRecordSets.html">POST
         * ChangeResourceRecordSets</a> in the <i>Amazon Route 53 API Reference</i>.</p>
         * <important>Due to the nature of transactional changes, you cannot delete the
         * same resource record set more than once in a single change batch. If you attempt
         * to delete the same change batch more than once, Amazon Route 53 returns an
         * <code>InvalidChangeBatch</code> error.</important> <p>In response to a
         * <code>ChangeResourceRecordSets</code> request, your DNS data is changed on all
         * Amazon Route 53 DNS servers. Initially, the status of a change is
         * <code>PENDING</code>. This means the change has not yet propagated to all the
         * authoritative Amazon Route 53 DNS servers. When the change is propagated to all
         * hosts, the change returns a status of <code>INSYNC</code>.</p> <p>Note the
         * following limitations on a <code>ChangeResourceRecordSets</code> request:</p>
         * <ul> <li>A request cannot contain more than 100 Change elements.</li> <li> A
         * request cannot contain more than 1000 ResourceRecord elements.</li> <li>The sum
         * of the number of characters (including spaces) in all <code>Value</code>
         * elements in a request cannot exceed 32,000 characters.</li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeResourceRecordSetsOutcomeCallable ChangeResourceRecordSetsCallable(const Model::ChangeResourceRecordSetsRequest& request) const;

        /**
         * <p>Use this action to create or change your authoritative DNS information. To
         * use this action, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzone/<i>hosted Zone ID</i>/rrset</code> resource. The request
         * body must include a document with a <code>ChangeResourceRecordSetsRequest</code>
         * element.</p> <p>Changes are a list of change items and are considered
         * transactional. For more information on transactional changes, also known as
         * change batches, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/APIReference/API_ChangeResourceRecordSets.html">POST
         * ChangeResourceRecordSets</a> in the <i>Amazon Route 53 API Reference</i>.</p>
         * <important>Due to the nature of transactional changes, you cannot delete the
         * same resource record set more than once in a single change batch. If you attempt
         * to delete the same change batch more than once, Amazon Route 53 returns an
         * <code>InvalidChangeBatch</code> error.</important> <p>In response to a
         * <code>ChangeResourceRecordSets</code> request, your DNS data is changed on all
         * Amazon Route 53 DNS servers. Initially, the status of a change is
         * <code>PENDING</code>. This means the change has not yet propagated to all the
         * authoritative Amazon Route 53 DNS servers. When the change is propagated to all
         * hosts, the change returns a status of <code>INSYNC</code>.</p> <p>Note the
         * following limitations on a <code>ChangeResourceRecordSets</code> request:</p>
         * <ul> <li>A request cannot contain more than 100 Change elements.</li> <li> A
         * request cannot contain more than 1000 ResourceRecord elements.</li> <li>The sum
         * of the number of characters (including spaces) in all <code>Value</code>
         * elements in a request cannot exceed 32,000 characters.</li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeResourceRecordSetsAsync(const Model::ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ChangeTagsForResourceOutcome ChangeTagsForResource(const Model::ChangeTagsForResourceRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeTagsForResourceOutcomeCallable ChangeTagsForResourceCallable(const Model::ChangeTagsForResourceRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeTagsForResourceAsync(const Model::ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action creates a new health check.</p> <p>To create a new health check,
         * send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck</code> resource. The request body must include a
         * document with a <code>CreateHealthCheckRequest</code> element. The response
         * returns the <code>CreateHealthCheckResponse</code> element that contains
         * metadata about the health check.</p>
         */
        virtual Model::CreateHealthCheckOutcome CreateHealthCheck(const Model::CreateHealthCheckRequest& request) const;

        /**
         * <p>This action creates a new health check.</p> <p>To create a new health check,
         * send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck</code> resource. The request body must include a
         * document with a <code>CreateHealthCheckRequest</code> element. The response
         * returns the <code>CreateHealthCheckResponse</code> element that contains
         * metadata about the health check.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHealthCheckOutcomeCallable CreateHealthCheckCallable(const Model::CreateHealthCheckRequest& request) const;

        /**
         * <p>This action creates a new health check.</p> <p>To create a new health check,
         * send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck</code> resource. The request body must include a
         * document with a <code>CreateHealthCheckRequest</code> element. The response
         * returns the <code>CreateHealthCheckResponse</code> element that contains
         * metadata about the health check.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHealthCheckAsync(const Model::CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action creates a new hosted zone.</p> <p>To create a new hosted zone,
         * send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzone</code> resource. The request body must include a document
         * with a <code>CreateHostedZoneRequest</code> element. The response returns the
         * <code>CreateHostedZoneResponse</code> element that contains metadata about the
         * hosted zone.</p> <p>Amazon Route 53 automatically creates a default SOA record
         * and four NS records for the zone. The NS records in the hosted zone are the name
         * servers you give your registrar to delegate your domain to. For more information
         * about SOA and NS records, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/SOA-NSrecords.html">NS
         * and SOA Records that Amazon Route 53 Creates for a Hosted Zone</a> in the
         * <i>Amazon Route 53 Developer Guide</i>.</p> <p>When you create a zone, its
         * initial status is <code>PENDING</code>. This means that it is not yet available
         * on all DNS servers. The status of the zone changes to <code>INSYNC</code> when
         * the NS and SOA records are available on all Amazon Route 53 DNS servers. </p>
         * <p>When trying to create a hosted zone using a reusable delegation set, you
         * could specify an optional DelegationSetId, and Route53 would assign those 4 NS
         * records for the zone, instead of alloting a new one.</p>
         */
        virtual Model::CreateHostedZoneOutcome CreateHostedZone(const Model::CreateHostedZoneRequest& request) const;

        /**
         * <p>This action creates a new hosted zone.</p> <p>To create a new hosted zone,
         * send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzone</code> resource. The request body must include a document
         * with a <code>CreateHostedZoneRequest</code> element. The response returns the
         * <code>CreateHostedZoneResponse</code> element that contains metadata about the
         * hosted zone.</p> <p>Amazon Route 53 automatically creates a default SOA record
         * and four NS records for the zone. The NS records in the hosted zone are the name
         * servers you give your registrar to delegate your domain to. For more information
         * about SOA and NS records, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/SOA-NSrecords.html">NS
         * and SOA Records that Amazon Route 53 Creates for a Hosted Zone</a> in the
         * <i>Amazon Route 53 Developer Guide</i>.</p> <p>When you create a zone, its
         * initial status is <code>PENDING</code>. This means that it is not yet available
         * on all DNS servers. The status of the zone changes to <code>INSYNC</code> when
         * the NS and SOA records are available on all Amazon Route 53 DNS servers. </p>
         * <p>When trying to create a hosted zone using a reusable delegation set, you
         * could specify an optional DelegationSetId, and Route53 would assign those 4 NS
         * records for the zone, instead of alloting a new one.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHostedZoneOutcomeCallable CreateHostedZoneCallable(const Model::CreateHostedZoneRequest& request) const;

        /**
         * <p>This action creates a new hosted zone.</p> <p>To create a new hosted zone,
         * send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzone</code> resource. The request body must include a document
         * with a <code>CreateHostedZoneRequest</code> element. The response returns the
         * <code>CreateHostedZoneResponse</code> element that contains metadata about the
         * hosted zone.</p> <p>Amazon Route 53 automatically creates a default SOA record
         * and four NS records for the zone. The NS records in the hosted zone are the name
         * servers you give your registrar to delegate your domain to. For more information
         * about SOA and NS records, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/SOA-NSrecords.html">NS
         * and SOA Records that Amazon Route 53 Creates for a Hosted Zone</a> in the
         * <i>Amazon Route 53 Developer Guide</i>.</p> <p>When you create a zone, its
         * initial status is <code>PENDING</code>. This means that it is not yet available
         * on all DNS servers. The status of the zone changes to <code>INSYNC</code> when
         * the NS and SOA records are available on all Amazon Route 53 DNS servers. </p>
         * <p>When trying to create a hosted zone using a reusable delegation set, you
         * could specify an optional DelegationSetId, and Route53 would assign those 4 NS
         * records for the zone, instead of alloting a new one.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHostedZoneAsync(const Model::CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action creates a reusable delegationSet.</p> <p>To create a new reusable
         * delegationSet, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/delegationset</code> resource. The request body must include a
         * document with a <code>CreateReusableDelegationSetRequest</code> element. The
         * response returns the <code>CreateReusableDelegationSetResponse</code> element
         * that contains metadata about the delegationSet. </p> <p>If the optional
         * parameter HostedZoneId is specified, it marks the delegationSet associated with
         * that particular hosted zone as reusable. </p>
         */
        virtual Model::CreateReusableDelegationSetOutcome CreateReusableDelegationSet(const Model::CreateReusableDelegationSetRequest& request) const;

        /**
         * <p>This action creates a reusable delegationSet.</p> <p>To create a new reusable
         * delegationSet, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/delegationset</code> resource. The request body must include a
         * document with a <code>CreateReusableDelegationSetRequest</code> element. The
         * response returns the <code>CreateReusableDelegationSetResponse</code> element
         * that contains metadata about the delegationSet. </p> <p>If the optional
         * parameter HostedZoneId is specified, it marks the delegationSet associated with
         * that particular hosted zone as reusable. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReusableDelegationSetOutcomeCallable CreateReusableDelegationSetCallable(const Model::CreateReusableDelegationSetRequest& request) const;

        /**
         * <p>This action creates a reusable delegationSet.</p> <p>To create a new reusable
         * delegationSet, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/delegationset</code> resource. The request body must include a
         * document with a <code>CreateReusableDelegationSetRequest</code> element. The
         * response returns the <code>CreateReusableDelegationSetResponse</code> element
         * that contains metadata about the delegationSet. </p> <p>If the optional
         * parameter HostedZoneId is specified, it marks the delegationSet associated with
         * that particular hosted zone as reusable. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReusableDelegationSetAsync(const Model::CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a traffic policy, which you use to create multiple DNS resource
         * record sets for one domain name (such as example.com) or one subdomain name
         * (such as www.example.com).</p> <p>To create a traffic policy, send a
         * <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource. The request body must include a
         * document with a <code>CreateTrafficPolicyRequest</code> element. The response
         * includes the <code>CreateTrafficPolicyResponse</code> element, which contains
         * information about the new traffic policy.</p>
         */
        virtual Model::CreateTrafficPolicyOutcome CreateTrafficPolicy(const Model::CreateTrafficPolicyRequest& request) const;

        /**
         * <p>Creates a traffic policy, which you use to create multiple DNS resource
         * record sets for one domain name (such as example.com) or one subdomain name
         * (such as www.example.com).</p> <p>To create a traffic policy, send a
         * <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource. The request body must include a
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
         * (such as www.example.com).</p> <p>To create a traffic policy, send a
         * <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource. The request body must include a
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
         * <code>CreateTrafficPolicyInstance</code> created.</p> <p>To create a traffic
         * policy instance, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicyinstance</code> resource. The request body must include
         * a document with a <code>CreateTrafficPolicyRequest</code> element. The response
         * returns the <code>CreateTrafficPolicyInstanceResponse</code> element, which
         * contains information about the traffic policy instance.</p>
         */
        virtual Model::CreateTrafficPolicyInstanceOutcome CreateTrafficPolicyInstance(const Model::CreateTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Creates resource record sets in a specified hosted zone based on the settings
         * in a specified traffic policy version. In addition,
         * <code>CreateTrafficPolicyInstance</code> associates the resource record sets
         * with a specified domain name (such as example.com) or subdomain name (such as
         * www.example.com). Amazon Route 53 responds to DNS queries for the domain or
         * subdomain name by using the resource record sets that
         * <code>CreateTrafficPolicyInstance</code> created.</p> <p>To create a traffic
         * policy instance, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicyinstance</code> resource. The request body must include
         * a document with a <code>CreateTrafficPolicyRequest</code> element. The response
         * returns the <code>CreateTrafficPolicyInstanceResponse</code> element, which
         * contains information about the traffic policy instance.</p>
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
         * <code>CreateTrafficPolicyInstance</code> created.</p> <p>To create a traffic
         * policy instance, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicyinstance</code> resource. The request body must include
         * a document with a <code>CreateTrafficPolicyRequest</code> element. The response
         * returns the <code>CreateTrafficPolicyInstanceResponse</code> element, which
         * contains information about the traffic policy instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficPolicyInstanceAsync(const Model::CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of an existing traffic policy. When you create a new
         * version of a traffic policy, you specify the ID of the traffic policy that you
         * want to update and a JSON-formatted document that describes the new version.</p>
         * <p>You use traffic policies to create multiple DNS resource record sets for one
         * domain name (such as example.com) or one subdomain name (such as
         * www.example.com).</p> <p>To create a new version, send a <code>POST</code>
         * request to the <code>/<i>Route 53 API version</i>/trafficpolicy/</code>
         * resource. The request body includes a document with a
         * <code>CreateTrafficPolicyVersionRequest</code> element. The response returns the
         * <code>CreateTrafficPolicyVersionResponse</code> element, which contains
         * information about the new version of the traffic policy.</p>
         */
        virtual Model::CreateTrafficPolicyVersionOutcome CreateTrafficPolicyVersion(const Model::CreateTrafficPolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of an existing traffic policy. When you create a new
         * version of a traffic policy, you specify the ID of the traffic policy that you
         * want to update and a JSON-formatted document that describes the new version.</p>
         * <p>You use traffic policies to create multiple DNS resource record sets for one
         * domain name (such as example.com) or one subdomain name (such as
         * www.example.com).</p> <p>To create a new version, send a <code>POST</code>
         * request to the <code>/<i>Route 53 API version</i>/trafficpolicy/</code>
         * resource. The request body includes a document with a
         * <code>CreateTrafficPolicyVersionRequest</code> element. The response returns the
         * <code>CreateTrafficPolicyVersionResponse</code> element, which contains
         * information about the new version of the traffic policy.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficPolicyVersionOutcomeCallable CreateTrafficPolicyVersionCallable(const Model::CreateTrafficPolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of an existing traffic policy. When you create a new
         * version of a traffic policy, you specify the ID of the traffic policy that you
         * want to update and a JSON-formatted document that describes the new version.</p>
         * <p>You use traffic policies to create multiple DNS resource record sets for one
         * domain name (such as example.com) or one subdomain name (such as
         * www.example.com).</p> <p>To create a new version, send a <code>POST</code>
         * request to the <code>/<i>Route 53 API version</i>/trafficpolicy/</code>
         * resource. The request body includes a document with a
         * <code>CreateTrafficPolicyVersionRequest</code> element. The response returns the
         * <code>CreateTrafficPolicyVersionResponse</code> element, which contains
         * information about the new version of the traffic policy.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficPolicyVersionAsync(const Model::CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action deletes a health check. To delete a health check, send a
         * <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck/<i>health check ID</i></code> resource.</p> <important>
         * You can delete a health check only if there are no resource record sets
         * associated with this health check. If resource record sets are associated with
         * this health check, you must disassociate them before you can delete your health
         * check. If you try to delete a health check that is associated with resource
         * record sets, Amazon Route 53 will deny your request with a
         * <code>HealthCheckInUse</code> error. For information about disassociating the
         * records from your health check, see <a>ChangeResourceRecordSets</a>.</important>
         */
        virtual Model::DeleteHealthCheckOutcome DeleteHealthCheck(const Model::DeleteHealthCheckRequest& request) const;

        /**
         * <p>This action deletes a health check. To delete a health check, send a
         * <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck/<i>health check ID</i></code> resource.</p> <important>
         * You can delete a health check only if there are no resource record sets
         * associated with this health check. If resource record sets are associated with
         * this health check, you must disassociate them before you can delete your health
         * check. If you try to delete a health check that is associated with resource
         * record sets, Amazon Route 53 will deny your request with a
         * <code>HealthCheckInUse</code> error. For information about disassociating the
         * records from your health check, see <a>ChangeResourceRecordSets</a>.</important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHealthCheckOutcomeCallable DeleteHealthCheckCallable(const Model::DeleteHealthCheckRequest& request) const;

        /**
         * <p>This action deletes a health check. To delete a health check, send a
         * <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck/<i>health check ID</i></code> resource.</p> <important>
         * You can delete a health check only if there are no resource record sets
         * associated with this health check. If resource record sets are associated with
         * this health check, you must disassociate them before you can delete your health
         * check. If you try to delete a health check that is associated with resource
         * record sets, Amazon Route 53 will deny your request with a
         * <code>HealthCheckInUse</code> error. For information about disassociating the
         * records from your health check, see <a>ChangeResourceRecordSets</a>.</important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHealthCheckAsync(const Model::DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action deletes a hosted zone. To delete a hosted zone, send a
         * <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzone/<i>hosted zone ID</i></code> resource.</p> <p>For more
         * information about deleting a hosted zone, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DeleteHostedZone.html">Deleting
         * a Hosted Zone</a> in the <i>Amazon Route 53 Developer Guide</i>.</p> <important>
         * You can delete a hosted zone only if there are no resource record sets other
         * than the default SOA record and NS resource record sets. If your hosted zone
         * contains other resource record sets, you must delete them before you can delete
         * your hosted zone. If you try to delete a hosted zone that contains other
         * resource record sets, Amazon Route 53 will deny your request with a
         * <code>HostedZoneNotEmpty</code> error. For information about deleting records
         * from your hosted zone, see <a>ChangeResourceRecordSets</a>.</important>
         */
        virtual Model::DeleteHostedZoneOutcome DeleteHostedZone(const Model::DeleteHostedZoneRequest& request) const;

        /**
         * <p>This action deletes a hosted zone. To delete a hosted zone, send a
         * <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzone/<i>hosted zone ID</i></code> resource.</p> <p>For more
         * information about deleting a hosted zone, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DeleteHostedZone.html">Deleting
         * a Hosted Zone</a> in the <i>Amazon Route 53 Developer Guide</i>.</p> <important>
         * You can delete a hosted zone only if there are no resource record sets other
         * than the default SOA record and NS resource record sets. If your hosted zone
         * contains other resource record sets, you must delete them before you can delete
         * your hosted zone. If you try to delete a hosted zone that contains other
         * resource record sets, Amazon Route 53 will deny your request with a
         * <code>HostedZoneNotEmpty</code> error. For information about deleting records
         * from your hosted zone, see <a>ChangeResourceRecordSets</a>.</important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHostedZoneOutcomeCallable DeleteHostedZoneCallable(const Model::DeleteHostedZoneRequest& request) const;

        /**
         * <p>This action deletes a hosted zone. To delete a hosted zone, send a
         * <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzone/<i>hosted zone ID</i></code> resource.</p> <p>For more
         * information about deleting a hosted zone, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DeleteHostedZone.html">Deleting
         * a Hosted Zone</a> in the <i>Amazon Route 53 Developer Guide</i>.</p> <important>
         * You can delete a hosted zone only if there are no resource record sets other
         * than the default SOA record and NS resource record sets. If your hosted zone
         * contains other resource record sets, you must delete them before you can delete
         * your hosted zone. If you try to delete a hosted zone that contains other
         * resource record sets, Amazon Route 53 will deny your request with a
         * <code>HostedZoneNotEmpty</code> error. For information about deleting records
         * from your hosted zone, see <a>ChangeResourceRecordSets</a>.</important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHostedZoneAsync(const Model::DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action deletes a reusable delegation set. To delete a reusable
         * delegation set, send a <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/delegationset/<i>delegation set ID</i></code> resource.</p>
         * <important> You can delete a reusable delegation set only if there are no
         * associated hosted zones. If your reusable delegation set contains associated
         * hosted zones, you must delete them before you can delete your reusable
         * delegation set. If you try to delete a reusable delegation set that contains
         * associated hosted zones, Amazon Route 53 will deny your request with a
         * <code>DelegationSetInUse</code> error.</important>
         */
        virtual Model::DeleteReusableDelegationSetOutcome DeleteReusableDelegationSet(const Model::DeleteReusableDelegationSetRequest& request) const;

        /**
         * <p>This action deletes a reusable delegation set. To delete a reusable
         * delegation set, send a <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/delegationset/<i>delegation set ID</i></code> resource.</p>
         * <important> You can delete a reusable delegation set only if there are no
         * associated hosted zones. If your reusable delegation set contains associated
         * hosted zones, you must delete them before you can delete your reusable
         * delegation set. If you try to delete a reusable delegation set that contains
         * associated hosted zones, Amazon Route 53 will deny your request with a
         * <code>DelegationSetInUse</code> error.</important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReusableDelegationSetOutcomeCallable DeleteReusableDelegationSetCallable(const Model::DeleteReusableDelegationSetRequest& request) const;

        /**
         * <p>This action deletes a reusable delegation set. To delete a reusable
         * delegation set, send a <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/delegationset/<i>delegation set ID</i></code> resource.</p>
         * <important> You can delete a reusable delegation set only if there are no
         * associated hosted zones. If your reusable delegation set contains associated
         * hosted zones, you must delete them before you can delete your reusable
         * delegation set. If you try to delete a reusable delegation set that contains
         * associated hosted zones, Amazon Route 53 will deny your request with a
         * <code>DelegationSetInUse</code> error.</important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReusableDelegationSetAsync(const Model::DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a traffic policy. To delete a traffic policy, send a
         * <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource.</p>
         */
        virtual Model::DeleteTrafficPolicyOutcome DeleteTrafficPolicy(const Model::DeleteTrafficPolicyRequest& request) const;

        /**
         * <p>Deletes a traffic policy. To delete a traffic policy, send a
         * <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficPolicyOutcomeCallable DeleteTrafficPolicyCallable(const Model::DeleteTrafficPolicyRequest& request) const;

        /**
         * <p>Deletes a traffic policy. To delete a traffic policy, send a
         * <code>DELETE</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficPolicyAsync(const Model::DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a traffic policy instance and all of the resource record sets that
         * Amazon Route 53 created when you created the instance.</p> <p>To delete a
         * traffic policy instance, send a <code>DELETE</code> request to the
         * <code>/<i>Route 53 API version</i>/trafficpolicy/<i>traffic policy instance
         * ID</i></code> resource.</p> <important>When you delete a traffic policy
         * instance, Amazon Route 53 also deletes all of the resource record sets that were
         * created when you created the traffic policy instance.</important>
         */
        virtual Model::DeleteTrafficPolicyInstanceOutcome DeleteTrafficPolicyInstance(const Model::DeleteTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Deletes a traffic policy instance and all of the resource record sets that
         * Amazon Route 53 created when you created the instance.</p> <p>To delete a
         * traffic policy instance, send a <code>DELETE</code> request to the
         * <code>/<i>Route 53 API version</i>/trafficpolicy/<i>traffic policy instance
         * ID</i></code> resource.</p> <important>When you delete a traffic policy
         * instance, Amazon Route 53 also deletes all of the resource record sets that were
         * created when you created the traffic policy instance.</important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficPolicyInstanceOutcomeCallable DeleteTrafficPolicyInstanceCallable(const Model::DeleteTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Deletes a traffic policy instance and all of the resource record sets that
         * Amazon Route 53 created when you created the instance.</p> <p>To delete a
         * traffic policy instance, send a <code>DELETE</code> request to the
         * <code>/<i>Route 53 API version</i>/trafficpolicy/<i>traffic policy instance
         * ID</i></code> resource.</p> <important>When you delete a traffic policy
         * instance, Amazon Route 53 also deletes all of the resource record sets that were
         * created when you created the traffic policy instance.</important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficPolicyInstanceAsync(const Model::DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action disassociates a VPC from an hosted zone. </p> <p>To disassociate
         * a VPC to a hosted zone, send a <code>POST</code> request to the <code>/<i>Route
         * 53 API version</i>/hostedzone/<i>hosted zone ID</i>/disassociatevpc</code>
         * resource. The request body must include a document with a
         * <code>DisassociateVPCFromHostedZoneRequest</code> element. The response returns
         * the <code>DisassociateVPCFromHostedZoneResponse</code> element that contains
         * <code>ChangeInfo</code> for you to track the progress of the
         * <code>DisassociateVPCFromHostedZoneRequest</code> you made. See
         * <code>GetChange</code> operation for how to track the progress of your
         * change.</p>
         */
        virtual Model::DisassociateVPCFromHostedZoneOutcome DisassociateVPCFromHostedZone(const Model::DisassociateVPCFromHostedZoneRequest& request) const;

        /**
         * <p>This action disassociates a VPC from an hosted zone. </p> <p>To disassociate
         * a VPC to a hosted zone, send a <code>POST</code> request to the <code>/<i>Route
         * 53 API version</i>/hostedzone/<i>hosted zone ID</i>/disassociatevpc</code>
         * resource. The request body must include a document with a
         * <code>DisassociateVPCFromHostedZoneRequest</code> element. The response returns
         * the <code>DisassociateVPCFromHostedZoneResponse</code> element that contains
         * <code>ChangeInfo</code> for you to track the progress of the
         * <code>DisassociateVPCFromHostedZoneRequest</code> you made. See
         * <code>GetChange</code> operation for how to track the progress of your
         * change.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateVPCFromHostedZoneOutcomeCallable DisassociateVPCFromHostedZoneCallable(const Model::DisassociateVPCFromHostedZoneRequest& request) const;

        /**
         * <p>This action disassociates a VPC from an hosted zone. </p> <p>To disassociate
         * a VPC to a hosted zone, send a <code>POST</code> request to the <code>/<i>Route
         * 53 API version</i>/hostedzone/<i>hosted zone ID</i>/disassociatevpc</code>
         * resource. The request body must include a document with a
         * <code>DisassociateVPCFromHostedZoneRequest</code> element. The response returns
         * the <code>DisassociateVPCFromHostedZoneResponse</code> element that contains
         * <code>ChangeInfo</code> for you to track the progress of the
         * <code>DisassociateVPCFromHostedZoneRequest</code> you made. See
         * <code>GetChange</code> operation for how to track the progress of your
         * change.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateVPCFromHostedZoneAsync(const Model::DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action returns the current status of a change batch request. The status
         * is one of the following values:</p> <p>- <code>PENDING</code> indicates that the
         * changes in this request have not replicated to all Amazon Route 53 DNS servers.
         * This is the initial status of all change batch requests.</p> <p>-
         * <code>INSYNC</code> indicates that the changes have replicated to all Amazon
         * Route 53 DNS servers. </p>
         */
        virtual Model::GetChangeOutcome GetChange(const Model::GetChangeRequest& request) const;

        /**
         * <p>This action returns the current status of a change batch request. The status
         * is one of the following values:</p> <p>- <code>PENDING</code> indicates that the
         * changes in this request have not replicated to all Amazon Route 53 DNS servers.
         * This is the initial status of all change batch requests.</p> <p>-
         * <code>INSYNC</code> indicates that the changes have replicated to all Amazon
         * Route 53 DNS servers. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChangeOutcomeCallable GetChangeCallable(const Model::GetChangeRequest& request) const;

        /**
         * <p>This action returns the current status of a change batch request. The status
         * is one of the following values:</p> <p>- <code>PENDING</code> indicates that the
         * changes in this request have not replicated to all Amazon Route 53 DNS servers.
         * This is the initial status of all change batch requests.</p> <p>-
         * <code>INSYNC</code> indicates that the changes have replicated to all Amazon
         * Route 53 DNS servers. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChangeAsync(const Model::GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a list of the IP ranges used by Amazon Route 53 health checkers
         * to check the health of your resources, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/checkeripranges</code> resource. You can use
         * these IP addresses to configure router and firewall rules to allow health
         * checkers to check the health of your resources.</p>
         */
        virtual Model::GetCheckerIpRangesOutcome GetCheckerIpRanges(const Model::GetCheckerIpRangesRequest& request) const;

        /**
         * <p>To retrieve a list of the IP ranges used by Amazon Route 53 health checkers
         * to check the health of your resources, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/checkeripranges</code> resource. You can use
         * these IP addresses to configure router and firewall rules to allow health
         * checkers to check the health of your resources.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCheckerIpRangesOutcomeCallable GetCheckerIpRangesCallable(const Model::GetCheckerIpRangesRequest& request) const;

        /**
         * <p>To retrieve a list of the IP ranges used by Amazon Route 53 health checkers
         * to check the health of your resources, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/checkeripranges</code> resource. You can use
         * these IP addresses to configure router and firewall rules to allow health
         * checkers to check the health of your resources.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCheckerIpRangesAsync(const Model::GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a single geo location, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/geolocation</code> resource with one of these
         * options: continentcode | countrycode | countrycode and subdivisioncode.</p>
         */
        virtual Model::GetGeoLocationOutcome GetGeoLocation(const Model::GetGeoLocationRequest& request) const;

        /**
         * <p>To retrieve a single geo location, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/geolocation</code> resource with one of these
         * options: continentcode | countrycode | countrycode and subdivisioncode.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGeoLocationOutcomeCallable GetGeoLocationCallable(const Model::GetGeoLocationRequest& request) const;

        /**
         * <p>To retrieve a single geo location, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/geolocation</code> resource with one of these
         * options: continentcode | countrycode | countrycode and subdivisioncode.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGeoLocationAsync(const Model::GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve the health check, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/healthcheck/<i>health check ID</i></code>
         * resource. </p>
         */
        virtual Model::GetHealthCheckOutcome GetHealthCheck(const Model::GetHealthCheckRequest& request) const;

        /**
         * <p>To retrieve the health check, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/healthcheck/<i>health check ID</i></code>
         * resource. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckOutcomeCallable GetHealthCheckCallable(const Model::GetHealthCheckRequest& request) const;

        /**
         * <p>To retrieve the health check, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/healthcheck/<i>health check ID</i></code>
         * resource. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckAsync(const Model::GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a count of all your health checks, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/healthcheckcount</code>
         * resource.</p>
         */
        virtual Model::GetHealthCheckCountOutcome GetHealthCheckCount(const Model::GetHealthCheckCountRequest& request) const;

        /**
         * <p>To retrieve a count of all your health checks, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/healthcheckcount</code>
         * resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckCountOutcomeCallable GetHealthCheckCountCallable(const Model::GetHealthCheckCountRequest& request) const;

        /**
         * <p>To retrieve a count of all your health checks, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/healthcheckcount</code>
         * resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckCountAsync(const Model::GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If you want to learn why a health check is currently failing or why it failed
         * most recently (if at all), you can get the failure reason for the most recent
         * failure. Send a <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck/<i>health check ID</i>/lastfailurereason</code>
         * resource.</p>
         */
        virtual Model::GetHealthCheckLastFailureReasonOutcome GetHealthCheckLastFailureReason(const Model::GetHealthCheckLastFailureReasonRequest& request) const;

        /**
         * <p>If you want to learn why a health check is currently failing or why it failed
         * most recently (if at all), you can get the failure reason for the most recent
         * failure. Send a <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck/<i>health check ID</i>/lastfailurereason</code>
         * resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckLastFailureReasonOutcomeCallable GetHealthCheckLastFailureReasonCallable(const Model::GetHealthCheckLastFailureReasonRequest& request) const;

        /**
         * <p>If you want to learn why a health check is currently failing or why it failed
         * most recently (if at all), you can get the failure reason for the most recent
         * failure. Send a <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck/<i>health check ID</i>/lastfailurereason</code>
         * resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckLastFailureReasonAsync(const Model::GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve the health check status, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/healthcheck/<i>health check
         * ID</i>/status</code> resource. You can use this call to get a health check's
         * current status. </p>
         */
        virtual Model::GetHealthCheckStatusOutcome GetHealthCheckStatus(const Model::GetHealthCheckStatusRequest& request) const;

        /**
         * <p>To retrieve the health check status, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/healthcheck/<i>health check
         * ID</i>/status</code> resource. You can use this call to get a health check's
         * current status. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckStatusOutcomeCallable GetHealthCheckStatusCallable(const Model::GetHealthCheckStatusRequest& request) const;

        /**
         * <p>To retrieve the health check status, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/healthcheck/<i>health check
         * ID</i>/status</code> resource. You can use this call to get a health check's
         * current status. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckStatusAsync(const Model::GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve the delegation set for a hosted zone, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/hostedzone/<i>hosted zone
         * ID</i></code> resource. The delegation set is the four Amazon Route 53 name
         * servers that were assigned to the hosted zone when you created it.</p>
         */
        virtual Model::GetHostedZoneOutcome GetHostedZone(const Model::GetHostedZoneRequest& request) const;

        /**
         * <p>To retrieve the delegation set for a hosted zone, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/hostedzone/<i>hosted zone
         * ID</i></code> resource. The delegation set is the four Amazon Route 53 name
         * servers that were assigned to the hosted zone when you created it.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostedZoneOutcomeCallable GetHostedZoneCallable(const Model::GetHostedZoneRequest& request) const;

        /**
         * <p>To retrieve the delegation set for a hosted zone, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/hostedzone/<i>hosted zone
         * ID</i></code> resource. The delegation set is the four Amazon Route 53 name
         * servers that were assigned to the hosted zone when you created it.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostedZoneAsync(const Model::GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a count of all your hosted zones, send a <code>GET</code> request
         * to the <code>/<i>Route 53 API version</i>/hostedzonecount</code> resource.</p>
         */
        virtual Model::GetHostedZoneCountOutcome GetHostedZoneCount(const Model::GetHostedZoneCountRequest& request) const;

        /**
         * <p>To retrieve a count of all your hosted zones, send a <code>GET</code> request
         * to the <code>/<i>Route 53 API version</i>/hostedzonecount</code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostedZoneCountOutcomeCallable GetHostedZoneCountCallable(const Model::GetHostedZoneCountRequest& request) const;

        /**
         * <p>To retrieve a count of all your hosted zones, send a <code>GET</code> request
         * to the <code>/<i>Route 53 API version</i>/hostedzonecount</code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostedZoneCountAsync(const Model::GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve the reusable delegation set, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/delegationset/<i>delegation set
         * ID</i></code> resource.</p>
         */
        virtual Model::GetReusableDelegationSetOutcome GetReusableDelegationSet(const Model::GetReusableDelegationSetRequest& request) const;

        /**
         * <p>To retrieve the reusable delegation set, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/delegationset/<i>delegation set
         * ID</i></code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReusableDelegationSetOutcomeCallable GetReusableDelegationSetCallable(const Model::GetReusableDelegationSetRequest& request) const;

        /**
         * <p>To retrieve the reusable delegation set, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/delegationset/<i>delegation set
         * ID</i></code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReusableDelegationSetAsync(const Model::GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specific traffic policy version. To get the
         * information, send a <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource.</p>
         */
        virtual Model::GetTrafficPolicyOutcome GetTrafficPolicy(const Model::GetTrafficPolicyRequest& request) const;

        /**
         * <p>Gets information about a specific traffic policy version. To get the
         * information, send a <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrafficPolicyOutcomeCallable GetTrafficPolicyCallable(const Model::GetTrafficPolicyRequest& request) const;

        /**
         * <p>Gets information about a specific traffic policy version. To get the
         * information, send a <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrafficPolicyAsync(const Model::GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified traffic policy instance.</p> <p>To get
         * information about the traffic policy instance, send a <code>GET</code> request
         * to the <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code>
         * resource.</p> <note>After you submit a <code>CreateTrafficPolicyInstance</code>
         * or an <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay
         * while Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element. </note>
         */
        virtual Model::GetTrafficPolicyInstanceOutcome GetTrafficPolicyInstance(const Model::GetTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Gets information about a specified traffic policy instance.</p> <p>To get
         * information about the traffic policy instance, send a <code>GET</code> request
         * to the <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code>
         * resource.</p> <note>After you submit a <code>CreateTrafficPolicyInstance</code>
         * or an <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay
         * while Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element. </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrafficPolicyInstanceOutcomeCallable GetTrafficPolicyInstanceCallable(const Model::GetTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Gets information about a specified traffic policy instance.</p> <p>To get
         * information about the traffic policy instance, send a <code>GET</code> request
         * to the <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code>
         * resource.</p> <note>After you submit a <code>CreateTrafficPolicyInstance</code>
         * or an <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay
         * while Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element. </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrafficPolicyInstanceAsync(const Model::GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the number of traffic policy instances that are associated with the
         * current AWS account.</p> <p>To get the number of traffic policy instances, send
         * a <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicyinstancecount</code> resource.</p>
         */
        virtual Model::GetTrafficPolicyInstanceCountOutcome GetTrafficPolicyInstanceCount(const Model::GetTrafficPolicyInstanceCountRequest& request) const;

        /**
         * <p>Gets the number of traffic policy instances that are associated with the
         * current AWS account.</p> <p>To get the number of traffic policy instances, send
         * a <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicyinstancecount</code> resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrafficPolicyInstanceCountOutcomeCallable GetTrafficPolicyInstanceCountCallable(const Model::GetTrafficPolicyInstanceCountRequest& request) const;

        /**
         * <p>Gets the number of traffic policy instances that are associated with the
         * current AWS account.</p> <p>To get the number of traffic policy instances, send
         * a <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicyinstancecount</code> resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrafficPolicyInstanceCountAsync(const Model::GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a list of supported geo locations, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/geolocations</code> resource.
         * The response to this request includes a <code>GeoLocationDetailsList</code>
         * element with zero, one, or multiple <code>GeoLocationDetails</code> child
         * elements. The list is sorted by country code, and then subdivision code,
         * followed by continents at the end of the list. </p> <p>By default, the list of
         * geo locations is displayed on a single page. You can control the length of the
         * page that is displayed by using the <code>MaxItems</code> parameter. If the list
         * is truncated, <code>IsTruncated</code> will be set to <i>true</i> and a
         * combination of <code>NextContinentCode, NextCountryCode,
         * NextSubdivisionCode</code> will be populated. You can pass these as parameters
         * to <code>StartContinentCode, StartCountryCode, StartSubdivisionCode</code> to
         * control the geo location that the list begins with. </p>
         */
        virtual Model::ListGeoLocationsOutcome ListGeoLocations(const Model::ListGeoLocationsRequest& request) const;

        /**
         * <p>To retrieve a list of supported geo locations, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/geolocations</code> resource.
         * The response to this request includes a <code>GeoLocationDetailsList</code>
         * element with zero, one, or multiple <code>GeoLocationDetails</code> child
         * elements. The list is sorted by country code, and then subdivision code,
         * followed by continents at the end of the list. </p> <p>By default, the list of
         * geo locations is displayed on a single page. You can control the length of the
         * page that is displayed by using the <code>MaxItems</code> parameter. If the list
         * is truncated, <code>IsTruncated</code> will be set to <i>true</i> and a
         * combination of <code>NextContinentCode, NextCountryCode,
         * NextSubdivisionCode</code> will be populated. You can pass these as parameters
         * to <code>StartContinentCode, StartCountryCode, StartSubdivisionCode</code> to
         * control the geo location that the list begins with. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGeoLocationsOutcomeCallable ListGeoLocationsCallable(const Model::ListGeoLocationsRequest& request) const;

        /**
         * <p>To retrieve a list of supported geo locations, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/geolocations</code> resource.
         * The response to this request includes a <code>GeoLocationDetailsList</code>
         * element with zero, one, or multiple <code>GeoLocationDetails</code> child
         * elements. The list is sorted by country code, and then subdivision code,
         * followed by continents at the end of the list. </p> <p>By default, the list of
         * geo locations is displayed on a single page. You can control the length of the
         * page that is displayed by using the <code>MaxItems</code> parameter. If the list
         * is truncated, <code>IsTruncated</code> will be set to <i>true</i> and a
         * combination of <code>NextContinentCode, NextCountryCode,
         * NextSubdivisionCode</code> will be populated. You can pass these as parameters
         * to <code>StartContinentCode, StartCountryCode, StartSubdivisionCode</code> to
         * control the geo location that the list begins with. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGeoLocationsAsync(const Model::ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a list of your health checks, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/healthcheck</code> resource. The response
         * to this request includes a <code>HealthChecks</code> element with zero, one, or
         * multiple <code>HealthCheck</code> child elements. By default, the list of health
         * checks is displayed on a single page. You can control the length of the page
         * that is displayed by using the <code>MaxItems</code> parameter. You can use the
         * <code>Marker</code> parameter to control the health check that the list begins
         * with. </p> <note> Amazon Route 53 returns a maximum of 100 items. If you set
         * MaxItems to a value greater than 100, Amazon Route 53 returns only the first
         * 100.</note>
         */
        virtual Model::ListHealthChecksOutcome ListHealthChecks(const Model::ListHealthChecksRequest& request) const;

        /**
         * <p>To retrieve a list of your health checks, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/healthcheck</code> resource. The response
         * to this request includes a <code>HealthChecks</code> element with zero, one, or
         * multiple <code>HealthCheck</code> child elements. By default, the list of health
         * checks is displayed on a single page. You can control the length of the page
         * that is displayed by using the <code>MaxItems</code> parameter. You can use the
         * <code>Marker</code> parameter to control the health check that the list begins
         * with. </p> <note> Amazon Route 53 returns a maximum of 100 items. If you set
         * MaxItems to a value greater than 100, Amazon Route 53 returns only the first
         * 100.</note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHealthChecksOutcomeCallable ListHealthChecksCallable(const Model::ListHealthChecksRequest& request) const;

        /**
         * <p>To retrieve a list of your health checks, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/healthcheck</code> resource. The response
         * to this request includes a <code>HealthChecks</code> element with zero, one, or
         * multiple <code>HealthCheck</code> child elements. By default, the list of health
         * checks is displayed on a single page. You can control the length of the page
         * that is displayed by using the <code>MaxItems</code> parameter. You can use the
         * <code>Marker</code> parameter to control the health check that the list begins
         * with. </p> <note> Amazon Route 53 returns a maximum of 100 items. If you set
         * MaxItems to a value greater than 100, Amazon Route 53 returns only the first
         * 100.</note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHealthChecksAsync(const Model::ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a list of your hosted zones, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/hostedzone</code> resource. The response
         * to this request includes a <code>HostedZones</code> element with zero, one, or
         * multiple <code>HostedZone</code> child elements. By default, the list of hosted
         * zones is displayed on a single page. You can control the length of the page that
         * is displayed by using the <code>MaxItems</code> parameter. You can use the
         * <code>Marker</code> parameter to control the hosted zone that the list begins
         * with. </p> <note> Amazon Route 53 returns a maximum of 100 items. If you set
         * MaxItems to a value greater than 100, Amazon Route 53 returns only the first
         * 100.</note>
         */
        virtual Model::ListHostedZonesOutcome ListHostedZones(const Model::ListHostedZonesRequest& request) const;

        /**
         * <p>To retrieve a list of your hosted zones, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/hostedzone</code> resource. The response
         * to this request includes a <code>HostedZones</code> element with zero, one, or
         * multiple <code>HostedZone</code> child elements. By default, the list of hosted
         * zones is displayed on a single page. You can control the length of the page that
         * is displayed by using the <code>MaxItems</code> parameter. You can use the
         * <code>Marker</code> parameter to control the hosted zone that the list begins
         * with. </p> <note> Amazon Route 53 returns a maximum of 100 items. If you set
         * MaxItems to a value greater than 100, Amazon Route 53 returns only the first
         * 100.</note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHostedZonesOutcomeCallable ListHostedZonesCallable(const Model::ListHostedZonesRequest& request) const;

        /**
         * <p>To retrieve a list of your hosted zones, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/hostedzone</code> resource. The response
         * to this request includes a <code>HostedZones</code> element with zero, one, or
         * multiple <code>HostedZone</code> child elements. By default, the list of hosted
         * zones is displayed on a single page. You can control the length of the page that
         * is displayed by using the <code>MaxItems</code> parameter. You can use the
         * <code>Marker</code> parameter to control the hosted zone that the list begins
         * with. </p> <note> Amazon Route 53 returns a maximum of 100 items. If you set
         * MaxItems to a value greater than 100, Amazon Route 53 returns only the first
         * 100.</note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHostedZonesAsync(const Model::ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a list of your hosted zones in lexicographic order, send a
         * <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzonesbyname</code> resource. The response to this request
         * includes a <code>HostedZones</code> element with zero or more
         * <code>HostedZone</code> child elements lexicographically ordered by DNS name. By
         * default, the list of hosted zones is displayed on a single page. You can control
         * the length of the page that is displayed by using the <code>MaxItems</code>
         * parameter. You can use the <code>DNSName</code> and <code>HostedZoneId</code>
         * parameters to control the hosted zone that the list begins with.</p> <note>
         * Amazon Route 53 returns a maximum of 100 items. If you set MaxItems to a value
         * greater than 100, Amazon Route 53 returns only the first 100.</note>
         */
        virtual Model::ListHostedZonesByNameOutcome ListHostedZonesByName(const Model::ListHostedZonesByNameRequest& request) const;

        /**
         * <p>To retrieve a list of your hosted zones in lexicographic order, send a
         * <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzonesbyname</code> resource. The response to this request
         * includes a <code>HostedZones</code> element with zero or more
         * <code>HostedZone</code> child elements lexicographically ordered by DNS name. By
         * default, the list of hosted zones is displayed on a single page. You can control
         * the length of the page that is displayed by using the <code>MaxItems</code>
         * parameter. You can use the <code>DNSName</code> and <code>HostedZoneId</code>
         * parameters to control the hosted zone that the list begins with.</p> <note>
         * Amazon Route 53 returns a maximum of 100 items. If you set MaxItems to a value
         * greater than 100, Amazon Route 53 returns only the first 100.</note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHostedZonesByNameOutcomeCallable ListHostedZonesByNameCallable(const Model::ListHostedZonesByNameRequest& request) const;

        /**
         * <p>To retrieve a list of your hosted zones in lexicographic order, send a
         * <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/hostedzonesbyname</code> resource. The response to this request
         * includes a <code>HostedZones</code> element with zero or more
         * <code>HostedZone</code> child elements lexicographically ordered by DNS name. By
         * default, the list of hosted zones is displayed on a single page. You can control
         * the length of the page that is displayed by using the <code>MaxItems</code>
         * parameter. You can use the <code>DNSName</code> and <code>HostedZoneId</code>
         * parameters to control the hosted zone that the list begins with.</p> <note>
         * Amazon Route 53 returns a maximum of 100 items. If you set MaxItems to a value
         * greater than 100, Amazon Route 53 returns only the first 100.</note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHostedZonesByNameAsync(const Model::ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imagine all the resource record sets in a zone listed out in front of you.
         * Imagine them sorted lexicographically first by DNS name (with the labels
         * reversed, like "com.amazon.www" for example), and secondarily, lexicographically
         * by record type. This operation retrieves at most MaxItems resource record sets
         * from this list, in order, starting at a position specified by the Name and Type
         * arguments:</p> <ul> <li>If both Name and Type are omitted, this means start the
         * results at the first RRSET in the HostedZone.</li> <li>If Name is specified but
         * Type is omitted, this means start the results at the first RRSET in the list
         * whose name is greater than or equal to Name. </li> <li>If both Name and Type are
         * specified, this means start the results at the first RRSET in the list whose
         * name is greater than or equal to Name and whose type is greater than or equal to
         * Type.</li> <li>It is an error to specify the Type but not the Name.</li> </ul>
         * <p>Use ListResourceRecordSets to retrieve a single known record set by
         * specifying the record set's name and type, and setting MaxItems = 1</p> <p>To
         * retrieve all the records in a HostedZone, first pause any processes making calls
         * to ChangeResourceRecordSets. Initially call ListResourceRecordSets without a
         * Name and Type to get the first page of record sets. For subsequent calls, set
         * Name and Type to the NextName and NextType values returned by the previous
         * response. </p> <p>In the presence of concurrent ChangeResourceRecordSets calls,
         * there is no consistency of results across calls to ListResourceRecordSets. The
         * only way to get a consistent multi-page snapshot of all RRSETs in a zone is to
         * stop making changes while pagination is in progress.</p> <p>However, the results
         * from ListResourceRecordSets are consistent within a page. If MakeChange calls
         * are taking place concurrently, the result of each one will either be completely
         * visible in your results or not at all. You will not see partial changes, or
         * changes that do not ultimately succeed. (This follows from the fact that
         * MakeChange is atomic) </p> <p>The results from ListResourceRecordSets are
         * strongly consistent with ChangeResourceRecordSets. To be precise, if a single
         * process makes a call to ChangeResourceRecordSets and receives a successful
         * response, the effects of that change will be visible in a subsequent call to
         * ListResourceRecordSets by that process.</p>
         */
        virtual Model::ListResourceRecordSetsOutcome ListResourceRecordSets(const Model::ListResourceRecordSetsRequest& request) const;

        /**
         * <p>Imagine all the resource record sets in a zone listed out in front of you.
         * Imagine them sorted lexicographically first by DNS name (with the labels
         * reversed, like "com.amazon.www" for example), and secondarily, lexicographically
         * by record type. This operation retrieves at most MaxItems resource record sets
         * from this list, in order, starting at a position specified by the Name and Type
         * arguments:</p> <ul> <li>If both Name and Type are omitted, this means start the
         * results at the first RRSET in the HostedZone.</li> <li>If Name is specified but
         * Type is omitted, this means start the results at the first RRSET in the list
         * whose name is greater than or equal to Name. </li> <li>If both Name and Type are
         * specified, this means start the results at the first RRSET in the list whose
         * name is greater than or equal to Name and whose type is greater than or equal to
         * Type.</li> <li>It is an error to specify the Type but not the Name.</li> </ul>
         * <p>Use ListResourceRecordSets to retrieve a single known record set by
         * specifying the record set's name and type, and setting MaxItems = 1</p> <p>To
         * retrieve all the records in a HostedZone, first pause any processes making calls
         * to ChangeResourceRecordSets. Initially call ListResourceRecordSets without a
         * Name and Type to get the first page of record sets. For subsequent calls, set
         * Name and Type to the NextName and NextType values returned by the previous
         * response. </p> <p>In the presence of concurrent ChangeResourceRecordSets calls,
         * there is no consistency of results across calls to ListResourceRecordSets. The
         * only way to get a consistent multi-page snapshot of all RRSETs in a zone is to
         * stop making changes while pagination is in progress.</p> <p>However, the results
         * from ListResourceRecordSets are consistent within a page. If MakeChange calls
         * are taking place concurrently, the result of each one will either be completely
         * visible in your results or not at all. You will not see partial changes, or
         * changes that do not ultimately succeed. (This follows from the fact that
         * MakeChange is atomic) </p> <p>The results from ListResourceRecordSets are
         * strongly consistent with ChangeResourceRecordSets. To be precise, if a single
         * process makes a call to ChangeResourceRecordSets and receives a successful
         * response, the effects of that change will be visible in a subsequent call to
         * ListResourceRecordSets by that process.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceRecordSetsOutcomeCallable ListResourceRecordSetsCallable(const Model::ListResourceRecordSetsRequest& request) const;

        /**
         * <p>Imagine all the resource record sets in a zone listed out in front of you.
         * Imagine them sorted lexicographically first by DNS name (with the labels
         * reversed, like "com.amazon.www" for example), and secondarily, lexicographically
         * by record type. This operation retrieves at most MaxItems resource record sets
         * from this list, in order, starting at a position specified by the Name and Type
         * arguments:</p> <ul> <li>If both Name and Type are omitted, this means start the
         * results at the first RRSET in the HostedZone.</li> <li>If Name is specified but
         * Type is omitted, this means start the results at the first RRSET in the list
         * whose name is greater than or equal to Name. </li> <li>If both Name and Type are
         * specified, this means start the results at the first RRSET in the list whose
         * name is greater than or equal to Name and whose type is greater than or equal to
         * Type.</li> <li>It is an error to specify the Type but not the Name.</li> </ul>
         * <p>Use ListResourceRecordSets to retrieve a single known record set by
         * specifying the record set's name and type, and setting MaxItems = 1</p> <p>To
         * retrieve all the records in a HostedZone, first pause any processes making calls
         * to ChangeResourceRecordSets. Initially call ListResourceRecordSets without a
         * Name and Type to get the first page of record sets. For subsequent calls, set
         * Name and Type to the NextName and NextType values returned by the previous
         * response. </p> <p>In the presence of concurrent ChangeResourceRecordSets calls,
         * there is no consistency of results across calls to ListResourceRecordSets. The
         * only way to get a consistent multi-page snapshot of all RRSETs in a zone is to
         * stop making changes while pagination is in progress.</p> <p>However, the results
         * from ListResourceRecordSets are consistent within a page. If MakeChange calls
         * are taking place concurrently, the result of each one will either be completely
         * visible in your results or not at all. You will not see partial changes, or
         * changes that do not ultimately succeed. (This follows from the fact that
         * MakeChange is atomic) </p> <p>The results from ListResourceRecordSets are
         * strongly consistent with ChangeResourceRecordSets. To be precise, if a single
         * process makes a call to ChangeResourceRecordSets and receives a successful
         * response, the effects of that change will be visible in a subsequent call to
         * ListResourceRecordSets by that process.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceRecordSetsAsync(const Model::ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To retrieve a list of your reusable delegation sets, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/delegationset</code> resource.
         * The response to this request includes a <code>DelegationSets</code> element with
         * zero, one, or multiple <code>DelegationSet</code> child elements. By default,
         * the list of delegation sets is displayed on a single page. You can control the
         * length of the page that is displayed by using the <code>MaxItems</code>
         * parameter. You can use the <code>Marker</code> parameter to control the
         * delegation set that the list begins with. </p> <note> Amazon Route 53 returns a
         * maximum of 100 items. If you set MaxItems to a value greater than 100, Amazon
         * Route 53 returns only the first 100.</note>
         */
        virtual Model::ListReusableDelegationSetsOutcome ListReusableDelegationSets(const Model::ListReusableDelegationSetsRequest& request) const;

        /**
         * <p>To retrieve a list of your reusable delegation sets, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/delegationset</code> resource.
         * The response to this request includes a <code>DelegationSets</code> element with
         * zero, one, or multiple <code>DelegationSet</code> child elements. By default,
         * the list of delegation sets is displayed on a single page. You can control the
         * length of the page that is displayed by using the <code>MaxItems</code>
         * parameter. You can use the <code>Marker</code> parameter to control the
         * delegation set that the list begins with. </p> <note> Amazon Route 53 returns a
         * maximum of 100 items. If you set MaxItems to a value greater than 100, Amazon
         * Route 53 returns only the first 100.</note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReusableDelegationSetsOutcomeCallable ListReusableDelegationSetsCallable(const Model::ListReusableDelegationSetsRequest& request) const;

        /**
         * <p>To retrieve a list of your reusable delegation sets, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/delegationset</code> resource.
         * The response to this request includes a <code>DelegationSets</code> element with
         * zero, one, or multiple <code>DelegationSet</code> child elements. By default,
         * the list of delegation sets is displayed on a single page. You can control the
         * length of the page that is displayed by using the <code>MaxItems</code>
         * parameter. You can use the <code>Marker</code> parameter to control the
         * delegation set that the list begins with. </p> <note> Amazon Route 53 returns a
         * maximum of 100 items. If you set MaxItems to a value greater than 100, Amazon
         * Route 53 returns only the first 100.</note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReusableDelegationSetsAsync(const Model::ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListTagsForResourcesOutcome ListTagsForResources(const Model::ListTagsForResourcesRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourcesOutcomeCallable ListTagsForResourcesCallable(const Model::ListTagsForResourcesRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourcesAsync(const Model::ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the latest version for every traffic policy that is
         * associated with the current AWS account. To get the information, send a
         * <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource.</p> <p>Amazon Route 53 returns a
         * maximum of 100 items in each response. If you have a lot of traffic policies,
         * you can use the <code>maxitems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes three values that help you navigate from one
         * group of <code>maxitems</code> traffic policies to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policies associated with
         * the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy that is
         * associated with the current account.</p> <li><b>TrafficPolicyIdMarker</b></li>
         * <p>If <code>IsTruncated</code> is <code>true</code>,
         * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
         * next group of <code>MaxItems</code> traffic policies. If you want to list more
         * traffic policies, make another call to <code>ListTrafficPolicies</code>, and
         * specify the value of the <code>TrafficPolicyIdMarker</code> element from the
         * response in the <code>TrafficPolicyIdMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, the
         * <code>TrafficPolicyIdMarker</code> element is omitted from the response.</p>
         * <li><b>MaxItems</b></li> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </ul>
         */
        virtual Model::ListTrafficPoliciesOutcome ListTrafficPolicies(const Model::ListTrafficPoliciesRequest& request) const;

        /**
         * <p>Gets information about the latest version for every traffic policy that is
         * associated with the current AWS account. To get the information, send a
         * <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource.</p> <p>Amazon Route 53 returns a
         * maximum of 100 items in each response. If you have a lot of traffic policies,
         * you can use the <code>maxitems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes three values that help you navigate from one
         * group of <code>maxitems</code> traffic policies to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policies associated with
         * the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy that is
         * associated with the current account.</p> <li><b>TrafficPolicyIdMarker</b></li>
         * <p>If <code>IsTruncated</code> is <code>true</code>,
         * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
         * next group of <code>MaxItems</code> traffic policies. If you want to list more
         * traffic policies, make another call to <code>ListTrafficPolicies</code>, and
         * specify the value of the <code>TrafficPolicyIdMarker</code> element from the
         * response in the <code>TrafficPolicyIdMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, the
         * <code>TrafficPolicyIdMarker</code> element is omitted from the response.</p>
         * <li><b>MaxItems</b></li> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPoliciesOutcomeCallable ListTrafficPoliciesCallable(const Model::ListTrafficPoliciesRequest& request) const;

        /**
         * <p>Gets information about the latest version for every traffic policy that is
         * associated with the current AWS account. To get the information, send a
         * <code>GET</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy</code> resource.</p> <p>Amazon Route 53 returns a
         * maximum of 100 items in each response. If you have a lot of traffic policies,
         * you can use the <code>maxitems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes three values that help you navigate from one
         * group of <code>maxitems</code> traffic policies to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policies associated with
         * the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy that is
         * associated with the current account.</p> <li><b>TrafficPolicyIdMarker</b></li>
         * <p>If <code>IsTruncated</code> is <code>true</code>,
         * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
         * next group of <code>MaxItems</code> traffic policies. If you want to list more
         * traffic policies, make another call to <code>ListTrafficPolicies</code>, and
         * specify the value of the <code>TrafficPolicyIdMarker</code> element from the
         * response in the <code>TrafficPolicyIdMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, the
         * <code>TrafficPolicyIdMarker</code> element is omitted from the response.</p>
         * <li><b>MaxItems</b></li> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPoliciesAsync(const Model::ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * the current AWS account.</p> <note>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element.</note> <p>To get information about the traffic policy instances that
         * are associated with the current AWS account, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code>
         * resource.</p> <p>Amazon Route 53 returns a maximum of 100 items in each
         * response. If you have a lot of traffic policy instances, you can use the
         * <code>MaxItems</code> parameter to list them in groups of up to 100.</p> <p>The
         * response includes five values that help you navigate from one group of
         * <code>MaxItems</code> traffic policy instances to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> <li><b>MaxItems</b></li> <p>The
         * value that you specified for the <code>MaxItems</code> parameter in the request
         * that produced the current response.</p> <li><b>HostedZoneIdMarker</b>,
         * <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b></li> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these three values in the response represent the first
         * traffic policy instance in the next group of <code>MaxItems</code> traffic
         * policy instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstances</code>, and specify these values in the
         * corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </ul>
         */
        virtual Model::ListTrafficPolicyInstancesOutcome ListTrafficPolicyInstances(const Model::ListTrafficPolicyInstancesRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * the current AWS account.</p> <note>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element.</note> <p>To get information about the traffic policy instances that
         * are associated with the current AWS account, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code>
         * resource.</p> <p>Amazon Route 53 returns a maximum of 100 items in each
         * response. If you have a lot of traffic policy instances, you can use the
         * <code>MaxItems</code> parameter to list them in groups of up to 100.</p> <p>The
         * response includes five values that help you navigate from one group of
         * <code>MaxItems</code> traffic policy instances to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> <li><b>MaxItems</b></li> <p>The
         * value that you specified for the <code>MaxItems</code> parameter in the request
         * that produced the current response.</p> <li><b>HostedZoneIdMarker</b>,
         * <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b></li> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these three values in the response represent the first
         * traffic policy instance in the next group of <code>MaxItems</code> traffic
         * policy instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstances</code>, and specify these values in the
         * corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyInstancesOutcomeCallable ListTrafficPolicyInstancesCallable(const Model::ListTrafficPolicyInstancesRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * the current AWS account.</p> <note>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element.</note> <p>To get information about the traffic policy instances that
         * are associated with the current AWS account, send a <code>GET</code> request to
         * the <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code>
         * resource.</p> <p>Amazon Route 53 returns a maximum of 100 items in each
         * response. If you have a lot of traffic policy instances, you can use the
         * <code>MaxItems</code> parameter to list them in groups of up to 100.</p> <p>The
         * response includes five values that help you navigate from one group of
         * <code>MaxItems</code> traffic policy instances to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> <li><b>MaxItems</b></li> <p>The
         * value that you specified for the <code>MaxItems</code> parameter in the request
         * that produced the current response.</p> <li><b>HostedZoneIdMarker</b>,
         * <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b></li> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these three values in the response represent the first
         * traffic policy instance in the next group of <code>MaxItems</code> traffic
         * policy instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstances</code>, and specify these values in the
         * corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyInstancesAsync(const Model::ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the traffic policy instances that you created in a
         * specified hosted zone.</p> <note>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element.</note> <p>To get information about the traffic policy instances that
         * you created in a specified hosted zone, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code> resource and
         * include the ID of the hosted zone.</p> <p>Amazon Route 53 returns a maximum of
         * 100 items in each response. If you have a lot of traffic policy instances, you
         * can use the <code>MaxItems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes four values that help you navigate from one
         * group of <code>MaxItems</code> traffic policy instances to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code/>IsTruncated in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> <li><b>MaxItems</b></li> <p>The
         * value that you specified for the <code>MaxItems</code> parameter in the request
         * that produced the current response.</p>
         * <li><b>TrafficPolicyInstanceNameMarker</b> and
         * <b>TrafficPolicyInstanceTypeMarker</b></li> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these two values in the response represent the first traffic
         * policy instance in the next group of <code>MaxItems</code> traffic policy
         * instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstancesByHostedZone</code>, and specify these values in
         * the corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </ul>
         */
        virtual Model::ListTrafficPolicyInstancesByHostedZoneOutcome ListTrafficPolicyInstancesByHostedZone(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created in a
         * specified hosted zone.</p> <note>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element.</note> <p>To get information about the traffic policy instances that
         * you created in a specified hosted zone, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code> resource and
         * include the ID of the hosted zone.</p> <p>Amazon Route 53 returns a maximum of
         * 100 items in each response. If you have a lot of traffic policy instances, you
         * can use the <code>MaxItems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes four values that help you navigate from one
         * group of <code>MaxItems</code> traffic policy instances to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code/>IsTruncated in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> <li><b>MaxItems</b></li> <p>The
         * value that you specified for the <code>MaxItems</code> parameter in the request
         * that produced the current response.</p>
         * <li><b>TrafficPolicyInstanceNameMarker</b> and
         * <b>TrafficPolicyInstanceTypeMarker</b></li> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these two values in the response represent the first traffic
         * policy instance in the next group of <code>MaxItems</code> traffic policy
         * instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstancesByHostedZone</code>, and specify these values in
         * the corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyInstancesByHostedZoneOutcomeCallable ListTrafficPolicyInstancesByHostedZoneCallable(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request) const;

        /**
         * <p>Gets information about the traffic policy instances that you created in a
         * specified hosted zone.</p> <note>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element.</note> <p>To get information about the traffic policy instances that
         * you created in a specified hosted zone, send a <code>GET</code> request to the
         * <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code> resource and
         * include the ID of the hosted zone.</p> <p>Amazon Route 53 returns a maximum of
         * 100 items in each response. If you have a lot of traffic policy instances, you
         * can use the <code>MaxItems</code> parameter to list them in groups of up to
         * 100.</p> <p>The response includes four values that help you navigate from one
         * group of <code>MaxItems</code> traffic policy instances to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code/>IsTruncated in the
         * response is <code>true</code>, there are more traffic policy instances
         * associated with the current AWS account.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy instance that
         * is associated with the current account.</p> <li><b>MaxItems</b></li> <p>The
         * value that you specified for the <code>MaxItems</code> parameter in the request
         * that produced the current response.</p>
         * <li><b>TrafficPolicyInstanceNameMarker</b> and
         * <b>TrafficPolicyInstanceTypeMarker</b></li> <p>If <code>IsTruncated</code> is
         * <code>true</code>, these two values in the response represent the first traffic
         * policy instance in the next group of <code>MaxItems</code> traffic policy
         * instances. To list more traffic policy instances, make another call to
         * <code>ListTrafficPolicyInstancesByHostedZone</code>, and specify these values in
         * the corresponding request parameters.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, all three elements are omitted from the response.</p> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyInstancesByHostedZoneAsync(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * a specify traffic policy version.</p> <note>After you submit a
         * <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element.</note> <p>To get information about the traffic policy instances that
         * you created by using a specify traffic policy version, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code>
         * resource and include the ID and version of the traffic policy.</p> <p>Amazon
         * Route 53 returns a maximum of 100 items in each response. If you have a lot of
         * traffic policy instances, you can use the <code>MaxItems</code> parameter to
         * list them in groups of up to 100.</p> <p>The response includes five values that
         * help you navigate from one group of <code>MaxItems</code> traffic policy
         * instances to the next:</p> <ul> <li><b>IsTruncated</b> <p>If the value of
         * <code>IsTruncated</code> in the response is <code>true</code>, there are more
         * traffic policy instances associated with the specified traffic policy.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, this response includes the last
         * traffic policy instance that is associated with the specified traffic
         * policy.</p> </li> <li><b>MaxItems</b> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> <li><b>HostedZoneIdMarker</b>,
         * <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b> <p>If <code>IsTruncated</code> is
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
         * a specify traffic policy version.</p> <note>After you submit a
         * <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element.</note> <p>To get information about the traffic policy instances that
         * you created by using a specify traffic policy version, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code>
         * resource and include the ID and version of the traffic policy.</p> <p>Amazon
         * Route 53 returns a maximum of 100 items in each response. If you have a lot of
         * traffic policy instances, you can use the <code>MaxItems</code> parameter to
         * list them in groups of up to 100.</p> <p>The response includes five values that
         * help you navigate from one group of <code>MaxItems</code> traffic policy
         * instances to the next:</p> <ul> <li><b>IsTruncated</b> <p>If the value of
         * <code>IsTruncated</code> in the response is <code>true</code>, there are more
         * traffic policy instances associated with the specified traffic policy.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, this response includes the last
         * traffic policy instance that is associated with the specified traffic
         * policy.</p> </li> <li><b>MaxItems</b> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> <li><b>HostedZoneIdMarker</b>,
         * <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b> <p>If <code>IsTruncated</code> is
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
         * a specify traffic policy version.</p> <note>After you submit a
         * <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <a>State</a> response
         * element.</note> <p>To get information about the traffic policy instances that
         * you created by using a specify traffic policy version, send a <code>GET</code>
         * request to the <code>/<i>Route 53 API version</i>/trafficpolicyinstance</code>
         * resource and include the ID and version of the traffic policy.</p> <p>Amazon
         * Route 53 returns a maximum of 100 items in each response. If you have a lot of
         * traffic policy instances, you can use the <code>MaxItems</code> parameter to
         * list them in groups of up to 100.</p> <p>The response includes five values that
         * help you navigate from one group of <code>MaxItems</code> traffic policy
         * instances to the next:</p> <ul> <li><b>IsTruncated</b> <p>If the value of
         * <code>IsTruncated</code> in the response is <code>true</code>, there are more
         * traffic policy instances associated with the specified traffic policy.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, this response includes the last
         * traffic policy instance that is associated with the specified traffic
         * policy.</p> </li> <li><b>MaxItems</b> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </li> <li><b>HostedZoneIdMarker</b>,
         * <b>TrafficPolicyInstanceNameMarker</b>, and
         * <b>TrafficPolicyInstanceTypeMarker</b> <p>If <code>IsTruncated</code> is
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
         * <p>Gets information about all of the versions for a specified traffic policy.
         * <code>ListTrafficPolicyVersions</code> lists only versions that have not been
         * deleted.</p> <p>Amazon Route 53 returns a maximum of 100 items in each response.
         * If you have a lot of traffic policies, you can use the <code>maxitems</code>
         * parameter to list them in groups of up to 100.</p> <p>The response includes
         * three values that help you navigate from one group of
         * <code>maxitems</code>maxitems traffic policies to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy versions associated
         * with the specified traffic policy.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy version that
         * is associated with the specified traffic policy.</p>
         * <li><b>TrafficPolicyVersionMarker</b></li> <p>The ID of the next traffic policy
         * version that is associated with the current AWS account. If you want to list
         * more traffic policies, make another call to
         * <code>ListTrafficPolicyVersions</code>, and specify the value of the
         * <code>TrafficPolicyVersionMarker</code> element in the
         * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, Amazon Route 53 omits the
         * <code>TrafficPolicyVersionMarker</code> element from the response.</p>
         * <li><b>MaxItems</b></li> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </ul>
         */
        virtual Model::ListTrafficPolicyVersionsOutcome ListTrafficPolicyVersions(const Model::ListTrafficPolicyVersionsRequest& request) const;

        /**
         * <p>Gets information about all of the versions for a specified traffic policy.
         * <code>ListTrafficPolicyVersions</code> lists only versions that have not been
         * deleted.</p> <p>Amazon Route 53 returns a maximum of 100 items in each response.
         * If you have a lot of traffic policies, you can use the <code>maxitems</code>
         * parameter to list them in groups of up to 100.</p> <p>The response includes
         * three values that help you navigate from one group of
         * <code>maxitems</code>maxitems traffic policies to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy versions associated
         * with the specified traffic policy.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy version that
         * is associated with the specified traffic policy.</p>
         * <li><b>TrafficPolicyVersionMarker</b></li> <p>The ID of the next traffic policy
         * version that is associated with the current AWS account. If you want to list
         * more traffic policies, make another call to
         * <code>ListTrafficPolicyVersions</code>, and specify the value of the
         * <code>TrafficPolicyVersionMarker</code> element in the
         * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, Amazon Route 53 omits the
         * <code>TrafficPolicyVersionMarker</code> element from the response.</p>
         * <li><b>MaxItems</b></li> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyVersionsOutcomeCallable ListTrafficPolicyVersionsCallable(const Model::ListTrafficPolicyVersionsRequest& request) const;

        /**
         * <p>Gets information about all of the versions for a specified traffic policy.
         * <code>ListTrafficPolicyVersions</code> lists only versions that have not been
         * deleted.</p> <p>Amazon Route 53 returns a maximum of 100 items in each response.
         * If you have a lot of traffic policies, you can use the <code>maxitems</code>
         * parameter to list them in groups of up to 100.</p> <p>The response includes
         * three values that help you navigate from one group of
         * <code>maxitems</code>maxitems traffic policies to the next:</p> <ul>
         * <li><b>IsTruncated</b></li> <p>If the value of <code>IsTruncated</code> in the
         * response is <code>true</code>, there are more traffic policy versions associated
         * with the specified traffic policy.</p> <p>If <code>IsTruncated</code> is
         * <code>false</code>, this response includes the last traffic policy version that
         * is associated with the specified traffic policy.</p>
         * <li><b>TrafficPolicyVersionMarker</b></li> <p>The ID of the next traffic policy
         * version that is associated with the current AWS account. If you want to list
         * more traffic policies, make another call to
         * <code>ListTrafficPolicyVersions</code>, and specify the value of the
         * <code>TrafficPolicyVersionMarker</code> element in the
         * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>If
         * <code>IsTruncated</code> is <code>false</code>, Amazon Route 53 omits the
         * <code>TrafficPolicyVersionMarker</code> element from the response.</p>
         * <li><b>MaxItems</b></li> <p>The value that you specified for the
         * <code>MaxItems</code> parameter in the request that produced the current
         * response.</p> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyVersionsAsync(const Model::ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action updates an existing health check.</p> <p>To update a health
         * check, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck/<i>health check ID</i></code> resource. The request body
         * must include a document with an <code>UpdateHealthCheckRequest</code> element.
         * The response returns an <code>UpdateHealthCheckResponse</code> element, which
         * contains metadata about the health check.</p>
         */
        virtual Model::UpdateHealthCheckOutcome UpdateHealthCheck(const Model::UpdateHealthCheckRequest& request) const;

        /**
         * <p>This action updates an existing health check.</p> <p>To update a health
         * check, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck/<i>health check ID</i></code> resource. The request body
         * must include a document with an <code>UpdateHealthCheckRequest</code> element.
         * The response returns an <code>UpdateHealthCheckResponse</code> element, which
         * contains metadata about the health check.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHealthCheckOutcomeCallable UpdateHealthCheckCallable(const Model::UpdateHealthCheckRequest& request) const;

        /**
         * <p>This action updates an existing health check.</p> <p>To update a health
         * check, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/healthcheck/<i>health check ID</i></code> resource. The request body
         * must include a document with an <code>UpdateHealthCheckRequest</code> element.
         * The response returns an <code>UpdateHealthCheckResponse</code> element, which
         * contains metadata about the health check.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHealthCheckAsync(const Model::UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To update the hosted zone comment, send a <code>POST</code> request to the
         * <code>/<i>Route 53 API version</i>/hostedzone/<i>hosted zone ID</i></code>
         * resource. The request body must include a document with a
         * <code>UpdateHostedZoneCommentRequest</code> element. The response to this
         * request includes the modified <code>HostedZone</code> element.</p> <note> The
         * comment can have a maximum length of 256 characters.</note>
         */
        virtual Model::UpdateHostedZoneCommentOutcome UpdateHostedZoneComment(const Model::UpdateHostedZoneCommentRequest& request) const;

        /**
         * <p>To update the hosted zone comment, send a <code>POST</code> request to the
         * <code>/<i>Route 53 API version</i>/hostedzone/<i>hosted zone ID</i></code>
         * resource. The request body must include a document with a
         * <code>UpdateHostedZoneCommentRequest</code> element. The response to this
         * request includes the modified <code>HostedZone</code> element.</p> <note> The
         * comment can have a maximum length of 256 characters.</note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHostedZoneCommentOutcomeCallable UpdateHostedZoneCommentCallable(const Model::UpdateHostedZoneCommentRequest& request) const;

        /**
         * <p>To update the hosted zone comment, send a <code>POST</code> request to the
         * <code>/<i>Route 53 API version</i>/hostedzone/<i>hosted zone ID</i></code>
         * resource. The request body must include a document with a
         * <code>UpdateHostedZoneCommentRequest</code> element. The response to this
         * request includes the modified <code>HostedZone</code> element.</p> <note> The
         * comment can have a maximum length of 256 characters.</note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHostedZoneCommentAsync(const Model::UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the comment for a specified traffic policy version.</p> <p>To update
         * the comment, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy/</code> resource.</p> <p>The request body must include
         * a document with an <code>UpdateTrafficPolicyCommentRequest</code> element.</p>
         */
        virtual Model::UpdateTrafficPolicyCommentOutcome UpdateTrafficPolicyComment(const Model::UpdateTrafficPolicyCommentRequest& request) const;

        /**
         * <p>Updates the comment for a specified traffic policy version.</p> <p>To update
         * the comment, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy/</code> resource.</p> <p>The request body must include
         * a document with an <code>UpdateTrafficPolicyCommentRequest</code> element.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrafficPolicyCommentOutcomeCallable UpdateTrafficPolicyCommentCallable(const Model::UpdateTrafficPolicyCommentRequest& request) const;

        /**
         * <p>Updates the comment for a specified traffic policy version.</p> <p>To update
         * the comment, send a <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicy/</code> resource.</p> <p>The request body must include
         * a document with an <code>UpdateTrafficPolicyCommentRequest</code> element.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrafficPolicyCommentAsync(const Model::UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the resource record sets in a specified hosted zone that were created
         * based on the settings in a specified traffic policy version.</p> <important>The
         * DNS type of the resource record sets that you're updating must match the DNS
         * type in the JSON document that is associated with the traffic policy version
         * that you're using to update the traffic policy instance.</important> <p>When you
         * update a traffic policy instance, Amazon Route 53 continues to respond to DNS
         * queries for the root resource record set name (such as example.com) while it
         * replaces one group of resource record sets with another. Amazon Route 53
         * performs the following operations:</p> <ol> <li>Amazon Route 53 creates a new
         * group of resource record sets based on the specified traffic policy. This is
         * true regardless of how substantial the differences are between the existing
         * resource record sets and the new resource record sets. </li> <li>When all of the
         * new resource record sets have been created, Amazon Route 53 starts to respond to
         * DNS queries for the root resource record set name (such as example.com) by using
         * the new resource record sets.</li> <li>Amazon Route 53 deletes the old group of
         * resource record sets that are associated with the root resource record set
         * name.</li> </ol> <p>To update a traffic policy instance, send a
         * <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicyinstance/<i>traffic policy ID</i></code> resource. The
         * request body must include a document with an
         * <code>UpdateTrafficPolicyInstanceRequest</code> element.</p>
         */
        virtual Model::UpdateTrafficPolicyInstanceOutcome UpdateTrafficPolicyInstance(const Model::UpdateTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Updates the resource record sets in a specified hosted zone that were created
         * based on the settings in a specified traffic policy version.</p> <important>The
         * DNS type of the resource record sets that you're updating must match the DNS
         * type in the JSON document that is associated with the traffic policy version
         * that you're using to update the traffic policy instance.</important> <p>When you
         * update a traffic policy instance, Amazon Route 53 continues to respond to DNS
         * queries for the root resource record set name (such as example.com) while it
         * replaces one group of resource record sets with another. Amazon Route 53
         * performs the following operations:</p> <ol> <li>Amazon Route 53 creates a new
         * group of resource record sets based on the specified traffic policy. This is
         * true regardless of how substantial the differences are between the existing
         * resource record sets and the new resource record sets. </li> <li>When all of the
         * new resource record sets have been created, Amazon Route 53 starts to respond to
         * DNS queries for the root resource record set name (such as example.com) by using
         * the new resource record sets.</li> <li>Amazon Route 53 deletes the old group of
         * resource record sets that are associated with the root resource record set
         * name.</li> </ol> <p>To update a traffic policy instance, send a
         * <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicyinstance/<i>traffic policy ID</i></code> resource. The
         * request body must include a document with an
         * <code>UpdateTrafficPolicyInstanceRequest</code> element.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrafficPolicyInstanceOutcomeCallable UpdateTrafficPolicyInstanceCallable(const Model::UpdateTrafficPolicyInstanceRequest& request) const;

        /**
         * <p>Updates the resource record sets in a specified hosted zone that were created
         * based on the settings in a specified traffic policy version.</p> <important>The
         * DNS type of the resource record sets that you're updating must match the DNS
         * type in the JSON document that is associated with the traffic policy version
         * that you're using to update the traffic policy instance.</important> <p>When you
         * update a traffic policy instance, Amazon Route 53 continues to respond to DNS
         * queries for the root resource record set name (such as example.com) while it
         * replaces one group of resource record sets with another. Amazon Route 53
         * performs the following operations:</p> <ol> <li>Amazon Route 53 creates a new
         * group of resource record sets based on the specified traffic policy. This is
         * true regardless of how substantial the differences are between the existing
         * resource record sets and the new resource record sets. </li> <li>When all of the
         * new resource record sets have been created, Amazon Route 53 starts to respond to
         * DNS queries for the root resource record set name (such as example.com) by using
         * the new resource record sets.</li> <li>Amazon Route 53 deletes the old group of
         * resource record sets that are associated with the root resource record set
         * name.</li> </ol> <p>To update a traffic policy instance, send a
         * <code>POST</code> request to the <code>/<i>Route 53 API
         * version</i>/trafficpolicyinstance/<i>traffic policy ID</i></code> resource. The
         * request body must include a document with an
         * <code>UpdateTrafficPolicyInstanceRequest</code> element.</p>
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
        void DeleteHealthCheckAsyncHelper(const Model::DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHostedZoneAsyncHelper(const Model::DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReusableDelegationSetAsyncHelper(const Model::DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrafficPolicyAsyncHelper(const Model::DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrafficPolicyInstanceAsyncHelper(const Model::DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void UpdateHealthCheckAsyncHelper(const Model::UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateHostedZoneCommentAsyncHelper(const Model::UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrafficPolicyCommentAsyncHelper(const Model::UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrafficPolicyInstanceAsyncHelper(const Model::UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Route53
} // namespace Aws
