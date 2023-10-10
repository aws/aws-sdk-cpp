/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayPolicyTableState.h>
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
      namespace TransitGatewayPolicyTableStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        TransitGatewayPolicyTableState GetTransitGatewayPolicyTableStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return TransitGatewayPolicyTableState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return TransitGatewayPolicyTableState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return TransitGatewayPolicyTableState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return TransitGatewayPolicyTableState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayPolicyTableState>(hashCode);
          }

          return TransitGatewayPolicyTableState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayPolicyTableState(TransitGatewayPolicyTableState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayPolicyTableState::NOT_SET:
            return {};
          case TransitGatewayPolicyTableState::pending:
            return "pending";
          case TransitGatewayPolicyTableState::available:
            return "available";
          case TransitGatewayPolicyTableState::deleting:
            return "deleting";
          case TransitGatewayPolicyTableState::deleted:
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

      } // namespace TransitGatewayPolicyTableStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
