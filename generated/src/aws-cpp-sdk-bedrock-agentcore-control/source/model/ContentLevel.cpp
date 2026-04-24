/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ContentLevel.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ContentLevelMapper {

static const int METADATA_ONLY_HASH = HashingUtils::HashString("METADATA_ONLY");
static const int FULL_CONTENT_HASH = HashingUtils::HashString("FULL_CONTENT");

ContentLevel GetContentLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == METADATA_ONLY_HASH) {
    return ContentLevel::METADATA_ONLY;
  } else if (hashCode == FULL_CONTENT_HASH) {
    return ContentLevel::FULL_CONTENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContentLevel>(hashCode);
  }

  return ContentLevel::NOT_SET;
}

Aws::String GetNameForContentLevel(ContentLevel enumValue) {
  switch (enumValue) {
    case ContentLevel::NOT_SET:
      return {};
    case ContentLevel::METADATA_ONLY:
      return "METADATA_ONLY";
    case ContentLevel::FULL_CONTENT:
      return "FULL_CONTENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContentLevelMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
