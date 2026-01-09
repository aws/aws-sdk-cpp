/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MemoryView.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace MemoryViewMapper {

static const int full_HASH = HashingUtils::HashString("full");
static const int without_decryption_HASH = HashingUtils::HashString("without_decryption");

MemoryView GetMemoryViewForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == full_HASH) {
    return MemoryView::full;
  } else if (hashCode == without_decryption_HASH) {
    return MemoryView::without_decryption;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MemoryView>(hashCode);
  }

  return MemoryView::NOT_SET;
}

Aws::String GetNameForMemoryView(MemoryView enumValue) {
  switch (enumValue) {
    case MemoryView::NOT_SET:
      return {};
    case MemoryView::full:
      return "full";
    case MemoryView::without_decryption:
      return "without_decryption";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MemoryViewMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
