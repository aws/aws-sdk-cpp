/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/DataQualityEvaluationRunMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace DataQualityEvaluationRunModeMapper {

static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
static const int EVALUATION_CONFIG_HASH = HashingUtils::HashString("EVALUATION_CONFIG");

DataQualityEvaluationRunMode GetDataQualityEvaluationRunModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_DEMAND_HASH) {
    return DataQualityEvaluationRunMode::ON_DEMAND;
  } else if (hashCode == EVALUATION_CONFIG_HASH) {
    return DataQualityEvaluationRunMode::EVALUATION_CONFIG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataQualityEvaluationRunMode>(hashCode);
  }

  return DataQualityEvaluationRunMode::NOT_SET;
}

Aws::String GetNameForDataQualityEvaluationRunMode(DataQualityEvaluationRunMode enumValue) {
  switch (enumValue) {
    case DataQualityEvaluationRunMode::NOT_SET:
      return {};
    case DataQualityEvaluationRunMode::ON_DEMAND:
      return "ON_DEMAND";
    case DataQualityEvaluationRunMode::EVALUATION_CONFIG:
      return "EVALUATION_CONFIG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataQualityEvaluationRunModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
