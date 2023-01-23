/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/ContainerFormat.h>
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
      namespace ContainerFormatMapper
      {

        static const int FRAGMENTED_MP4_HASH = HashingUtils::HashString("FRAGMENTED_MP4");
        static const int MPEG_TS_HASH = HashingUtils::HashString("MPEG_TS");


        ContainerFormat GetContainerFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAGMENTED_MP4_HASH)
          {
            return ContainerFormat::FRAGMENTED_MP4;
          }
          else if (hashCode == MPEG_TS_HASH)
          {
            return ContainerFormat::MPEG_TS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerFormat>(hashCode);
          }

          return ContainerFormat::NOT_SET;
        }

        Aws::String GetNameForContainerFormat(ContainerFormat enumValue)
        {
          switch(enumValue)
          {
          case ContainerFormat::FRAGMENTED_MP4:
            return "FRAGMENTED_MP4";
          case ContainerFormat::MPEG_TS:
            return "MPEG_TS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerFormatMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
