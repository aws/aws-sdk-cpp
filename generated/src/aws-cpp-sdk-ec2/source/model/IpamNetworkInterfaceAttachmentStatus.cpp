/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamNetworkInterfaceAttachmentStatus.h>
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
      namespace IpamNetworkInterfaceAttachmentStatusMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int in_use_HASH = HashingUtils::HashString("in-use");


        IpamNetworkInterfaceAttachmentStatus GetIpamNetworkInterfaceAttachmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return IpamNetworkInterfaceAttachmentStatus::available;
          }
          else if (hashCode == in_use_HASH)
          {
            return IpamNetworkInterfaceAttachmentStatus::in_use;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamNetworkInterfaceAttachmentStatus>(hashCode);
          }

          return IpamNetworkInterfaceAttachmentStatus::NOT_SET;
        }

        Aws::String GetNameForIpamNetworkInterfaceAttachmentStatus(IpamNetworkInterfaceAttachmentStatus enumValue)
        {
          switch(enumValue)
          {
          case IpamNetworkInterfaceAttachmentStatus::NOT_SET:
            return {};
          case IpamNetworkInterfaceAttachmentStatus::available:
            return "available";
          case IpamNetworkInterfaceAttachmentStatus::in_use:
            return "in-use";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamNetworkInterfaceAttachmentStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
