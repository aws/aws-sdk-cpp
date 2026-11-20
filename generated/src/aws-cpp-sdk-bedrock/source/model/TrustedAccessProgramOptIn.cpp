/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TrustedAccessProgramOptIn.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace TrustedAccessProgramOptInMapper {

static const int inherit_HASH = HashingUtils::HashString("inherit");
static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

TrustedAccessProgramOptIn GetTrustedAccessProgramOptInForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == inherit_HASH) {
    return TrustedAccessProgramOptIn::inherit;
  } else if (hashCode == enabled_HASH) {
    return TrustedAccessProgramOptIn::enabled;
  } else if (hashCode == disabled_HASH) {
    return TrustedAccessProgramOptIn::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrustedAccessProgramOptIn>(hashCode);
  }

  return TrustedAccessProgramOptIn::NOT_SET;
}

Aws::String GetNameForTrustedAccessProgramOptIn(TrustedAccessProgramOptIn enumValue) {
  switch (enumValue) {
    case TrustedAccessProgramOptIn::NOT_SET:
      return {};
    case TrustedAccessProgramOptIn::inherit:
      return "inherit";
    case TrustedAccessProgramOptIn::enabled:
      return "enabled";
    case TrustedAccessProgramOptIn::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrustedAccessProgramOptInMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
