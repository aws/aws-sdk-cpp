/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioDefaultSelection.h>
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
      namespace AudioDefaultSelectionMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int NOT_DEFAULT_HASH = HashingUtils::HashString("NOT_DEFAULT");


        AudioDefaultSelection GetAudioDefaultSelectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return AudioDefaultSelection::DEFAULT;
          }
          else if (hashCode == NOT_DEFAULT_HASH)
          {
            return AudioDefaultSelection::NOT_DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioDefaultSelection>(hashCode);
          }

          return AudioDefaultSelection::NOT_SET;
        }

        Aws::String GetNameForAudioDefaultSelection(AudioDefaultSelection enumValue)
        {
          switch(enumValue)
          {
          case AudioDefaultSelection::DEFAULT:
            return "DEFAULT";
          case AudioDefaultSelection::NOT_DEFAULT:
            return "NOT_DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioDefaultSelectionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
