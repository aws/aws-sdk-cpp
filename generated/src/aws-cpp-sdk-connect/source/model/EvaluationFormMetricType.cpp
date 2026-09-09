/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormMetricType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormMetricTypeMapper {

static const int BUSINESS_OUTCOME_HASH = HashingUtils::HashString("BUSINESS_OUTCOME");

EvaluationFormMetricType GetEvaluationFormMetricTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BUSINESS_OUTCOME_HASH) {
    return EvaluationFormMetricType::BUSINESS_OUTCOME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormMetricType>(hashCode);
  }

  return EvaluationFormMetricType::NOT_SET;
}

Aws::String GetNameForEvaluationFormMetricType(EvaluationFormMetricType enumValue) {
  switch (enumValue) {
    case EvaluationFormMetricType::NOT_SET:
      return {};
    case EvaluationFormMetricType::BUSINESS_OUTCOME:
      return "BUSINESS_OUTCOME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormMetricTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
