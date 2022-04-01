/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265InterlaceMode.h>
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
      namespace H265InterlaceModeMapper
      {

        static const int PROGRESSIVE_HASH = HashingUtils::HashString("PROGRESSIVE");
        static const int TOP_FIELD_HASH = HashingUtils::HashString("TOP_FIELD");
        static const int BOTTOM_FIELD_HASH = HashingUtils::HashString("BOTTOM_FIELD");
        static const int FOLLOW_TOP_FIELD_HASH = HashingUtils::HashString("FOLLOW_TOP_FIELD");
        static const int FOLLOW_BOTTOM_FIELD_HASH = HashingUtils::HashString("FOLLOW_BOTTOM_FIELD");


        H265InterlaceMode GetH265InterlaceModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROGRESSIVE_HASH)
          {
            return H265InterlaceMode::PROGRESSIVE;
          }
          else if (hashCode == TOP_FIELD_HASH)
          {
            return H265InterlaceMode::TOP_FIELD;
          }
          else if (hashCode == BOTTOM_FIELD_HASH)
          {
            return H265InterlaceMode::BOTTOM_FIELD;
          }
          else if (hashCode == FOLLOW_TOP_FIELD_HASH)
          {
            return H265InterlaceMode::FOLLOW_TOP_FIELD;
          }
          else if (hashCode == FOLLOW_BOTTOM_FIELD_HASH)
          {
            return H265InterlaceMode::FOLLOW_BOTTOM_FIELD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265InterlaceMode>(hashCode);
          }

          return H265InterlaceMode::NOT_SET;
        }

        Aws::String GetNameForH265InterlaceMode(H265InterlaceMode enumValue)
        {
          switch(enumValue)
          {
          case H265InterlaceMode::PROGRESSIVE:
            return "PROGRESSIVE";
          case H265InterlaceMode::TOP_FIELD:
            return "TOP_FIELD";
          case H265InterlaceMode::BOTTOM_FIELD:
            return "BOTTOM_FIELD";
          case H265InterlaceMode::FOLLOW_TOP_FIELD:
            return "FOLLOW_TOP_FIELD";
          case H265InterlaceMode::FOLLOW_BOTTOM_FIELD:
            return "FOLLOW_BOTTOM_FIELD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265InterlaceModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
