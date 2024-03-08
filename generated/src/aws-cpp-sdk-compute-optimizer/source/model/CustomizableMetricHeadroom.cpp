/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/CustomizableMetricHeadroom.h>
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
      namespace CustomizableMetricHeadroomMapper
      {

        static const int PERCENT_30_HASH = HashingUtils::HashString("PERCENT_30");
        static const int PERCENT_20_HASH = HashingUtils::HashString("PERCENT_20");
        static const int PERCENT_0_HASH = HashingUtils::HashString("PERCENT_0");


        CustomizableMetricHeadroom GetCustomizableMetricHeadroomForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERCENT_30_HASH)
          {
            return CustomizableMetricHeadroom::PERCENT_30;
          }
          else if (hashCode == PERCENT_20_HASH)
          {
            return CustomizableMetricHeadroom::PERCENT_20;
          }
          else if (hashCode == PERCENT_0_HASH)
          {
            return CustomizableMetricHeadroom::PERCENT_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomizableMetricHeadroom>(hashCode);
          }

          return CustomizableMetricHeadroom::NOT_SET;
        }

        Aws::String GetNameForCustomizableMetricHeadroom(CustomizableMetricHeadroom enumValue)
        {
          switch(enumValue)
          {
          case CustomizableMetricHeadroom::NOT_SET:
            return {};
          case CustomizableMetricHeadroom::PERCENT_30:
            return "PERCENT_30";
          case CustomizableMetricHeadroom::PERCENT_20:
            return "PERCENT_20";
          case CustomizableMetricHeadroom::PERCENT_0:
            return "PERCENT_0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomizableMetricHeadroomMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
