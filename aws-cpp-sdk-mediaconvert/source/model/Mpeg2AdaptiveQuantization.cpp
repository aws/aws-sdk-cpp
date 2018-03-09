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

#include <aws/mediaconvert/model/Mpeg2AdaptiveQuantization.h>
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
      namespace Mpeg2AdaptiveQuantizationMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        Mpeg2AdaptiveQuantization GetMpeg2AdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return Mpeg2AdaptiveQuantization::OFF;
          }
          else if (hashCode == LOW_HASH)
          {
            return Mpeg2AdaptiveQuantization::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Mpeg2AdaptiveQuantization::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Mpeg2AdaptiveQuantization::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2AdaptiveQuantization>(hashCode);
          }

          return Mpeg2AdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForMpeg2AdaptiveQuantization(Mpeg2AdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2AdaptiveQuantization::OFF:
            return "OFF";
          case Mpeg2AdaptiveQuantization::LOW:
            return "LOW";
          case Mpeg2AdaptiveQuantization::MEDIUM:
            return "MEDIUM";
          case Mpeg2AdaptiveQuantization::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace Mpeg2AdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
