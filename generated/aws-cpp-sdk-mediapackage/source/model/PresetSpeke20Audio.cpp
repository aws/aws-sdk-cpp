/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/PresetSpeke20Audio.h>
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
      namespace PresetSpeke20AudioMapper
      {

        static const int PRESET_AUDIO_1_HASH = HashingUtils::HashString("PRESET-AUDIO-1");


        PresetSpeke20Audio GetPresetSpeke20AudioForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESET_AUDIO_1_HASH)
          {
            return PresetSpeke20Audio::PRESET_AUDIO_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PresetSpeke20Audio>(hashCode);
          }

          return PresetSpeke20Audio::NOT_SET;
        }

        Aws::String GetNameForPresetSpeke20Audio(PresetSpeke20Audio enumValue)
        {
          switch(enumValue)
          {
          case PresetSpeke20Audio::PRESET_AUDIO_1:
            return "PRESET-AUDIO-1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PresetSpeke20AudioMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
