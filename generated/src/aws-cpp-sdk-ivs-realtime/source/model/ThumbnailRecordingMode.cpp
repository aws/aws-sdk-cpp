/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ThumbnailRecordingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace ThumbnailRecordingModeMapper
      {

        static const int INTERVAL_HASH = HashingUtils::HashString("INTERVAL");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ThumbnailRecordingMode GetThumbnailRecordingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERVAL_HASH)
          {
            return ThumbnailRecordingMode::INTERVAL;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ThumbnailRecordingMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThumbnailRecordingMode>(hashCode);
          }

          return ThumbnailRecordingMode::NOT_SET;
        }

        Aws::String GetNameForThumbnailRecordingMode(ThumbnailRecordingMode enumValue)
        {
          switch(enumValue)
          {
          case ThumbnailRecordingMode::NOT_SET:
            return {};
          case ThumbnailRecordingMode::INTERVAL:
            return "INTERVAL";
          case ThumbnailRecordingMode::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThumbnailRecordingModeMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
