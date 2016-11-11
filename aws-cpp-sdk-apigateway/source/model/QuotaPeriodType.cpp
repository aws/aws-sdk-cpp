/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int DAY_HASH = HashingUtils::HashString("DAY");
        static const int WEEK_HASH = HashingUtils::HashString("WEEK");
        static const int MONTH_HASH = HashingUtils::HashString("MONTH");


        QuotaPeriodType GetQuotaPeriodTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace QuotaPeriodTypeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
