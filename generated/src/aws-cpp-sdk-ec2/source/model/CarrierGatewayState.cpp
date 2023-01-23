/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CarrierGatewayState.h>
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
      namespace CarrierGatewayStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        CarrierGatewayState GetCarrierGatewayStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return CarrierGatewayState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return CarrierGatewayState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return CarrierGatewayState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return CarrierGatewayState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CarrierGatewayState>(hashCode);
          }

          return CarrierGatewayState::NOT_SET;
        }

        Aws::String GetNameForCarrierGatewayState(CarrierGatewayState enumValue)
        {
          switch(enumValue)
          {
          case CarrierGatewayState::pending:
            return "pending";
          case CarrierGatewayState::available:
            return "available";
          case CarrierGatewayState::deleting:
            return "deleting";
          case CarrierGatewayState::deleted:
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

      } // namespace CarrierGatewayStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
