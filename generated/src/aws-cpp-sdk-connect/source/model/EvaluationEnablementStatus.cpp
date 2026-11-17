/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationEnablementStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationEnablementStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

EvaluationEnablementStatus GetEvaluationEnablementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return EvaluationEnablementStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return EvaluationEnablementStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationEnablementStatus>(hashCode);
  }

  return EvaluationEnablementStatus::NOT_SET;
}

Aws::String GetNameForEvaluationEnablementStatus(EvaluationEnablementStatus enumValue) {
  switch (enumValue) {
    case EvaluationEnablementStatus::NOT_SET:
      return {};
    case EvaluationEnablementStatus::ENABLED:
      return "ENABLED";
    case EvaluationEnablementStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationEnablementStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
