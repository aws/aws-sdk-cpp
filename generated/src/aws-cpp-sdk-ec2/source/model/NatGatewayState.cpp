/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NatGatewayState.h>
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
      namespace NatGatewayStateMapper
      {

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");


        NatGatewayState GetNatGatewayStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return NatGatewayState::pending;
          }
          else if (hashCode == failed_HASH)
          {
            return NatGatewayState::failed;
          }
          else if (hashCode == available_HASH)
          {
            return NatGatewayState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return NatGatewayState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return NatGatewayState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NatGatewayState>(hashCode);
          }

          return NatGatewayState::NOT_SET;
        }

        Aws::String GetNameForNatGatewayState(NatGatewayState enumValue)
        {
          switch(enumValue)
          {
          case NatGatewayState::NOT_SET:
            return {};
          case NatGatewayState::pending:
            return "pending";
          case NatGatewayState::failed:
            return "failed";
          case NatGatewayState::available:
            return "available";
          case NatGatewayState::deleting:
            return "deleting";
          case NatGatewayState::deleted:
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

      } // namespace NatGatewayStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
