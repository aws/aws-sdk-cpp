/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/ProfanityFilterMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace ProfanityFilterModeMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int CENSOR_HASH = HashingUtils::HashString("CENSOR");
static const int DROP_HASH = HashingUtils::HashString("DROP");

ProfanityFilterMode GetProfanityFilterModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return ProfanityFilterMode::DISABLED;
  } else if (hashCode == CENSOR_HASH) {
    return ProfanityFilterMode::CENSOR;
  } else if (hashCode == DROP_HASH) {
    return ProfanityFilterMode::DROP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProfanityFilterMode>(hashCode);
  }

  return ProfanityFilterMode::NOT_SET;
}

Aws::String GetNameForProfanityFilterMode(ProfanityFilterMode enumValue) {
  switch (enumValue) {
    case ProfanityFilterMode::NOT_SET:
      return {};
    case ProfanityFilterMode::DISABLED:
      return "DISABLED";
    case ProfanityFilterMode::CENSOR:
      return "CENSOR";
    case ProfanityFilterMode::DROP:
      return "DROP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProfanityFilterModeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
