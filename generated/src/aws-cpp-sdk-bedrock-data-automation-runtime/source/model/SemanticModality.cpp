/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/SemanticModality.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomationRuntime {
namespace Model {
namespace SemanticModalityMapper {

static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");
static const int AUDIO_HASH = HashingUtils::HashString("AUDIO");
static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");

SemanticModality GetSemanticModalityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DOCUMENT_HASH) {
    return SemanticModality::DOCUMENT;
  } else if (hashCode == IMAGE_HASH) {
    return SemanticModality::IMAGE;
  } else if (hashCode == AUDIO_HASH) {
    return SemanticModality::AUDIO;
  } else if (hashCode == VIDEO_HASH) {
    return SemanticModality::VIDEO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SemanticModality>(hashCode);
  }

  return SemanticModality::NOT_SET;
}

Aws::String GetNameForSemanticModality(SemanticModality enumValue) {
  switch (enumValue) {
    case SemanticModality::NOT_SET:
      return {};
    case SemanticModality::DOCUMENT:
      return "DOCUMENT";
    case SemanticModality::IMAGE:
      return "IMAGE";
    case SemanticModality::AUDIO:
      return "AUDIO";
    case SemanticModality::VIDEO:
      return "VIDEO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SemanticModalityMapper
}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
