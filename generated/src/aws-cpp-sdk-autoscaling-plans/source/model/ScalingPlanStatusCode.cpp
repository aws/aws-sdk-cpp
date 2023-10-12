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

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t ActiveWithProblems_HASH = ConstExprHashingUtils::HashString("ActiveWithProblems");
        static constexpr uint32_t CreationInProgress_HASH = ConstExprHashingUtils::HashString("CreationInProgress");
        static constexpr uint32_t CreationFailed_HASH = ConstExprHashingUtils::HashString("CreationFailed");
        static constexpr uint32_t DeletionInProgress_HASH = ConstExprHashingUtils::HashString("DeletionInProgress");
        static constexpr uint32_t DeletionFailed_HASH = ConstExprHashingUtils::HashString("DeletionFailed");
        static constexpr uint32_t UpdateInProgress_HASH = ConstExprHashingUtils::HashString("UpdateInProgress");
        static constexpr uint32_t UpdateFailed_HASH = ConstExprHashingUtils::HashString("UpdateFailed");


        ScalingPlanStatusCode GetScalingPlanStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ScalingPlanStatusCode::NOT_SET:
            return {};
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
