/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Errors.h>

using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancingv2;
using namespace Aws::Utils;

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
static const int DUPLICATE_LISTENER_HASH = HashingUtils::HashString("DuplicateListener");
static const int TOO_MANY_RULES_HASH = HashingUtils::HashString("TooManyRules");
static const int LISTENER_NOT_FOUND_HASH = HashingUtils::HashString("ListenerNotFound");
static const int HEALTH_UNAVAILABLE_HASH = HashingUtils::HashString("HealthUnavailable");
static const int TOO_MANY_ACTIONS_HASH = HashingUtils::HashString("TooManyActions");
static const int ALLOCATION_ID_NOT_FOUND_HASH = HashingUtils::HashString("AllocationIdNotFound");
static const int TOO_MANY_CERTIFICATES_HASH = HashingUtils::HashString("TooManyCertificates");
static const int TARGET_GROUP_NOT_FOUND_HASH = HashingUtils::HashString("TargetGroupNotFound");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUse");
static const int DUPLICATE_LOAD_BALANCER_NAME_HASH = HashingUtils::HashString("DuplicateLoadBalancerName");
static const int LOAD_BALANCER_NOT_FOUND_HASH = HashingUtils::HashString("LoadBalancerNotFound");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermitted");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int INVALID_LOAD_BALANCER_ACTION_HASH = HashingUtils::HashString("InvalidLoadBalancerAction");
static const int DUPLICATE_TARGET_GROUP_NAME_HASH = HashingUtils::HashString("DuplicateTargetGroupName");
static const int S_S_L_POLICY_NOT_FOUND_HASH = HashingUtils::HashString("SSLPolicyNotFound");
static const int TOO_MANY_TARGET_GROUPS_HASH = HashingUtils::HashString("TooManyTargetGroups");
static const int TOO_MANY_LISTENERS_HASH = HashingUtils::HashString("TooManyListeners");
static const int DUPLICATE_TAG_KEYS_HASH = HashingUtils::HashString("DuplicateTagKeys");
static const int RULE_NOT_FOUND_HASH = HashingUtils::HashString("RuleNotFound");
static const int PRIORITY_IN_USE_HASH = HashingUtils::HashString("PriorityInUse");
static const int TOO_MANY_REGISTRATIONS_FOR_TARGET_ID_HASH = HashingUtils::HashString("TooManyRegistrationsForTargetId");
static const int INVALID_CONFIGURATION_REQUEST_HASH = HashingUtils::HashString("InvalidConfigurationRequest");
static const int UNSUPPORTED_PROTOCOL_HASH = HashingUtils::HashString("UnsupportedProtocol");
static const int INVALID_TARGET_HASH = HashingUtils::HashString("InvalidTarget");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTags");
static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SubnetNotFound");
static const int INVALID_SECURITY_GROUP_HASH = HashingUtils::HashString("InvalidSecurityGroup");
static const int CERTIFICATE_NOT_FOUND_HASH = HashingUtils::HashString("CertificateNotFound");
static const int TARGET_GROUP_ASSOCIATION_LIMIT_HASH = HashingUtils::HashString("TargetGroupAssociationLimit");
static const int TOO_MANY_LOAD_BALANCERS_HASH = HashingUtils::HashString("TooManyLoadBalancers");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
  else if (hashCode == HEALTH_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingv2Errors::HEALTH_UNAVAILABLE), true);
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
