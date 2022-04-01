/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CustomerGatewayAssociationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace CustomerGatewayAssociationStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        CustomerGatewayAssociationState GetCustomerGatewayAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return CustomerGatewayAssociationState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return CustomerGatewayAssociationState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return CustomerGatewayAssociationState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return CustomerGatewayAssociationState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomerGatewayAssociationState>(hashCode);
          }

          return CustomerGatewayAssociationState::NOT_SET;
        }

        Aws::String GetNameForCustomerGatewayAssociationState(CustomerGatewayAssociationState enumValue)
        {
          switch(enumValue)
          {
          case CustomerGatewayAssociationState::PENDING:
            return "PENDING";
          case CustomerGatewayAssociationState::AVAILABLE:
            return "AVAILABLE";
          case CustomerGatewayAssociationState::DELETING:
            return "DELETING";
          case CustomerGatewayAssociationState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomerGatewayAssociationStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
