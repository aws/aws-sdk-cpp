/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerPersistRoutesState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace RouteServerPersistRoutesStateMapper
      {

        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int resetting_HASH = HashingUtils::HashString("resetting");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int modifying_HASH = HashingUtils::HashString("modifying");


        RouteServerPersistRoutesState GetRouteServerPersistRoutesStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabling_HASH)
          {
            return RouteServerPersistRoutesState::enabling;
          }
          else if (hashCode == enabled_HASH)
          {
            return RouteServerPersistRoutesState::enabled;
          }
          else if (hashCode == resetting_HASH)
          {
            return RouteServerPersistRoutesState::resetting;
          }
          else if (hashCode == disabling_HASH)
          {
            return RouteServerPersistRoutesState::disabling;
          }
          else if (hashCode == disabled_HASH)
          {
            return RouteServerPersistRoutesState::disabled;
          }
          else if (hashCode == modifying_HASH)
          {
            return RouteServerPersistRoutesState::modifying;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerPersistRoutesState>(hashCode);
          }

          return RouteServerPersistRoutesState::NOT_SET;
        }

        Aws::String GetNameForRouteServerPersistRoutesState(RouteServerPersistRoutesState enumValue)
        {
          switch(enumValue)
          {
          case RouteServerPersistRoutesState::NOT_SET:
            return {};
          case RouteServerPersistRoutesState::enabling:
            return "enabling";
          case RouteServerPersistRoutesState::enabled:
            return "enabled";
          case RouteServerPersistRoutesState::resetting:
            return "resetting";
          case RouteServerPersistRoutesState::disabling:
            return "disabling";
          case RouteServerPersistRoutesState::disabled:
            return "disabled";
          case RouteServerPersistRoutesState::modifying:
            return "modifying";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerPersistRoutesStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
