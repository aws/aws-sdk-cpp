/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateInstanceMetadataEndpointState.h>
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
      namespace LaunchTemplateInstanceMetadataEndpointStateMapper
      {

        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");
        static constexpr uint32_t enabled_HASH = ConstExprHashingUtils::HashString("enabled");


        LaunchTemplateInstanceMetadataEndpointState GetLaunchTemplateInstanceMetadataEndpointStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return LaunchTemplateInstanceMetadataEndpointState::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return LaunchTemplateInstanceMetadataEndpointState::enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchTemplateInstanceMetadataEndpointState>(hashCode);
          }

          return LaunchTemplateInstanceMetadataEndpointState::NOT_SET;
        }

        Aws::String GetNameForLaunchTemplateInstanceMetadataEndpointState(LaunchTemplateInstanceMetadataEndpointState enumValue)
        {
          switch(enumValue)
          {
          case LaunchTemplateInstanceMetadataEndpointState::NOT_SET:
            return {};
          case LaunchTemplateInstanceMetadataEndpointState::disabled:
            return "disabled";
          case LaunchTemplateInstanceMetadataEndpointState::enabled:
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

      } // namespace LaunchTemplateInstanceMetadataEndpointStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
