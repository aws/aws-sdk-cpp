/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/model/LabelSize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoMaps
  {
    namespace Model
    {
      namespace LabelSizeMapper
      {

        static const int Small_HASH = HashingUtils::HashString("Small");
        static const int Large_HASH = HashingUtils::HashString("Large");


        LabelSize GetLabelSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Small_HASH)
          {
            return LabelSize::Small;
          }
          else if (hashCode == Large_HASH)
          {
            return LabelSize::Large;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LabelSize>(hashCode);
          }

          return LabelSize::NOT_SET;
        }

        Aws::String GetNameForLabelSize(LabelSize enumValue)
        {
          switch(enumValue)
          {
          case LabelSize::NOT_SET:
            return {};
          case LabelSize::Small:
            return "Small";
          case LabelSize::Large:
            return "Large";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LabelSizeMapper
    } // namespace Model
  } // namespace GeoMaps
} // namespace Aws
