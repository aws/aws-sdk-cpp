/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/ContextType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace ContextTypeMapper {

static const int FRAMES_HASH = HashingUtils::HashString("FRAMES");
static const int SUBTITLES_HASH = HashingUtils::HashString("SUBTITLES");
static const int CONTEXTUAL_METADATA_HASH = HashingUtils::HashString("CONTEXTUAL_METADATA");
static const int CLIP_METADATA_HASH = HashingUtils::HashString("CLIP_METADATA");

ContextType GetContextTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FRAMES_HASH) {
    return ContextType::FRAMES;
  } else if (hashCode == SUBTITLES_HASH) {
    return ContextType::SUBTITLES;
  } else if (hashCode == CONTEXTUAL_METADATA_HASH) {
    return ContextType::CONTEXTUAL_METADATA;
  } else if (hashCode == CLIP_METADATA_HASH) {
    return ContextType::CLIP_METADATA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContextType>(hashCode);
  }

  return ContextType::NOT_SET;
}

Aws::String GetNameForContextType(ContextType enumValue) {
  switch (enumValue) {
    case ContextType::NOT_SET:
      return {};
    case ContextType::FRAMES:
      return "FRAMES";
    case ContextType::SUBTITLES:
      return "SUBTITLES";
    case ContextType::CONTEXTUAL_METADATA:
      return "CONTEXTUAL_METADATA";
    case ContextType::CLIP_METADATA:
      return "CLIP_METADATA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContextTypeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
