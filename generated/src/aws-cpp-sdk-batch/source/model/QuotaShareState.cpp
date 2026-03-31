/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaShareState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace QuotaShareStateMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

QuotaShareState GetQuotaShareStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return QuotaShareState::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return QuotaShareState::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuotaShareState>(hashCode);
  }

  return QuotaShareState::NOT_SET;
}

Aws::String GetNameForQuotaShareState(QuotaShareState enumValue) {
  switch (enumValue) {
    case QuotaShareState::NOT_SET:
      return {};
    case QuotaShareState::ENABLED:
      return "ENABLED";
    case QuotaShareState::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuotaShareStateMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
