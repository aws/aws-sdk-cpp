/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationTranscriptType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationTranscriptTypeMapper {

static const int RAW_HASH = HashingUtils::HashString("RAW");
static const int REDACTED_HASH = HashingUtils::HashString("REDACTED");

EvaluationTranscriptType GetEvaluationTranscriptTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RAW_HASH) {
    return EvaluationTranscriptType::RAW;
  } else if (hashCode == REDACTED_HASH) {
    return EvaluationTranscriptType::REDACTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationTranscriptType>(hashCode);
  }

  return EvaluationTranscriptType::NOT_SET;
}

Aws::String GetNameForEvaluationTranscriptType(EvaluationTranscriptType enumValue) {
  switch (enumValue) {
    case EvaluationTranscriptType::NOT_SET:
      return {};
    case EvaluationTranscriptType::RAW:
      return "RAW";
    case EvaluationTranscriptType::REDACTED:
      return "REDACTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationTranscriptTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
