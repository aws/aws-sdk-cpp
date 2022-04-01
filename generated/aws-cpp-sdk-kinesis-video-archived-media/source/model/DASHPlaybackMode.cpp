/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/DASHPlaybackMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideoArchivedMedia
  {
    namespace Model
    {
      namespace DASHPlaybackModeMapper
      {

        static const int LIVE_HASH = HashingUtils::HashString("LIVE");
        static const int LIVE_REPLAY_HASH = HashingUtils::HashString("LIVE_REPLAY");
        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");


        DASHPlaybackMode GetDASHPlaybackModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return DASHPlaybackMode::LIVE;
          }
          else if (hashCode == LIVE_REPLAY_HASH)
          {
            return DASHPlaybackMode::LIVE_REPLAY;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return DASHPlaybackMode::ON_DEMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DASHPlaybackMode>(hashCode);
          }

          return DASHPlaybackMode::NOT_SET;
        }

        Aws::String GetNameForDASHPlaybackMode(DASHPlaybackMode enumValue)
        {
          switch(enumValue)
          {
          case DASHPlaybackMode::LIVE:
            return "LIVE";
          case DASHPlaybackMode::LIVE_REPLAY:
            return "LIVE_REPLAY";
          case DASHPlaybackMode::ON_DEMAND:
            return "ON_DEMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DASHPlaybackModeMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
