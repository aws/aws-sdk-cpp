/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/ClipFragmentSelectorType.h>
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
      namespace ClipFragmentSelectorTypeMapper
      {

        static const int PRODUCER_TIMESTAMP_HASH = HashingUtils::HashString("PRODUCER_TIMESTAMP");
        static const int SERVER_TIMESTAMP_HASH = HashingUtils::HashString("SERVER_TIMESTAMP");


        ClipFragmentSelectorType GetClipFragmentSelectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRODUCER_TIMESTAMP_HASH)
          {
            return ClipFragmentSelectorType::PRODUCER_TIMESTAMP;
          }
          else if (hashCode == SERVER_TIMESTAMP_HASH)
          {
            return ClipFragmentSelectorType::SERVER_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClipFragmentSelectorType>(hashCode);
          }

          return ClipFragmentSelectorType::NOT_SET;
        }

        Aws::String GetNameForClipFragmentSelectorType(ClipFragmentSelectorType enumValue)
        {
          switch(enumValue)
          {
          case ClipFragmentSelectorType::PRODUCER_TIMESTAMP:
            return "PRODUCER_TIMESTAMP";
          case ClipFragmentSelectorType::SERVER_TIMESTAMP:
            return "SERVER_TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClipFragmentSelectorTypeMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
