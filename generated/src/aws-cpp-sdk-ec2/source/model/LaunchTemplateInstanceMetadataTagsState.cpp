/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateInstanceMetadataTagsState.h>
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
      namespace LaunchTemplateInstanceMetadataTagsStateMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabled_HASH = HashingUtils::HashString("enabled");


        LaunchTemplateInstanceMetadataTagsState GetLaunchTemplateInstanceMetadataTagsStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return LaunchTemplateInstanceMetadataTagsState::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return LaunchTemplateInstanceMetadataTagsState::enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchTemplateInstanceMetadataTagsState>(hashCode);
          }

          return LaunchTemplateInstanceMetadataTagsState::NOT_SET;
        }

        Aws::String GetNameForLaunchTemplateInstanceMetadataTagsState(LaunchTemplateInstanceMetadataTagsState enumValue)
        {
          switch(enumValue)
          {
          case LaunchTemplateInstanceMetadataTagsState::NOT_SET:
            return {};
          case LaunchTemplateInstanceMetadataTagsState::disabled:
            return "disabled";
          case LaunchTemplateInstanceMetadataTagsState::enabled:
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

      } // namespace LaunchTemplateInstanceMetadataTagsStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
