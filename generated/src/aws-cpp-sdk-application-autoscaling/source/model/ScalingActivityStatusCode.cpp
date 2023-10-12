/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/ScalingActivityStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace ScalingActivityStatusCodeMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Successful_HASH = ConstExprHashingUtils::HashString("Successful");
        static constexpr uint32_t Overridden_HASH = ConstExprHashingUtils::HashString("Overridden");
        static constexpr uint32_t Unfulfilled_HASH = ConstExprHashingUtils::HashString("Unfulfilled");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        ScalingActivityStatusCode GetScalingActivityStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ScalingActivityStatusCode::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ScalingActivityStatusCode::InProgress;
          }
          else if (hashCode == Successful_HASH)
          {
            return ScalingActivityStatusCode::Successful;
          }
          else if (hashCode == Overridden_HASH)
          {
            return ScalingActivityStatusCode::Overridden;
          }
          else if (hashCode == Unfulfilled_HASH)
          {
            return ScalingActivityStatusCode::Unfulfilled;
          }
          else if (hashCode == Failed_HASH)
          {
            return ScalingActivityStatusCode::Failed;
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
          case ScalingActivityStatusCode::Pending:
            return "Pending";
          case ScalingActivityStatusCode::InProgress:
            return "InProgress";
          case ScalingActivityStatusCode::Successful:
            return "Successful";
          case ScalingActivityStatusCode::Overridden:
            return "Overridden";
          case ScalingActivityStatusCode::Unfulfilled:
            return "Unfulfilled";
          case ScalingActivityStatusCode::Failed:
            return "Failed";
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
  } // namespace ApplicationAutoScaling
} // namespace Aws
