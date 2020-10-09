/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mpeg2TimecodeInsertionBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Mpeg2TimecodeInsertionBehaviorMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int GOP_TIMECODE_HASH = HashingUtils::HashString("GOP_TIMECODE");


        Mpeg2TimecodeInsertionBehavior GetMpeg2TimecodeInsertionBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Mpeg2TimecodeInsertionBehavior::DISABLED;
          }
          else if (hashCode == GOP_TIMECODE_HASH)
          {
            return Mpeg2TimecodeInsertionBehavior::GOP_TIMECODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2TimecodeInsertionBehavior>(hashCode);
          }

          return Mpeg2TimecodeInsertionBehavior::NOT_SET;
        }

        Aws::String GetNameForMpeg2TimecodeInsertionBehavior(Mpeg2TimecodeInsertionBehavior enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2TimecodeInsertionBehavior::DISABLED:
            return "DISABLED";
          case Mpeg2TimecodeInsertionBehavior::GOP_TIMECODE:
            return "GOP_TIMECODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2TimecodeInsertionBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
