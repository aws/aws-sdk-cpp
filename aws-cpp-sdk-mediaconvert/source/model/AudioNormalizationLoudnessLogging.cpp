/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioNormalizationLoudnessLogging.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace AudioNormalizationLoudnessLoggingMapper
      {

        static const int LOG_HASH = HashingUtils::HashString("LOG");
        static const int DONT_LOG_HASH = HashingUtils::HashString("DONT_LOG");


        AudioNormalizationLoudnessLogging GetAudioNormalizationLoudnessLoggingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOG_HASH)
          {
            return AudioNormalizationLoudnessLogging::LOG;
          }
          else if (hashCode == DONT_LOG_HASH)
          {
            return AudioNormalizationLoudnessLogging::DONT_LOG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioNormalizationLoudnessLogging>(hashCode);
          }

          return AudioNormalizationLoudnessLogging::NOT_SET;
        }

        Aws::String GetNameForAudioNormalizationLoudnessLogging(AudioNormalizationLoudnessLogging enumValue)
        {
          switch(enumValue)
          {
          case AudioNormalizationLoudnessLogging::LOG:
            return "LOG";
          case AudioNormalizationLoudnessLogging::DONT_LOG:
            return "DONT_LOG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioNormalizationLoudnessLoggingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
