/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ActivateKeySigningKeyAsync(...)  SubmitAsync(&Route53Client::ActivateKeySigningKey, __VA_ARGS__)
#define ActivateKeySigningKeyCallable(REQUEST)  SubmitCallable(&Route53Client::ActivateKeySigningKey, REQUEST)

#define AssociateVPCWithHostedZoneAsync(...)  SubmitAsync(&Route53Client::AssociateVPCWithHostedZone, __VA_ARGS__)
#define AssociateVPCWithHostedZoneCallable(REQUEST)  SubmitCallable(&Route53Client::AssociateVPCWithHostedZone, REQUEST)

#define ChangeCidrCollectionAsync(...)  SubmitAsync(&Route53Client::ChangeCidrCollection, __VA_ARGS__)
#define ChangeCidrCollectionCallable(REQUEST)  SubmitCallable(&Route53Client::ChangeCidrCollection, REQUEST)

#define ChangeResourceRecordSetsAsync(...)  SubmitAsync(&Route53Client::ChangeResourceRecordSets, __VA_ARGS__)
#define ChangeResourceRecordSetsCallable(REQUEST)  SubmitCallable(&Route53Client::ChangeResourceRecordSets, REQUEST)

#define ChangeTagsForResourceAsync(...)  SubmitAsync(&Route53Client::ChangeTagsForResource, __VA_ARGS__)
#define ChangeTagsForResourceCallable(REQUEST)  SubmitCallable(&Route53Client::ChangeTagsForResource, REQUEST)

#define CreateCidrCollectionAsync(...)  SubmitAsync(&Route53Client::CreateCidrCollection, __VA_ARGS__)
#define CreateCidrCollectionCallable(REQUEST)  SubmitCallable(&Route53Client::CreateCidrCollection, REQUEST)

#define CreateHealthCheckAsync(...)  SubmitAsync(&Route53Client::CreateHealthCheck, __VA_ARGS__)
#define CreateHealthCheckCallable(REQUEST)  SubmitCallable(&Route53Client::CreateHealthCheck, REQUEST)

#define CreateHostedZoneAsync(...)  SubmitAsync(&Route53Client::CreateHostedZone, __VA_ARGS__)
#define CreateHostedZoneCallable(REQUEST)  SubmitCallable(&Route53Client::CreateHostedZone, REQUEST)

#define CreateKeySigningKeyAsync(...)  SubmitAsync(&Route53Client::CreateKeySigningKey, __VA_ARGS__)
#define CreateKeySigningKeyCallable(REQUEST)  SubmitCallable(&Route53Client::CreateKeySigningKey, REQUEST)

#define CreateQueryLoggingConfigAsync(...)  SubmitAsync(&Route53Client::CreateQueryLoggingConfig, __VA_ARGS__)
#define CreateQueryLoggingConfigCallable(REQUEST)  SubmitCallable(&Route53Client::CreateQueryLoggingConfig, REQUEST)

#define CreateReusableDelegationSetAsync(...)  SubmitAsync(&Route53Client::CreateReusableDelegationSet, __VA_ARGS__)
#define CreateReusableDelegationSetCallable(REQUEST)  SubmitCallable(&Route53Client::CreateReusableDelegationSet, REQUEST)

#define CreateTrafficPolicyAsync(...)  SubmitAsync(&Route53Client::CreateTrafficPolicy, __VA_ARGS__)
#define CreateTrafficPolicyCallable(REQUEST)  SubmitCallable(&Route53Client::CreateTrafficPolicy, REQUEST)

#define CreateTrafficPolicyInstanceAsync(...)  SubmitAsync(&Route53Client::CreateTrafficPolicyInstance, __VA_ARGS__)
#define CreateTrafficPolicyInstanceCallable(REQUEST)  SubmitCallable(&Route53Client::CreateTrafficPolicyInstance, REQUEST)

#define CreateTrafficPolicyVersionAsync(...)  SubmitAsync(&Route53Client::CreateTrafficPolicyVersion, __VA_ARGS__)
#define CreateTrafficPolicyVersionCallable(REQUEST)  SubmitCallable(&Route53Client::CreateTrafficPolicyVersion, REQUEST)

