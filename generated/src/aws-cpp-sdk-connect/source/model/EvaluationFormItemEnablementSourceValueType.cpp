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

EvaluationFormItemEnablementSourceValueType GetEvaluationFormItemEnablementSourceValueTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPTION_REF_ID_HASH) {
    return EvaluationFormItemEnablementSourceValueType::OPTION_REF_ID;
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
