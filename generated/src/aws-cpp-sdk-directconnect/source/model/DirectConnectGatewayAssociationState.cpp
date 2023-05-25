/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DirectConnectGatewayAssociationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace DirectConnectGatewayAssociationStateMapper
      {

        static const int associating_HASH = HashingUtils::HashString("associating");
        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int disassociating_HASH = HashingUtils::HashString("disassociating");
        static const int disassociated_HASH = HashingUtils::HashString("disassociated");
        static const int updating_HASH = HashingUtils::HashString("updating");


        DirectConnectGatewayAssociationState GetDirectConnectGatewayAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
          {
            return DirectConnectGatewayAssociationState::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return DirectConnectGatewayAssociationState::associated;
          }
          else if (hashCode == disassociating_HASH)
          {
            return DirectConnectGatewayAssociationState::disassociating;
          }
          else if (hashCode == disassociated_HASH)
          {
            return DirectConnectGatewayAssociationState::disassociated;
          }
          else if (hashCode == updating_HASH)
          {
            return DirectConnectGatewayAssociationState::updating;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectConnectGatewayAssociationState>(hashCode);
          }

          return DirectConnectGatewayAssociationState::NOT_SET;
        }

        Aws::String GetNameForDirectConnectGatewayAssociationState(DirectConnectGatewayAssociationState enumValue)
        {
          switch(enumValue)
          {
          case DirectConnectGatewayAssociationState::associating:
            return "associating";
          case DirectConnectGatewayAssociationState::associated:
            return "associated";
          case DirectConnectGatewayAssociationState::disassociating:
            return "disassociating";
          case DirectConnectGatewayAssociationState::disassociated:
            return "disassociated";
          case DirectConnectGatewayAssociationState::updating:
            return "updating";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectConnectGatewayAssociationStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
