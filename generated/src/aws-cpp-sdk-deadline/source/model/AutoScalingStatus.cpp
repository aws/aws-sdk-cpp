/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AutoScalingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace AutoScalingStatusMapper
      {

        static const int GROWING_HASH = HashingUtils::HashString("GROWING");
        static const int STEADY_HASH = HashingUtils::HashString("STEADY");
        static const int SHRINKING_HASH = HashingUtils::HashString("SHRINKING");


        AutoScalingStatus GetAutoScalingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GROWING_HASH)
          {
            return AutoScalingStatus::GROWING;
          }
          else if (hashCode == STEADY_HASH)
          {
            return AutoScalingStatus::STEADY;
          }
          else if (hashCode == SHRINKING_HASH)
          {
            return AutoScalingStatus::SHRINKING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoScalingStatus>(hashCode);
          }

          return AutoScalingStatus::NOT_SET;
        }

        Aws::String GetNameForAutoScalingStatus(AutoScalingStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoScalingStatus::NOT_SET:
            return {};
          case AutoScalingStatus::GROWING:
            return "GROWING";
          case AutoScalingStatus::STEADY:
            return "STEADY";
          case AutoScalingStatus::SHRINKING:
            return "SHRINKING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoScalingStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
