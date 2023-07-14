/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/ScalingStatusCode.h>
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
      namespace ScalingStatusCodeMapper
      {

        static const int Inactive_HASH = HashingUtils::HashString("Inactive");
        static const int PartiallyActive_HASH = HashingUtils::HashString("PartiallyActive");
        static const int Active_HASH = HashingUtils::HashString("Active");


        ScalingStatusCode GetScalingStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Inactive_HASH)
          {
            return ScalingStatusCode::Inactive;
          }
          else if (hashCode == PartiallyActive_HASH)
          {
            return ScalingStatusCode::PartiallyActive;
          }
          else if (hashCode == Active_HASH)
          {
            return ScalingStatusCode::Active;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingStatusCode>(hashCode);
          }

          return ScalingStatusCode::NOT_SET;
        }

        Aws::String GetNameForScalingStatusCode(ScalingStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ScalingStatusCode::Inactive:
            return "Inactive";
          case ScalingStatusCode::PartiallyActive:
            return "PartiallyActive";
          case ScalingStatusCode::Active:
            return "Active";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingStatusCodeMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
