/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationProjectType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace DataAutomationProjectTypeMapper {

static const int ASYNC_HASH = HashingUtils::HashString("ASYNC");
static const int SYNC_HASH = HashingUtils::HashString("SYNC");

DataAutomationProjectType GetDataAutomationProjectTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASYNC_HASH) {
    return DataAutomationProjectType::ASYNC;
  } else if (hashCode == SYNC_HASH) {
    return DataAutomationProjectType::SYNC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataAutomationProjectType>(hashCode);
  }

  return DataAutomationProjectType::NOT_SET;
}

Aws::String GetNameForDataAutomationProjectType(DataAutomationProjectType enumValue) {
  switch (enumValue) {
    case DataAutomationProjectType::NOT_SET:
      return {};
    case DataAutomationProjectType::ASYNC:
      return "ASYNC";
    case DataAutomationProjectType::SYNC:
      return "SYNC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataAutomationProjectTypeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
