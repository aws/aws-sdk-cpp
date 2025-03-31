/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerPersistRoutesAction.h>
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
      namespace RouteServerPersistRoutesActionMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");
        static const int reset_HASH = HashingUtils::HashString("reset");


        RouteServerPersistRoutesAction GetRouteServerPersistRoutesActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return RouteServerPersistRoutesAction::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return RouteServerPersistRoutesAction::disable;
          }
          else if (hashCode == reset_HASH)
          {
            return RouteServerPersistRoutesAction::reset;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerPersistRoutesAction>(hashCode);
          }

          return RouteServerPersistRoutesAction::NOT_SET;
        }

        Aws::String GetNameForRouteServerPersistRoutesAction(RouteServerPersistRoutesAction enumValue)
        {
          switch(enumValue)
          {
          case RouteServerPersistRoutesAction::NOT_SET:
            return {};
          case RouteServerPersistRoutesAction::enable:
            return "enable";
          case RouteServerPersistRoutesAction::disable:
            return "disable";
          case RouteServerPersistRoutesAction::reset:
            return "reset";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerPersistRoutesActionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
