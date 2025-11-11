/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/AudioGenerativeOutputLanguage.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace AudioGenerativeOutputLanguageMapper {

static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
static const int EN_HASH = HashingUtils::HashString("EN");

AudioGenerativeOutputLanguage GetAudioGenerativeOutputLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEFAULT_HASH) {
    return AudioGenerativeOutputLanguage::DEFAULT;
  } else if (hashCode == EN_HASH) {
    return AudioGenerativeOutputLanguage::EN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AudioGenerativeOutputLanguage>(hashCode);
  }

  return AudioGenerativeOutputLanguage::NOT_SET;
}

Aws::String GetNameForAudioGenerativeOutputLanguage(AudioGenerativeOutputLanguage enumValue) {
  switch (enumValue) {
    case AudioGenerativeOutputLanguage::NOT_SET:
      return {};
    case AudioGenerativeOutputLanguage::DEFAULT:
      return "DEFAULT";
    case AudioGenerativeOutputLanguage::EN:
      return "EN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AudioGenerativeOutputLanguageMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
