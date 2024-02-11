/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/TileOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace TileOrderMapper
      {

        static const int JoinSequence_HASH = HashingUtils::HashString("JoinSequence");
        static const int SpeakerSequence_HASH = HashingUtils::HashString("SpeakerSequence");


        TileOrder GetTileOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JoinSequence_HASH)
          {
            return TileOrder::JoinSequence;
          }
          else if (hashCode == SpeakerSequence_HASH)
          {
            return TileOrder::SpeakerSequence;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TileOrder>(hashCode);
          }

          return TileOrder::NOT_SET;
        }

        Aws::String GetNameForTileOrder(TileOrder enumValue)
        {
          switch(enumValue)
          {
          case TileOrder::NOT_SET:
            return {};
          case TileOrder::JoinSequence:
            return "JoinSequence";
          case TileOrder::SpeakerSequence:
            return "SpeakerSequence";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TileOrderMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
