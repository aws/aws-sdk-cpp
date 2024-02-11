/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GatewayAssociationState.h>
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
      namespace GatewayAssociationStateMapper
      {

        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int not_associated_HASH = HashingUtils::HashString("not-associated");
        static const int associating_HASH = HashingUtils::HashString("associating");
        static const int disassociating_HASH = HashingUtils::HashString("disassociating");


        GatewayAssociationState GetGatewayAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associated_HASH)
          {
            return GatewayAssociationState::associated;
          }
          else if (hashCode == not_associated_HASH)
          {
            return GatewayAssociationState::not_associated;
          }
          else if (hashCode == associating_HASH)
          {
            return GatewayAssociationState::associating;
          }
          else if (hashCode == disassociating_HASH)
          {
            return GatewayAssociationState::disassociating;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayAssociationState>(hashCode);
          }

          return GatewayAssociationState::NOT_SET;
        }

        Aws::String GetNameForGatewayAssociationState(GatewayAssociationState enumValue)
        {
          switch(enumValue)
          {
          case GatewayAssociationState::NOT_SET:
            return {};
          case GatewayAssociationState::associated:
            return "associated";
          case GatewayAssociationState::not_associated:
            return "not-associated";
          case GatewayAssociationState::associating:
            return "associating";
          case GatewayAssociationState::disassociating:
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

      } // namespace GatewayAssociationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
