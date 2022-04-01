/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/PriceUnits.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace PriceUnitsMapper
      {

        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");


        PriceUnits GetPriceUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURLY_HASH)
          {
            return PriceUnits::HOURLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PriceUnits>(hashCode);
          }

          return PriceUnits::NOT_SET;
        }

        Aws::String GetNameForPriceUnits(PriceUnits enumValue)
        {
          switch(enumValue)
          {
          case PriceUnits::HOURLY:
            return "HOURLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PriceUnitsMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
