/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMetadataProtocolState.h>
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
      namespace InstanceMetadataProtocolStateMapper
      {

        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");
        static constexpr uint32_t enabled_HASH = ConstExprHashingUtils::HashString("enabled");


        InstanceMetadataProtocolState GetInstanceMetadataProtocolStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return InstanceMetadataProtocolState::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return InstanceMetadataProtocolState::enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMetadataProtocolState>(hashCode);
          }

          return InstanceMetadataProtocolState::NOT_SET;
        }

        Aws::String GetNameForInstanceMetadataProtocolState(InstanceMetadataProtocolState enumValue)
        {
          switch(enumValue)
          {
          case InstanceMetadataProtocolState::NOT_SET:
            return {};
          case InstanceMetadataProtocolState::disabled:
            return "disabled";
          case InstanceMetadataProtocolState::enabled:
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

      } // namespace InstanceMetadataProtocolStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
