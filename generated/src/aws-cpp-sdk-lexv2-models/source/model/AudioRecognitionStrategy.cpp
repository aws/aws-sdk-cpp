/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AudioRecognitionStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace AudioRecognitionStrategyMapper
      {

        static const int UseSlotValuesAsCustomVocabulary_HASH = HashingUtils::HashString("UseSlotValuesAsCustomVocabulary");


        AudioRecognitionStrategy GetAudioRecognitionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UseSlotValuesAsCustomVocabulary_HASH)
          {
            return AudioRecognitionStrategy::UseSlotValuesAsCustomVocabulary;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioRecognitionStrategy>(hashCode);
          }

          return AudioRecognitionStrategy::NOT_SET;
        }

        Aws::String GetNameForAudioRecognitionStrategy(AudioRecognitionStrategy enumValue)
        {
          switch(enumValue)
          {
          case AudioRecognitionStrategy::NOT_SET:
            return {};
          case AudioRecognitionStrategy::UseSlotValuesAsCustomVocabulary:
            return "UseSlotValuesAsCustomVocabulary";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioRecognitionStrategyMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
