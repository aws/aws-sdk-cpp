/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/DataQualityEvaluationConfigTrigger.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace DataQualityEvaluationConfigTriggerMapper {

static const int ONCE_HASH = HashingUtils::HashString("ONCE");
static const int SCHEDULE_HASH = HashingUtils::HashString("SCHEDULE");
static const int METADATA_CHANGE_HASH = HashingUtils::HashString("METADATA_CHANGE");

DataQualityEvaluationConfigTrigger GetDataQualityEvaluationConfigTriggerForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ONCE_HASH) {
    return DataQualityEvaluationConfigTrigger::ONCE;
  } else if (hashCode == SCHEDULE_HASH) {
    return DataQualityEvaluationConfigTrigger::SCHEDULE;
  } else if (hashCode == METADATA_CHANGE_HASH) {
    return DataQualityEvaluationConfigTrigger::METADATA_CHANGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataQualityEvaluationConfigTrigger>(hashCode);
  }

  return DataQualityEvaluationConfigTrigger::NOT_SET;
}

Aws::String GetNameForDataQualityEvaluationConfigTrigger(DataQualityEvaluationConfigTrigger enumValue) {
  switch (enumValue) {
    case DataQualityEvaluationConfigTrigger::NOT_SET:
      return {};
    case DataQualityEvaluationConfigTrigger::ONCE:
      return "ONCE";
    case DataQualityEvaluationConfigTrigger::SCHEDULE:
      return "SCHEDULE";
    case DataQualityEvaluationConfigTrigger::METADATA_CHANGE:
      return "METADATA_CHANGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataQualityEvaluationConfigTriggerMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
