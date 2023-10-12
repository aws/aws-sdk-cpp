/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/QuotaPeriodType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace QuotaPeriodTypeMapper
      {

        static constexpr uint32_t DAY_HASH = ConstExprHashingUtils::HashString("DAY");
        static constexpr uint32_t WEEK_HASH = ConstExprHashingUtils::HashString("WEEK");
        static constexpr uint32_t MONTH_HASH = ConstExprHashingUtils::HashString("MONTH");


        QuotaPeriodType GetQuotaPeriodTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAY_HASH)
          {
            return QuotaPeriodType::DAY;
          }
          else if (hashCode == WEEK_HASH)
          {
            return QuotaPeriodType::WEEK;
          }
          else if (hashCode == MONTH_HASH)
          {
            return QuotaPeriodType::MONTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuotaPeriodType>(hashCode);
          }

          return QuotaPeriodType::NOT_SET;
        }

        Aws::String GetNameForQuotaPeriodType(QuotaPeriodType enumValue)
        {
          switch(enumValue)
          {
          case QuotaPeriodType::NOT_SET:
            return {};
          case QuotaPeriodType::DAY:
            return "DAY";
          case QuotaPeriodType::WEEK:
            return "WEEK";
          case QuotaPeriodType::MONTH:
            return "MONTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuotaPeriodTypeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
