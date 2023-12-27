/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateInstanceMetadataProtocolIpv6.h>
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
      namespace LaunchTemplateInstanceMetadataProtocolIpv6Mapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabled_HASH = HashingUtils::HashString("enabled");


        LaunchTemplateInstanceMetadataProtocolIpv6 GetLaunchTemplateInstanceMetadataProtocolIpv6ForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return LaunchTemplateInstanceMetadataProtocolIpv6::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return LaunchTemplateInstanceMetadataProtocolIpv6::enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchTemplateInstanceMetadataProtocolIpv6>(hashCode);
          }

          return LaunchTemplateInstanceMetadataProtocolIpv6::NOT_SET;
        }

        Aws::String GetNameForLaunchTemplateInstanceMetadataProtocolIpv6(LaunchTemplateInstanceMetadataProtocolIpv6 enumValue)
        {
          switch(enumValue)
          {
          case LaunchTemplateInstanceMetadataProtocolIpv6::NOT_SET:
            return {};
          case LaunchTemplateInstanceMetadataProtocolIpv6::disabled:
            return "disabled";
          case LaunchTemplateInstanceMetadataProtocolIpv6::enabled:
            return "enabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchTemplateInstanceMetadataProtocolIpv6Mapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
