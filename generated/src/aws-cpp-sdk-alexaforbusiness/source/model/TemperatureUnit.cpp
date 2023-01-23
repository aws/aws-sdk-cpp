/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/TemperatureUnit.h>
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
      namespace TemperatureUnitMapper
      {

        static const int FAHRENHEIT_HASH = HashingUtils::HashString("FAHRENHEIT");
        static const int CELSIUS_HASH = HashingUtils::HashString("CELSIUS");


        TemperatureUnit GetTemperatureUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAHRENHEIT_HASH)
          {
            return TemperatureUnit::FAHRENHEIT;
          }
          else if (hashCode == CELSIUS_HASH)
          {
            return TemperatureUnit::CELSIUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemperatureUnit>(hashCode);
          }

          return TemperatureUnit::NOT_SET;
        }

        Aws::String GetNameForTemperatureUnit(TemperatureUnit enumValue)
        {
          switch(enumValue)
          {
          case TemperatureUnit::FAHRENHEIT:
            return "FAHRENHEIT";
          case TemperatureUnit::CELSIUS:
            return "CELSIUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemperatureUnitMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
