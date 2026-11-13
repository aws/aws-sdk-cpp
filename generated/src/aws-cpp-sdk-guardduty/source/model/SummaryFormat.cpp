/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/SummaryFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace SummaryFormatMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int STRUCTURED_HASH = HashingUtils::HashString("STRUCTURED");

SummaryFormat GetSummaryFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return SummaryFormat::STRING;
  } else if (hashCode == STRUCTURED_HASH) {
    return SummaryFormat::STRUCTURED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SummaryFormat>(hashCode);
  }

  return SummaryFormat::NOT_SET;
}

Aws::String GetNameForSummaryFormat(SummaryFormat enumValue) {
  switch (enumValue) {
    case SummaryFormat::NOT_SET:
      return {};
    case SummaryFormat::STRING:
      return "STRING";
    case SummaryFormat::STRUCTURED:
      return "STRUCTURED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SummaryFormatMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
