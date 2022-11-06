/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/route53/Route53Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/route53/Route53EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Route53Client header */
#include <aws/route53/model/ActivateKeySigningKeyResult.h>
#include <aws/route53/model/AssociateVPCWithHostedZoneResult.h>
#include <aws/route53/model/ChangeCidrCollectionResult.h>
#include <aws/route53/model/ChangeResourceRecordSetsResult.h>
#include <aws/route53/model/ChangeTagsForResourceResult.h>
#include <aws/route53/model/CreateCidrCollectionResult.h>
#include <aws/route53/model/CreateHealthCheckResult.h>
#include <aws/route53/model/CreateHostedZoneResult.h>
#include <aws/route53/model/CreateKeySigningKeyResult.h>
#include <aws/route53/model/CreateQueryLoggingConfigResult.h>
#include <aws/route53/model/CreateReusableDelegationSetResult.h>
#include <aws/route53/model/CreateTrafficPolicyResult.h>
#include <aws/route53/model/CreateTrafficPolicyInstanceResult.h>
#include <aws/route53/model/CreateTrafficPolicyVersionResult.h>
#include <aws/route53/model/CreateVPCAssociationAuthorizationResult.h>
#include <aws/route53/model/DeactivateKeySigningKeyResult.h>
#include <aws/route53/model/DeleteCidrCollectionResult.h>
#include <aws/route53/model/DeleteHealthCheckResult.h>
#include <aws/route53/model/DeleteHostedZoneResult.h>
#include <aws/route53/model/DeleteKeySigningKeyResult.h>
#include <aws/route53/model/DeleteQueryLoggingConfigResult.h>
#include <aws/route53/model/DeleteReusableDelegationSetResult.h>
#include <aws/route53/model/DeleteTrafficPolicyResult.h>
#include <aws/route53/model/DeleteTrafficPolicyInstanceResult.h>
#include <aws/route53/model/DeleteVPCAssociationAuthorizationResult.h>
#include <aws/route53/model/DisableHostedZoneDNSSECResult.h>
#include <aws/route53/model/DisassociateVPCFromHostedZoneResult.h>
#include <aws/route53/model/EnableHostedZoneDNSSECResult.h>
#include <aws/route53/model/GetAccountLimitResult.h>
#include <aws/route53/model/GetChangeResult.h>
#include <aws/route53/model/GetCheckerIpRangesResult.h>
#include <aws/route53/model/GetDNSSECResult.h>
#include <aws/route53/model/GetGeoLocationResult.h>
#include <aws/route53/model/GetHealthCheckResult.h>
#include <aws/route53/model/GetHealthCheckCountResult.h>
#include <aws/route53/model/GetHealthCheckLastFailureReasonResult.h>
#include <aws/route53/model/GetHealthCheckStatusResult.h>
#include <aws/route53/model/GetHostedZoneResult.h>
#include <aws/route53/model/GetHostedZoneCountResult.h>
#include <aws/route53/model/GetHostedZoneLimitResult.h>
#include <aws/route53/model/GetQueryLoggingConfigResult.h>
#include <aws/route53/model/GetReusableDelegationSetResult.h>
#include <aws/route53/model/GetReusableDelegationSetLimitResult.h>
#include <aws/route53/model/GetTrafficPolicyResult.h>
#include <aws/route53/model/GetTrafficPolicyInstanceResult.h>
#include <aws/route53/model/GetTrafficPolicyInstanceCountResult.h>
#include <aws/route53/model/ListCidrBlocksResult.h>
#include <aws/route53/model/ListCidrCollectionsResult.h>
#include <aws/route53/model/ListCidrLocationsResult.h>
#include <aws/route53/model/ListGeoLocationsResult.h>
#include <aws/route53/model/ListHealthChecksResult.h>
#include <aws/route53/model/ListHostedZonesResult.h>
#include <aws/route53/model/ListHostedZonesByNameResult.h>
#include <aws/route53/model/ListHostedZonesByVPCResult.h>
#include <aws/route53/model/ListQueryLoggingConfigsResult.h>
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
/* End of service model headers required in Route53Client header */

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
    using Route53ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Route53EndpointProviderBase = Aws::Route53::Endpoint::Route53EndpointProviderBase;
    using Route53EndpointProvider = Aws::Route53::Endpoint::Route53EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Route53Client header */
      class ActivateKeySigningKeyRequest;
      class AssociateVPCWithHostedZoneRequest;
      class ChangeCidrCollectionRequest;
      class ChangeResourceRecordSetsRequest;
      class ChangeTagsForResourceRequest;
      class CreateCidrCollectionRequest;
      class CreateHealthCheckRequest;
      class CreateHostedZoneRequest;
      class CreateKeySigningKeyRequest;
      class CreateQueryLoggingConfigRequest;
      class CreateReusableDelegationSetRequest;
      class CreateTrafficPolicyRequest;
      class CreateTrafficPolicyInstanceRequest;
      class CreateTrafficPolicyVersionRequest;
      class CreateVPCAssociationAuthorizationRequest;
      class DeactivateKeySigningKeyRequest;
      class DeleteCidrCollectionRequest;
      class DeleteHealthCheckRequest;
      class DeleteHostedZoneRequest;
      class DeleteKeySigningKeyRequest;
      class DeleteQueryLoggingConfigRequest;
      class DeleteReusableDelegationSetRequest;
      class DeleteTrafficPolicyRequest;
      class DeleteTrafficPolicyInstanceRequest;
      class DeleteVPCAssociationAuthorizationRequest;
      class DisableHostedZoneDNSSECRequest;
      class DisassociateVPCFromHostedZoneRequest;
      class EnableHostedZoneDNSSECRequest;
      class GetAccountLimitRequest;
      class GetChangeRequest;
      class GetCheckerIpRangesRequest;
      class GetDNSSECRequest;
      class GetGeoLocationRequest;
      class GetHealthCheckRequest;
      class GetHealthCheckCountRequest;
      class GetHealthCheckLastFailureReasonRequest;
      class GetHealthCheckStatusRequest;
      class GetHostedZoneRequest;
      class GetHostedZoneCountRequest;
      class GetHostedZoneLimitRequest;
      class GetQueryLoggingConfigRequest;
      class GetReusableDelegationSetRequest;
      class GetReusableDelegationSetLimitRequest;
      class GetTrafficPolicyRequest;
      class GetTrafficPolicyInstanceRequest;
      class GetTrafficPolicyInstanceCountRequest;
      class ListCidrBlocksRequest;
      class ListCidrCollectionsRequest;
      class ListCidrLocationsRequest;
      class ListGeoLocationsRequest;
      class ListHealthChecksRequest;
      class ListHostedZonesRequest;
      class ListHostedZonesByNameRequest;
      class ListHostedZonesByVPCRequest;
      class ListQueryLoggingConfigsRequest;
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
      /* End of service model forward declarations required in Route53Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ActivateKeySigningKeyResult, Route53Error> ActivateKeySigningKeyOutcome;
      typedef Aws::Utils::Outcome<AssociateVPCWithHostedZoneResult, Route53Error> AssociateVPCWithHostedZoneOutcome;
      typedef Aws::Utils::Outcome<ChangeCidrCollectionResult, Route53Error> ChangeCidrCollectionOutcome;
      typedef Aws::Utils::Outcome<ChangeResourceRecordSetsResult, Route53Error> ChangeResourceRecordSetsOutcome;
      typedef Aws::Utils::Outcome<ChangeTagsForResourceResult, Route53Error> ChangeTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<CreateCidrCollectionResult, Route53Error> CreateCidrCollectionOutcome;
      typedef Aws::Utils::Outcome<CreateHealthCheckResult, Route53Error> CreateHealthCheckOutcome;
      typedef Aws::Utils::Outcome<CreateHostedZoneResult, Route53Error> CreateHostedZoneOutcome;
      typedef Aws::Utils::Outcome<CreateKeySigningKeyResult, Route53Error> CreateKeySigningKeyOutcome;
      typedef Aws::Utils::Outcome<CreateQueryLoggingConfigResult, Route53Error> CreateQueryLoggingConfigOutcome;
      typedef Aws::Utils::Outcome<CreateReusableDelegationSetResult, Route53Error> CreateReusableDelegationSetOutcome;
      typedef Aws::Utils::Outcome<CreateTrafficPolicyResult, Route53Error> CreateTrafficPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateTrafficPolicyInstanceResult, Route53Error> CreateTrafficPolicyInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateTrafficPolicyVersionResult, Route53Error> CreateTrafficPolicyVersionOutcome;
      typedef Aws::Utils::Outcome<CreateVPCAssociationAuthorizationResult, Route53Error> CreateVPCAssociationAuthorizationOutcome;
      typedef Aws::Utils::Outcome<DeactivateKeySigningKeyResult, Route53Error> DeactivateKeySigningKeyOutcome;
      typedef Aws::Utils::Outcome<DeleteCidrCollectionResult, Route53Error> DeleteCidrCollectionOutcome;
      typedef Aws::Utils::Outcome<DeleteHealthCheckResult, Route53Error> DeleteHealthCheckOutcome;
      typedef Aws::Utils::Outcome<DeleteHostedZoneResult, Route53Error> DeleteHostedZoneOutcome;
      typedef Aws::Utils::Outcome<DeleteKeySigningKeyResult, Route53Error> DeleteKeySigningKeyOutcome;
      typedef Aws::Utils::Outcome<DeleteQueryLoggingConfigResult, Route53Error> DeleteQueryLoggingConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteReusableDelegationSetResult, Route53Error> DeleteReusableDelegationSetOutcome;
      typedef Aws::Utils::Outcome<DeleteTrafficPolicyResult, Route53Error> DeleteTrafficPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteTrafficPolicyInstanceResult, Route53Error> DeleteTrafficPolicyInstanceOutcome;
      typedef Aws::Utils::Outcome<DeleteVPCAssociationAuthorizationResult, Route53Error> DeleteVPCAssociationAuthorizationOutcome;
      typedef Aws::Utils::Outcome<DisableHostedZoneDNSSECResult, Route53Error> DisableHostedZoneDNSSECOutcome;
      typedef Aws::Utils::Outcome<DisassociateVPCFromHostedZoneResult, Route53Error> DisassociateVPCFromHostedZoneOutcome;
      typedef Aws::Utils::Outcome<EnableHostedZoneDNSSECResult, Route53Error> EnableHostedZoneDNSSECOutcome;
      typedef Aws::Utils::Outcome<GetAccountLimitResult, Route53Error> GetAccountLimitOutcome;
      typedef Aws::Utils::Outcome<GetChangeResult, Route53Error> GetChangeOutcome;
      typedef Aws::Utils::Outcome<GetCheckerIpRangesResult, Route53Error> GetCheckerIpRangesOutcome;
      typedef Aws::Utils::Outcome<GetDNSSECResult, Route53Error> GetDNSSECOutcome;
      typedef Aws::Utils::Outcome<GetGeoLocationResult, Route53Error> GetGeoLocationOutcome;
      typedef Aws::Utils::Outcome<GetHealthCheckResult, Route53Error> GetHealthCheckOutcome;
      typedef Aws::Utils::Outcome<GetHealthCheckCountResult, Route53Error> GetHealthCheckCountOutcome;
      typedef Aws::Utils::Outcome<GetHealthCheckLastFailureReasonResult, Route53Error> GetHealthCheckLastFailureReasonOutcome;
      typedef Aws::Utils::Outcome<GetHealthCheckStatusResult, Route53Error> GetHealthCheckStatusOutcome;
      typedef Aws::Utils::Outcome<GetHostedZoneResult, Route53Error> GetHostedZoneOutcome;
      typedef Aws::Utils::Outcome<GetHostedZoneCountResult, Route53Error> GetHostedZoneCountOutcome;
      typedef Aws::Utils::Outcome<GetHostedZoneLimitResult, Route53Error> GetHostedZoneLimitOutcome;
      typedef Aws::Utils::Outcome<GetQueryLoggingConfigResult, Route53Error> GetQueryLoggingConfigOutcome;
      typedef Aws::Utils::Outcome<GetReusableDelegationSetResult, Route53Error> GetReusableDelegationSetOutcome;
      typedef Aws::Utils::Outcome<GetReusableDelegationSetLimitResult, Route53Error> GetReusableDelegationSetLimitOutcome;
      typedef Aws::Utils::Outcome<GetTrafficPolicyResult, Route53Error> GetTrafficPolicyOutcome;
      typedef Aws::Utils::Outcome<GetTrafficPolicyInstanceResult, Route53Error> GetTrafficPolicyInstanceOutcome;
      typedef Aws::Utils::Outcome<GetTrafficPolicyInstanceCountResult, Route53Error> GetTrafficPolicyInstanceCountOutcome;
      typedef Aws::Utils::Outcome<ListCidrBlocksResult, Route53Error> ListCidrBlocksOutcome;
      typedef Aws::Utils::Outcome<ListCidrCollectionsResult, Route53Error> ListCidrCollectionsOutcome;
      typedef Aws::Utils::Outcome<ListCidrLocationsResult, Route53Error> ListCidrLocationsOutcome;
      typedef Aws::Utils::Outcome<ListGeoLocationsResult, Route53Error> ListGeoLocationsOutcome;
      typedef Aws::Utils::Outcome<ListHealthChecksResult, Route53Error> ListHealthChecksOutcome;
      typedef Aws::Utils::Outcome<ListHostedZonesResult, Route53Error> ListHostedZonesOutcome;
      typedef Aws::Utils::Outcome<ListHostedZonesByNameResult, Route53Error> ListHostedZonesByNameOutcome;
      typedef Aws::Utils::Outcome<ListHostedZonesByVPCResult, Route53Error> ListHostedZonesByVPCOutcome;
      typedef Aws::Utils::Outcome<ListQueryLoggingConfigsResult, Route53Error> ListQueryLoggingConfigsOutcome;
      typedef Aws::Utils::Outcome<ListResourceRecordSetsResult, Route53Error> ListResourceRecordSetsOutcome;
      typedef Aws::Utils::Outcome<ListReusableDelegationSetsResult, Route53Error> ListReusableDelegationSetsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Route53Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourcesResult, Route53Error> ListTagsForResourcesOutcome;
      typedef Aws::Utils::Outcome<ListTrafficPoliciesResult, Route53Error> ListTrafficPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListTrafficPolicyInstancesResult, Route53Error> ListTrafficPolicyInstancesOutcome;
      typedef Aws::Utils::Outcome<ListTrafficPolicyInstancesByHostedZoneResult, Route53Error> ListTrafficPolicyInstancesByHostedZoneOutcome;
      typedef Aws::Utils::Outcome<ListTrafficPolicyInstancesByPolicyResult, Route53Error> ListTrafficPolicyInstancesByPolicyOutcome;
      typedef Aws::Utils::Outcome<ListTrafficPolicyVersionsResult, Route53Error> ListTrafficPolicyVersionsOutcome;
      typedef Aws::Utils::Outcome<ListVPCAssociationAuthorizationsResult, Route53Error> ListVPCAssociationAuthorizationsOutcome;
      typedef Aws::Utils::Outcome<TestDNSAnswerResult, Route53Error> TestDNSAnswerOutcome;
      typedef Aws::Utils::Outcome<UpdateHealthCheckResult, Route53Error> UpdateHealthCheckOutcome;
      typedef Aws::Utils::Outcome<UpdateHostedZoneCommentResult, Route53Error> UpdateHostedZoneCommentOutcome;
      typedef Aws::Utils::Outcome<UpdateTrafficPolicyCommentResult, Route53Error> UpdateTrafficPolicyCommentOutcome;
      typedef Aws::Utils::Outcome<UpdateTrafficPolicyInstanceResult, Route53Error> UpdateTrafficPolicyInstanceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivateKeySigningKeyOutcome> ActivateKeySigningKeyOutcomeCallable;
      typedef std::future<AssociateVPCWithHostedZoneOutcome> AssociateVPCWithHostedZoneOutcomeCallable;
      typedef std::future<ChangeCidrCollectionOutcome> ChangeCidrCollectionOutcomeCallable;
      typedef std::future<ChangeResourceRecordSetsOutcome> ChangeResourceRecordSetsOutcomeCallable;
      typedef std::future<ChangeTagsForResourceOutcome> ChangeTagsForResourceOutcomeCallable;
      typedef std::future<CreateCidrCollectionOutcome> CreateCidrCollectionOutcomeCallable;
      typedef std::future<CreateHealthCheckOutcome> CreateHealthCheckOutcomeCallable;
      typedef std::future<CreateHostedZoneOutcome> CreateHostedZoneOutcomeCallable;
      typedef std::future<CreateKeySigningKeyOutcome> CreateKeySigningKeyOutcomeCallable;
      typedef std::future<CreateQueryLoggingConfigOutcome> CreateQueryLoggingConfigOutcomeCallable;
      typedef std::future<CreateReusableDelegationSetOutcome> CreateReusableDelegationSetOutcomeCallable;
      typedef std::future<CreateTrafficPolicyOutcome> CreateTrafficPolicyOutcomeCallable;
      typedef std::future<CreateTrafficPolicyInstanceOutcome> CreateTrafficPolicyInstanceOutcomeCallable;
      typedef std::future<CreateTrafficPolicyVersionOutcome> CreateTrafficPolicyVersionOutcomeCallable;
      typedef std::future<CreateVPCAssociationAuthorizationOutcome> CreateVPCAssociationAuthorizationOutcomeCallable;
      typedef std::future<DeactivateKeySigningKeyOutcome> DeactivateKeySigningKeyOutcomeCallable;
      typedef std::future<DeleteCidrCollectionOutcome> DeleteCidrCollectionOutcomeCallable;
      typedef std::future<DeleteHealthCheckOutcome> DeleteHealthCheckOutcomeCallable;
      typedef std::future<DeleteHostedZoneOutcome> DeleteHostedZoneOutcomeCallable;
      typedef std::future<DeleteKeySigningKeyOutcome> DeleteKeySigningKeyOutcomeCallable;
      typedef std::future<DeleteQueryLoggingConfigOutcome> DeleteQueryLoggingConfigOutcomeCallable;
      typedef std::future<DeleteReusableDelegationSetOutcome> DeleteReusableDelegationSetOutcomeCallable;
      typedef std::future<DeleteTrafficPolicyOutcome> DeleteTrafficPolicyOutcomeCallable;
      typedef std::future<DeleteTrafficPolicyInstanceOutcome> DeleteTrafficPolicyInstanceOutcomeCallable;
      typedef std::future<DeleteVPCAssociationAuthorizationOutcome> DeleteVPCAssociationAuthorizationOutcomeCallable;
      typedef std::future<DisableHostedZoneDNSSECOutcome> DisableHostedZoneDNSSECOutcomeCallable;
      typedef std::future<DisassociateVPCFromHostedZoneOutcome> DisassociateVPCFromHostedZoneOutcomeCallable;
      typedef std::future<EnableHostedZoneDNSSECOutcome> EnableHostedZoneDNSSECOutcomeCallable;
      typedef std::future<GetAccountLimitOutcome> GetAccountLimitOutcomeCallable;
      typedef std::future<GetChangeOutcome> GetChangeOutcomeCallable;
      typedef std::future<GetCheckerIpRangesOutcome> GetCheckerIpRangesOutcomeCallable;
      typedef std::future<GetDNSSECOutcome> GetDNSSECOutcomeCallable;
      typedef std::future<GetGeoLocationOutcome> GetGeoLocationOutcomeCallable;
      typedef std::future<GetHealthCheckOutcome> GetHealthCheckOutcomeCallable;
      typedef std::future<GetHealthCheckCountOutcome> GetHealthCheckCountOutcomeCallable;
      typedef std::future<GetHealthCheckLastFailureReasonOutcome> GetHealthCheckLastFailureReasonOutcomeCallable;
      typedef std::future<GetHealthCheckStatusOutcome> GetHealthCheckStatusOutcomeCallable;
      typedef std::future<GetHostedZoneOutcome> GetHostedZoneOutcomeCallable;
      typedef std::future<GetHostedZoneCountOutcome> GetHostedZoneCountOutcomeCallable;
      typedef std::future<GetHostedZoneLimitOutcome> GetHostedZoneLimitOutcomeCallable;
      typedef std::future<GetQueryLoggingConfigOutcome> GetQueryLoggingConfigOutcomeCallable;
      typedef std::future<GetReusableDelegationSetOutcome> GetReusableDelegationSetOutcomeCallable;
      typedef std::future<GetReusableDelegationSetLimitOutcome> GetReusableDelegationSetLimitOutcomeCallable;
      typedef std::future<GetTrafficPolicyOutcome> GetTrafficPolicyOutcomeCallable;
      typedef std::future<GetTrafficPolicyInstanceOutcome> GetTrafficPolicyInstanceOutcomeCallable;
      typedef std::future<GetTrafficPolicyInstanceCountOutcome> GetTrafficPolicyInstanceCountOutcomeCallable;
      typedef std::future<ListCidrBlocksOutcome> ListCidrBlocksOutcomeCallable;
      typedef std::future<ListCidrCollectionsOutcome> ListCidrCollectionsOutcomeCallable;
      typedef std::future<ListCidrLocationsOutcome> ListCidrLocationsOutcomeCallable;
      typedef std::future<ListGeoLocationsOutcome> ListGeoLocationsOutcomeCallable;
      typedef std::future<ListHealthChecksOutcome> ListHealthChecksOutcomeCallable;
      typedef std::future<ListHostedZonesOutcome> ListHostedZonesOutcomeCallable;
      typedef std::future<ListHostedZonesByNameOutcome> ListHostedZonesByNameOutcomeCallable;
      typedef std::future<ListHostedZonesByVPCOutcome> ListHostedZonesByVPCOutcomeCallable;
      typedef std::future<ListQueryLoggingConfigsOutcome> ListQueryLoggingConfigsOutcomeCallable;
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Route53Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const Route53Client*, const Model::ActivateKeySigningKeyRequest&, const Model::ActivateKeySigningKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateKeySigningKeyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::AssociateVPCWithHostedZoneRequest&, const Model::AssociateVPCWithHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateVPCWithHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ChangeCidrCollectionRequest&, const Model::ChangeCidrCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeCidrCollectionResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ChangeResourceRecordSetsRequest&, const Model::ChangeResourceRecordSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeResourceRecordSetsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ChangeTagsForResourceRequest&, const Model::ChangeTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateCidrCollectionRequest&, const Model::CreateCidrCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCidrCollectionResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateHealthCheckRequest&, const Model::CreateHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHealthCheckResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateHostedZoneRequest&, const Model::CreateHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateKeySigningKeyRequest&, const Model::CreateKeySigningKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeySigningKeyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateQueryLoggingConfigRequest&, const Model::CreateQueryLoggingConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueryLoggingConfigResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateReusableDelegationSetRequest&, const Model::CreateReusableDelegationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReusableDelegationSetResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateTrafficPolicyRequest&, const Model::CreateTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateTrafficPolicyInstanceRequest&, const Model::CreateTrafficPolicyInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficPolicyInstanceResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateTrafficPolicyVersionRequest&, const Model::CreateTrafficPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::CreateVPCAssociationAuthorizationRequest&, const Model::CreateVPCAssociationAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVPCAssociationAuthorizationResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeactivateKeySigningKeyRequest&, const Model::DeactivateKeySigningKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateKeySigningKeyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteCidrCollectionRequest&, const Model::DeleteCidrCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCidrCollectionResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteHealthCheckRequest&, const Model::DeleteHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHealthCheckResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteHostedZoneRequest&, const Model::DeleteHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteKeySigningKeyRequest&, const Model::DeleteKeySigningKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeySigningKeyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteQueryLoggingConfigRequest&, const Model::DeleteQueryLoggingConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueryLoggingConfigResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteReusableDelegationSetRequest&, const Model::DeleteReusableDelegationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReusableDelegationSetResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteTrafficPolicyRequest&, const Model::DeleteTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteTrafficPolicyInstanceRequest&, const Model::DeleteTrafficPolicyInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficPolicyInstanceResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DeleteVPCAssociationAuthorizationRequest&, const Model::DeleteVPCAssociationAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVPCAssociationAuthorizationResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DisableHostedZoneDNSSECRequest&, const Model::DisableHostedZoneDNSSECOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableHostedZoneDNSSECResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::DisassociateVPCFromHostedZoneRequest&, const Model::DisassociateVPCFromHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateVPCFromHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::EnableHostedZoneDNSSECRequest&, const Model::EnableHostedZoneDNSSECOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableHostedZoneDNSSECResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetAccountLimitRequest&, const Model::GetAccountLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountLimitResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetChangeRequest&, const Model::GetChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChangeResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetCheckerIpRangesRequest&, const Model::GetCheckerIpRangesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCheckerIpRangesResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetDNSSECRequest&, const Model::GetDNSSECOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDNSSECResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetGeoLocationRequest&, const Model::GetGeoLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGeoLocationResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHealthCheckRequest&, const Model::GetHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHealthCheckResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHealthCheckCountRequest&, const Model::GetHealthCheckCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHealthCheckCountResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHealthCheckLastFailureReasonRequest&, const Model::GetHealthCheckLastFailureReasonOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHealthCheckLastFailureReasonResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHealthCheckStatusRequest&, const Model::GetHealthCheckStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHealthCheckStatusResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHostedZoneRequest&, const Model::GetHostedZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostedZoneResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHostedZoneCountRequest&, const Model::GetHostedZoneCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostedZoneCountResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetHostedZoneLimitRequest&, const Model::GetHostedZoneLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostedZoneLimitResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetQueryLoggingConfigRequest&, const Model::GetQueryLoggingConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryLoggingConfigResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetReusableDelegationSetRequest&, const Model::GetReusableDelegationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReusableDelegationSetResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetReusableDelegationSetLimitRequest&, const Model::GetReusableDelegationSetLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReusableDelegationSetLimitResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetTrafficPolicyRequest&, const Model::GetTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetTrafficPolicyInstanceRequest&, const Model::GetTrafficPolicyInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrafficPolicyInstanceResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::GetTrafficPolicyInstanceCountRequest&, const Model::GetTrafficPolicyInstanceCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrafficPolicyInstanceCountResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListCidrBlocksRequest&, const Model::ListCidrBlocksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCidrBlocksResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListCidrCollectionsRequest&, const Model::ListCidrCollectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCidrCollectionsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListCidrLocationsRequest&, const Model::ListCidrLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCidrLocationsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListGeoLocationsRequest&, const Model::ListGeoLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGeoLocationsResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListHealthChecksRequest&, const Model::ListHealthChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHealthChecksResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListHostedZonesRequest&, const Model::ListHostedZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostedZonesResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListHostedZonesByNameRequest&, const Model::ListHostedZonesByNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostedZonesByNameResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListHostedZonesByVPCRequest&, const Model::ListHostedZonesByVPCOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostedZonesByVPCResponseReceivedHandler;
    typedef std::function<void(const Route53Client*, const Model::ListQueryLoggingConfigsRequest&, const Model::ListQueryLoggingConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueryLoggingConfigsResponseReceivedHandler;
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
    /* End of service model async handlers definitions */
  } // namespace Route53
} // namespace Aws
