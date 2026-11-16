/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam-toolbox/model/CheckType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {
namespace CheckTypeMapper {

static const int SERVICE_CONTROL_POLICY_HASH = HashingUtils::HashString("SERVICE_CONTROL_POLICY");
static const int RESOURCE_CONTROL_POLICY_HASH = HashingUtils::HashString("RESOURCE_CONTROL_POLICY");
static const int VPC_ENDPOINT_HASH = HashingUtils::HashString("VPC_ENDPOINT");
static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
static const int PRINCIPAL_HASH = HashingUtils::HashString("PRINCIPAL");
static const int PERMISSIONS_BOUNDARY_HASH = HashingUtils::HashString("PERMISSIONS_BOUNDARY");
static const int SESSION_HASH = HashingUtils::HashString("SESSION");

CheckType GetCheckTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_CONTROL_POLICY_HASH) {
    return CheckType::SERVICE_CONTROL_POLICY;
  } else if (hashCode == RESOURCE_CONTROL_POLICY_HASH) {
    return CheckType::RESOURCE_CONTROL_POLICY;
  } else if (hashCode == VPC_ENDPOINT_HASH) {
    return CheckType::VPC_ENDPOINT;
  } else if (hashCode == RESOURCE_HASH) {
    return CheckType::RESOURCE;
  } else if (hashCode == PRINCIPAL_HASH) {
    return CheckType::PRINCIPAL;
  } else if (hashCode == PERMISSIONS_BOUNDARY_HASH) {
    return CheckType::PERMISSIONS_BOUNDARY;
  } else if (hashCode == SESSION_HASH) {
    return CheckType::SESSION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CheckType>(hashCode);
  }

  return CheckType::NOT_SET;
}

Aws::String GetNameForCheckType(CheckType enumValue) {
  switch (enumValue) {
    case CheckType::NOT_SET:
      return {};
    case CheckType::SERVICE_CONTROL_POLICY:
      return "SERVICE_CONTROL_POLICY";
    case CheckType::RESOURCE_CONTROL_POLICY:
      return "RESOURCE_CONTROL_POLICY";
    case CheckType::VPC_ENDPOINT:
      return "VPC_ENDPOINT";
    case CheckType::RESOURCE:
      return "RESOURCE";
    case CheckType::PRINCIPAL:
      return "PRINCIPAL";
    case CheckType::PERMISSIONS_BOUNDARY:
      return "PERMISSIONS_BOUNDARY";
    case CheckType::SESSION:
      return "SESSION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CheckTypeMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
