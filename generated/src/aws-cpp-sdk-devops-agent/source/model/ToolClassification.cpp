/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/ToolClassification.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace ToolClassificationMapper {

static const int READ_ONLY_HASH = HashingUtils::HashString("READ_ONLY");
static const int MUTATIVE_HASH = HashingUtils::HashString("MUTATIVE");
static const int DESTRUCTIVE_HASH = HashingUtils::HashString("DESTRUCTIVE");

ToolClassification GetToolClassificationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == READ_ONLY_HASH) {
    return ToolClassification::READ_ONLY;
  } else if (hashCode == MUTATIVE_HASH) {
    return ToolClassification::MUTATIVE;
  } else if (hashCode == DESTRUCTIVE_HASH) {
    return ToolClassification::DESTRUCTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ToolClassification>(hashCode);
  }

  return ToolClassification::NOT_SET;
}

Aws::String GetNameForToolClassification(ToolClassification enumValue) {
  switch (enumValue) {
    case ToolClassification::NOT_SET:
      return {};
    case ToolClassification::READ_ONLY:
      return "READ_ONLY";
    case ToolClassification::MUTATIVE:
      return "MUTATIVE";
    case ToolClassification::DESTRUCTIVE:
      return "DESTRUCTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ToolClassificationMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
