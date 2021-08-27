/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/Telemetry.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace TelemetryMapper
      {

        static const int On_HASH = HashingUtils::HashString("On");
        static const int Off_HASH = HashingUtils::HashString("Off");


        Telemetry GetTelemetryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == On_HASH)
          {
            return Telemetry::On;
          }
          else if (hashCode == Off_HASH)
          {
            return Telemetry::Off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Telemetry>(hashCode);
          }

          return Telemetry::NOT_SET;
        }

        Aws::String GetNameForTelemetry(Telemetry enumValue)
        {
          switch(enumValue)
          {
          case Telemetry::On:
            return "On";
          case Telemetry::Off:
            return "Off";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TelemetryMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
