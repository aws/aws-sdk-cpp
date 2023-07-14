/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/ScalingPolicyUpdateBehavior.h>
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
      namespace ScalingPolicyUpdateBehaviorMapper
      {

        static const int KeepExternalPolicies_HASH = HashingUtils::HashString("KeepExternalPolicies");
        static const int ReplaceExternalPolicies_HASH = HashingUtils::HashString("ReplaceExternalPolicies");


        ScalingPolicyUpdateBehavior GetScalingPolicyUpdateBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KeepExternalPolicies_HASH)
          {
            return ScalingPolicyUpdateBehavior::KeepExternalPolicies;
          }
          else if (hashCode == ReplaceExternalPolicies_HASH)
          {
            return ScalingPolicyUpdateBehavior::ReplaceExternalPolicies;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingPolicyUpdateBehavior>(hashCode);
          }

          return ScalingPolicyUpdateBehavior::NOT_SET;
        }

        Aws::String GetNameForScalingPolicyUpdateBehavior(ScalingPolicyUpdateBehavior enumValue)
        {
          switch(enumValue)
          {
          case ScalingPolicyUpdateBehavior::KeepExternalPolicies:
            return "KeepExternalPolicies";
          case ScalingPolicyUpdateBehavior::ReplaceExternalPolicies:
            return "ReplaceExternalPolicies";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingPolicyUpdateBehaviorMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
