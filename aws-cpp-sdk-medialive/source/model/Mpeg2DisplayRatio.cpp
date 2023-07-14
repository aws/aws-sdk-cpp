/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mpeg2DisplayRatio.h>
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
      namespace Mpeg2DisplayRatioMapper
      {

        static const int DISPLAYRATIO16X9_HASH = HashingUtils::HashString("DISPLAYRATIO16X9");
        static const int DISPLAYRATIO4X3_HASH = HashingUtils::HashString("DISPLAYRATIO4X3");


        Mpeg2DisplayRatio GetMpeg2DisplayRatioForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISPLAYRATIO16X9_HASH)
          {
            return Mpeg2DisplayRatio::DISPLAYRATIO16X9;
          }
          else if (hashCode == DISPLAYRATIO4X3_HASH)
          {
            return Mpeg2DisplayRatio::DISPLAYRATIO4X3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2DisplayRatio>(hashCode);
          }

          return Mpeg2DisplayRatio::NOT_SET;
        }

        Aws::String GetNameForMpeg2DisplayRatio(Mpeg2DisplayRatio enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2DisplayRatio::DISPLAYRATIO16X9:
            return "DISPLAYRATIO16X9";
          case Mpeg2DisplayRatio::DISPLAYRATIO4X3:
            return "DISPLAYRATIO4X3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2DisplayRatioMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
