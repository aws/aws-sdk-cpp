/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DirectConnectGatewayState.h>
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
      namespace DirectConnectGatewayStateMapper
      {

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");


        DirectConnectGatewayState GetDirectConnectGatewayStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return DirectConnectGatewayState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return DirectConnectGatewayState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return DirectConnectGatewayState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return DirectConnectGatewayState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectConnectGatewayState>(hashCode);
          }

          return DirectConnectGatewayState::NOT_SET;
        }

        Aws::String GetNameForDirectConnectGatewayState(DirectConnectGatewayState enumValue)
        {
          switch(enumValue)
          {
          case DirectConnectGatewayState::NOT_SET:
            return {};
          case DirectConnectGatewayState::pending:
            return "pending";
          case DirectConnectGatewayState::available:
            return "available";
          case DirectConnectGatewayState::deleting:
            return "deleting";
          case DirectConnectGatewayState::deleted:
            return "deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectConnectGatewayStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
