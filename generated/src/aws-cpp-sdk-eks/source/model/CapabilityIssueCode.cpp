/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/CapabilityIssueCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace CapabilityIssueCodeMapper {

static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
static const int ClusterUnreachable_HASH = HashingUtils::HashString("ClusterUnreachable");

CapabilityIssueCode GetCapabilityIssueCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccessDenied_HASH) {
    return CapabilityIssueCode::AccessDenied;
  } else if (hashCode == ClusterUnreachable_HASH) {
    return CapabilityIssueCode::ClusterUnreachable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapabilityIssueCode>(hashCode);
  }

  return CapabilityIssueCode::NOT_SET;
}

Aws::String GetNameForCapabilityIssueCode(CapabilityIssueCode enumValue) {
  switch (enumValue) {
    case CapabilityIssueCode::NOT_SET:
      return {};
    case CapabilityIssueCode::AccessDenied:
      return "AccessDenied";
    case CapabilityIssueCode::ClusterUnreachable:
      return "ClusterUnreachable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapabilityIssueCodeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
