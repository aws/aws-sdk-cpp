/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SmoothGroupTimestampOffsetMode.h>
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
      namespace SmoothGroupTimestampOffsetModeMapper
      {

        static const int USE_CONFIGURED_OFFSET_HASH = HashingUtils::HashString("USE_CONFIGURED_OFFSET");
        static const int USE_EVENT_START_DATE_HASH = HashingUtils::HashString("USE_EVENT_START_DATE");


        SmoothGroupTimestampOffsetMode GetSmoothGroupTimestampOffsetModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USE_CONFIGURED_OFFSET_HASH)
          {
            return SmoothGroupTimestampOffsetMode::USE_CONFIGURED_OFFSET;
          }
          else if (hashCode == USE_EVENT_START_DATE_HASH)
          {
            return SmoothGroupTimestampOffsetMode::USE_EVENT_START_DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupTimestampOffsetMode>(hashCode);
          }

          return SmoothGroupTimestampOffsetMode::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupTimestampOffsetMode(SmoothGroupTimestampOffsetMode enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupTimestampOffsetMode::USE_CONFIGURED_OFFSET:
            return "USE_CONFIGURED_OFFSET";
          case SmoothGroupTimestampOffsetMode::USE_EVENT_START_DATE:
            return "USE_EVENT_START_DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmoothGroupTimestampOffsetModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
