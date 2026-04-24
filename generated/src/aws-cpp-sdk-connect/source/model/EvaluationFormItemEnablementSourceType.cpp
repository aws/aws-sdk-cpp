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

EvaluationFormItemEnablementSourceType GetEvaluationFormItemEnablementSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUESTION_REF_ID_HASH) {
    return EvaluationFormItemEnablementSourceType::QUESTION_REF_ID;
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
