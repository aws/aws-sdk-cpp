/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DataRetentionMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace DataRetentionModeMapper {

static const int default__HASH = HashingUtils::HashString("default");
static const int none_HASH = HashingUtils::HashString("none");
static const int provider_data_share_HASH = HashingUtils::HashString("provider_data_share");
static const int inherit_HASH = HashingUtils::HashString("inherit");

DataRetentionMode GetDataRetentionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == default__HASH) {
    return DataRetentionMode::default_;
  } else if (hashCode == none_HASH) {
    return DataRetentionMode::none;
  } else if (hashCode == provider_data_share_HASH) {
    return DataRetentionMode::provider_data_share;
  } else if (hashCode == inherit_HASH) {
    return DataRetentionMode::inherit;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataRetentionMode>(hashCode);
  }

  return DataRetentionMode::NOT_SET;
}

Aws::String GetNameForDataRetentionMode(DataRetentionMode enumValue) {
  switch (enumValue) {
    case DataRetentionMode::NOT_SET:
      return {};
    case DataRetentionMode::default_:
      return "default";
    case DataRetentionMode::none:
      return "none";
    case DataRetentionMode::provider_data_share:
      return "provider_data_share";
    case DataRetentionMode::inherit:
      return "inherit";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataRetentionModeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
