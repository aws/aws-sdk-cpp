/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/OperatorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace OperatorTypeMapper {

static const int EQUALS_TO_HASH = HashingUtils::HashString("EQUALS_TO");
static const int EXISTS_HASH = HashingUtils::HashString("EXISTS");
static const int NOT_EXISTS_HASH = HashingUtils::HashString("NOT_EXISTS");

OperatorType GetOperatorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_TO_HASH) {
    return OperatorType::EQUALS_TO;
  } else if (hashCode == EXISTS_HASH) {
    return OperatorType::EXISTS;
  } else if (hashCode == NOT_EXISTS_HASH) {
    return OperatorType::NOT_EXISTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OperatorType>(hashCode);
  }

  return OperatorType::NOT_SET;
}

Aws::String GetNameForOperatorType(OperatorType enumValue) {
  switch (enumValue) {
    case OperatorType::NOT_SET:
      return {};
    case OperatorType::EQUALS_TO:
      return "EQUALS_TO";
    case OperatorType::EXISTS:
      return "EXISTS";
    case OperatorType::NOT_EXISTS:
      return "NOT_EXISTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OperatorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
