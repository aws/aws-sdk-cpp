/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VoiceEnhancementMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace VoiceEnhancementModeMapper {

static const int VOICE_ISOLATION_HASH = HashingUtils::HashString("VOICE_ISOLATION");
static const int NOISE_SUPPRESSION_HASH = HashingUtils::HashString("NOISE_SUPPRESSION");
static const int NONE_HASH = HashingUtils::HashString("NONE");

VoiceEnhancementMode GetVoiceEnhancementModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VOICE_ISOLATION_HASH) {
    return VoiceEnhancementMode::VOICE_ISOLATION;
  } else if (hashCode == NOISE_SUPPRESSION_HASH) {
    return VoiceEnhancementMode::NOISE_SUPPRESSION;
  } else if (hashCode == NONE_HASH) {
    return VoiceEnhancementMode::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VoiceEnhancementMode>(hashCode);
  }

  return VoiceEnhancementMode::NOT_SET;
}

Aws::String GetNameForVoiceEnhancementMode(VoiceEnhancementMode enumValue) {
  switch (enumValue) {
    case VoiceEnhancementMode::NOT_SET:
      return {};
    case VoiceEnhancementMode::VOICE_ISOLATION:
      return "VOICE_ISOLATION";
    case VoiceEnhancementMode::NOISE_SUPPRESSION:
      return "NOISE_SUPPRESSION";
    case VoiceEnhancementMode::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VoiceEnhancementModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
