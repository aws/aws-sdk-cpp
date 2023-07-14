/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/HLSFragmentSelectorType.h>
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
      namespace HLSFragmentSelectorTypeMapper
      {

        static const int PRODUCER_TIMESTAMP_HASH = HashingUtils::HashString("PRODUCER_TIMESTAMP");
        static const int SERVER_TIMESTAMP_HASH = HashingUtils::HashString("SERVER_TIMESTAMP");


        HLSFragmentSelectorType GetHLSFragmentSelectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRODUCER_TIMESTAMP_HASH)
          {
            return HLSFragmentSelectorType::PRODUCER_TIMESTAMP;
          }
          else if (hashCode == SERVER_TIMESTAMP_HASH)
          {
            return HLSFragmentSelectorType::SERVER_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HLSFragmentSelectorType>(hashCode);
          }

          return HLSFragmentSelectorType::NOT_SET;
        }

        Aws::String GetNameForHLSFragmentSelectorType(HLSFragmentSelectorType enumValue)
        {
          switch(enumValue)
          {
          case HLSFragmentSelectorType::PRODUCER_TIMESTAMP:
            return "PRODUCER_TIMESTAMP";
          case HLSFragmentSelectorType::SERVER_TIMESTAMP:
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

      } // namespace HLSFragmentSelectorTypeMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
