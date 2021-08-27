/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubtitleTeletextSpacing.h>
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
      namespace DvbSubtitleTeletextSpacingMapper
      {

        static const int FIXED_GRID_HASH = HashingUtils::HashString("FIXED_GRID");
        static const int PROPORTIONAL_HASH = HashingUtils::HashString("PROPORTIONAL");


        DvbSubtitleTeletextSpacing GetDvbSubtitleTeletextSpacingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_GRID_HASH)
          {
            return DvbSubtitleTeletextSpacing::FIXED_GRID;
          }
          else if (hashCode == PROPORTIONAL_HASH)
          {
            return DvbSubtitleTeletextSpacing::PROPORTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleTeletextSpacing>(hashCode);
          }

          return DvbSubtitleTeletextSpacing::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleTeletextSpacing(DvbSubtitleTeletextSpacing enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleTeletextSpacing::FIXED_GRID:
            return "FIXED_GRID";
          case DvbSubtitleTeletextSpacing::PROPORTIONAL:
            return "PROPORTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubtitleTeletextSpacingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
