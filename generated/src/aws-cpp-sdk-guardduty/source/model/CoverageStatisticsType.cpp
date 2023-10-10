/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageStatisticsType.h>
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
      namespace CoverageStatisticsTypeMapper
      {

        static const int COUNT_BY_RESOURCE_TYPE_HASH = HashingUtils::HashString("COUNT_BY_RESOURCE_TYPE");
        static const int COUNT_BY_COVERAGE_STATUS_HASH = HashingUtils::HashString("COUNT_BY_COVERAGE_STATUS");


        CoverageStatisticsType GetCoverageStatisticsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COUNT_BY_RESOURCE_TYPE_HASH)
          {
            return CoverageStatisticsType::COUNT_BY_RESOURCE_TYPE;
          }
          else if (hashCode == COUNT_BY_COVERAGE_STATUS_HASH)
          {
            return CoverageStatisticsType::COUNT_BY_COVERAGE_STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoverageStatisticsType>(hashCode);
          }

          return CoverageStatisticsType::NOT_SET;
        }

        Aws::String GetNameForCoverageStatisticsType(CoverageStatisticsType enumValue)
        {
          switch(enumValue)
          {
          case CoverageStatisticsType::NOT_SET:
            return {};
          case CoverageStatisticsType::COUNT_BY_RESOURCE_TYPE:
            return "COUNT_BY_RESOURCE_TYPE";
          case CoverageStatisticsType::COUNT_BY_COVERAGE_STATUS:
            return "COUNT_BY_COVERAGE_STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CoverageStatisticsTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
