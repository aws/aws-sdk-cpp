/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/AutoScalingConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace AutoScalingConfigurationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        AutoScalingConfigurationStatus GetAutoScalingConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AutoScalingConfigurationStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return AutoScalingConfigurationStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoScalingConfigurationStatus>(hashCode);
          }

          return AutoScalingConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForAutoScalingConfigurationStatus(AutoScalingConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoScalingConfigurationStatus::NOT_SET:
            return {};
          case AutoScalingConfigurationStatus::ACTIVE:
            return "ACTIVE";
          case AutoScalingConfigurationStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoScalingConfigurationStatusMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
