/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264Level.h>
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
      namespace H264LevelMapper
      {

        static const int H264_LEVEL_1_HASH = HashingUtils::HashString("H264_LEVEL_1");
        static const int H264_LEVEL_1_1_HASH = HashingUtils::HashString("H264_LEVEL_1_1");
        static const int H264_LEVEL_1_2_HASH = HashingUtils::HashString("H264_LEVEL_1_2");
        static const int H264_LEVEL_1_3_HASH = HashingUtils::HashString("H264_LEVEL_1_3");
        static const int H264_LEVEL_2_HASH = HashingUtils::HashString("H264_LEVEL_2");
        static const int H264_LEVEL_2_1_HASH = HashingUtils::HashString("H264_LEVEL_2_1");
        static const int H264_LEVEL_2_2_HASH = HashingUtils::HashString("H264_LEVEL_2_2");
        static const int H264_LEVEL_3_HASH = HashingUtils::HashString("H264_LEVEL_3");
        static const int H264_LEVEL_3_1_HASH = HashingUtils::HashString("H264_LEVEL_3_1");
        static const int H264_LEVEL_3_2_HASH = HashingUtils::HashString("H264_LEVEL_3_2");
        static const int H264_LEVEL_4_HASH = HashingUtils::HashString("H264_LEVEL_4");
        static const int H264_LEVEL_4_1_HASH = HashingUtils::HashString("H264_LEVEL_4_1");
        static const int H264_LEVEL_4_2_HASH = HashingUtils::HashString("H264_LEVEL_4_2");
        static const int H264_LEVEL_5_HASH = HashingUtils::HashString("H264_LEVEL_5");
        static const int H264_LEVEL_5_1_HASH = HashingUtils::HashString("H264_LEVEL_5_1");
        static const int H264_LEVEL_5_2_HASH = HashingUtils::HashString("H264_LEVEL_5_2");
        static const int H264_LEVEL_AUTO_HASH = HashingUtils::HashString("H264_LEVEL_AUTO");


        H264Level GetH264LevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == H264_LEVEL_1_HASH)
          {
            return H264Level::H264_LEVEL_1;
          }
          else if (hashCode == H264_LEVEL_1_1_HASH)
          {
            return H264Level::H264_LEVEL_1_1;
          }
          else if (hashCode == H264_LEVEL_1_2_HASH)
          {
            return H264Level::H264_LEVEL_1_2;
          }
          else if (hashCode == H264_LEVEL_1_3_HASH)
          {
            return H264Level::H264_LEVEL_1_3;
          }
          else if (hashCode == H264_LEVEL_2_HASH)
          {
            return H264Level::H264_LEVEL_2;
          }
          else if (hashCode == H264_LEVEL_2_1_HASH)
          {
            return H264Level::H264_LEVEL_2_1;
          }
          else if (hashCode == H264_LEVEL_2_2_HASH)
          {
            return H264Level::H264_LEVEL_2_2;
          }
          else if (hashCode == H264_LEVEL_3_HASH)
          {
            return H264Level::H264_LEVEL_3;
          }
          else if (hashCode == H264_LEVEL_3_1_HASH)
          {
            return H264Level::H264_LEVEL_3_1;
          }
          else if (hashCode == H264_LEVEL_3_2_HASH)
          {
            return H264Level::H264_LEVEL_3_2;
          }
          else if (hashCode == H264_LEVEL_4_HASH)
          {
            return H264Level::H264_LEVEL_4;
          }
          else if (hashCode == H264_LEVEL_4_1_HASH)
          {
            return H264Level::H264_LEVEL_4_1;
          }
          else if (hashCode == H264_LEVEL_4_2_HASH)
          {
            return H264Level::H264_LEVEL_4_2;
          }
          else if (hashCode == H264_LEVEL_5_HASH)
          {
            return H264Level::H264_LEVEL_5;
          }
          else if (hashCode == H264_LEVEL_5_1_HASH)
          {
            return H264Level::H264_LEVEL_5_1;
          }
          else if (hashCode == H264_LEVEL_5_2_HASH)
          {
            return H264Level::H264_LEVEL_5_2;
          }
          else if (hashCode == H264_LEVEL_AUTO_HASH)
          {
            return H264Level::H264_LEVEL_AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264Level>(hashCode);
          }

          return H264Level::NOT_SET;
        }

        Aws::String GetNameForH264Level(H264Level enumValue)
        {
          switch(enumValue)
          {
          case H264Level::H264_LEVEL_1:
            return "H264_LEVEL_1";
          case H264Level::H264_LEVEL_1_1:
            return "H264_LEVEL_1_1";
          case H264Level::H264_LEVEL_1_2:
            return "H264_LEVEL_1_2";
          case H264Level::H264_LEVEL_1_3:
            return "H264_LEVEL_1_3";
          case H264Level::H264_LEVEL_2:
            return "H264_LEVEL_2";
          case H264Level::H264_LEVEL_2_1:
            return "H264_LEVEL_2_1";
          case H264Level::H264_LEVEL_2_2:
            return "H264_LEVEL_2_2";
          case H264Level::H264_LEVEL_3:
            return "H264_LEVEL_3";
          case H264Level::H264_LEVEL_3_1:
            return "H264_LEVEL_3_1";
          case H264Level::H264_LEVEL_3_2:
            return "H264_LEVEL_3_2";
          case H264Level::H264_LEVEL_4:
            return "H264_LEVEL_4";
          case H264Level::H264_LEVEL_4_1:
            return "H264_LEVEL_4_1";
          case H264Level::H264_LEVEL_4_2:
            return "H264_LEVEL_4_2";
          case H264Level::H264_LEVEL_5:
            return "H264_LEVEL_5";
          case H264Level::H264_LEVEL_5_1:
            return "H264_LEVEL_5_1";
          case H264Level::H264_LEVEL_5_2:
            return "H264_LEVEL_5_2";
          case H264Level::H264_LEVEL_AUTO:
            return "H264_LEVEL_AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264LevelMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
