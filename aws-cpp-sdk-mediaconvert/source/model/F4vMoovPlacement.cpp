/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/F4vMoovPlacement.h>
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
      namespace F4vMoovPlacementMapper
      {

        static const int PROGRESSIVE_DOWNLOAD_HASH = HashingUtils::HashString("PROGRESSIVE_DOWNLOAD");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        F4vMoovPlacement GetF4vMoovPlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROGRESSIVE_DOWNLOAD_HASH)
          {
            return F4vMoovPlacement::PROGRESSIVE_DOWNLOAD;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return F4vMoovPlacement::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<F4vMoovPlacement>(hashCode);
          }

          return F4vMoovPlacement::NOT_SET;
        }

        Aws::String GetNameForF4vMoovPlacement(F4vMoovPlacement enumValue)
        {
          switch(enumValue)
          {
          case F4vMoovPlacement::PROGRESSIVE_DOWNLOAD:
            return "PROGRESSIVE_DOWNLOAD";
          case F4vMoovPlacement::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace F4vMoovPlacementMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
