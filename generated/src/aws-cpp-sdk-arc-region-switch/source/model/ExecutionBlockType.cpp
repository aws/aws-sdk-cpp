/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ExecutionBlockType.h>
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
      namespace ExecutionBlockTypeMapper
      {

        static const int CustomActionLambda_HASH = HashingUtils::HashString("CustomActionLambda");
        static const int ManualApproval_HASH = HashingUtils::HashString("ManualApproval");
        static const int AuroraGlobalDatabase_HASH = HashingUtils::HashString("AuroraGlobalDatabase");
        static const int EC2AutoScaling_HASH = HashingUtils::HashString("EC2AutoScaling");
        static const int ARCRoutingControl_HASH = HashingUtils::HashString("ARCRoutingControl");
        static const int ARCRegionSwitchPlan_HASH = HashingUtils::HashString("ARCRegionSwitchPlan");
        static const int Parallel_HASH = HashingUtils::HashString("Parallel");
        static const int ECSServiceScaling_HASH = HashingUtils::HashString("ECSServiceScaling");
        static const int EKSResourceScaling_HASH = HashingUtils::HashString("EKSResourceScaling");
        static const int Route53HealthCheck_HASH = HashingUtils::HashString("Route53HealthCheck");


        ExecutionBlockType GetExecutionBlockTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CustomActionLambda_HASH)
          {
            return ExecutionBlockType::CustomActionLambda;
          }
          else if (hashCode == ManualApproval_HASH)
          {
            return ExecutionBlockType::ManualApproval;
          }
          else if (hashCode == AuroraGlobalDatabase_HASH)
          {
            return ExecutionBlockType::AuroraGlobalDatabase;
          }
          else if (hashCode == EC2AutoScaling_HASH)
          {
            return ExecutionBlockType::EC2AutoScaling;
          }
          else if (hashCode == ARCRoutingControl_HASH)
          {
            return ExecutionBlockType::ARCRoutingControl;
          }
          else if (hashCode == ARCRegionSwitchPlan_HASH)
          {
            return ExecutionBlockType::ARCRegionSwitchPlan;
          }
          else if (hashCode == Parallel_HASH)
          {
            return ExecutionBlockType::Parallel;
          }
          else if (hashCode == ECSServiceScaling_HASH)
          {
            return ExecutionBlockType::ECSServiceScaling;
          }
          else if (hashCode == EKSResourceScaling_HASH)
          {
            return ExecutionBlockType::EKSResourceScaling;
          }
          else if (hashCode == Route53HealthCheck_HASH)
          {
            return ExecutionBlockType::Route53HealthCheck;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionBlockType>(hashCode);
          }

          return ExecutionBlockType::NOT_SET;
        }

        Aws::String GetNameForExecutionBlockType(ExecutionBlockType enumValue)
        {
          switch(enumValue)
          {
          case ExecutionBlockType::NOT_SET:
            return {};
          case ExecutionBlockType::CustomActionLambda:
            return "CustomActionLambda";
          case ExecutionBlockType::ManualApproval:
            return "ManualApproval";
          case ExecutionBlockType::AuroraGlobalDatabase:
            return "AuroraGlobalDatabase";
          case ExecutionBlockType::EC2AutoScaling:
            return "EC2AutoScaling";
          case ExecutionBlockType::ARCRoutingControl:
            return "ARCRoutingControl";
          case ExecutionBlockType::ARCRegionSwitchPlan:
            return "ARCRegionSwitchPlan";
          case ExecutionBlockType::Parallel:
            return "Parallel";
          case ExecutionBlockType::ECSServiceScaling:
            return "ECSServiceScaling";
          case ExecutionBlockType::EKSResourceScaling:
            return "EKSResourceScaling";
          case ExecutionBlockType::Route53HealthCheck:
            return "Route53HealthCheck";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionBlockTypeMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
