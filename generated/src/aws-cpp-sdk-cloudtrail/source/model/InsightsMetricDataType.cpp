/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/InsightsMetricDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace InsightsMetricDataTypeMapper
      {

        static const int FillWithZeros_HASH = HashingUtils::HashString("FillWithZeros");
        static const int NonZeroData_HASH = HashingUtils::HashString("NonZeroData");


        InsightsMetricDataType GetInsightsMetricDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FillWithZeros_HASH)
          {
            return InsightsMetricDataType::FillWithZeros;
          }
          else if (hashCode == NonZeroData_HASH)
          {
            return InsightsMetricDataType::NonZeroData;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightsMetricDataType>(hashCode);
          }

          return InsightsMetricDataType::NOT_SET;
        }

        Aws::String GetNameForInsightsMetricDataType(InsightsMetricDataType enumValue)
        {
          switch(enumValue)
          {
          case InsightsMetricDataType::NOT_SET:
            return {};
          case InsightsMetricDataType::FillWithZeros:
            return "FillWithZeros";
          case InsightsMetricDataType::NonZeroData:
            return "NonZeroData";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightsMetricDataTypeMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
