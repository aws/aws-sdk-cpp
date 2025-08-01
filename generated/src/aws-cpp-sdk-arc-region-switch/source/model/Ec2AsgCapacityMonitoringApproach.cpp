/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Ec2AsgCapacityMonitoringApproach.h>
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
      namespace Ec2AsgCapacityMonitoringApproachMapper
      {

        static const int sampledMaxInLast24Hours_HASH = HashingUtils::HashString("sampledMaxInLast24Hours");
        static const int autoscalingMaxInLast24Hours_HASH = HashingUtils::HashString("autoscalingMaxInLast24Hours");


        Ec2AsgCapacityMonitoringApproach GetEc2AsgCapacityMonitoringApproachForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sampledMaxInLast24Hours_HASH)
          {
            return Ec2AsgCapacityMonitoringApproach::sampledMaxInLast24Hours;
          }
          else if (hashCode == autoscalingMaxInLast24Hours_HASH)
          {
            return Ec2AsgCapacityMonitoringApproach::autoscalingMaxInLast24Hours;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ec2AsgCapacityMonitoringApproach>(hashCode);
          }

          return Ec2AsgCapacityMonitoringApproach::NOT_SET;
        }

        Aws::String GetNameForEc2AsgCapacityMonitoringApproach(Ec2AsgCapacityMonitoringApproach enumValue)
        {
          switch(enumValue)
          {
          case Ec2AsgCapacityMonitoringApproach::NOT_SET:
            return {};
          case Ec2AsgCapacityMonitoringApproach::sampledMaxInLast24Hours:
            return "sampledMaxInLast24Hours";
          case Ec2AsgCapacityMonitoringApproach::autoscalingMaxInLast24Hours:
            return "autoscalingMaxInLast24Hours";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ec2AsgCapacityMonitoringApproachMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
