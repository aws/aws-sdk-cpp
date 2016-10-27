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
#include <aws/budgets/model/TimeUnit.h>
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
      namespace TimeUnitMapper
      {

        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
        static const int QUARTERLY_HASH = HashingUtils::HashString("QUARTERLY");
        static const int ANNUALLY_HASH = HashingUtils::HashString("ANNUALLY");


        TimeUnit GetTimeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONTHLY_HASH)
          {
            return TimeUnit::MONTHLY;
          }
          else if (hashCode == QUARTERLY_HASH)
          {
            return TimeUnit::QUARTERLY;
          }
          else if (hashCode == ANNUALLY_HASH)
          {
            return TimeUnit::ANNUALLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeUnit>(hashCode);
          }

          return TimeUnit::NOT_SET;
        }

        Aws::String GetNameForTimeUnit(TimeUnit enumValue)
        {
          switch(enumValue)
          {
          case TimeUnit::MONTHLY:
            return "MONTHLY";
          case TimeUnit::QUARTERLY:
            return "QUARTERLY";
          case TimeUnit::ANNUALLY:
            return "ANNUALLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TimeUnitMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
