/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/HLSPlaybackMode.h>
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
      namespace HLSPlaybackModeMapper
      {

        static constexpr uint32_t LIVE_HASH = ConstExprHashingUtils::HashString("LIVE");
        static constexpr uint32_t LIVE_REPLAY_HASH = ConstExprHashingUtils::HashString("LIVE_REPLAY");
        static constexpr uint32_t ON_DEMAND_HASH = ConstExprHashingUtils::HashString("ON_DEMAND");


        HLSPlaybackMode GetHLSPlaybackModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return HLSPlaybackMode::LIVE;
          }
          else if (hashCode == LIVE_REPLAY_HASH)
          {
            return HLSPlaybackMode::LIVE_REPLAY;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return HLSPlaybackMode::ON_DEMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HLSPlaybackMode>(hashCode);
          }

          return HLSPlaybackMode::NOT_SET;
        }

        Aws::String GetNameForHLSPlaybackMode(HLSPlaybackMode enumValue)
        {
          switch(enumValue)
          {
          case HLSPlaybackMode::NOT_SET:
            return {};
          case HLSPlaybackMode::LIVE:
            return "LIVE";
          case HLSPlaybackMode::LIVE_REPLAY:
            return "LIVE_REPLAY";
          case HLSPlaybackMode::ON_DEMAND:
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

      } // namespace HLSPlaybackModeMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
