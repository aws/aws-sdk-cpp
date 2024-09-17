/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DefaultInstanceMetadataTagsState.h>
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
      namespace DefaultInstanceMetadataTagsStateMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int no_preference_HASH = HashingUtils::HashString("no-preference");


        DefaultInstanceMetadataTagsState GetDefaultInstanceMetadataTagsStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return DefaultInstanceMetadataTagsState::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return DefaultInstanceMetadataTagsState::enabled;
          }
          else if (hashCode == no_preference_HASH)
          {
            return DefaultInstanceMetadataTagsState::no_preference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultInstanceMetadataTagsState>(hashCode);
          }

          return DefaultInstanceMetadataTagsState::NOT_SET;
        }

        Aws::String GetNameForDefaultInstanceMetadataTagsState(DefaultInstanceMetadataTagsState enumValue)
        {
          switch(enumValue)
          {
          case DefaultInstanceMetadataTagsState::NOT_SET:
            return {};
          case DefaultInstanceMetadataTagsState::disabled:
            return "disabled";
          case DefaultInstanceMetadataTagsState::enabled:
            return "enabled";
          case DefaultInstanceMetadataTagsState::no_preference:
            return "no-preference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultInstanceMetadataTagsStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
