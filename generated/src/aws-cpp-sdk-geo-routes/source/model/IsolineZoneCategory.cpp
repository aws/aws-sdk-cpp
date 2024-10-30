/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineZoneCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace IsolineZoneCategoryMapper
      {

        static const int CongestionPricing_HASH = HashingUtils::HashString("CongestionPricing");
        static const int Environmental_HASH = HashingUtils::HashString("Environmental");
        static const int Vignette_HASH = HashingUtils::HashString("Vignette");


        IsolineZoneCategory GetIsolineZoneCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CongestionPricing_HASH)
          {
            return IsolineZoneCategory::CongestionPricing;
          }
          else if (hashCode == Environmental_HASH)
          {
            return IsolineZoneCategory::Environmental;
          }
          else if (hashCode == Vignette_HASH)
          {
            return IsolineZoneCategory::Vignette;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsolineZoneCategory>(hashCode);
          }

          return IsolineZoneCategory::NOT_SET;
        }

        Aws::String GetNameForIsolineZoneCategory(IsolineZoneCategory enumValue)
        {
          switch(enumValue)
          {
          case IsolineZoneCategory::NOT_SET:
            return {};
          case IsolineZoneCategory::CongestionPricing:
            return "CongestionPricing";
          case IsolineZoneCategory::Environmental:
            return "Environmental";
          case IsolineZoneCategory::Vignette:
            return "Vignette";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsolineZoneCategoryMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
