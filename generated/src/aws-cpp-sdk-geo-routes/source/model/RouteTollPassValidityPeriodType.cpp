/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollPassValidityPeriodType.h>
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
      namespace RouteTollPassValidityPeriodTypeMapper
      {

        static const int Annual_HASH = HashingUtils::HashString("Annual");
        static const int Days_HASH = HashingUtils::HashString("Days");
        static const int ExtendedAnnual_HASH = HashingUtils::HashString("ExtendedAnnual");
        static const int Minutes_HASH = HashingUtils::HashString("Minutes");
        static const int Months_HASH = HashingUtils::HashString("Months");


        RouteTollPassValidityPeriodType GetRouteTollPassValidityPeriodTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Annual_HASH)
          {
            return RouteTollPassValidityPeriodType::Annual;
          }
          else if (hashCode == Days_HASH)
          {
            return RouteTollPassValidityPeriodType::Days;
          }
          else if (hashCode == ExtendedAnnual_HASH)
          {
            return RouteTollPassValidityPeriodType::ExtendedAnnual;
          }
          else if (hashCode == Minutes_HASH)
          {
            return RouteTollPassValidityPeriodType::Minutes;
          }
          else if (hashCode == Months_HASH)
          {
            return RouteTollPassValidityPeriodType::Months;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteTollPassValidityPeriodType>(hashCode);
          }

          return RouteTollPassValidityPeriodType::NOT_SET;
        }

        Aws::String GetNameForRouteTollPassValidityPeriodType(RouteTollPassValidityPeriodType enumValue)
        {
          switch(enumValue)
          {
          case RouteTollPassValidityPeriodType::NOT_SET:
            return {};
          case RouteTollPassValidityPeriodType::Annual:
            return "Annual";
          case RouteTollPassValidityPeriodType::Days:
            return "Days";
          case RouteTollPassValidityPeriodType::ExtendedAnnual:
            return "ExtendedAnnual";
          case RouteTollPassValidityPeriodType::Minutes:
            return "Minutes";
          case RouteTollPassValidityPeriodType::Months:
            return "Months";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteTollPassValidityPeriodTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
