/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EnhancedInfrastructureMetrics.h>
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
      namespace EnhancedInfrastructureMetricsMapper
      {

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Inactive_HASH = ConstExprHashingUtils::HashString("Inactive");


        EnhancedInfrastructureMetrics GetEnhancedInfrastructureMetricsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return EnhancedInfrastructureMetrics::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return EnhancedInfrastructureMetrics::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnhancedInfrastructureMetrics>(hashCode);
          }

          return EnhancedInfrastructureMetrics::NOT_SET;
        }

        Aws::String GetNameForEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics enumValue)
        {
          switch(enumValue)
          {
          case EnhancedInfrastructureMetrics::NOT_SET:
            return {};
          case EnhancedInfrastructureMetrics::Active:
            return "Active";
          case EnhancedInfrastructureMetrics::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnhancedInfrastructureMetricsMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
