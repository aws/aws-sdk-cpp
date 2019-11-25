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

#include <aws/dlm/model/RetentionIntervalUnitValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace RetentionIntervalUnitValuesMapper
      {

        static const int DAYS_HASH = HashingUtils::HashString("DAYS");
        static const int WEEKS_HASH = HashingUtils::HashString("WEEKS");
        static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");
        static const int YEARS_HASH = HashingUtils::HashString("YEARS");


        RetentionIntervalUnitValues GetRetentionIntervalUnitValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_HASH)
          {
            return RetentionIntervalUnitValues::DAYS;
          }
          else if (hashCode == WEEKS_HASH)
          {
            return RetentionIntervalUnitValues::WEEKS;
          }
          else if (hashCode == MONTHS_HASH)
          {
            return RetentionIntervalUnitValues::MONTHS;
          }
          else if (hashCode == YEARS_HASH)
          {
            return RetentionIntervalUnitValues::YEARS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetentionIntervalUnitValues>(hashCode);
          }

          return RetentionIntervalUnitValues::NOT_SET;
        }

        Aws::String GetNameForRetentionIntervalUnitValues(RetentionIntervalUnitValues enumValue)
        {
          switch(enumValue)
          {
          case RetentionIntervalUnitValues::DAYS:
            return "DAYS";
          case RetentionIntervalUnitValues::WEEKS:
            return "WEEKS";
          case RetentionIntervalUnitValues::MONTHS:
            return "MONTHS";
          case RetentionIntervalUnitValues::YEARS:
            return "YEARS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetentionIntervalUnitValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
