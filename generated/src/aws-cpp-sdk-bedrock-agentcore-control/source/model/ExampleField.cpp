/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ExampleField.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ExampleFieldMapper {

static const int TURNS_HASH = HashingUtils::HashString("TURNS");
static const int INPUT_HASH = HashingUtils::HashString("INPUT");
static const int ACTOR_PROFILE_HASH = HashingUtils::HashString("ACTOR_PROFILE");

ExampleField GetExampleFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TURNS_HASH) {
    return ExampleField::TURNS;
  } else if (hashCode == INPUT_HASH) {
    return ExampleField::INPUT;
  } else if (hashCode == ACTOR_PROFILE_HASH) {
    return ExampleField::ACTOR_PROFILE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExampleField>(hashCode);
  }

  return ExampleField::NOT_SET;
}

Aws::String GetNameForExampleField(ExampleField enumValue) {
  switch (enumValue) {
    case ExampleField::NOT_SET:
      return {};
    case ExampleField::TURNS:
      return "TURNS";
    case ExampleField::INPUT:
      return "INPUT";
    case ExampleField::ACTOR_PROFILE:
      return "ACTOR_PROFILE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExampleFieldMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
