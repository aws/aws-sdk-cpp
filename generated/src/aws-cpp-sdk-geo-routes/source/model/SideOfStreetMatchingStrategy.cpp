/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/SideOfStreetMatchingStrategy.h>
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
      namespace SideOfStreetMatchingStrategyMapper
      {

        static const int AnyStreet_HASH = HashingUtils::HashString("AnyStreet");
        static const int DividedStreetOnly_HASH = HashingUtils::HashString("DividedStreetOnly");


        SideOfStreetMatchingStrategy GetSideOfStreetMatchingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AnyStreet_HASH)
          {
            return SideOfStreetMatchingStrategy::AnyStreet;
          }
          else if (hashCode == DividedStreetOnly_HASH)
          {
            return SideOfStreetMatchingStrategy::DividedStreetOnly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SideOfStreetMatchingStrategy>(hashCode);
          }

          return SideOfStreetMatchingStrategy::NOT_SET;
        }

        Aws::String GetNameForSideOfStreetMatchingStrategy(SideOfStreetMatchingStrategy enumValue)
        {
          switch(enumValue)
          {
          case SideOfStreetMatchingStrategy::NOT_SET:
            return {};
          case SideOfStreetMatchingStrategy::AnyStreet:
            return "AnyStreet";
          case SideOfStreetMatchingStrategy::DividedStreetOnly:
            return "DividedStreetOnly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SideOfStreetMatchingStrategyMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
