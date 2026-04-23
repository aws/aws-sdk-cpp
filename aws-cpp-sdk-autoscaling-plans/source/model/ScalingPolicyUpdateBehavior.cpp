/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
