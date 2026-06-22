/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/RiskLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace RiskLevelMapper {

static const int Info_HASH = HashingUtils::HashString("Info");
static const int Low_HASH = HashingUtils::HashString("Low");
static const int Medium_HASH = HashingUtils::HashString("Medium");
static const int High_HASH = HashingUtils::HashString("High");
static const int Critical_HASH = HashingUtils::HashString("Critical");

RiskLevel GetRiskLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Info_HASH) {
    return RiskLevel::Info;
  } else if (hashCode == Low_HASH) {
    return RiskLevel::Low;
  } else if (hashCode == Medium_HASH) {
    return RiskLevel::Medium;
  } else if (hashCode == High_HASH) {
    return RiskLevel::High;
  } else if (hashCode == Critical_HASH) {
    return RiskLevel::Critical;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RiskLevel>(hashCode);
  }

  return RiskLevel::NOT_SET;
}

Aws::String GetNameForRiskLevel(RiskLevel enumValue) {
  switch (enumValue) {
    case RiskLevel::NOT_SET:
      return {};
    case RiskLevel::Info:
      return "Info";
    case RiskLevel::Low:
      return "Low";
    case RiskLevel::Medium:
      return "Medium";
    case RiskLevel::High:
      return "High";
    case RiskLevel::Critical:
      return "Critical";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RiskLevelMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
