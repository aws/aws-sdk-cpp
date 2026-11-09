/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ivs/model/FailoverSlateConfigurationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace IVS {
namespace Model {
namespace FailoverSlateConfigurationStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");

FailoverSlateConfigurationState GetFailoverSlateConfigurationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return FailoverSlateConfigurationState::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return FailoverSlateConfigurationState::CREATE_FAILED;
  } else if (hashCode == CREATED_HASH) {
    return FailoverSlateConfigurationState::CREATED;
  } else if (hashCode == UPDATING_HASH) {
    return FailoverSlateConfigurationState::UPDATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FailoverSlateConfigurationState>(hashCode);
  }

  return FailoverSlateConfigurationState::NOT_SET;
}

Aws::String GetNameForFailoverSlateConfigurationState(FailoverSlateConfigurationState enumValue) {
  switch (enumValue) {
    case FailoverSlateConfigurationState::NOT_SET:
      return {};
    case FailoverSlateConfigurationState::CREATING:
      return "CREATING";
    case FailoverSlateConfigurationState::CREATE_FAILED:
      return "CREATE_FAILED";
    case FailoverSlateConfigurationState::CREATED:
      return "CREATED";
    case FailoverSlateConfigurationState::UPDATING:
      return "UPDATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FailoverSlateConfigurationStateMapper
}  // namespace Model
}  // namespace IVS
}  // namespace Aws
