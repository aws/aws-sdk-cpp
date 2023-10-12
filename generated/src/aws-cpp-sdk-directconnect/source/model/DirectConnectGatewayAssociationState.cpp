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

        static constexpr uint32_t associating_HASH = ConstExprHashingUtils::HashString("associating");
        static constexpr uint32_t associated_HASH = ConstExprHashingUtils::HashString("associated");
        static constexpr uint32_t disassociating_HASH = ConstExprHashingUtils::HashString("disassociating");
        static constexpr uint32_t disassociated_HASH = ConstExprHashingUtils::HashString("disassociated");
        static constexpr uint32_t updating_HASH = ConstExprHashingUtils::HashString("updating");


        DirectConnectGatewayAssociationState GetDirectConnectGatewayAssociationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case DirectConnectGatewayAssociationState::NOT_SET:
            return {};
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
