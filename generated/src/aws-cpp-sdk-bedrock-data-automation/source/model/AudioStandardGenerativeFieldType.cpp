/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/AudioStandardGenerativeFieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockDataAutomation
  {
    namespace Model
    {
      namespace AudioStandardGenerativeFieldTypeMapper
      {

        static const int AUDIO_SUMMARY_HASH = HashingUtils::HashString("AUDIO_SUMMARY");
        static const int IAB_HASH = HashingUtils::HashString("IAB");
        static const int TOPIC_SUMMARY_HASH = HashingUtils::HashString("TOPIC_SUMMARY");


        AudioStandardGenerativeFieldType GetAudioStandardGenerativeFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUDIO_SUMMARY_HASH)
          {
            return AudioStandardGenerativeFieldType::AUDIO_SUMMARY;
          }
          else if (hashCode == IAB_HASH)
          {
            return AudioStandardGenerativeFieldType::IAB;
          }
          else if (hashCode == TOPIC_SUMMARY_HASH)
          {
            return AudioStandardGenerativeFieldType::TOPIC_SUMMARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioStandardGenerativeFieldType>(hashCode);
          }

          return AudioStandardGenerativeFieldType::NOT_SET;
        }

        Aws::String GetNameForAudioStandardGenerativeFieldType(AudioStandardGenerativeFieldType enumValue)
        {
          switch(enumValue)
          {
          case AudioStandardGenerativeFieldType::NOT_SET:
            return {};
          case AudioStandardGenerativeFieldType::AUDIO_SUMMARY:
            return "AUDIO_SUMMARY";
          case AudioStandardGenerativeFieldType::IAB:
            return "IAB";
          case AudioStandardGenerativeFieldType::TOPIC_SUMMARY:
            return "TOPIC_SUMMARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioStandardGenerativeFieldTypeMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
