/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayState.h>
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
      namespace TransitGatewayStateMapper
      {

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t modifying_HASH = ConstExprHashingUtils::HashString("modifying");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");


        TransitGatewayState GetTransitGatewayStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return TransitGatewayState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return TransitGatewayState::available;
          }
          else if (hashCode == modifying_HASH)
          {
            return TransitGatewayState::modifying;
          }
          else if (hashCode == deleting_HASH)
          {
            return TransitGatewayState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return TransitGatewayState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayState>(hashCode);
          }

          return TransitGatewayState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayState(TransitGatewayState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayState::NOT_SET:
            return {};
          case TransitGatewayState::pending:
            return "pending";
          case TransitGatewayState::available:
            return "available";
          case TransitGatewayState::modifying:
            return "modifying";
          case TransitGatewayState::deleting:
            return "deleting";
          case TransitGatewayState::deleted:
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

      } // namespace TransitGatewayStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
