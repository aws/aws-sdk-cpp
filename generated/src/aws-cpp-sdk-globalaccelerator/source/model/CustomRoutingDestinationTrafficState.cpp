/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingDestinationTrafficState.h>
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
      namespace CustomRoutingDestinationTrafficStateMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        CustomRoutingDestinationTrafficState GetCustomRoutingDestinationTrafficStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return CustomRoutingDestinationTrafficState::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return CustomRoutingDestinationTrafficState::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomRoutingDestinationTrafficState>(hashCode);
          }

          return CustomRoutingDestinationTrafficState::NOT_SET;
        }

        Aws::String GetNameForCustomRoutingDestinationTrafficState(CustomRoutingDestinationTrafficState enumValue)
        {
          switch(enumValue)
          {
          case CustomRoutingDestinationTrafficState::NOT_SET:
            return {};
          case CustomRoutingDestinationTrafficState::ALLOW:
            return "ALLOW";
          case CustomRoutingDestinationTrafficState::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomRoutingDestinationTrafficStateMapper
    } // namespace Model
  } // namespace GlobalAccelerator
} // namespace Aws
