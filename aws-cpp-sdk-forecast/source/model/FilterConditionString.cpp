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

#include <aws/forecast/model/FilterConditionString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace FilterConditionStringMapper
      {

        static const int IS_HASH = HashingUtils::HashString("IS");
        static const int IS_NOT_HASH = HashingUtils::HashString("IS_NOT");


        FilterConditionString GetFilterConditionStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IS_HASH)
          {
            return FilterConditionString::IS;
          }
          else if (hashCode == IS_NOT_HASH)
          {
            return FilterConditionString::IS_NOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterConditionString>(hashCode);
          }

          return FilterConditionString::NOT_SET;
        }

        Aws::String GetNameForFilterConditionString(FilterConditionString enumValue)
        {
          switch(enumValue)
          {
          case FilterConditionString::IS:
            return "IS";
          case FilterConditionString::IS_NOT:
            return "IS_NOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterConditionStringMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
