/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/HLSDiscontinuityMode.h>
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
      namespace HLSDiscontinuityModeMapper
      {

        static constexpr uint32_t ALWAYS_HASH = ConstExprHashingUtils::HashString("ALWAYS");
        static constexpr uint32_t NEVER_HASH = ConstExprHashingUtils::HashString("NEVER");
        static constexpr uint32_t ON_DISCONTINUITY_HASH = ConstExprHashingUtils::HashString("ON_DISCONTINUITY");


        HLSDiscontinuityMode GetHLSDiscontinuityModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_HASH)
          {
            return HLSDiscontinuityMode::ALWAYS;
          }
          else if (hashCode == NEVER_HASH)
          {
            return HLSDiscontinuityMode::NEVER;
          }
          else if (hashCode == ON_DISCONTINUITY_HASH)
          {
            return HLSDiscontinuityMode::ON_DISCONTINUITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HLSDiscontinuityMode>(hashCode);
          }

          return HLSDiscontinuityMode::NOT_SET;
        }

        Aws::String GetNameForHLSDiscontinuityMode(HLSDiscontinuityMode enumValue)
        {
          switch(enumValue)
          {
          case HLSDiscontinuityMode::NOT_SET:
            return {};
          case HLSDiscontinuityMode::ALWAYS:
            return "ALWAYS";
          case HLSDiscontinuityMode::NEVER:
            return "NEVER";
          case HLSDiscontinuityMode::ON_DISCONTINUITY:
            return "ON_DISCONTINUITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HLSDiscontinuityModeMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
