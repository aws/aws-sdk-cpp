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

#include <aws/ce/model/TermInYears.h>
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
      namespace TermInYearsMapper
      {

        static const int ONE_YEAR_HASH = HashingUtils::HashString("ONE_YEAR");
        static const int THREE_YEARS_HASH = HashingUtils::HashString("THREE_YEARS");


        TermInYears GetTermInYearsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_YEAR_HASH)
          {
            return TermInYears::ONE_YEAR;
          }
          else if (hashCode == THREE_YEARS_HASH)
          {
            return TermInYears::THREE_YEARS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TermInYears>(hashCode);
          }

          return TermInYears::NOT_SET;
        }

        Aws::String GetNameForTermInYears(TermInYears enumValue)
        {
          switch(enumValue)
          {
          case TermInYears::ONE_YEAR:
            return "ONE_YEAR";
          case TermInYears::THREE_YEARS:
            return "THREE_YEARS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TermInYearsMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
