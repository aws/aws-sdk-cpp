/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ServiceLinkVirtualInterfaceConfigurationState.h>
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
      namespace ServiceLinkVirtualInterfaceConfigurationStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        ServiceLinkVirtualInterfaceConfigurationState GetServiceLinkVirtualInterfaceConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return ServiceLinkVirtualInterfaceConfigurationState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return ServiceLinkVirtualInterfaceConfigurationState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return ServiceLinkVirtualInterfaceConfigurationState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return ServiceLinkVirtualInterfaceConfigurationState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceLinkVirtualInterfaceConfigurationState>(hashCode);
          }

          return ServiceLinkVirtualInterfaceConfigurationState::NOT_SET;
        }

        Aws::String GetNameForServiceLinkVirtualInterfaceConfigurationState(ServiceLinkVirtualInterfaceConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case ServiceLinkVirtualInterfaceConfigurationState::NOT_SET:
            return {};
          case ServiceLinkVirtualInterfaceConfigurationState::pending:
            return "pending";
          case ServiceLinkVirtualInterfaceConfigurationState::available:
            return "available";
          case ServiceLinkVirtualInterfaceConfigurationState::deleting:
            return "deleting";
          case ServiceLinkVirtualInterfaceConfigurationState::deleted:
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

      } // namespace ServiceLinkVirtualInterfaceConfigurationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