#define CreateVPCAssociationAuthorizationAsync(...)  SubmitAsync(&Route53Client::CreateVPCAssociationAuthorization, __VA_ARGS__)
#define CreateVPCAssociationAuthorizationCallable(REQUEST)  SubmitCallable(&Route53Client::CreateVPCAssociationAuthorization, REQUEST)

#define DeactivateKeySigningKeyAsync(...)  SubmitAsync(&Route53Client::DeactivateKeySigningKey, __VA_ARGS__)
#define DeactivateKeySigningKeyCallable(REQUEST)  SubmitCallable(&Route53Client::DeactivateKeySigningKey, REQUEST)

#define DeleteCidrCollectionAsync(...)  SubmitAsync(&Route53Client::DeleteCidrCollection, __VA_ARGS__)
#define DeleteCidrCollectionCallable(REQUEST)  SubmitCallable(&Route53Client::DeleteCidrCollection, REQUEST)

#define DeleteHealthCheckAsync(...)  SubmitAsync(&Route53Client::DeleteHealthCheck, __VA_ARGS__)
#define DeleteHealthCheckCallable(REQUEST)  SubmitCallable(&Route53Client::DeleteHealthCheck, REQUEST)

#define DeleteHostedZoneAsync(...)  SubmitAsync(&Route53Client::DeleteHostedZone, __VA_ARGS__)
#define DeleteHostedZoneCallable(REQUEST)  SubmitCallable(&Route53Client::DeleteHostedZone, REQUEST)

#define DeleteKeySigningKeyAsync(...)  SubmitAsync(&Route53Client::DeleteKeySigningKey, __VA_ARGS__)
#define DeleteKeySigningKeyCallable(REQUEST)  SubmitCallable(&Route53Client::DeleteKeySigningKey, REQUEST)

#define DeleteQueryLoggingConfigAsync(...)  SubmitAsync(&Route53Client::DeleteQueryLoggingConfig, __VA_ARGS__)
#define DeleteQueryLoggingConfigCallable(REQUEST)  SubmitCallable(&Route53Client::DeleteQueryLoggingConfig, REQUEST)

#define DeleteReusableDelegationSetAsync(...)  SubmitAsync(&Route53Client::DeleteReusableDelegationSet, __VA_ARGS__)
#define DeleteReusableDelegationSetCallable(REQUEST)  SubmitCallable(&Route53Client::DeleteReusableDelegationSet, REQUEST)

#define DeleteTrafficPolicyAsync(...)  SubmitAsync(&Route53Client::DeleteTrafficPolicy, __VA_ARGS__)
#define DeleteTrafficPolicyCallable(REQUEST)  SubmitCallable(&Route53Client::DeleteTrafficPolicy, REQUEST)

#define DeleteTrafficPolicyInstanceAsync(...)  SubmitAsync(&Route53Client::DeleteTrafficPolicyInstance, __VA_ARGS__)
#define DeleteTrafficPolicyInstanceCallable(REQUEST)  SubmitCallable(&Route53Client::DeleteTrafficPolicyInstance, REQUEST)

#define DeleteVPCAssociationAuthorizationAsync(...)  SubmitAsync(&Route53Client::DeleteVPCAssociationAuthorization, __VA_ARGS__)
#define DeleteVPCAssociationAuthorizationCallable(REQUEST)  SubmitCallable(&Route53Client::DeleteVPCAssociationAuthorization, REQUEST)

#define DisableHostedZoneDNSSECAsync(...)  SubmitAsync(&Route53Client::DisableHostedZoneDNSSEC, __VA_ARGS__)
#define DisableHostedZoneDNSSECCallable(REQUEST)  SubmitCallable(&Route53Client::DisableHostedZoneDNSSEC, REQUEST)

#define DisassociateVPCFromHostedZoneAsync(...)  SubmitAsync(&Route53Client::DisassociateVPCFromHostedZone, __VA_ARGS__)
#define DisassociateVPCFromHostedZoneCallable(REQUEST)  SubmitCallable(&Route53Client::DisassociateVPCFromHostedZone, REQUEST)

