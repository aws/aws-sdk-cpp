/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayPrefixListReferenceState.h>
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
      namespace TransitGatewayPrefixListReferenceStateMapper
      {

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t modifying_HASH = ConstExprHashingUtils::HashString("modifying");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");


        TransitGatewayPrefixListReferenceState GetTransitGatewayPrefixListReferenceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return TransitGatewayPrefixListReferenceState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return TransitGatewayPrefixListReferenceState::available;
          }
          else if (hashCode == modifying_HASH)
          {
            return TransitGatewayPrefixListReferenceState::modifying;
          }
          else if (hashCode == deleting_HASH)
          {
            return TransitGatewayPrefixListReferenceState::deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayPrefixListReferenceState>(hashCode);
          }

          return TransitGatewayPrefixListReferenceState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayPrefixListReferenceState(TransitGatewayPrefixListReferenceState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayPrefixListReferenceState::NOT_SET:
            return {};
          case TransitGatewayPrefixListReferenceState::pending:
            return "pending";
          case TransitGatewayPrefixListReferenceState::available:
            return "available";
          case TransitGatewayPrefixListReferenceState::modifying:
            return "modifying";
          case TransitGatewayPrefixListReferenceState::deleting:
            return "deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitGatewayPrefixListReferenceStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
