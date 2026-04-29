/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ConfigurationBundleStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ConfigurationBundleStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

ConfigurationBundleStatus GetConfigurationBundleStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ConfigurationBundleStatus::ACTIVE;
  } else if (hashCode == CREATING_HASH) {
    return ConfigurationBundleStatus::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return ConfigurationBundleStatus::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return ConfigurationBundleStatus::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return ConfigurationBundleStatus::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return ConfigurationBundleStatus::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return ConfigurationBundleStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfigurationBundleStatus>(hashCode);
  }

  return ConfigurationBundleStatus::NOT_SET;
}

Aws::String GetNameForConfigurationBundleStatus(ConfigurationBundleStatus enumValue) {
  switch (enumValue) {
    case ConfigurationBundleStatus::NOT_SET:
      return {};
    case ConfigurationBundleStatus::ACTIVE:
      return "ACTIVE";
    case ConfigurationBundleStatus::CREATING:
      return "CREATING";
    case ConfigurationBundleStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case ConfigurationBundleStatus::UPDATING:
      return "UPDATING";
    case ConfigurationBundleStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case ConfigurationBundleStatus::DELETING:
      return "DELETING";
    case ConfigurationBundleStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfigurationBundleStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
