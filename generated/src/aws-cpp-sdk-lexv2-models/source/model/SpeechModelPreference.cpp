/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lexv2-models/model/SpeechModelPreference.h>

using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {
namespace SpeechModelPreferenceMapper {

static const int Standard_HASH = HashingUtils::HashString("Standard");
static const int Neural_HASH = HashingUtils::HashString("Neural");
static const int Deepgram_HASH = HashingUtils::HashString("Deepgram");

SpeechModelPreference GetSpeechModelPreferenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Standard_HASH) {
    return SpeechModelPreference::Standard;
  } else if (hashCode == Neural_HASH) {
    return SpeechModelPreference::Neural;
  } else if (hashCode == Deepgram_HASH) {
    return SpeechModelPreference::Deepgram;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpeechModelPreference>(hashCode);
  }

  return SpeechModelPreference::NOT_SET;
}

Aws::String GetNameForSpeechModelPreference(SpeechModelPreference enumValue) {
  switch (enumValue) {
    case SpeechModelPreference::NOT_SET:
      return {};
    case SpeechModelPreference::Standard:
      return "Standard";
    case SpeechModelPreference::Neural:
      return "Neural";
    case SpeechModelPreference::Deepgram:
      return "Deepgram";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpeechModelPreferenceMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
