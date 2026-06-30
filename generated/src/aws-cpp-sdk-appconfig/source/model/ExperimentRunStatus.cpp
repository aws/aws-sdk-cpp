/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ExperimentRunStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {
namespace ExperimentRunStatusMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int DONE_HASH = HashingUtils::HashString("DONE");

ExperimentRunStatus GetExperimentRunStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return ExperimentRunStatus::RUNNING;
  } else if (hashCode == DONE_HASH) {
    return ExperimentRunStatus::DONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExperimentRunStatus>(hashCode);
  }

  return ExperimentRunStatus::NOT_SET;
}

Aws::String GetNameForExperimentRunStatus(ExperimentRunStatus enumValue) {
  switch (enumValue) {
    case ExperimentRunStatus::NOT_SET:
      return {};
    case ExperimentRunStatus::RUNNING:
      return "RUNNING";
    case ExperimentRunStatus::DONE:
      return "DONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExperimentRunStatusMapper
}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
