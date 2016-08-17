/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int PendingSpotBidPlacement_HASH = HashingUtils::HashString("PendingSpotBidPlacement");
        static const int WaitingForSpotInstanceRequestId_HASH = HashingUtils::HashString("WaitingForSpotInstanceRequestId");
        static const int WaitingForSpotInstanceId_HASH = HashingUtils::HashString("WaitingForSpotInstanceId");
        static const int WaitingForInstanceId_HASH = HashingUtils::HashString("WaitingForInstanceId");
        static const int PreInService_HASH = HashingUtils::HashString("PreInService");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int WaitingForELBConnectionDraining_HASH = HashingUtils::HashString("WaitingForELBConnectionDraining");
        static const int MidLifecycleAction_HASH = HashingUtils::HashString("MidLifecycleAction");
        static const int WaitingForInstanceWarmup_HASH = HashingUtils::HashString("WaitingForInstanceWarmup");
        static const int Successful_HASH = HashingUtils::HashString("Successful");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");


        ScalingActivityStatusCode GetScalingActivityStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ScalingActivityStatusCodeMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
