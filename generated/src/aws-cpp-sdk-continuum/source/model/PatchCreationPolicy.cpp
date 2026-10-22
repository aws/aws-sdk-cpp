/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/PatchCreationPolicy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace PatchCreationPolicyMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

PatchCreationPolicy GetPatchCreationPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return PatchCreationPolicy::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return PatchCreationPolicy::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PatchCreationPolicy>(hashCode);
  }

  return PatchCreationPolicy::NOT_SET;
}

Aws::String GetNameForPatchCreationPolicy(PatchCreationPolicy enumValue) {
  switch (enumValue) {
    case PatchCreationPolicy::NOT_SET:
      return {};
    case PatchCreationPolicy::ENABLED:
      return "ENABLED";
    case PatchCreationPolicy::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PatchCreationPolicyMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
