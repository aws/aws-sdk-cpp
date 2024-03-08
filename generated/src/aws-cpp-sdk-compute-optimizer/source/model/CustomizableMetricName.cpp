/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/CustomizableMetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace CustomizableMetricNameMapper
      {

        static const int CpuUtilization_HASH = HashingUtils::HashString("CpuUtilization");


        CustomizableMetricName GetCustomizableMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CpuUtilization_HASH)
          {
            return CustomizableMetricName::CpuUtilization;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomizableMetricName>(hashCode);
          }

          return CustomizableMetricName::NOT_SET;
        }

        Aws::String GetNameForCustomizableMetricName(CustomizableMetricName enumValue)
        {
          switch(enumValue)
          {
          case CustomizableMetricName::NOT_SET:
            return {};
          case CustomizableMetricName::CpuUtilization:
            return "CpuUtilization";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomizableMetricNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
