/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/ScalingPlanStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScalingPlans
  {
    namespace Model
    {
      namespace ScalingPlanStatusCodeMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int ActiveWithProblems_HASH = HashingUtils::HashString("ActiveWithProblems");
        static const int CreationInProgress_HASH = HashingUtils::HashString("CreationInProgress");
        static const int CreationFailed_HASH = HashingUtils::HashString("CreationFailed");
        static const int DeletionInProgress_HASH = HashingUtils::HashString("DeletionInProgress");
        static const int DeletionFailed_HASH = HashingUtils::HashString("DeletionFailed");
        static const int UpdateInProgress_HASH = HashingUtils::HashString("UpdateInProgress");
        static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");


        ScalingPlanStatusCode GetScalingPlanStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return ScalingPlanStatusCode::Active;
          }
          else if (hashCode == ActiveWithProblems_HASH)
          {
            return ScalingPlanStatusCode::ActiveWithProblems;
          }
          else if (hashCode == CreationInProgress_HASH)
          {
            return ScalingPlanStatusCode::CreationInProgress;
          }
          else if (hashCode == CreationFailed_HASH)
          {
            return ScalingPlanStatusCode::CreationFailed;
          }
          else if (hashCode == DeletionInProgress_HASH)
          {
            return ScalingPlanStatusCode::DeletionInProgress;
          }
          else if (hashCode == DeletionFailed_HASH)
          {
            return ScalingPlanStatusCode::DeletionFailed;
          }
          else if (hashCode == UpdateInProgress_HASH)
          {
            return ScalingPlanStatusCode::UpdateInProgress;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return ScalingPlanStatusCode::UpdateFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingPlanStatusCode>(hashCode);
          }

          return ScalingPlanStatusCode::NOT_SET;
        }

        Aws::String GetNameForScalingPlanStatusCode(ScalingPlanStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ScalingPlanStatusCode::Active:
            return "Active";
          case ScalingPlanStatusCode::ActiveWithProblems:
            return "ActiveWithProblems";
          case ScalingPlanStatusCode::CreationInProgress:
            return "CreationInProgress";
          case ScalingPlanStatusCode::CreationFailed:
            return "CreationFailed";
          case ScalingPlanStatusCode::DeletionInProgress:
            return "DeletionInProgress";
          case ScalingPlanStatusCode::DeletionFailed:
            return "DeletionFailed";
          case ScalingPlanStatusCode::UpdateInProgress:
            return "UpdateInProgress";
          case ScalingPlanStatusCode::UpdateFailed:
            return "UpdateFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingPlanStatusCodeMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
