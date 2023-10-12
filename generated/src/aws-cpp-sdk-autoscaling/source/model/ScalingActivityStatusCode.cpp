/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/ScalingActivityStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace ScalingActivityStatusCodeMapper
      {

        static constexpr uint32_t PendingSpotBidPlacement_HASH = ConstExprHashingUtils::HashString("PendingSpotBidPlacement");
        static constexpr uint32_t WaitingForSpotInstanceRequestId_HASH = ConstExprHashingUtils::HashString("WaitingForSpotInstanceRequestId");
        static constexpr uint32_t WaitingForSpotInstanceId_HASH = ConstExprHashingUtils::HashString("WaitingForSpotInstanceId");
        static constexpr uint32_t WaitingForInstanceId_HASH = ConstExprHashingUtils::HashString("WaitingForInstanceId");
        static constexpr uint32_t PreInService_HASH = ConstExprHashingUtils::HashString("PreInService");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t WaitingForELBConnectionDraining_HASH = ConstExprHashingUtils::HashString("WaitingForELBConnectionDraining");
        static constexpr uint32_t MidLifecycleAction_HASH = ConstExprHashingUtils::HashString("MidLifecycleAction");
        static constexpr uint32_t WaitingForInstanceWarmup_HASH = ConstExprHashingUtils::HashString("WaitingForInstanceWarmup");
        static constexpr uint32_t Successful_HASH = ConstExprHashingUtils::HashString("Successful");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t WaitingForConnectionDraining_HASH = ConstExprHashingUtils::HashString("WaitingForConnectionDraining");


        ScalingActivityStatusCode GetScalingActivityStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PendingSpotBidPlacement_HASH)
          {
            return ScalingActivityStatusCode::PendingSpotBidPlacement;
          }
          else if (hashCode == WaitingForSpotInstanceRequestId_HASH)
          {
            return ScalingActivityStatusCode::WaitingForSpotInstanceRequestId;
          }
          else if (hashCode == WaitingForSpotInstanceId_HASH)
          {
            return ScalingActivityStatusCode::WaitingForSpotInstanceId;
          }
          else if (hashCode == WaitingForInstanceId_HASH)
          {
            return ScalingActivityStatusCode::WaitingForInstanceId;
          }
          else if (hashCode == PreInService_HASH)
          {
            return ScalingActivityStatusCode::PreInService;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ScalingActivityStatusCode::InProgress;
          }
          else if (hashCode == WaitingForELBConnectionDraining_HASH)
          {
            return ScalingActivityStatusCode::WaitingForELBConnectionDraining;
          }
          else if (hashCode == MidLifecycleAction_HASH)
          {
            return ScalingActivityStatusCode::MidLifecycleAction;
          }
          else if (hashCode == WaitingForInstanceWarmup_HASH)
          {
            return ScalingActivityStatusCode::WaitingForInstanceWarmup;
          }
          else if (hashCode == Successful_HASH)
          {
            return ScalingActivityStatusCode::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return ScalingActivityStatusCode::Failed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return ScalingActivityStatusCode::Cancelled;
          }
          else if (hashCode == WaitingForConnectionDraining_HASH)
          {
            return ScalingActivityStatusCode::WaitingForConnectionDraining;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingActivityStatusCode>(hashCode);
          }

          return ScalingActivityStatusCode::NOT_SET;
        }

        Aws::String GetNameForScalingActivityStatusCode(ScalingActivityStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ScalingActivityStatusCode::NOT_SET:
            return {};
          case ScalingActivityStatusCode::PendingSpotBidPlacement:
            return "PendingSpotBidPlacement";
          case ScalingActivityStatusCode::WaitingForSpotInstanceRequestId:
            return "WaitingForSpotInstanceRequestId";
          case ScalingActivityStatusCode::WaitingForSpotInstanceId:
            return "WaitingForSpotInstanceId";
          case ScalingActivityStatusCode::WaitingForInstanceId:
            return "WaitingForInstanceId";
          case ScalingActivityStatusCode::PreInService:
            return "PreInService";
          case ScalingActivityStatusCode::InProgress:
            return "InProgress";
          case ScalingActivityStatusCode::WaitingForELBConnectionDraining:
            return "WaitingForELBConnectionDraining";
          case ScalingActivityStatusCode::MidLifecycleAction:
            return "MidLifecycleAction";
          case ScalingActivityStatusCode::WaitingForInstanceWarmup:
            return "WaitingForInstanceWarmup";
          case ScalingActivityStatusCode::Successful:
            return "Successful";
          case ScalingActivityStatusCode::Failed:
            return "Failed";
          case ScalingActivityStatusCode::Cancelled:
            return "Cancelled";
          case ScalingActivityStatusCode::WaitingForConnectionDraining:
            return "WaitingForConnectionDraining";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingActivityStatusCodeMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
