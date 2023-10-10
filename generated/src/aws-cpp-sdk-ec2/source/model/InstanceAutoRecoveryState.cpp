/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceAutoRecoveryState.h>
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
      namespace InstanceAutoRecoveryStateMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int default__HASH = HashingUtils::HashString("default");


        InstanceAutoRecoveryState GetInstanceAutoRecoveryStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return InstanceAutoRecoveryState::disabled;
          }
          else if (hashCode == default__HASH)
          {
            return InstanceAutoRecoveryState::default_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceAutoRecoveryState>(hashCode);
          }

          return InstanceAutoRecoveryState::NOT_SET;
        }

        Aws::String GetNameForInstanceAutoRecoveryState(InstanceAutoRecoveryState enumValue)
        {
          switch(enumValue)
          {
          case InstanceAutoRecoveryState::NOT_SET:
            return {};
          case InstanceAutoRecoveryState::disabled:
            return "disabled";
          case InstanceAutoRecoveryState::default_:
            return "default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceAutoRecoveryStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
