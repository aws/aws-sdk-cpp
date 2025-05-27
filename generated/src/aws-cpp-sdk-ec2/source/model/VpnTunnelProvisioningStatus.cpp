/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpnTunnelProvisioningStatus.h>
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
      namespace VpnTunnelProvisioningStatusMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int failed_HASH = HashingUtils::HashString("failed");


        VpnTunnelProvisioningStatus GetVpnTunnelProvisioningStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return VpnTunnelProvisioningStatus::available;
          }
          else if (hashCode == pending_HASH)
          {
            return VpnTunnelProvisioningStatus::pending;
          }
          else if (hashCode == failed_HASH)
          {
            return VpnTunnelProvisioningStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpnTunnelProvisioningStatus>(hashCode);
          }

          return VpnTunnelProvisioningStatus::NOT_SET;
        }

        Aws::String GetNameForVpnTunnelProvisioningStatus(VpnTunnelProvisioningStatus enumValue)
        {
          switch(enumValue)
          {
          case VpnTunnelProvisioningStatus::NOT_SET:
            return {};
          case VpnTunnelProvisioningStatus::available:
            return "available";
          case VpnTunnelProvisioningStatus::pending:
            return "pending";
          case VpnTunnelProvisioningStatus::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpnTunnelProvisioningStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
