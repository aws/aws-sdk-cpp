﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/AudioExtractionCategoryType.h>
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
      namespace AudioExtractionCategoryTypeMapper
      {

        static const int AUDIO_CONTENT_MODERATION_HASH = HashingUtils::HashString("AUDIO_CONTENT_MODERATION");
        static const int CHAPTER_CONTENT_MODERATION_HASH = HashingUtils::HashString("CHAPTER_CONTENT_MODERATION");
        static const int TRANSCRIPT_HASH = HashingUtils::HashString("TRANSCRIPT");


        AudioExtractionCategoryType GetAudioExtractionCategoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUDIO_CONTENT_MODERATION_HASH)
          {
            return AudioExtractionCategoryType::AUDIO_CONTENT_MODERATION;
          }
          else if (hashCode == CHAPTER_CONTENT_MODERATION_HASH)
          {
            return AudioExtractionCategoryType::CHAPTER_CONTENT_MODERATION;
          }
          else if (hashCode == TRANSCRIPT_HASH)
          {
            return AudioExtractionCategoryType::TRANSCRIPT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioExtractionCategoryType>(hashCode);
          }

          return AudioExtractionCategoryType::NOT_SET;
        }

        Aws::String GetNameForAudioExtractionCategoryType(AudioExtractionCategoryType enumValue)
        {
          switch(enumValue)
          {
          case AudioExtractionCategoryType::NOT_SET:
            return {};
          case AudioExtractionCategoryType::AUDIO_CONTENT_MODERATION:
            return "AUDIO_CONTENT_MODERATION";
          case AudioExtractionCategoryType::CHAPTER_CONTENT_MODERATION:
            return "CHAPTER_CONTENT_MODERATION";
          case AudioExtractionCategoryType::TRANSCRIPT:
            return "TRANSCRIPT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioExtractionCategoryTypeMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
