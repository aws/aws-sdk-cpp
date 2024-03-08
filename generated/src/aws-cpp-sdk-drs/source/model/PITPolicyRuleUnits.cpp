/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/PITPolicyRuleUnits.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace PITPolicyRuleUnitsMapper
      {

        static const int MINUTE_HASH = HashingUtils::HashString("MINUTE");
        static const int HOUR_HASH = HashingUtils::HashString("HOUR");
        static const int DAY_HASH = HashingUtils::HashString("DAY");


        PITPolicyRuleUnits GetPITPolicyRuleUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MINUTE_HASH)
          {
            return PITPolicyRuleUnits::MINUTE;
          }
          else if (hashCode == HOUR_HASH)
          {
            return PITPolicyRuleUnits::HOUR;
          }
          else if (hashCode == DAY_HASH)
          {
            return PITPolicyRuleUnits::DAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PITPolicyRuleUnits>(hashCode);
          }

          return PITPolicyRuleUnits::NOT_SET;
        }

        Aws::String GetNameForPITPolicyRuleUnits(PITPolicyRuleUnits enumValue)
        {
          switch(enumValue)
          {
          case PITPolicyRuleUnits::NOT_SET:
            return {};
          case PITPolicyRuleUnits::MINUTE:
            return "MINUTE";
          case PITPolicyRuleUnits::HOUR:
            return "HOUR";
          case PITPolicyRuleUnits::DAY:
            return "DAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PITPolicyRuleUnitsMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
