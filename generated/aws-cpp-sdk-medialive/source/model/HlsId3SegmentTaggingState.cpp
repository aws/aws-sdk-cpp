/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsId3SegmentTaggingState.h>
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
      namespace HlsId3SegmentTaggingStateMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        HlsId3SegmentTaggingState GetHlsId3SegmentTaggingStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return HlsId3SegmentTaggingState::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return HlsId3SegmentTaggingState::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsId3SegmentTaggingState>(hashCode);
          }

          return HlsId3SegmentTaggingState::NOT_SET;
        }

        Aws::String GetNameForHlsId3SegmentTaggingState(HlsId3SegmentTaggingState enumValue)
        {
          switch(enumValue)
          {
          case HlsId3SegmentTaggingState::DISABLED:
            return "DISABLED";
          case HlsId3SegmentTaggingState::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsId3SegmentTaggingStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
