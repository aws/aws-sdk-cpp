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
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrors.h>

using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancing;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace ElasticLoadBalancingErrorMapper
{

static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermitted");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int INVALID_SCHEME_HASH = HashingUtils::HashString("InvalidScheme");
static const int POLICY_TYPE_NOT_FOUND_HASH = HashingUtils::HashString("PolicyTypeNotFound");
static const int DUPLICATE_ACCESS_POINT_NAME_HASH = HashingUtils::HashString("DuplicateLoadBalancerName");
static const int INVALID_END_POINT_HASH = HashingUtils::HashString("InvalidInstance");
static const int DUPLICATE_LISTENER_HASH = HashingUtils::HashString("DuplicateListener");
static const int LOAD_BALANCER_ATTRIBUTE_NOT_FOUND_HASH = HashingUtils::HashString("LoadBalancerAttributeNotFound");
static const int POLICY_NOT_FOUND_HASH = HashingUtils::HashString("PolicyNotFound");
static const int TOO_MANY_ACCESS_POINTS_HASH = HashingUtils::HashString("TooManyLoadBalancers");
static const int DUPLICATE_TAG_KEYS_HASH = HashingUtils::HashString("DuplicateTagKeys");
static const int LISTENER_NOT_FOUND_HASH = HashingUtils::HashString("ListenerNotFound");
static const int DUPLICATE_POLICY_NAME_HASH = HashingUtils::HashString("DuplicatePolicyName");
static const int DEPENDENCY_THROTTLE_HASH = HashingUtils::HashString("DependencyThrottle");
static const int INVALID_CONFIGURATION_REQUEST_HASH = HashingUtils::HashString("InvalidConfigurationRequest");
static const int UNSUPPORTED_PROTOCOL_HASH = HashingUtils::HashString("UnsupportedProtocol");
static const int ACCESS_POINT_NOT_FOUND_HASH = HashingUtils::HashString("LoadBalancerNotFound");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTags");
static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SubnetNotFound");
static const int INVALID_SECURITY_GROUP_HASH = HashingUtils::HashString("InvalidSecurityGroup");
static const int TOO_MANY_POLICIES_HASH = HashingUtils::HashString("TooManyPolicies");
static const int CERTIFICATE_NOT_FOUND_HASH = HashingUtils::HashString("CertificateNotFound");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
