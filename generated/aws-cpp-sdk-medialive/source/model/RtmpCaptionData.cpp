/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RtmpCaptionData.h>
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
      namespace RtmpCaptionDataMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int FIELD1_608_HASH = HashingUtils::HashString("FIELD1_608");
        static const int FIELD1_AND_FIELD2_608_HASH = HashingUtils::HashString("FIELD1_AND_FIELD2_608");


        RtmpCaptionData GetRtmpCaptionDataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return RtmpCaptionData::ALL;
          }
          else if (hashCode == FIELD1_608_HASH)
          {
            return RtmpCaptionData::FIELD1_608;
          }
          else if (hashCode == FIELD1_AND_FIELD2_608_HASH)
          {
            return RtmpCaptionData::FIELD1_AND_FIELD2_608;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RtmpCaptionData>(hashCode);
          }

          return RtmpCaptionData::NOT_SET;
        }

        Aws::String GetNameForRtmpCaptionData(RtmpCaptionData enumValue)
        {
          switch(enumValue)
          {
          case RtmpCaptionData::ALL:
            return "ALL";
          case RtmpCaptionData::FIELD1_608:
            return "FIELD1_608";
          case RtmpCaptionData::FIELD1_AND_FIELD2_608:
            return "FIELD1_AND_FIELD2_608";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RtmpCaptionDataMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
