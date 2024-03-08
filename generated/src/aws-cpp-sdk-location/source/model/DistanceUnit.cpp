/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DistanceUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace DistanceUnitMapper
      {

        static const int Kilometers_HASH = HashingUtils::HashString("Kilometers");
        static const int Miles_HASH = HashingUtils::HashString("Miles");


        DistanceUnit GetDistanceUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Kilometers_HASH)
          {
            return DistanceUnit::Kilometers;
          }
          else if (hashCode == Miles_HASH)
          {
            return DistanceUnit::Miles;
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
          case DistanceUnit::NOT_SET:
            return {};
          case DistanceUnit::Kilometers:
            return "Kilometers";
          case DistanceUnit::Miles:
            return "Miles";
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
  } // namespace LocationService
} // namespace Aws
