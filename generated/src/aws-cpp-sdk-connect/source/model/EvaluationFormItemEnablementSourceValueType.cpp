/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementSourceValueType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormItemEnablementSourceValueTypeMapper {

static const int OPTION_REF_ID_HASH = HashingUtils::HashString("OPTION_REF_ID");
static const int STRING_VALUE_HASH = HashingUtils::HashString("STRING_VALUE");
static const int NUMERIC_VALUE_HASH = HashingUtils::HashString("NUMERIC_VALUE");
static const int BOOLEAN_VALUE_HASH = HashingUtils::HashString("BOOLEAN_VALUE");
static const int DATETIME_VALUE_HASH = HashingUtils::HashString("DATETIME_VALUE");

EvaluationFormItemEnablementSourceValueType GetEvaluationFormItemEnablementSourceValueTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPTION_REF_ID_HASH) {
    return EvaluationFormItemEnablementSourceValueType::OPTION_REF_ID;
  } else if (hashCode == STRING_VALUE_HASH) {
    return EvaluationFormItemEnablementSourceValueType::STRING_VALUE;
  } else if (hashCode == NUMERIC_VALUE_HASH) {
    return EvaluationFormItemEnablementSourceValueType::NUMERIC_VALUE;
  } else if (hashCode == BOOLEAN_VALUE_HASH) {
    return EvaluationFormItemEnablementSourceValueType::BOOLEAN_VALUE;
  } else if (hashCode == DATETIME_VALUE_HASH) {
    return EvaluationFormItemEnablementSourceValueType::DATETIME_VALUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormItemEnablementSourceValueType>(hashCode);
  }

  return EvaluationFormItemEnablementSourceValueType::NOT_SET;
}

Aws::String GetNameForEvaluationFormItemEnablementSourceValueType(EvaluationFormItemEnablementSourceValueType enumValue) {
  switch (enumValue) {
    case EvaluationFormItemEnablementSourceValueType::NOT_SET:
      return {};
    case EvaluationFormItemEnablementSourceValueType::OPTION_REF_ID:
      return "OPTION_REF_ID";
    case EvaluationFormItemEnablementSourceValueType::STRING_VALUE:
      return "STRING_VALUE";
    case EvaluationFormItemEnablementSourceValueType::NUMERIC_VALUE:
      return "NUMERIC_VALUE";
    case EvaluationFormItemEnablementSourceValueType::BOOLEAN_VALUE:
      return "BOOLEAN_VALUE";
    case EvaluationFormItemEnablementSourceValueType::DATETIME_VALUE:
      return "DATETIME_VALUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormItemEnablementSourceValueTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
