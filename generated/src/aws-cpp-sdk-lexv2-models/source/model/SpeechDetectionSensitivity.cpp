/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lexv2-models/model/SpeechDetectionSensitivity.h>

using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {
namespace SpeechDetectionSensitivityMapper {

static const int Default_HASH = HashingUtils::HashString("Default");
static const int HighNoiseTolerance_HASH = HashingUtils::HashString("HighNoiseTolerance");
static const int MaximumNoiseTolerance_HASH = HashingUtils::HashString("MaximumNoiseTolerance");

SpeechDetectionSensitivity GetSpeechDetectionSensitivityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Default_HASH) {
    return SpeechDetectionSensitivity::Default;
  } else if (hashCode == HighNoiseTolerance_HASH) {
    return SpeechDetectionSensitivity::HighNoiseTolerance;
  } else if (hashCode == MaximumNoiseTolerance_HASH) {
    return SpeechDetectionSensitivity::MaximumNoiseTolerance;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpeechDetectionSensitivity>(hashCode);
  }

  return SpeechDetectionSensitivity::NOT_SET;
}

Aws::String GetNameForSpeechDetectionSensitivity(SpeechDetectionSensitivity enumValue) {
  switch (enumValue) {
    case SpeechDetectionSensitivity::NOT_SET:
      return {};
    case SpeechDetectionSensitivity::Default:
      return "Default";
    case SpeechDetectionSensitivity::HighNoiseTolerance:
      return "HighNoiseTolerance";
    case SpeechDetectionSensitivity::MaximumNoiseTolerance:
      return "MaximumNoiseTolerance";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpeechDetectionSensitivityMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
