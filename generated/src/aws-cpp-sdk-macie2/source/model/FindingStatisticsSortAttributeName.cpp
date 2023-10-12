/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t groupKey_HASH = ConstExprHashingUtils::HashString("groupKey");
        static constexpr uint32_t count_HASH = ConstExprHashingUtils::HashString("count");


        FindingStatisticsSortAttributeName GetFindingStatisticsSortAttributeNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case FindingStatisticsSortAttributeName::NOT_SET:
            return {};
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
