/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/PlaybackMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace PlaybackModeMapper
      {

        static const int LOOP_HASH = HashingUtils::HashString("LOOP");


        PlaybackMode GetPlaybackModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOOP_HASH)
          {
            return PlaybackMode::LOOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlaybackMode>(hashCode);
          }

          return PlaybackMode::NOT_SET;
        }

        Aws::String GetNameForPlaybackMode(PlaybackMode enumValue)
        {
          switch(enumValue)
          {
          case PlaybackMode::LOOP:
            return "LOOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlaybackModeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
