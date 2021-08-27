/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DistanceUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace DistanceUnitMapper
      {

        static const int METRIC_HASH = HashingUtils::HashString("METRIC");
        static const int IMPERIAL_HASH = HashingUtils::HashString("IMPERIAL");


        DistanceUnit GetDistanceUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == METRIC_HASH)
          {
            return DistanceUnit::METRIC;
          }
          else if (hashCode == IMPERIAL_HASH)
          {
            return DistanceUnit::IMPERIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DistanceUnit>(hashCode);
          }

          return DistanceUnit::NOT_SET;
        }

        Aws::String GetNameForDistanceUnit(DistanceUnit enumValue)
        {
          switch(enumValue)
          {
          case DistanceUnit::METRIC:
            return "METRIC";
          case DistanceUnit::IMPERIAL:
            return "IMPERIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DistanceUnitMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
