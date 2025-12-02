/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/ConfigurationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace ConfigurationStatusMapper {

static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ConfigurationStatus GetConfigurationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETED_HASH) {
    return ConfigurationStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return ConfigurationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfigurationStatus>(hashCode);
  }

  return ConfigurationStatus::NOT_SET;
}

Aws::String GetNameForConfigurationStatus(ConfigurationStatus enumValue) {
  switch (enumValue) {
    case ConfigurationStatus::NOT_SET:
      return {};
    case ConfigurationStatus::COMPLETED:
      return "COMPLETED";
    case ConfigurationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfigurationStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
