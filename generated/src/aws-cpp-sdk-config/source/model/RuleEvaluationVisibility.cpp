/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RuleEvaluationVisibility.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {
namespace RuleEvaluationVisibilityMapper {

static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");
static const int INTERNAL_HASH = HashingUtils::HashString("INTERNAL");

RuleEvaluationVisibility GetRuleEvaluationVisibilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXTERNAL_HASH) {
    return RuleEvaluationVisibility::EXTERNAL;
  } else if (hashCode == INTERNAL_HASH) {
    return RuleEvaluationVisibility::INTERNAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleEvaluationVisibility>(hashCode);
  }

  return RuleEvaluationVisibility::NOT_SET;
}

Aws::String GetNameForRuleEvaluationVisibility(RuleEvaluationVisibility enumValue) {
  switch (enumValue) {
    case RuleEvaluationVisibility::NOT_SET:
      return {};
    case RuleEvaluationVisibility::EXTERNAL:
      return "EXTERNAL";
    case RuleEvaluationVisibility::INTERNAL:
      return "INTERNAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleEvaluationVisibilityMapper
}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
