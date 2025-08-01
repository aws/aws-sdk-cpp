/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/EcsCapacityMonitoringApproach.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace EcsCapacityMonitoringApproachMapper
      {

        static const int sampledMaxInLast24Hours_HASH = HashingUtils::HashString("sampledMaxInLast24Hours");
        static const int containerInsightsMaxInLast24Hours_HASH = HashingUtils::HashString("containerInsightsMaxInLast24Hours");


        EcsCapacityMonitoringApproach GetEcsCapacityMonitoringApproachForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sampledMaxInLast24Hours_HASH)
          {
            return EcsCapacityMonitoringApproach::sampledMaxInLast24Hours;
          }
          else if (hashCode == containerInsightsMaxInLast24Hours_HASH)
          {
            return EcsCapacityMonitoringApproach::containerInsightsMaxInLast24Hours;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EcsCapacityMonitoringApproach>(hashCode);
          }

          return EcsCapacityMonitoringApproach::NOT_SET;
        }

        Aws::String GetNameForEcsCapacityMonitoringApproach(EcsCapacityMonitoringApproach enumValue)
        {
          switch(enumValue)
          {
          case EcsCapacityMonitoringApproach::NOT_SET:
            return {};
          case EcsCapacityMonitoringApproach::sampledMaxInLast24Hours:
            return "sampledMaxInLast24Hours";
          case EcsCapacityMonitoringApproach::containerInsightsMaxInLast24Hours:
            return "containerInsightsMaxInLast24Hours";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EcsCapacityMonitoringApproachMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
