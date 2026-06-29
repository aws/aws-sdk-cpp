/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ExperimentDefinitionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {
namespace ExperimentDefinitionStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int IDLE_HASH = HashingUtils::HashString("IDLE");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");

ExperimentDefinitionStatus GetExperimentDefinitionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ExperimentDefinitionStatus::ACTIVE;
  } else if (hashCode == IDLE_HASH) {
    return ExperimentDefinitionStatus::IDLE;
  } else if (hashCode == ARCHIVED_HASH) {
    return ExperimentDefinitionStatus::ARCHIVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExperimentDefinitionStatus>(hashCode);
  }

  return ExperimentDefinitionStatus::NOT_SET;
}

Aws::String GetNameForExperimentDefinitionStatus(ExperimentDefinitionStatus enumValue) {
  switch (enumValue) {
    case ExperimentDefinitionStatus::NOT_SET:
      return {};
    case ExperimentDefinitionStatus::ACTIVE:
      return "ACTIVE";
    case ExperimentDefinitionStatus::IDLE:
      return "IDLE";
    case ExperimentDefinitionStatus::ARCHIVED:
      return "ARCHIVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExperimentDefinitionStatusMapper
}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
