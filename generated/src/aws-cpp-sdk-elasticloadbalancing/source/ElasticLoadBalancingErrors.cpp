/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ElasticLoadBalancing;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace ElasticLoadBalancingErrorMapper
{

static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OperationNotPermitted");
static constexpr uint32_t INVALID_SUBNET_HASH = ConstExprHashingUtils::HashString("InvalidSubnet");
static constexpr uint32_t INVALID_SCHEME_HASH = ConstExprHashingUtils::HashString("InvalidScheme");
static constexpr uint32_t POLICY_TYPE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PolicyTypeNotFound");
static constexpr uint32_t DUPLICATE_ACCESS_POINT_NAME_HASH = ConstExprHashingUtils::HashString("DuplicateLoadBalancerName");
static constexpr uint32_t INVALID_END_POINT_HASH = ConstExprHashingUtils::HashString("InvalidInstance");
static constexpr uint32_t DUPLICATE_LISTENER_HASH = ConstExprHashingUtils::HashString("DuplicateListener");
static constexpr uint32_t LOAD_BALANCER_ATTRIBUTE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("LoadBalancerAttributeNotFound");
static constexpr uint32_t POLICY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PolicyNotFound");
static constexpr uint32_t TOO_MANY_ACCESS_POINTS_HASH = ConstExprHashingUtils::HashString("TooManyLoadBalancers");
static constexpr uint32_t DUPLICATE_TAG_KEYS_HASH = ConstExprHashingUtils::HashString("DuplicateTagKeys");
static constexpr uint32_t LISTENER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ListenerNotFound");
static constexpr uint32_t DUPLICATE_POLICY_NAME_HASH = ConstExprHashingUtils::HashString("DuplicatePolicyName");
static constexpr uint32_t DEPENDENCY_THROTTLE_HASH = ConstExprHashingUtils::HashString("DependencyThrottle");
static constexpr uint32_t INVALID_CONFIGURATION_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidConfigurationRequest");
static constexpr uint32_t UNSUPPORTED_PROTOCOL_HASH = ConstExprHashingUtils::HashString("UnsupportedProtocol");
static constexpr uint32_t ACCESS_POINT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("LoadBalancerNotFound");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTags");
static constexpr uint32_t SUBNET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("SubnetNotFound");
static constexpr uint32_t INVALID_SECURITY_GROUP_HASH = ConstExprHashingUtils::HashString("InvalidSecurityGroup");
static constexpr uint32_t TOO_MANY_POLICIES_HASH = ConstExprHashingUtils::HashString("TooManyPolicies");
static constexpr uint32_t CERTIFICATE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CertificateNotFound");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::INVALID_SUBNET), false);
  }
  else if (hashCode == INVALID_SCHEME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::INVALID_SCHEME), false);
  }
  else if (hashCode == POLICY_TYPE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::POLICY_TYPE_NOT_FOUND), false);
  }
  else if (hashCode == DUPLICATE_ACCESS_POINT_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::DUPLICATE_ACCESS_POINT_NAME), false);
  }
  else if (hashCode == INVALID_END_POINT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::INVALID_END_POINT), false);
  }
  else if (hashCode == DUPLICATE_LISTENER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::DUPLICATE_LISTENER), false);
  }
  else if (hashCode == LOAD_BALANCER_ATTRIBUTE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::LOAD_BALANCER_ATTRIBUTE_NOT_FOUND), false);
  }
  else if (hashCode == POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::POLICY_NOT_FOUND), false);
  }
  else if (hashCode == TOO_MANY_ACCESS_POINTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::TOO_MANY_ACCESS_POINTS), false);
  }
  else if (hashCode == DUPLICATE_TAG_KEYS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::DUPLICATE_TAG_KEYS), false);
  }
  else if (hashCode == LISTENER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::LISTENER_NOT_FOUND), false);
  }
  else if (hashCode == DUPLICATE_POLICY_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::DUPLICATE_POLICY_NAME), false);
  }
  else if (hashCode == DEPENDENCY_THROTTLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::DEPENDENCY_THROTTLE), false);
  }
  else if (hashCode == INVALID_CONFIGURATION_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::INVALID_CONFIGURATION_REQUEST), false);
  }
  else if (hashCode == UNSUPPORTED_PROTOCOL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::UNSUPPORTED_PROTOCOL), false);
  }
  else if (hashCode == ACCESS_POINT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::ACCESS_POINT_NOT_FOUND), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == SUBNET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::SUBNET_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_SECURITY_GROUP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::INVALID_SECURITY_GROUP), false);
  }
  else if (hashCode == TOO_MANY_POLICIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::TOO_MANY_POLICIES), false);
  }
  else if (hashCode == CERTIFICATE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticLoadBalancingErrors::CERTIFICATE_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElasticLoadBalancingErrorMapper
} // namespace ElasticLoadBalancing
} // namespace Aws
