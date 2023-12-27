/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Errors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ElasticLoadBalancingv2;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace ElasticLoadBalancingv2ErrorMapper
{

static const int AVAILABILITY_ZONE_NOT_SUPPORTED_HASH = HashingUtils::HashString("AvailabilityZoneNotSupported");
static const int INVALID_SCHEME_HASH = HashingUtils::HashString("InvalidScheme");
static const int INCOMPATIBLE_PROTOCOLS_HASH = HashingUtils::HashString("IncompatibleProtocols");
static const int TOO_MANY_TARGETS_HASH = HashingUtils::HashString("TooManyTargets");
static const int CA_CERTIFICATES_BUNDLE_NOT_FOUND_HASH = HashingUtils::HashString("CaCertificatesBundleNotFound");
static const int DUPLICATE_LISTENER_HASH = HashingUtils::HashString("DuplicateListener");
static const int TOO_MANY_RULES_HASH = HashingUtils::HashString("TooManyRules");
static const int LISTENER_NOT_FOUND_HASH = HashingUtils::HashString("ListenerNotFound");
static const int A_L_P_N_POLICY_NOT_SUPPORTED_HASH = HashingUtils::HashString("ALPNPolicyNotFound");
static const int HEALTH_UNAVAILABLE_HASH = HashingUtils::HashString("HealthUnavailable");
static const int TOO_MANY_UNIQUE_TARGET_GROUPS_PER_LOAD_BALANCER_HASH = HashingUtils::HashString("TooManyUniqueTargetGroupsPerLoadBalancer");
static const int TOO_MANY_ACTIONS_HASH = HashingUtils::HashString("TooManyActions");
static const int REVOCATION_ID_NOT_FOUND_HASH = HashingUtils::HashString("RevocationIdNotFound");
static const int ALLOCATION_ID_NOT_FOUND_HASH = HashingUtils::HashString("AllocationIdNotFound");
static const int TOO_MANY_CERTIFICATES_HASH = HashingUtils::HashString("TooManyCertificates");
static const int TARGET_GROUP_NOT_FOUND_HASH = HashingUtils::HashString("TargetGroupNotFound");
static const int REVOCATION_CONTENT_NOT_FOUND_HASH = HashingUtils::HashString("RevocationContentNotFound");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUse");
static const int DUPLICATE_LOAD_BALANCER_NAME_HASH = HashingUtils::HashString("DuplicateLoadBalancerName");
static const int LOAD_BALANCER_NOT_FOUND_HASH = HashingUtils::HashString("LoadBalancerNotFound");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermitted");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int INVALID_LOAD_BALANCER_ACTION_HASH = HashingUtils::HashString("InvalidLoadBalancerAction");
static const int DUPLICATE_TARGET_GROUP_NAME_HASH = HashingUtils::HashString("DuplicateTargetGroupName");
static const int S_S_L_POLICY_NOT_FOUND_HASH = HashingUtils::HashString("SSLPolicyNotFound");
static const int TOO_MANY_TARGET_GROUPS_HASH = HashingUtils::HashString("TooManyTargetGroups");
static const int INVALID_CA_CERTIFICATES_BUNDLE_HASH = HashingUtils::HashString("InvalidCaCertificatesBundle");
static const int TOO_MANY_LISTENERS_HASH = HashingUtils::HashString("TooManyListeners");
static const int DUPLICATE_TAG_KEYS_HASH = HashingUtils::HashString("DuplicateTagKeys");
static const int RULE_NOT_FOUND_HASH = HashingUtils::HashString("RuleNotFound");
static const int TOO_MANY_TRUST_STORE_REVOCATION_ENTRIES_HASH = HashingUtils::HashString("TooManyTrustStoreRevocationEntries");
static const int TOO_MANY_TRUST_STORES_HASH = HashingUtils::HashString("TooManyTrustStores");
static const int PRIORITY_IN_USE_HASH = HashingUtils::HashString("PriorityInUse");
static const int TOO_MANY_REGISTRATIONS_FOR_TARGET_ID_HASH = HashingUtils::HashString("TooManyRegistrationsForTargetId");
static const int INVALID_CONFIGURATION_REQUEST_HASH = HashingUtils::HashString("InvalidConfigurationRequest");
static const int UNSUPPORTED_PROTOCOL_HASH = HashingUtils::HashString("UnsupportedProtocol");
static const int TRUST_STORE_IN_USE_HASH = HashingUtils::HashString("TrustStoreInUse");
static const int INVALID_TARGET_HASH = HashingUtils::HashString("InvalidTarget");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTags");
static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SubnetNotFound");
static const int TRUST_STORE_NOT_READY_HASH = HashingUtils::HashString("TrustStoreNotReady");
static const int INVALID_SECURITY_GROUP_HASH = HashingUtils::HashString("InvalidSecurityGroup");
static const int CERTIFICATE_NOT_FOUND_HASH = HashingUtils::HashString("CertificateNotFound");
static const int TRUST_STORE_NOT_FOUND_HASH = HashingUtils::HashString("TrustStoreNotFound");
static const int INVALID_REVOCATION_CONTENT_HASH = HashingUtils::HashString("InvalidRevocationContent");
static const int DUPLICATE_TRUST_STORE_NAME_HASH = HashingUtils::HashString("DuplicateTrustStoreName");
static const int TARGET_GROUP_ASSOCIATION_LIMIT_HASH = HashingUtils::HashString("TargetGroupAssociationLimit");
static const int TOO_MANY_LOAD_BALANCERS_HASH = HashingUtils::HashString("TooManyLoadBalancers");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == AVAILABILITY_ZONE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::AVAILABILITY_ZONE_NOT_SUPPORTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SCHEME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_SCHEME), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INCOMPATIBLE_PROTOCOLS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INCOMPATIBLE_PROTOCOLS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TARGETS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_TARGETS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CA_CERTIFICATES_BUNDLE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::CA_CERTIFICATES_BUNDLE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATE_LISTENER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::DUPLICATE_LISTENER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_RULES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_RULES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LISTENER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::LISTENER_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == A_L_P_N_POLICY_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::A_L_P_N_POLICY_NOT_SUPPORTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HEALTH_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::HEALTH_UNAVAILABLE), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_UNIQUE_TARGET_GROUPS_PER_LOAD_BALANCER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_UNIQUE_TARGET_GROUPS_PER_LOAD_BALANCER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_ACTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_ACTIONS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REVOCATION_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::REVOCATION_ID_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ALLOCATION_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::ALLOCATION_ID_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_CERTIFICATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_CERTIFICATES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TARGET_GROUP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TARGET_GROUP_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REVOCATION_CONTENT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::REVOCATION_CONTENT_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATE_LOAD_BALANCER_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::DUPLICATE_LOAD_BALANCER_NAME), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LOAD_BALANCER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::LOAD_BALANCER_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::OPERATION_NOT_PERMITTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_SUBNET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_LOAD_BALANCER_ACTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_LOAD_BALANCER_ACTION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATE_TARGET_GROUP_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::DUPLICATE_TARGET_GROUP_NAME), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == S_S_L_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::S_S_L_POLICY_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TARGET_GROUPS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_TARGET_GROUPS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CA_CERTIFICATES_BUNDLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_CA_CERTIFICATES_BUNDLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_LISTENERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_LISTENERS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATE_TAG_KEYS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::DUPLICATE_TAG_KEYS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RULE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::RULE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TRUST_STORE_REVOCATION_ENTRIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_TRUST_STORE_REVOCATION_ENTRIES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TRUST_STORES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_TRUST_STORES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PRIORITY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::PRIORITY_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REGISTRATIONS_FOR_TARGET_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_REGISTRATIONS_FOR_TARGET_ID), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CONFIGURATION_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_CONFIGURATION_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_PROTOCOL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::UNSUPPORTED_PROTOCOL), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TRUST_STORE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TRUST_STORE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_TARGET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_TARGET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBNET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::SUBNET_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TRUST_STORE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TRUST_STORE_NOT_READY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SECURITY_GROUP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_SECURITY_GROUP), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CERTIFICATE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::CERTIFICATE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TRUST_STORE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TRUST_STORE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REVOCATION_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_REVOCATION_CONTENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATE_TRUST_STORE_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::DUPLICATE_TRUST_STORE_NAME), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TARGET_GROUP_ASSOCIATION_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TARGET_GROUP_ASSOCIATION_LIMIT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_LOAD_BALANCERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_LOAD_BALANCERS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElasticLoadBalancingv2ErrorMapper
} // namespace ElasticLoadBalancingv2
} // namespace Aws
