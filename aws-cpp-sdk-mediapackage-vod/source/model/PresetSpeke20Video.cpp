/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/PresetSpeke20Video.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackageVod
  {
    namespace Model
    {
      namespace PresetSpeke20VideoMapper
      {

        static const int PRESET_VIDEO_1_HASH = HashingUtils::HashString("PRESET-VIDEO-1");
        static const int PRESET_VIDEO_2_HASH = HashingUtils::HashString("PRESET-VIDEO-2");
        static const int PRESET_VIDEO_3_HASH = HashingUtils::HashString("PRESET-VIDEO-3");
        static const int PRESET_VIDEO_4_HASH = HashingUtils::HashString("PRESET-VIDEO-4");
        static const int PRESET_VIDEO_5_HASH = HashingUtils::HashString("PRESET-VIDEO-5");
        static const int PRESET_VIDEO_6_HASH = HashingUtils::HashString("PRESET-VIDEO-6");
        static const int PRESET_VIDEO_7_HASH = HashingUtils::HashString("PRESET-VIDEO-7");
        static const int PRESET_VIDEO_8_HASH = HashingUtils::HashString("PRESET-VIDEO-8");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");
        static const int UNENCRYPTED_HASH = HashingUtils::HashString("UNENCRYPTED");


        PresetSpeke20Video GetPresetSpeke20VideoForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESET_VIDEO_1_HASH)
          {
            return PresetSpeke20Video::PRESET_VIDEO_1;
          }
          else if (hashCode == PRESET_VIDEO_2_HASH)
          {
            return PresetSpeke20Video::PRESET_VIDEO_2;
          }
          else if (hashCode == PRESET_VIDEO_3_HASH)
          {
            return PresetSpeke20Video::PRESET_VIDEO_3;
          }
          else if (hashCode == PRESET_VIDEO_4_HASH)
          {
            return PresetSpeke20Video::PRESET_VIDEO_4;
          }
          else if (hashCode == PRESET_VIDEO_5_HASH)
          {
            return PresetSpeke20Video::PRESET_VIDEO_5;
          }
          else if (hashCode == PRESET_VIDEO_6_HASH)
          {
            return PresetSpeke20Video::PRESET_VIDEO_6;
          }
          else if (hashCode == PRESET_VIDEO_7_HASH)
          {
            return PresetSpeke20Video::PRESET_VIDEO_7;
          }
          else if (hashCode == PRESET_VIDEO_8_HASH)
          {
            return PresetSpeke20Video::PRESET_VIDEO_8;
          }
          else if (hashCode == SHARED_HASH)
          {
            return PresetSpeke20Video::SHARED;
          }
          else if (hashCode == UNENCRYPTED_HASH)
          {
            return PresetSpeke20Video::UNENCRYPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PresetSpeke20Video>(hashCode);
          }

          return PresetSpeke20Video::NOT_SET;
        }

        Aws::String GetNameForPresetSpeke20Video(PresetSpeke20Video enumValue)
        {
          switch(enumValue)
          {
          case PresetSpeke20Video::PRESET_VIDEO_1:
            return "PRESET-VIDEO-1";
          case PresetSpeke20Video::PRESET_VIDEO_2:
            return "PRESET-VIDEO-2";
          case PresetSpeke20Video::PRESET_VIDEO_3:
            return "PRESET-VIDEO-3";
          case PresetSpeke20Video::PRESET_VIDEO_4:
            return "PRESET-VIDEO-4";
          case PresetSpeke20Video::PRESET_VIDEO_5:
            return "PRESET-VIDEO-5";
          case PresetSpeke20Video::PRESET_VIDEO_6:
            return "PRESET-VIDEO-6";
          case PresetSpeke20Video::PRESET_VIDEO_7:
            return "PRESET-VIDEO-7";
          case PresetSpeke20Video::PRESET_VIDEO_8:
            return "PRESET-VIDEO-8";
          case PresetSpeke20Video::SHARED:
            return "SHARED";
          case PresetSpeke20Video::UNENCRYPTED:
            return "UNENCRYPTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PresetSpeke20VideoMapper
    } // namespace Model
  } // namespace MediaPackageVod
} // namespace Aws
