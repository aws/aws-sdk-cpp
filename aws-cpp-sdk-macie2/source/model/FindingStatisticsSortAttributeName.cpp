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

#include <aws/macie2/model/FindingStatisticsSortAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace FindingStatisticsSortAttributeNameMapper
      {

        static const int groupKey_HASH = HashingUtils::HashString("groupKey");
        static const int count_HASH = HashingUtils::HashString("count");


        FindingStatisticsSortAttributeName GetFindingStatisticsSortAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == groupKey_HASH)
          {
            return FindingStatisticsSortAttributeName::groupKey;
          }
          else if (hashCode == count_HASH)
          {
            return FindingStatisticsSortAttributeName::count;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingStatisticsSortAttributeName>(hashCode);
          }

          return FindingStatisticsSortAttributeName::NOT_SET;
        }

        Aws::String GetNameForFindingStatisticsSortAttributeName(FindingStatisticsSortAttributeName enumValue)
        {
          switch(enumValue)
          {
          case FindingStatisticsSortAttributeName::groupKey:
            return "groupKey";
          case FindingStatisticsSortAttributeName::count:
            return "count";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingStatisticsSortAttributeNameMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
