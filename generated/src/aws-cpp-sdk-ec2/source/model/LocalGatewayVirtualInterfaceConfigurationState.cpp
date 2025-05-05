/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayVirtualInterfaceConfigurationState.h>
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
      namespace LocalGatewayVirtualInterfaceConfigurationStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        LocalGatewayVirtualInterfaceConfigurationState GetLocalGatewayVirtualInterfaceConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return LocalGatewayVirtualInterfaceConfigurationState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return LocalGatewayVirtualInterfaceConfigurationState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return LocalGatewayVirtualInterfaceConfigurationState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return LocalGatewayVirtualInterfaceConfigurationState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalGatewayVirtualInterfaceConfigurationState>(hashCode);
          }

          return LocalGatewayVirtualInterfaceConfigurationState::NOT_SET;
        }

        Aws::String GetNameForLocalGatewayVirtualInterfaceConfigurationState(LocalGatewayVirtualInterfaceConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case LocalGatewayVirtualInterfaceConfigurationState::NOT_SET:
            return {};
          case LocalGatewayVirtualInterfaceConfigurationState::pending:
            return "pending";
          case LocalGatewayVirtualInterfaceConfigurationState::available:
            return "available";
          case LocalGatewayVirtualInterfaceConfigurationState::deleting:
            return "deleting";
          case LocalGatewayVirtualInterfaceConfigurationState::deleted:
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

      } // namespace LocalGatewayVirtualInterfaceConfigurationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
