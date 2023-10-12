/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DirectConnectGatewayAttachmentState.h>
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
      namespace DirectConnectGatewayAttachmentStateMapper
      {

        static constexpr uint32_t attaching_HASH = ConstExprHashingUtils::HashString("attaching");
        static constexpr uint32_t attached_HASH = ConstExprHashingUtils::HashString("attached");
        static constexpr uint32_t detaching_HASH = ConstExprHashingUtils::HashString("detaching");
        static constexpr uint32_t detached_HASH = ConstExprHashingUtils::HashString("detached");


        DirectConnectGatewayAttachmentState GetDirectConnectGatewayAttachmentStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == attaching_HASH)
          {
            return DirectConnectGatewayAttachmentState::attaching;
          }
          else if (hashCode == attached_HASH)
          {
            return DirectConnectGatewayAttachmentState::attached;
          }
          else if (hashCode == detaching_HASH)
          {
            return DirectConnectGatewayAttachmentState::detaching;
          }
          else if (hashCode == detached_HASH)
          {
            return DirectConnectGatewayAttachmentState::detached;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectConnectGatewayAttachmentState>(hashCode);
          }

          return DirectConnectGatewayAttachmentState::NOT_SET;
        }

        Aws::String GetNameForDirectConnectGatewayAttachmentState(DirectConnectGatewayAttachmentState enumValue)
        {
          switch(enumValue)
          {
          case DirectConnectGatewayAttachmentState::NOT_SET:
            return {};
          case DirectConnectGatewayAttachmentState::attaching:
            return "attaching";
          case DirectConnectGatewayAttachmentState::attached:
            return "attached";
          case DirectConnectGatewayAttachmentState::detaching:
            return "detaching";
          case DirectConnectGatewayAttachmentState::detached:
            return "detached";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectConnectGatewayAttachmentStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
