/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/DASHDisplayFragmentTimestamp.h>
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
      namespace DASHDisplayFragmentTimestampMapper
      {

        static constexpr uint32_t ALWAYS_HASH = ConstExprHashingUtils::HashString("ALWAYS");
        static constexpr uint32_t NEVER_HASH = ConstExprHashingUtils::HashString("NEVER");


        DASHDisplayFragmentTimestamp GetDASHDisplayFragmentTimestampForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_HASH)
          {
            return DASHDisplayFragmentTimestamp::ALWAYS;
          }
          else if (hashCode == NEVER_HASH)
          {
            return DASHDisplayFragmentTimestamp::NEVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DASHDisplayFragmentTimestamp>(hashCode);
          }

          return DASHDisplayFragmentTimestamp::NOT_SET;
        }

        Aws::String GetNameForDASHDisplayFragmentTimestamp(DASHDisplayFragmentTimestamp enumValue)
        {
          switch(enumValue)
          {
          case DASHDisplayFragmentTimestamp::NOT_SET:
            return {};
          case DASHDisplayFragmentTimestamp::ALWAYS:
            return "ALWAYS";
          case DASHDisplayFragmentTimestamp::NEVER:
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

      } // namespace DASHDisplayFragmentTimestampMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
