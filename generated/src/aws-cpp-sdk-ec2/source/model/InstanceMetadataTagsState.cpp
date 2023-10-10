/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMetadataTagsState.h>
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
      namespace InstanceMetadataTagsStateMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabled_HASH = HashingUtils::HashString("enabled");


        InstanceMetadataTagsState GetInstanceMetadataTagsStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return InstanceMetadataTagsState::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return InstanceMetadataTagsState::enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMetadataTagsState>(hashCode);
          }

          return InstanceMetadataTagsState::NOT_SET;
        }

        Aws::String GetNameForInstanceMetadataTagsState(InstanceMetadataTagsState enumValue)
        {
          switch(enumValue)
          {
          case InstanceMetadataTagsState::NOT_SET:
            return {};
          case InstanceMetadataTagsState::disabled:
            return "disabled";
          case InstanceMetadataTagsState::enabled:
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

      } // namespace InstanceMetadataTagsStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
