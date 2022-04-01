/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3BitstreamMode.h>
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
      namespace Eac3BitstreamModeMapper
      {

        static const int COMPLETE_MAIN_HASH = HashingUtils::HashString("COMPLETE_MAIN");
        static const int COMMENTARY_HASH = HashingUtils::HashString("COMMENTARY");
        static const int EMERGENCY_HASH = HashingUtils::HashString("EMERGENCY");
        static const int HEARING_IMPAIRED_HASH = HashingUtils::HashString("HEARING_IMPAIRED");
        static const int VISUALLY_IMPAIRED_HASH = HashingUtils::HashString("VISUALLY_IMPAIRED");


        Eac3BitstreamMode GetEac3BitstreamModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_MAIN_HASH)
          {
            return Eac3BitstreamMode::COMPLETE_MAIN;
          }
          else if (hashCode == COMMENTARY_HASH)
          {
            return Eac3BitstreamMode::COMMENTARY;
          }
          else if (hashCode == EMERGENCY_HASH)
          {
            return Eac3BitstreamMode::EMERGENCY;
          }
          else if (hashCode == HEARING_IMPAIRED_HASH)
          {
            return Eac3BitstreamMode::HEARING_IMPAIRED;
          }
          else if (hashCode == VISUALLY_IMPAIRED_HASH)
          {
            return Eac3BitstreamMode::VISUALLY_IMPAIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3BitstreamMode>(hashCode);
          }

          return Eac3BitstreamMode::NOT_SET;
        }

        Aws::String GetNameForEac3BitstreamMode(Eac3BitstreamMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3BitstreamMode::COMPLETE_MAIN:
            return "COMPLETE_MAIN";
          case Eac3BitstreamMode::COMMENTARY:
            return "COMMENTARY";
          case Eac3BitstreamMode::EMERGENCY:
            return "EMERGENCY";
          case Eac3BitstreamMode::HEARING_IMPAIRED:
            return "HEARING_IMPAIRED";
          case Eac3BitstreamMode::VISUALLY_IMPAIRED:
            return "VISUALLY_IMPAIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3BitstreamModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