#define EnableHostedZoneDNSSECAsync(...)  SubmitAsync(&Route53Client::EnableHostedZoneDNSSEC, __VA_ARGS__)
#define EnableHostedZoneDNSSECCallable(REQUEST)  SubmitCallable(&Route53Client::EnableHostedZoneDNSSEC, REQUEST)

#define GetAccountLimitAsync(...)  SubmitAsync(&Route53Client::GetAccountLimit, __VA_ARGS__)
#define GetAccountLimitCallable(REQUEST)  SubmitCallable(&Route53Client::GetAccountLimit, REQUEST)

#define GetChangeAsync(...)  SubmitAsync(&Route53Client::GetChange, __VA_ARGS__)
#define GetChangeCallable(REQUEST)  SubmitCallable(&Route53Client::GetChange, REQUEST)

#define GetCheckerIpRangesAsync(...)  SubmitAsync(&Route53Client::GetCheckerIpRanges, __VA_ARGS__)
#define GetCheckerIpRangesCallable(REQUEST)  SubmitCallable(&Route53Client::GetCheckerIpRanges, REQUEST)

#define GetDNSSECAsync(...)  SubmitAsync(&Route53Client::GetDNSSEC, __VA_ARGS__)
#define GetDNSSECCallable(REQUEST)  SubmitCallable(&Route53Client::GetDNSSEC, REQUEST)

#define GetGeoLocationAsync(...)  SubmitAsync(&Route53Client::GetGeoLocation, __VA_ARGS__)
#define GetGeoLocationCallable(REQUEST)  SubmitCallable(&Route53Client::GetGeoLocation, REQUEST)

#define GetHealthCheckAsync(...)  SubmitAsync(&Route53Client::GetHealthCheck, __VA_ARGS__)
#define GetHealthCheckCallable(REQUEST)  SubmitCallable(&Route53Client::GetHealthCheck, REQUEST)

#define GetHealthCheckCountAsync(...)  SubmitAsync(&Route53Client::GetHealthCheckCount, __VA_ARGS__)
#define GetHealthCheckCountCallable(REQUEST)  SubmitCallable(&Route53Client::GetHealthCheckCount, REQUEST)

#define GetHealthCheckLastFailureReasonAsync(...)  SubmitAsync(&Route53Client::GetHealthCheckLastFailureReason, __VA_ARGS__)
#define GetHealthCheckLastFailureReasonCallable(REQUEST)  SubmitCallable(&Route53Client::GetHealthCheckLastFailureReason, REQUEST)

#define GetHealthCheckStatusAsync(...)  SubmitAsync(&Route53Client::GetHealthCheckStatus, __VA_ARGS__)
#define GetHealthCheckStatusCallable(REQUEST)  SubmitCallable(&Route53Client::GetHealthCheckStatus, REQUEST)

#define GetHostedZoneAsync(...)  SubmitAsync(&Route53Client::GetHostedZone, __VA_ARGS__)
#define GetHostedZoneCallable(REQUEST)  SubmitCallable(&Route53Client::GetHostedZone, REQUEST)

#define GetHostedZoneCountAsync(...)  SubmitAsync(&Route53Client::GetHostedZoneCount, __VA_ARGS__)
#define GetHostedZoneCountCallable(REQUEST)  SubmitCallable(&Route53Client::GetHostedZoneCount, REQUEST)

#define GetHostedZoneLimitAsync(...)  SubmitAsync(&Route53Client::GetHostedZoneLimit, __VA_ARGS__)
#define GetHostedZoneLimitCallable(REQUEST)  SubmitCallable(&Route53Client::GetHostedZoneLimit, REQUEST)

#define GetQueryLoggingConfigAsync(...)  SubmitAsync(&Route53Client::GetQueryLoggingConfig, __VA_ARGS__)
#define GetQueryLoggingConfigCallable(REQUEST)  SubmitCallable(&Route53Client::GetQueryLoggingConfig, REQUEST)

#define GetReusableDelegationSetAsync(...)  SubmitAsync(&Route53Client::GetReusableDelegationSet, __VA_ARGS__)
#define GetReusableDelegationSetCallable(REQUEST)  SubmitCallable(&Route53Client::GetReusableDelegationSet, REQUEST)

