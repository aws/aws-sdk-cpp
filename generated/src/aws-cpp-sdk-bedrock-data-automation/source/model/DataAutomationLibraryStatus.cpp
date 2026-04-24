/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationLibraryStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace DataAutomationLibraryStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

DataAutomationLibraryStatus GetDataAutomationLibraryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return DataAutomationLibraryStatus::ACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return DataAutomationLibraryStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataAutomationLibraryStatus>(hashCode);
  }

  return DataAutomationLibraryStatus::NOT_SET;
}

Aws::String GetNameForDataAutomationLibraryStatus(DataAutomationLibraryStatus enumValue) {
  switch (enumValue) {
    case DataAutomationLibraryStatus::NOT_SET:
      return {};
    case DataAutomationLibraryStatus::ACTIVE:
      return "ACTIVE";
    case DataAutomationLibraryStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataAutomationLibraryStatusMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
