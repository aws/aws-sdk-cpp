/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EvaluatorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace EvaluatorTypeMapper {

static const int Builtin_HASH = HashingUtils::HashString("Builtin");
static const int Custom_HASH = HashingUtils::HashString("Custom");

EvaluatorType GetEvaluatorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Builtin_HASH) {
    return EvaluatorType::Builtin;
  } else if (hashCode == Custom_HASH) {
    return EvaluatorType::Custom;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluatorType>(hashCode);
  }

  return EvaluatorType::NOT_SET;
}

Aws::String GetNameForEvaluatorType(EvaluatorType enumValue) {
  switch (enumValue) {
    case EvaluatorType::NOT_SET:
      return {};
    case EvaluatorType::Builtin:
      return "Builtin";
    case EvaluatorType::Custom:
      return "Custom";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluatorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