#define GetReusableDelegationSetLimitAsync(...)  SubmitAsync(&Route53Client::GetReusableDelegationSetLimit, __VA_ARGS__)
#define GetReusableDelegationSetLimitCallable(REQUEST)  SubmitCallable(&Route53Client::GetReusableDelegationSetLimit, REQUEST)

#define GetTrafficPolicyAsync(...)  SubmitAsync(&Route53Client::GetTrafficPolicy, __VA_ARGS__)
#define GetTrafficPolicyCallable(REQUEST)  SubmitCallable(&Route53Client::GetTrafficPolicy, REQUEST)

#define GetTrafficPolicyInstanceAsync(...)  SubmitAsync(&Route53Client::GetTrafficPolicyInstance, __VA_ARGS__)
#define GetTrafficPolicyInstanceCallable(REQUEST)  SubmitCallable(&Route53Client::GetTrafficPolicyInstance, REQUEST)

#define GetTrafficPolicyInstanceCountAsync(...)  SubmitAsync(&Route53Client::GetTrafficPolicyInstanceCount, __VA_ARGS__)
#define GetTrafficPolicyInstanceCountCallable(REQUEST)  SubmitCallable(&Route53Client::GetTrafficPolicyInstanceCount, REQUEST)

#define ListCidrBlocksAsync(...)  SubmitAsync(&Route53Client::ListCidrBlocks, __VA_ARGS__)
#define ListCidrBlocksCallable(REQUEST)  SubmitCallable(&Route53Client::ListCidrBlocks, REQUEST)

#define ListCidrCollectionsAsync(...)  SubmitAsync(&Route53Client::ListCidrCollections, __VA_ARGS__)
#define ListCidrCollectionsCallable(REQUEST)  SubmitCallable(&Route53Client::ListCidrCollections, REQUEST)

#define ListCidrLocationsAsync(...)  SubmitAsync(&Route53Client::ListCidrLocations, __VA_ARGS__)
#define ListCidrLocationsCallable(REQUEST)  SubmitCallable(&Route53Client::ListCidrLocations, REQUEST)

#define ListGeoLocationsAsync(...)  SubmitAsync(&Route53Client::ListGeoLocations, __VA_ARGS__)
#define ListGeoLocationsCallable(REQUEST)  SubmitCallable(&Route53Client::ListGeoLocations, REQUEST)

#define ListHealthChecksAsync(...)  SubmitAsync(&Route53Client::ListHealthChecks, __VA_ARGS__)
#define ListHealthChecksCallable(REQUEST)  SubmitCallable(&Route53Client::ListHealthChecks, REQUEST)

#define ListHostedZonesAsync(...)  SubmitAsync(&Route53Client::ListHostedZones, __VA_ARGS__)
#define ListHostedZonesCallable(REQUEST)  SubmitCallable(&Route53Client::ListHostedZones, REQUEST)

#define ListHostedZonesByNameAsync(...)  SubmitAsync(&Route53Client::ListHostedZonesByName, __VA_ARGS__)
#define ListHostedZonesByNameCallable(REQUEST)  SubmitCallable(&Route53Client::ListHostedZonesByName, REQUEST)

#define ListHostedZonesByVPCAsync(...)  SubmitAsync(&Route53Client::ListHostedZonesByVPC, __VA_ARGS__)
#define ListHostedZonesByVPCCallable(REQUEST)  SubmitCallable(&Route53Client::ListHostedZonesByVPC, REQUEST)

#define ListQueryLoggingConfigsAsync(...)  SubmitAsync(&Route53Client::ListQueryLoggingConfigs, __VA_ARGS__)
#define ListQueryLoggingConfigsCallable(REQUEST)  SubmitCallable(&Route53Client::ListQueryLoggingConfigs, REQUEST)

#define ListResourceRecordSetsAsync(...)  SubmitAsync(&Route53Client::ListResourceRecordSets, __VA_ARGS__)
#define ListResourceRecordSetsCallable(REQUEST)  SubmitCallable(&Route53Client::ListResourceRecordSets, REQUEST)

