/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamAssociatedResourceDiscoveryStatus.h>
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
      namespace IpamAssociatedResourceDiscoveryStatusMapper
      {

        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t not_found_HASH = ConstExprHashingUtils::HashString("not-found");


        IpamAssociatedResourceDiscoveryStatus GetIpamAssociatedResourceDiscoveryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return IpamAssociatedResourceDiscoveryStatus::active;
          }
          else if (hashCode == not_found_HASH)
          {
            return IpamAssociatedResourceDiscoveryStatus::not_found;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamAssociatedResourceDiscoveryStatus>(hashCode);
          }

          return IpamAssociatedResourceDiscoveryStatus::NOT_SET;
        }

        Aws::String GetNameForIpamAssociatedResourceDiscoveryStatus(IpamAssociatedResourceDiscoveryStatus enumValue)
        {
          switch(enumValue)
          {
          case IpamAssociatedResourceDiscoveryStatus::NOT_SET:
            return {};
          case IpamAssociatedResourceDiscoveryStatus::active:
            return "active";
          case IpamAssociatedResourceDiscoveryStatus::not_found:
            return "not-found";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamAssociatedResourceDiscoveryStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
