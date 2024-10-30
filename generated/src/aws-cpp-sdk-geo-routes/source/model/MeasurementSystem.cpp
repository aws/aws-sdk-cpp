/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/MeasurementSystem.h>
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
      namespace MeasurementSystemMapper
      {

        static const int Metric_HASH = HashingUtils::HashString("Metric");
        static const int Imperial_HASH = HashingUtils::HashString("Imperial");


        MeasurementSystem GetMeasurementSystemForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Metric_HASH)
          {
            return MeasurementSystem::Metric;
          }
          else if (hashCode == Imperial_HASH)
          {
            return MeasurementSystem::Imperial;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MeasurementSystem>(hashCode);
          }

          return MeasurementSystem::NOT_SET;
        }

        Aws::String GetNameForMeasurementSystem(MeasurementSystem enumValue)
        {
          switch(enumValue)
          {
          case MeasurementSystem::NOT_SET:
            return {};
          case MeasurementSystem::Metric:
            return "Metric";
          case MeasurementSystem::Imperial:
            return "Imperial";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MeasurementSystemMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
