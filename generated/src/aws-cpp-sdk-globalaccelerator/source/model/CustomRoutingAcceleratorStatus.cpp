/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingAcceleratorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlobalAccelerator
  {
    namespace Model
    {
      namespace CustomRoutingAcceleratorStatusMapper
      {

        static const int DEPLOYED_HASH = HashingUtils::HashString("DEPLOYED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");


        CustomRoutingAcceleratorStatus GetCustomRoutingAcceleratorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPLOYED_HASH)
          {
            return CustomRoutingAcceleratorStatus::DEPLOYED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return CustomRoutingAcceleratorStatus::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomRoutingAcceleratorStatus>(hashCode);
          }

          return CustomRoutingAcceleratorStatus::NOT_SET;
        }

        Aws::String GetNameForCustomRoutingAcceleratorStatus(CustomRoutingAcceleratorStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomRoutingAcceleratorStatus::NOT_SET:
            return {};
          case CustomRoutingAcceleratorStatus::DEPLOYED:
            return "DEPLOYED";
          case CustomRoutingAcceleratorStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomRoutingAcceleratorStatusMapper
    } // namespace Model
  } // namespace GlobalAccelerator
} // namespace Aws
