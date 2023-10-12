/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayMulticastDomainState.h>
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
      namespace TransitGatewayMulticastDomainStateMapper
      {

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");


        TransitGatewayMulticastDomainState GetTransitGatewayMulticastDomainStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return TransitGatewayMulticastDomainState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return TransitGatewayMulticastDomainState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return TransitGatewayMulticastDomainState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return TransitGatewayMulticastDomainState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayMulticastDomainState>(hashCode);
          }

          return TransitGatewayMulticastDomainState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayMulticastDomainState(TransitGatewayMulticastDomainState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayMulticastDomainState::NOT_SET:
            return {};
          case TransitGatewayMulticastDomainState::pending:
            return "pending";
          case TransitGatewayMulticastDomainState::available:
            return "available";
          case TransitGatewayMulticastDomainState::deleting:
            return "deleting";
          case TransitGatewayMulticastDomainState::deleted:
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

      } // namespace TransitGatewayMulticastDomainStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
