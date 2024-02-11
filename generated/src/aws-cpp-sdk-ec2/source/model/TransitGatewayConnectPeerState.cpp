/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayConnectPeerState.h>
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
      namespace TransitGatewayConnectPeerStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        TransitGatewayConnectPeerState GetTransitGatewayConnectPeerStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return TransitGatewayConnectPeerState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return TransitGatewayConnectPeerState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return TransitGatewayConnectPeerState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return TransitGatewayConnectPeerState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayConnectPeerState>(hashCode);
          }

          return TransitGatewayConnectPeerState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayConnectPeerState(TransitGatewayConnectPeerState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayConnectPeerState::NOT_SET:
            return {};
          case TransitGatewayConnectPeerState::pending:
            return "pending";
          case TransitGatewayConnectPeerState::available:
            return "available";
          case TransitGatewayConnectPeerState::deleting:
            return "deleting";
          case TransitGatewayConnectPeerState::deleted:
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

      } // namespace TransitGatewayConnectPeerStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
