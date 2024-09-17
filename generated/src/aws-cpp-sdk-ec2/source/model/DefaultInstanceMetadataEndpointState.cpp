/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DefaultInstanceMetadataEndpointState.h>
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
      namespace DefaultInstanceMetadataEndpointStateMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int no_preference_HASH = HashingUtils::HashString("no-preference");


        DefaultInstanceMetadataEndpointState GetDefaultInstanceMetadataEndpointStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return DefaultInstanceMetadataEndpointState::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return DefaultInstanceMetadataEndpointState::enabled;
          }
          else if (hashCode == no_preference_HASH)
          {
            return DefaultInstanceMetadataEndpointState::no_preference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultInstanceMetadataEndpointState>(hashCode);
          }

          return DefaultInstanceMetadataEndpointState::NOT_SET;
        }

        Aws::String GetNameForDefaultInstanceMetadataEndpointState(DefaultInstanceMetadataEndpointState enumValue)
        {
          switch(enumValue)
          {
          case DefaultInstanceMetadataEndpointState::NOT_SET:
            return {};
          case DefaultInstanceMetadataEndpointState::disabled:
            return "disabled";
          case DefaultInstanceMetadataEndpointState::enabled:
            return "enabled";
          case DefaultInstanceMetadataEndpointState::no_preference:
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

      } // namespace DefaultInstanceMetadataEndpointStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
