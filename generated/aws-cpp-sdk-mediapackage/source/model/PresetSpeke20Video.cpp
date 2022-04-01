/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/PresetSpeke20Video.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace PresetSpeke20VideoMapper
      {

        static const int PRESET_VIDEO_1_HASH = HashingUtils::HashString("PRESET-VIDEO-1");


        PresetSpeke20Video GetPresetSpeke20VideoForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESET_VIDEO_1_HASH)
          {
            return PresetSpeke20Video::PRESET_VIDEO_1;
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
  } // namespace MediaPackage
} // namespace Aws
