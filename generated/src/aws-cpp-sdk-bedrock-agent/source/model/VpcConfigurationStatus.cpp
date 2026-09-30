/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/VpcConfigurationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace VpcConfigurationStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

VpcConfigurationStatus GetVpcConfigurationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return VpcConfigurationStatus::CREATING;
  } else if (hashCode == CREATED_HASH) {
    return VpcConfigurationStatus::CREATED;
  } else if (hashCode == DELETING_HASH) {
    return VpcConfigurationStatus::DELETING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return VpcConfigurationStatus::CREATE_FAILED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return VpcConfigurationStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VpcConfigurationStatus>(hashCode);
  }

  return VpcConfigurationStatus::NOT_SET;
}

Aws::String GetNameForVpcConfigurationStatus(VpcConfigurationStatus enumValue) {
  switch (enumValue) {
    case VpcConfigurationStatus::NOT_SET:
      return {};
    case VpcConfigurationStatus::CREATING:
      return "CREATING";
    case VpcConfigurationStatus::CREATED:
      return "CREATED";
    case VpcConfigurationStatus::DELETING:
      return "DELETING";
    case VpcConfigurationStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case VpcConfigurationStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VpcConfigurationStatusMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
