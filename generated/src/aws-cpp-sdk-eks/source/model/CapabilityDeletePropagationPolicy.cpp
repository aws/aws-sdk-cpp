/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/CapabilityDeletePropagationPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace CapabilityDeletePropagationPolicyMapper {

static const int RETAIN_HASH = HashingUtils::HashString("RETAIN");

CapabilityDeletePropagationPolicy GetCapabilityDeletePropagationPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RETAIN_HASH) {
    return CapabilityDeletePropagationPolicy::RETAIN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapabilityDeletePropagationPolicy>(hashCode);
  }

  return CapabilityDeletePropagationPolicy::NOT_SET;
}

Aws::String GetNameForCapabilityDeletePropagationPolicy(CapabilityDeletePropagationPolicy enumValue) {
  switch (enumValue) {
    case CapabilityDeletePropagationPolicy::NOT_SET:
      return {};
    case CapabilityDeletePropagationPolicy::RETAIN:
      return "RETAIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapabilityDeletePropagationPolicyMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
