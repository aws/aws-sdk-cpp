/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/ControlPlaneEgressModeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace ControlPlaneEgressModeTypeMapper {

static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
static const int CUSTOMER_ROUTED_HASH = HashingUtils::HashString("CUSTOMER_ROUTED");
static const int CUSTOMER_ISOLATED_HASH = HashingUtils::HashString("CUSTOMER_ISOLATED");

ControlPlaneEgressModeType GetControlPlaneEgressModeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_MANAGED_HASH) {
    return ControlPlaneEgressModeType::AWS_MANAGED;
  } else if (hashCode == CUSTOMER_ROUTED_HASH) {
    return ControlPlaneEgressModeType::CUSTOMER_ROUTED;
  } else if (hashCode == CUSTOMER_ISOLATED_HASH) {
    return ControlPlaneEgressModeType::CUSTOMER_ISOLATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ControlPlaneEgressModeType>(hashCode);
  }

  return ControlPlaneEgressModeType::NOT_SET;
}

Aws::String GetNameForControlPlaneEgressModeType(ControlPlaneEgressModeType enumValue) {
  switch (enumValue) {
    case ControlPlaneEgressModeType::NOT_SET:
      return {};
    case ControlPlaneEgressModeType::AWS_MANAGED:
      return "AWS_MANAGED";
    case ControlPlaneEgressModeType::CUSTOMER_ROUTED:
      return "CUSTOMER_ROUTED";
    case ControlPlaneEgressModeType::CUSTOMER_ISOLATED:
      return "CUSTOMER_ISOLATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ControlPlaneEgressModeTypeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
