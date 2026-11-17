/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormEvaluationMetadataField.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormEvaluationMetadataFieldMapper {

static const int EVALUATION_TYPE_HASH = HashingUtils::HashString("EVALUATION_TYPE");

EvaluationFormEvaluationMetadataField GetEvaluationFormEvaluationMetadataFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVALUATION_TYPE_HASH) {
    return EvaluationFormEvaluationMetadataField::EVALUATION_TYPE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormEvaluationMetadataField>(hashCode);
  }

  return EvaluationFormEvaluationMetadataField::NOT_SET;
}

Aws::String GetNameForEvaluationFormEvaluationMetadataField(EvaluationFormEvaluationMetadataField enumValue) {
  switch (enumValue) {
    case EvaluationFormEvaluationMetadataField::NOT_SET:
      return {};
    case EvaluationFormEvaluationMetadataField::EVALUATION_TYPE:
      return "EVALUATION_TYPE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormEvaluationMetadataFieldMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
