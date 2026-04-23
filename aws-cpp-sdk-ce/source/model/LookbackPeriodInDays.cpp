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

#include <aws/ce/model/LookbackPeriodInDays.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace LookbackPeriodInDaysMapper
      {

        static const int SEVEN_DAYS_HASH = HashingUtils::HashString("SEVEN_DAYS");
        static const int THIRTY_DAYS_HASH = HashingUtils::HashString("THIRTY_DAYS");
        static const int SIXTY_DAYS_HASH = HashingUtils::HashString("SIXTY_DAYS");


        LookbackPeriodInDays GetLookbackPeriodInDaysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEVEN_DAYS_HASH)
          {
            return LookbackPeriodInDays::SEVEN_DAYS;
          }
          else if (hashCode == THIRTY_DAYS_HASH)
          {
            return LookbackPeriodInDays::THIRTY_DAYS;
          }
          else if (hashCode == SIXTY_DAYS_HASH)
          {
            return LookbackPeriodInDays::SIXTY_DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LookbackPeriodInDays>(hashCode);
          }

          return LookbackPeriodInDays::NOT_SET;
        }

        Aws::String GetNameForLookbackPeriodInDays(LookbackPeriodInDays enumValue)
        {
          switch(enumValue)
          {
          case LookbackPeriodInDays::SEVEN_DAYS:
            return "SEVEN_DAYS";
          case LookbackPeriodInDays::THIRTY_DAYS:
            return "THIRTY_DAYS";
          case LookbackPeriodInDays::SIXTY_DAYS:
            return "SIXTY_DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LookbackPeriodInDaysMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
