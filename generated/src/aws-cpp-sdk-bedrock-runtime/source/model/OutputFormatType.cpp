/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/OutputFormatType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace OutputFormatTypeMapper {

static const int json_schema_HASH = HashingUtils::HashString("json_schema");

OutputFormatType GetOutputFormatTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == json_schema_HASH) {
    return OutputFormatType::json_schema;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutputFormatType>(hashCode);
  }

  return OutputFormatType::NOT_SET;
}

Aws::String GetNameForOutputFormatType(OutputFormatType enumValue) {
  switch (enumValue) {
    case OutputFormatType::NOT_SET:
      return {};
    case OutputFormatType::json_schema:
      return "json_schema";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutputFormatTypeMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
