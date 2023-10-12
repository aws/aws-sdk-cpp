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

        static constexpr uint32_t MINUTE_HASH = ConstExprHashingUtils::HashString("MINUTE");
        static constexpr uint32_t HOUR_HASH = ConstExprHashingUtils::HashString("HOUR");
        static constexpr uint32_t DAY_HASH = ConstExprHashingUtils::HashString("DAY");


        PITPolicyRuleUnits GetPITPolicyRuleUnitsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
