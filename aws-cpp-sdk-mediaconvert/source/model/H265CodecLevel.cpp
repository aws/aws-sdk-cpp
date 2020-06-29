/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265CodecLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace H265CodecLevelMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int LEVEL_1_HASH = HashingUtils::HashString("LEVEL_1");
        static const int LEVEL_2_HASH = HashingUtils::HashString("LEVEL_2");
        static const int LEVEL_2_1_HASH = HashingUtils::HashString("LEVEL_2_1");
        static const int LEVEL_3_HASH = HashingUtils::HashString("LEVEL_3");
        static const int LEVEL_3_1_HASH = HashingUtils::HashString("LEVEL_3_1");
        static const int LEVEL_4_HASH = HashingUtils::HashString("LEVEL_4");
        static const int LEVEL_4_1_HASH = HashingUtils::HashString("LEVEL_4_1");
        static const int LEVEL_5_HASH = HashingUtils::HashString("LEVEL_5");
        static const int LEVEL_5_1_HASH = HashingUtils::HashString("LEVEL_5_1");
        static const int LEVEL_5_2_HASH = HashingUtils::HashString("LEVEL_5_2");
        static const int LEVEL_6_HASH = HashingUtils::HashString("LEVEL_6");
        static const int LEVEL_6_1_HASH = HashingUtils::HashString("LEVEL_6_1");
        static const int LEVEL_6_2_HASH = HashingUtils::HashString("LEVEL_6_2");


        H265CodecLevel GetH265CodecLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return H265CodecLevel::AUTO;
          }
          else if (hashCode == LEVEL_1_HASH)
          {
            return H265CodecLevel::LEVEL_1;
          }
          else if (hashCode == LEVEL_2_HASH)
          {
            return H265CodecLevel::LEVEL_2;
          }
          else if (hashCode == LEVEL_2_1_HASH)
          {
            return H265CodecLevel::LEVEL_2_1;
          }
          else if (hashCode == LEVEL_3_HASH)
          {
            return H265CodecLevel::LEVEL_3;
          }
          else if (hashCode == LEVEL_3_1_HASH)
          {
            return H265CodecLevel::LEVEL_3_1;
          }
          else if (hashCode == LEVEL_4_HASH)
          {
            return H265CodecLevel::LEVEL_4;
          }
          else if (hashCode == LEVEL_4_1_HASH)
          {
            return H265CodecLevel::LEVEL_4_1;
          }
          else if (hashCode == LEVEL_5_HASH)
          {
            return H265CodecLevel::LEVEL_5;
          }
          else if (hashCode == LEVEL_5_1_HASH)
          {
            return H265CodecLevel::LEVEL_5_1;
          }
          else if (hashCode == LEVEL_5_2_HASH)
          {
            return H265CodecLevel::LEVEL_5_2;
          }
          else if (hashCode == LEVEL_6_HASH)
          {
            return H265CodecLevel::LEVEL_6;
          }
          else if (hashCode == LEVEL_6_1_HASH)
          {
            return H265CodecLevel::LEVEL_6_1;
          }
          else if (hashCode == LEVEL_6_2_HASH)
          {
            return H265CodecLevel::LEVEL_6_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265CodecLevel>(hashCode);
          }

          return H265CodecLevel::NOT_SET;
        }

        Aws::String GetNameForH265CodecLevel(H265CodecLevel enumValue)
        {
          switch(enumValue)
          {
          case H265CodecLevel::AUTO:
            return "AUTO";
          case H265CodecLevel::LEVEL_1:
            return "LEVEL_1";
          case H265CodecLevel::LEVEL_2:
            return "LEVEL_2";
          case H265CodecLevel::LEVEL_2_1:
            return "LEVEL_2_1";
          case H265CodecLevel::LEVEL_3:
            return "LEVEL_3";
          case H265CodecLevel::LEVEL_3_1:
            return "LEVEL_3_1";
          case H265CodecLevel::LEVEL_4:
            return "LEVEL_4";
          case H265CodecLevel::LEVEL_4_1:
            return "LEVEL_4_1";
          case H265CodecLevel::LEVEL_5:
            return "LEVEL_5";
          case H265CodecLevel::LEVEL_5_1:
            return "LEVEL_5_1";
          case H265CodecLevel::LEVEL_5_2:
            return "LEVEL_5_2";
          case H265CodecLevel::LEVEL_6:
            return "LEVEL_6";
          case H265CodecLevel::LEVEL_6_1:
            return "LEVEL_6_1";
          case H265CodecLevel::LEVEL_6_2:
            return "LEVEL_6_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265CodecLevelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
