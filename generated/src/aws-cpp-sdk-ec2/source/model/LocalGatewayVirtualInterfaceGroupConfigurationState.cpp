/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayVirtualInterfaceGroupConfigurationState.h>
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
      namespace LocalGatewayVirtualInterfaceGroupConfigurationStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int incomplete_HASH = HashingUtils::HashString("incomplete");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        LocalGatewayVirtualInterfaceGroupConfigurationState GetLocalGatewayVirtualInterfaceGroupConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return LocalGatewayVirtualInterfaceGroupConfigurationState::pending;
          }
          else if (hashCode == incomplete_HASH)
          {
            return LocalGatewayVirtualInterfaceGroupConfigurationState::incomplete;
          }
          else if (hashCode == available_HASH)
          {
            return LocalGatewayVirtualInterfaceGroupConfigurationState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return LocalGatewayVirtualInterfaceGroupConfigurationState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return LocalGatewayVirtualInterfaceGroupConfigurationState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalGatewayVirtualInterfaceGroupConfigurationState>(hashCode);
          }

          return LocalGatewayVirtualInterfaceGroupConfigurationState::NOT_SET;
        }

        Aws::String GetNameForLocalGatewayVirtualInterfaceGroupConfigurationState(LocalGatewayVirtualInterfaceGroupConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case LocalGatewayVirtualInterfaceGroupConfigurationState::NOT_SET:
            return {};
          case LocalGatewayVirtualInterfaceGroupConfigurationState::pending:
            return "pending";
          case LocalGatewayVirtualInterfaceGroupConfigurationState::incomplete:
            return "incomplete";
          case LocalGatewayVirtualInterfaceGroupConfigurationState::available:
            return "available";
          case LocalGatewayVirtualInterfaceGroupConfigurationState::deleting:
            return "deleting";
          case LocalGatewayVirtualInterfaceGroupConfigurationState::deleted:
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

      } // namespace LocalGatewayVirtualInterfaceGroupConfigurationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
