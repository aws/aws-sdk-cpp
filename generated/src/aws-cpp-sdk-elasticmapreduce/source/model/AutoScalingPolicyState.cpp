/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AutoScalingPolicyState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace AutoScalingPolicyStateMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t ATTACHING_HASH = ConstExprHashingUtils::HashString("ATTACHING");
        static constexpr uint32_t ATTACHED_HASH = ConstExprHashingUtils::HashString("ATTACHED");
        static constexpr uint32_t DETACHING_HASH = ConstExprHashingUtils::HashString("DETACHING");
        static constexpr uint32_t DETACHED_HASH = ConstExprHashingUtils::HashString("DETACHED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        AutoScalingPolicyState GetAutoScalingPolicyStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return AutoScalingPolicyState::PENDING;
          }
          else if (hashCode == ATTACHING_HASH)
          {
            return AutoScalingPolicyState::ATTACHING;
          }
          else if (hashCode == ATTACHED_HASH)
          {
            return AutoScalingPolicyState::ATTACHED;
          }
          else if (hashCode == DETACHING_HASH)
          {
            return AutoScalingPolicyState::DETACHING;
          }
          else if (hashCode == DETACHED_HASH)
          {
            return AutoScalingPolicyState::DETACHED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AutoScalingPolicyState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoScalingPolicyState>(hashCode);
          }

          return AutoScalingPolicyState::NOT_SET;
        }

        Aws::String GetNameForAutoScalingPolicyState(AutoScalingPolicyState enumValue)
        {
          switch(enumValue)
          {
          case AutoScalingPolicyState::NOT_SET:
            return {};
          case AutoScalingPolicyState::PENDING:
            return "PENDING";
          case AutoScalingPolicyState::ATTACHING:
            return "ATTACHING";
          case AutoScalingPolicyState::ATTACHED:
            return "ATTACHED";
          case AutoScalingPolicyState::DETACHING:
            return "DETACHING";
          case AutoScalingPolicyState::DETACHED:
            return "DETACHED";
          case AutoScalingPolicyState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoScalingPolicyStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
