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

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        TransitGatewayState GetTransitGatewayStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