#define ListReusableDelegationSetsAsync(...)  SubmitAsync(&Route53Client::ListReusableDelegationSets, __VA_ARGS__)
#define ListReusableDelegationSetsCallable(REQUEST)  SubmitCallable(&Route53Client::ListReusableDelegationSets, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&Route53Client::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&Route53Client::ListTagsForResource, REQUEST)

#define ListTagsForResourcesAsync(...)  SubmitAsync(&Route53Client::ListTagsForResources, __VA_ARGS__)
#define ListTagsForResourcesCallable(REQUEST)  SubmitCallable(&Route53Client::ListTagsForResources, REQUEST)

#define ListTrafficPoliciesAsync(...)  SubmitAsync(&Route53Client::ListTrafficPolicies, __VA_ARGS__)
#define ListTrafficPoliciesCallable(REQUEST)  SubmitCallable(&Route53Client::ListTrafficPolicies, REQUEST)

#define ListTrafficPolicyInstancesAsync(...)  SubmitAsync(&Route53Client::ListTrafficPolicyInstances, __VA_ARGS__)
#define ListTrafficPolicyInstancesCallable(REQUEST)  SubmitCallable(&Route53Client::ListTrafficPolicyInstances, REQUEST)

#define ListTrafficPolicyInstancesByHostedZoneAsync(...)  SubmitAsync(&Route53Client::ListTrafficPolicyInstancesByHostedZone, __VA_ARGS__)
#define ListTrafficPolicyInstancesByHostedZoneCallable(REQUEST)  SubmitCallable(&Route53Client::ListTrafficPolicyInstancesByHostedZone, REQUEST)

#define ListTrafficPolicyInstancesByPolicyAsync(...)  SubmitAsync(&Route53Client::ListTrafficPolicyInstancesByPolicy, __VA_ARGS__)
#define ListTrafficPolicyInstancesByPolicyCallable(REQUEST)  SubmitCallable(&Route53Client::ListTrafficPolicyInstancesByPolicy, REQUEST)

#define ListTrafficPolicyVersionsAsync(...)  SubmitAsync(&Route53Client::ListTrafficPolicyVersions, __VA_ARGS__)
#define ListTrafficPolicyVersionsCallable(REQUEST)  SubmitCallable(&Route53Client::ListTrafficPolicyVersions, REQUEST)

#define ListVPCAssociationAuthorizationsAsync(...)  SubmitAsync(&Route53Client::ListVPCAssociationAuthorizations, __VA_ARGS__)
#define ListVPCAssociationAuthorizationsCallable(REQUEST)  SubmitCallable(&Route53Client::ListVPCAssociationAuthorizations, REQUEST)

#define TestDNSAnswerAsync(...)  SubmitAsync(&Route53Client::TestDNSAnswer, __VA_ARGS__)
#define TestDNSAnswerCallable(REQUEST)  SubmitCallable(&Route53Client::TestDNSAnswer, REQUEST)

#define UpdateHealthCheckAsync(...)  SubmitAsync(&Route53Client::UpdateHealthCheck, __VA_ARGS__)
#define UpdateHealthCheckCallable(REQUEST)  SubmitCallable(&Route53Client::UpdateHealthCheck, REQUEST)

#define UpdateHostedZoneCommentAsync(...)  SubmitAsync(&Route53Client::UpdateHostedZoneComment, __VA_ARGS__)
#define UpdateHostedZoneCommentCallable(REQUEST)  SubmitCallable(&Route53Client::UpdateHostedZoneComment, REQUEST)

#define UpdateTrafficPolicyCommentAsync(...)  SubmitAsync(&Route53Client::UpdateTrafficPolicyComment, __VA_ARGS__)
#define UpdateTrafficPolicyCommentCallable(REQUEST)  SubmitCallable(&Route53Client::UpdateTrafficPolicyComment, REQUEST)

#define UpdateTrafficPolicyInstanceAsync(...)  SubmitAsync(&Route53Client::UpdateTrafficPolicyInstance, __VA_ARGS__)
#define UpdateTrafficPolicyInstanceCallable(REQUEST)  SubmitCallable(&Route53Client::UpdateTrafficPolicyInstance, REQUEST)

