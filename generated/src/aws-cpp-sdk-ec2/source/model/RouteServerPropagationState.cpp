/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerPropagationState.h>
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
      namespace RouteServerPropagationStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");


        RouteServerPropagationState GetRouteServerPropagationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return RouteServerPropagationState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return RouteServerPropagationState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return RouteServerPropagationState::deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerPropagationState>(hashCode);
          }

          return RouteServerPropagationState::NOT_SET;
        }

        Aws::String GetNameForRouteServerPropagationState(RouteServerPropagationState enumValue)
        {
          switch(enumValue)
          {
          case RouteServerPropagationState::NOT_SET:
            return {};
          case RouteServerPropagationState::pending:
            return "pending";
          case RouteServerPropagationState::available:
            return "available";
          case RouteServerPropagationState::deleting:
            return "deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerPropagationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
