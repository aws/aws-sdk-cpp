/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam-toolbox/model/PolicyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {
namespace PolicyTypeMapper {

static const int IDENTITY_BASED_POLICY_HASH = HashingUtils::HashString("IDENTITY_BASED_POLICY");
static const int RESOURCE_BASED_POLICY_HASH = HashingUtils::HashString("RESOURCE_BASED_POLICY");
static const int PERMISSIONS_BOUNDARY_HASH = HashingUtils::HashString("PERMISSIONS_BOUNDARY");
static const int SESSION_POLICY_HASH = HashingUtils::HashString("SESSION_POLICY");
static const int SERVICE_CONTROL_POLICY_HASH = HashingUtils::HashString("SERVICE_CONTROL_POLICY");
static const int RESOURCE_CONTROL_POLICY_HASH = HashingUtils::HashString("RESOURCE_CONTROL_POLICY");
static const int VPC_ENDPOINT_POLICY_HASH = HashingUtils::HashString("VPC_ENDPOINT_POLICY");

PolicyType GetPolicyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IDENTITY_BASED_POLICY_HASH) {
    return PolicyType::IDENTITY_BASED_POLICY;
  } else if (hashCode == RESOURCE_BASED_POLICY_HASH) {
    return PolicyType::RESOURCE_BASED_POLICY;
  } else if (hashCode == PERMISSIONS_BOUNDARY_HASH) {
    return PolicyType::PERMISSIONS_BOUNDARY;
  } else if (hashCode == SESSION_POLICY_HASH) {
    return PolicyType::SESSION_POLICY;
  } else if (hashCode == SERVICE_CONTROL_POLICY_HASH) {
    return PolicyType::SERVICE_CONTROL_POLICY;
  } else if (hashCode == RESOURCE_CONTROL_POLICY_HASH) {
    return PolicyType::RESOURCE_CONTROL_POLICY;
  } else if (hashCode == VPC_ENDPOINT_POLICY_HASH) {
    return PolicyType::VPC_ENDPOINT_POLICY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyType>(hashCode);
  }

  return PolicyType::NOT_SET;
}

Aws::String GetNameForPolicyType(PolicyType enumValue) {
  switch (enumValue) {
    case PolicyType::NOT_SET:
      return {};
    case PolicyType::IDENTITY_BASED_POLICY:
      return "IDENTITY_BASED_POLICY";
    case PolicyType::RESOURCE_BASED_POLICY:
      return "RESOURCE_BASED_POLICY";
    case PolicyType::PERMISSIONS_BOUNDARY:
      return "PERMISSIONS_BOUNDARY";
    case PolicyType::SESSION_POLICY:
      return "SESSION_POLICY";
    case PolicyType::SERVICE_CONTROL_POLICY:
      return "SERVICE_CONTROL_POLICY";
    case PolicyType::RESOURCE_CONTROL_POLICY:
      return "RESOURCE_CONTROL_POLICY";
    case PolicyType::VPC_ENDPOINT_POLICY:
      return "VPC_ENDPOINT_POLICY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyTypeMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
