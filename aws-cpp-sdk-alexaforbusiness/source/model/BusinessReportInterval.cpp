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

#include <aws/alexaforbusiness/model/BusinessReportInterval.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace BusinessReportIntervalMapper
      {

        static const int ONE_DAY_HASH = HashingUtils::HashString("ONE_DAY");
        static const int ONE_WEEK_HASH = HashingUtils::HashString("ONE_WEEK");


        BusinessReportInterval GetBusinessReportIntervalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_DAY_HASH)
          {
            return BusinessReportInterval::ONE_DAY;
          }
          else if (hashCode == ONE_WEEK_HASH)
          {
            return BusinessReportInterval::ONE_WEEK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BusinessReportInterval>(hashCode);
          }

          return BusinessReportInterval::NOT_SET;
        }

        Aws::String GetNameForBusinessReportInterval(BusinessReportInterval enumValue)
        {
          switch(enumValue)
          {
          case BusinessReportInterval::ONE_DAY:
            return "ONE_DAY";
          case BusinessReportInterval::ONE_WEEK:
            return "ONE_WEEK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BusinessReportIntervalMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
