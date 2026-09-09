/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormAIVersionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormAIVersionStatusMapper {

static const int LATEST_HASH = HashingUtils::HashString("LATEST");
static const int PREVIEW_HASH = HashingUtils::HashString("PREVIEW");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");

EvaluationFormAIVersionStatus GetEvaluationFormAIVersionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LATEST_HASH) {
    return EvaluationFormAIVersionStatus::LATEST;
  } else if (hashCode == PREVIEW_HASH) {
    return EvaluationFormAIVersionStatus::PREVIEW;
  } else if (hashCode == ACTIVE_HASH) {
    return EvaluationFormAIVersionStatus::ACTIVE;
  } else if (hashCode == DEPRECATED_HASH) {
    return EvaluationFormAIVersionStatus::DEPRECATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormAIVersionStatus>(hashCode);
  }

  return EvaluationFormAIVersionStatus::NOT_SET;
}

Aws::String GetNameForEvaluationFormAIVersionStatus(EvaluationFormAIVersionStatus enumValue) {
  switch (enumValue) {
    case EvaluationFormAIVersionStatus::NOT_SET:
      return {};
    case EvaluationFormAIVersionStatus::LATEST:
      return "LATEST";
    case EvaluationFormAIVersionStatus::PREVIEW:
      return "PREVIEW";
    case EvaluationFormAIVersionStatus::ACTIVE:
      return "ACTIVE";
    case EvaluationFormAIVersionStatus::DEPRECATED:
      return "DEPRECATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormAIVersionStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
