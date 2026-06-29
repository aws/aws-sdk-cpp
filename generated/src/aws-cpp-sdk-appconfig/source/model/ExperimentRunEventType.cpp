/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ExperimentRunEventType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {
namespace ExperimentRunEventTypeMapper {

static const int RUN_STARTED_HASH = HashingUtils::HashString("RUN_STARTED");
static const int EXPOSURE_UPDATED_HASH = HashingUtils::HashString("EXPOSURE_UPDATED");
static const int OVERRIDES_UPDATED_HASH = HashingUtils::HashString("OVERRIDES_UPDATED");
static const int RUN_STOPPED_HASH = HashingUtils::HashString("RUN_STOPPED");

ExperimentRunEventType GetExperimentRunEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUN_STARTED_HASH) {
    return ExperimentRunEventType::RUN_STARTED;
  } else if (hashCode == EXPOSURE_UPDATED_HASH) {
    return ExperimentRunEventType::EXPOSURE_UPDATED;
  } else if (hashCode == OVERRIDES_UPDATED_HASH) {
    return ExperimentRunEventType::OVERRIDES_UPDATED;
  } else if (hashCode == RUN_STOPPED_HASH) {
    return ExperimentRunEventType::RUN_STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExperimentRunEventType>(hashCode);
  }

  return ExperimentRunEventType::NOT_SET;
}

Aws::String GetNameForExperimentRunEventType(ExperimentRunEventType enumValue) {
  switch (enumValue) {
    case ExperimentRunEventType::NOT_SET:
      return {};
    case ExperimentRunEventType::RUN_STARTED:
      return "RUN_STARTED";
    case ExperimentRunEventType::EXPOSURE_UPDATED:
      return "EXPOSURE_UPDATED";
    case ExperimentRunEventType::OVERRIDES_UPDATED:
      return "OVERRIDES_UPDATED";
    case ExperimentRunEventType::RUN_STOPPED:
      return "RUN_STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExperimentRunEventTypeMapper
}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
