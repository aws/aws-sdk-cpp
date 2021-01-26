/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/HLSDisplayFragmentTimestamp.h>
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
      namespace HLSDisplayFragmentTimestampMapper
      {

        static const int ALWAYS_HASH = HashingUtils::HashString("ALWAYS");
        static const int NEVER_HASH = HashingUtils::HashString("NEVER");


        HLSDisplayFragmentTimestamp GetHLSDisplayFragmentTimestampForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_HASH)
          {
            return HLSDisplayFragmentTimestamp::ALWAYS;
          }
          else if (hashCode == NEVER_HASH)
          {
            return HLSDisplayFragmentTimestamp::NEVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HLSDisplayFragmentTimestamp>(hashCode);
          }

          return HLSDisplayFragmentTimestamp::NOT_SET;
        }

        Aws::String GetNameForHLSDisplayFragmentTimestamp(HLSDisplayFragmentTimestamp enumValue)
        {
          switch(enumValue)
          {
          case HLSDisplayFragmentTimestamp::ALWAYS:
            return "ALWAYS";
          case HLSDisplayFragmentTimestamp::NEVER:
            return "NEVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HLSDisplayFragmentTimestampMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
