/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/InvestigationIndicatorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace InvestigationIndicatorTypeMapper {

static const int IP_HASH = HashingUtils::HashString("IP");
static const int DOMAIN__HASH = HashingUtils::HashString("DOMAIN");
static const int FILE_HASH = HashingUtils::HashString("FILE");

InvestigationIndicatorType GetInvestigationIndicatorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IP_HASH) {
    return InvestigationIndicatorType::IP;
  } else if (hashCode == DOMAIN__HASH) {
    return InvestigationIndicatorType::DOMAIN_;
  } else if (hashCode == FILE_HASH) {
    return InvestigationIndicatorType::FILE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvestigationIndicatorType>(hashCode);
  }

  return InvestigationIndicatorType::NOT_SET;
}

Aws::String GetNameForInvestigationIndicatorType(InvestigationIndicatorType enumValue) {
  switch (enumValue) {
    case InvestigationIndicatorType::NOT_SET:
      return {};
    case InvestigationIndicatorType::IP:
      return "IP";
    case InvestigationIndicatorType::DOMAIN_:
      return "DOMAIN";
    case InvestigationIndicatorType::FILE:
      return "FILE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvestigationIndicatorTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
