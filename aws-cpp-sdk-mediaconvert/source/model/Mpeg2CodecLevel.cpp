/*
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

#include <aws/mediaconvert/model/Mpeg2CodecLevel.h>
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
      namespace Mpeg2CodecLevelMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MAIN_HASH = HashingUtils::HashString("MAIN");
        static const int HIGH1440_HASH = HashingUtils::HashString("HIGH1440");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        Mpeg2CodecLevel GetMpeg2CodecLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return Mpeg2CodecLevel::AUTO;
          }
          else if (hashCode == LOW_HASH)
          {
            return Mpeg2CodecLevel::LOW;
          }
          else if (hashCode == MAIN_HASH)
          {
            return Mpeg2CodecLevel::MAIN;
          }
          else if (hashCode == HIGH1440_HASH)
          {
            return Mpeg2CodecLevel::HIGH1440;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Mpeg2CodecLevel::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2CodecLevel>(hashCode);
          }

          return Mpeg2CodecLevel::NOT_SET;
        }

        Aws::String GetNameForMpeg2CodecLevel(Mpeg2CodecLevel enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2CodecLevel::AUTO:
            return "AUTO";
          case Mpeg2CodecLevel::LOW:
            return "LOW";
          case Mpeg2CodecLevel::MAIN:
            return "MAIN";
          case Mpeg2CodecLevel::HIGH1440:
            return "HIGH1440";
          case Mpeg2CodecLevel::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2CodecLevelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
