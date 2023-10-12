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

static constexpr uint32_t AVAILABILITY_ZONE_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("AvailabilityZoneNotSupported");
static constexpr uint32_t INVALID_SCHEME_HASH = ConstExprHashingUtils::HashString("InvalidScheme");
static constexpr uint32_t INCOMPATIBLE_PROTOCOLS_HASH = ConstExprHashingUtils::HashString("IncompatibleProtocols");
static constexpr uint32_t TOO_MANY_TARGETS_HASH = ConstExprHashingUtils::HashString("TooManyTargets");
static constexpr uint32_t DUPLICATE_LISTENER_HASH = ConstExprHashingUtils::HashString("DuplicateListener");
static constexpr uint32_t TOO_MANY_RULES_HASH = ConstExprHashingUtils::HashString("TooManyRules");
static constexpr uint32_t LISTENER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ListenerNotFound");
static constexpr uint32_t A_L_P_N_POLICY_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("ALPNPolicyNotFound");
static constexpr uint32_t HEALTH_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("HealthUnavailable");
static constexpr uint32_t TOO_MANY_UNIQUE_TARGET_GROUPS_PER_LOAD_BALANCER_HASH = ConstExprHashingUtils::HashString("TooManyUniqueTargetGroupsPerLoadBalancer");
static constexpr uint32_t TOO_MANY_ACTIONS_HASH = ConstExprHashingUtils::HashString("TooManyActions");
static constexpr uint32_t ALLOCATION_ID_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("AllocationIdNotFound");
static constexpr uint32_t TOO_MANY_CERTIFICATES_HASH = ConstExprHashingUtils::HashString("TooManyCertificates");
static constexpr uint32_t TARGET_GROUP_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TargetGroupNotFound");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUse");
static constexpr uint32_t DUPLICATE_LOAD_BALANCER_NAME_HASH = ConstExprHashingUtils::HashString("DuplicateLoadBalancerName");
static constexpr uint32_t LOAD_BALANCER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("LoadBalancerNotFound");
static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OperationNotPermitted");
static constexpr uint32_t INVALID_SUBNET_HASH = ConstExprHashingUtils::HashString("InvalidSubnet");
static constexpr uint32_t INVALID_LOAD_BALANCER_ACTION_HASH = ConstExprHashingUtils::HashString("InvalidLoadBalancerAction");
static constexpr uint32_t DUPLICATE_TARGET_GROUP_NAME_HASH = ConstExprHashingUtils::HashString("DuplicateTargetGroupName");
static constexpr uint32_t S_S_L_POLICY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("SSLPolicyNotFound");
static constexpr uint32_t TOO_MANY_TARGET_GROUPS_HASH = ConstExprHashingUtils::HashString("TooManyTargetGroups");
static constexpr uint32_t TOO_MANY_LISTENERS_HASH = ConstExprHashingUtils::HashString("TooManyListeners");
static constexpr uint32_t DUPLICATE_TAG_KEYS_HASH = ConstExprHashingUtils::HashString("DuplicateTagKeys");
static constexpr uint32_t RULE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RuleNotFound");
static constexpr uint32_t PRIORITY_IN_USE_HASH = ConstExprHashingUtils::HashString("PriorityInUse");
static constexpr uint32_t TOO_MANY_REGISTRATIONS_FOR_TARGET_ID_HASH = ConstExprHashingUtils::HashString("TooManyRegistrationsForTargetId");
static constexpr uint32_t INVALID_CONFIGURATION_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidConfigurationRequest");
static constexpr uint32_t UNSUPPORTED_PROTOCOL_HASH = ConstExprHashingUtils::HashString("UnsupportedProtocol");
static constexpr uint32_t INVALID_TARGET_HASH = ConstExprHashingUtils::HashString("InvalidTarget");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTags");
static constexpr uint32_t SUBNET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("SubnetNotFound");
static constexpr uint32_t INVALID_SECURITY_GROUP_HASH = ConstExprHashingUtils::HashString("InvalidSecurityGroup");
static constexpr uint32_t CERTIFICATE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CertificateNotFound");
static constexpr uint32_t TARGET_GROUP_ASSOCIATION_LIMIT_HASH = ConstExprHashingUtils::HashString("TargetGroupAssociationLimit");
static constexpr uint32_t TOO_MANY_LOAD_BALANCERS_HASH = ConstExprHashingUtils::HashString("TooManyLoadBalancers");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == AVAILABILITY_ZONE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::AVAILABILITY_ZONE_NOT_SUPPORTED), false);
  }
  else if (hashCode == INVALID_SCHEME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_SCHEME), false);
  }
  else if (hashCode == INCOMPATIBLE_PROTOCOLS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INCOMPATIBLE_PROTOCOLS), false);
  }
  else if (hashCode == TOO_MANY_TARGETS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_TARGETS), false);
  }
  else if (hashCode == DUPLICATE_LISTENER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::DUPLICATE_LISTENER), false);
  }
  else if (hashCode == TOO_MANY_RULES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_RULES), false);
  }
  else if (hashCode == LISTENER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::LISTENER_NOT_FOUND), false);
  }
  else if (hashCode == A_L_P_N_POLICY_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::A_L_P_N_POLICY_NOT_SUPPORTED), false);
  }
  else if (hashCode == HEALTH_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::HEALTH_UNAVAILABLE), true);
  }
  else if (hashCode == TOO_MANY_UNIQUE_TARGET_GROUPS_PER_LOAD_BALANCER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_UNIQUE_TARGET_GROUPS_PER_LOAD_BALANCER), false);
  }
  else if (hashCode == TOO_MANY_ACTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_ACTIONS), false);
  }
  else if (hashCode == ALLOCATION_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::ALLOCATION_ID_NOT_FOUND), false);
  }
  else if (hashCode == TOO_MANY_CERTIFICATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_CERTIFICATES), false);
  }
  else if (hashCode == TARGET_GROUP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TARGET_GROUP_NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == DUPLICATE_LOAD_BALANCER_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::DUPLICATE_LOAD_BALANCER_NAME), false);
  }
  else if (hashCode == LOAD_BALANCER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::LOAD_BALANCER_NOT_FOUND), false);
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_SUBNET), false);
  }
  else if (hashCode == INVALID_LOAD_BALANCER_ACTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_LOAD_BALANCER_ACTION), false);
  }
  else if (hashCode == DUPLICATE_TARGET_GROUP_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::DUPLICATE_TARGET_GROUP_NAME), false);
  }
  else if (hashCode == S_S_L_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::S_S_L_POLICY_NOT_FOUND), false);
  }
  else if (hashCode == TOO_MANY_TARGET_GROUPS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_TARGET_GROUPS), false);
  }
  else if (hashCode == TOO_MANY_LISTENERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_LISTENERS), false);
  }
  else if (hashCode == DUPLICATE_TAG_KEYS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::DUPLICATE_TAG_KEYS), false);
  }
  else if (hashCode == RULE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::RULE_NOT_FOUND), false);
  }
  else if (hashCode == PRIORITY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::PRIORITY_IN_USE), false);
  }
  else if (hashCode == TOO_MANY_REGISTRATIONS_FOR_TARGET_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_REGISTRATIONS_FOR_TARGET_ID), false);
  }
  else if (hashCode == INVALID_CONFIGURATION_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_CONFIGURATION_REQUEST), false);
  }
  else if (hashCode == UNSUPPORTED_PROTOCOL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::UNSUPPORTED_PROTOCOL), false);
  }
  else if (hashCode == INVALID_TARGET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_TARGET), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == SUBNET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::SUBNET_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_SECURITY_GROUP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::INVALID_SECURITY_GROUP), false);
  }
  else if (hashCode == CERTIFICATE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::CERTIFICATE_NOT_FOUND), false);
  }
  else if (hashCode == TARGET_GROUP_ASSOCIATION_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TARGET_GROUP_ASSOCIATION_LIMIT), false);
  }
  else if (hashCode == TOO_MANY_LOAD_BALANCERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::TOO_MANY_LOAD_BALANCERS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElasticLoadBalancingv2ErrorMapper
} // namespace ElasticLoadBalancingv2
} // namespace Aws
