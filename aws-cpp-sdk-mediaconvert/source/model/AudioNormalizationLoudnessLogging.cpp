﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace AudioNormalizationLoudnessLoggingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
