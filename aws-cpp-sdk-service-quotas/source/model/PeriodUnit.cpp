/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/service-quotas/model/PeriodUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceQuotas
  {
    namespace Model
    {
      namespace PeriodUnitMapper
      {

        static const int MICROSECOND_HASH = HashingUtils::HashString("MICROSECOND");
        static const int MILLISECOND_HASH = HashingUtils::HashString("MILLISECOND");
        static const int SECOND_HASH = HashingUtils::HashString("SECOND");
        static const int MINUTE_HASH = HashingUtils::HashString("MINUTE");
        static const int HOUR_HASH = HashingUtils::HashString("HOUR");
        static const int DAY_HASH = HashingUtils::HashString("DAY");
        static const int WEEK_HASH = HashingUtils::HashString("WEEK");


        PeriodUnit GetPeriodUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MICROSECOND_HASH)
          {
            return PeriodUnit::MICROSECOND;
          }
          else if (hashCode == MILLISECOND_HASH)
          {
            return PeriodUnit::MILLISECOND;
          }
          else if (hashCode == SECOND_HASH)
          {
            return PeriodUnit::SECOND;
          }
          else if (hashCode == MINUTE_HASH)
          {
            return PeriodUnit::MINUTE;
          }
          else if (hashCode == HOUR_HASH)
          {
            return PeriodUnit::HOUR;
          }
          else if (hashCode == DAY_HASH)
          {
            return PeriodUnit::DAY;
          }
          else if (hashCode == WEEK_HASH)
          {
            return PeriodUnit::WEEK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PeriodUnit>(hashCode);
          }

          return PeriodUnit::NOT_SET;
        }

        Aws::String GetNameForPeriodUnit(PeriodUnit enumValue)
        {
          switch(enumValue)
          {
          case PeriodUnit::MICROSECOND:
            return "MICROSECOND";
          case PeriodUnit::MILLISECOND:
            return "MILLISECOND";
          case PeriodUnit::SECOND:
            return "SECOND";
          case PeriodUnit::MINUTE:
            return "MINUTE";
          case PeriodUnit::HOUR:
            return "HOUR";
          case PeriodUnit::DAY:
            return "DAY";
          case PeriodUnit::WEEK:
            return "WEEK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeriodUnitMapper
    } // namespace Model
  } // namespace ServiceQuotas
} // namespace Aws
