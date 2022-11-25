/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMetadataEndpointState.h>
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
      namespace InstanceMetadataEndpointStateMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabled_HASH = HashingUtils::HashString("enabled");


        InstanceMetadataEndpointState GetInstanceMetadataEndpointStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return InstanceMetadataEndpointState::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return InstanceMetadataEndpointState::enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMetadataEndpointState>(hashCode);
          }

          return InstanceMetadataEndpointState::NOT_SET;
        }

        Aws::String GetNameForInstanceMetadataEndpointState(InstanceMetadataEndpointState enumValue)
        {
          switch(enumValue)
          {
          case InstanceMetadataEndpointState::disabled:
            return "disabled";
          case InstanceMetadataEndpointState::enabled:
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

      } // namespace InstanceMetadataEndpointStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
