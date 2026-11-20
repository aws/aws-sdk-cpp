/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TrustedAccessProgramStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace TrustedAccessProgramStatusMapper {

static const int requestable_HASH = HashingUtils::HashString("requestable");
static const int eligible_HASH = HashingUtils::HashString("eligible");
static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");
static const int revoked_HASH = HashingUtils::HashString("revoked");

TrustedAccessProgramStatus GetTrustedAccessProgramStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == requestable_HASH) {
    return TrustedAccessProgramStatus::requestable;
  } else if (hashCode == eligible_HASH) {
    return TrustedAccessProgramStatus::eligible;
  } else if (hashCode == enabled_HASH) {
    return TrustedAccessProgramStatus::enabled;
  } else if (hashCode == disabled_HASH) {
    return TrustedAccessProgramStatus::disabled;
  } else if (hashCode == revoked_HASH) {
    return TrustedAccessProgramStatus::revoked;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrustedAccessProgramStatus>(hashCode);
  }

  return TrustedAccessProgramStatus::NOT_SET;
}

Aws::String GetNameForTrustedAccessProgramStatus(TrustedAccessProgramStatus enumValue) {
  switch (enumValue) {
    case TrustedAccessProgramStatus::NOT_SET:
      return {};
    case TrustedAccessProgramStatus::requestable:
      return "requestable";
    case TrustedAccessProgramStatus::eligible:
      return "eligible";
    case TrustedAccessProgramStatus::enabled:
      return "enabled";
    case TrustedAccessProgramStatus::disabled:
      return "disabled";
    case TrustedAccessProgramStatus::revoked:
      return "revoked";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrustedAccessProgramStatusMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
