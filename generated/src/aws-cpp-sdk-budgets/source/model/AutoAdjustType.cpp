/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/AutoAdjustType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace AutoAdjustTypeMapper
      {

        static const int HISTORICAL_HASH = HashingUtils::HashString("HISTORICAL");
        static const int FORECAST_HASH = HashingUtils::HashString("FORECAST");


        AutoAdjustType GetAutoAdjustTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HISTORICAL_HASH)
          {
            return AutoAdjustType::HISTORICAL;
          }
          else if (hashCode == FORECAST_HASH)
          {
            return AutoAdjustType::FORECAST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoAdjustType>(hashCode);
          }

          return AutoAdjustType::NOT_SET;
        }

        Aws::String GetNameForAutoAdjustType(AutoAdjustType enumValue)
        {
          switch(enumValue)
          {
          case AutoAdjustType::NOT_SET:
            return {};
          case AutoAdjustType::HISTORICAL:
            return "HISTORICAL";
          case AutoAdjustType::FORECAST:
            return "FORECAST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoAdjustTypeMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
