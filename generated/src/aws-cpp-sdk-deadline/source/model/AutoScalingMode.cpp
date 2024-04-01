/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AutoScalingMode.h>
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
      namespace AutoScalingModeMapper
      {

        static const int NO_SCALING_HASH = HashingUtils::HashString("NO_SCALING");
        static const int EVENT_BASED_AUTO_SCALING_HASH = HashingUtils::HashString("EVENT_BASED_AUTO_SCALING");


        AutoScalingMode GetAutoScalingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_SCALING_HASH)
          {
            return AutoScalingMode::NO_SCALING;
          }
          else if (hashCode == EVENT_BASED_AUTO_SCALING_HASH)
          {
            return AutoScalingMode::EVENT_BASED_AUTO_SCALING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoScalingMode>(hashCode);
          }

          return AutoScalingMode::NOT_SET;
        }

        Aws::String GetNameForAutoScalingMode(AutoScalingMode enumValue)
        {
          switch(enumValue)
          {
          case AutoScalingMode::NOT_SET:
            return {};
          case AutoScalingMode::NO_SCALING:
            return "NO_SCALING";
          case AutoScalingMode::EVENT_BASED_AUTO_SCALING:
            return "EVENT_BASED_AUTO_SCALING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoScalingModeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
