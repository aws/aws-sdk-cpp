/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerAssociationState.h>
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
      namespace RouteServerAssociationStateMapper
      {

        static const int associating_HASH = HashingUtils::HashString("associating");
        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int disassociating_HASH = HashingUtils::HashString("disassociating");


        RouteServerAssociationState GetRouteServerAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
          {
            return RouteServerAssociationState::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return RouteServerAssociationState::associated;
          }
          else if (hashCode == disassociating_HASH)
          {
            return RouteServerAssociationState::disassociating;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerAssociationState>(hashCode);
          }

          return RouteServerAssociationState::NOT_SET;
        }

        Aws::String GetNameForRouteServerAssociationState(RouteServerAssociationState enumValue)
        {
          switch(enumValue)
          {
          case RouteServerAssociationState::NOT_SET:
            return {};
          case RouteServerAssociationState::associating:
            return "associating";
          case RouteServerAssociationState::associated:
            return "associated";
          case RouteServerAssociationState::disassociating:
            return "disassociating";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerAssociationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
