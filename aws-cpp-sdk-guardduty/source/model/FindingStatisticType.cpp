/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FindingStatisticType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace FindingStatisticTypeMapper
      {

        static const int COUNT_BY_SEVERITY_HASH = HashingUtils::HashString("COUNT_BY_SEVERITY");


        FindingStatisticType GetFindingStatisticTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COUNT_BY_SEVERITY_HASH)
          {
            return FindingStatisticType::COUNT_BY_SEVERITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingStatisticType>(hashCode);
          }

          return FindingStatisticType::NOT_SET;
        }

        Aws::String GetNameForFindingStatisticType(FindingStatisticType enumValue)
        {
          switch(enumValue)
          {
          case FindingStatisticType::COUNT_BY_SEVERITY:
            return "COUNT_BY_SEVERITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingStatisticTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
