/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementSourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormItemEnablementSourceTypeMapper {

static const int QUESTION_REF_ID_HASH = HashingUtils::HashString("QUESTION_REF_ID");
static const int CONTACT_HASH = HashingUtils::HashString("CONTACT");
static const int EVALUATION_METADATA_HASH = HashingUtils::HashString("EVALUATION_METADATA");
static const int FORM_METADATA_HASH = HashingUtils::HashString("FORM_METADATA");
static const int AI_METRICS_HASH = HashingUtils::HashString("AI_METRICS");

EvaluationFormItemEnablementSourceType GetEvaluationFormItemEnablementSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUESTION_REF_ID_HASH) {
    return EvaluationFormItemEnablementSourceType::QUESTION_REF_ID;
  } else if (hashCode == CONTACT_HASH) {
    return EvaluationFormItemEnablementSourceType::CONTACT;
  } else if (hashCode == EVALUATION_METADATA_HASH) {
    return EvaluationFormItemEnablementSourceType::EVALUATION_METADATA;
  } else if (hashCode == FORM_METADATA_HASH) {
    return EvaluationFormItemEnablementSourceType::FORM_METADATA;
  } else if (hashCode == AI_METRICS_HASH) {
    return EvaluationFormItemEnablementSourceType::AI_METRICS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormItemEnablementSourceType>(hashCode);
  }

  return EvaluationFormItemEnablementSourceType::NOT_SET;
}

Aws::String GetNameForEvaluationFormItemEnablementSourceType(EvaluationFormItemEnablementSourceType enumValue) {
  switch (enumValue) {
    case EvaluationFormItemEnablementSourceType::NOT_SET:
      return {};
    case EvaluationFormItemEnablementSourceType::QUESTION_REF_ID:
      return "QUESTION_REF_ID";
    case EvaluationFormItemEnablementSourceType::CONTACT:
      return "CONTACT";
    case EvaluationFormItemEnablementSourceType::EVALUATION_METADATA:
      return "EVALUATION_METADATA";
    case EvaluationFormItemEnablementSourceType::FORM_METADATA:
      return "FORM_METADATA";
    case EvaluationFormItemEnablementSourceType::AI_METRICS:
      return "AI_METRICS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormItemEnablementSourceTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
