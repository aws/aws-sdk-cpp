/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DatasetSchemaType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace DatasetSchemaTypeMapper {

static const int AGENTCORE_EVALUATION_PREDEFINED_V1_HASH = HashingUtils::HashString("AGENTCORE_EVALUATION_PREDEFINED_V1");
static const int AGENTCORE_EVALUATION_SIMULATED_V1_HASH = HashingUtils::HashString("AGENTCORE_EVALUATION_SIMULATED_V1");

DatasetSchemaType GetDatasetSchemaTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AGENTCORE_EVALUATION_PREDEFINED_V1_HASH) {
    return DatasetSchemaType::AGENTCORE_EVALUATION_PREDEFINED_V1;
  } else if (hashCode == AGENTCORE_EVALUATION_SIMULATED_V1_HASH) {
    return DatasetSchemaType::AGENTCORE_EVALUATION_SIMULATED_V1;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatasetSchemaType>(hashCode);
  }

  return DatasetSchemaType::NOT_SET;
}

Aws::String GetNameForDatasetSchemaType(DatasetSchemaType enumValue) {
  switch (enumValue) {
    case DatasetSchemaType::NOT_SET:
      return {};
    case DatasetSchemaType::AGENTCORE_EVALUATION_PREDEFINED_V1:
      return "AGENTCORE_EVALUATION_PREDEFINED_V1";
    case DatasetSchemaType::AGENTCORE_EVALUATION_SIMULATED_V1:
      return "AGENTCORE_EVALUATION_SIMULATED_V1";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatasetSchemaTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
