/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcEncryptionControlExclusionState.h>
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
      namespace VpcEncryptionControlExclusionStateMapper
      {

        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        VpcEncryptionControlExclusionState GetVpcEncryptionControlExclusionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabling_HASH)
          {
            return VpcEncryptionControlExclusionState::enabling;
          }
          else if (hashCode == enabled_HASH)
          {
            return VpcEncryptionControlExclusionState::enabled;
          }
          else if (hashCode == disabling_HASH)
          {
            return VpcEncryptionControlExclusionState::disabling;
          }
          else if (hashCode == disabled_HASH)
          {
            return VpcEncryptionControlExclusionState::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEncryptionControlExclusionState>(hashCode);
          }

          return VpcEncryptionControlExclusionState::NOT_SET;
        }

        Aws::String GetNameForVpcEncryptionControlExclusionState(VpcEncryptionControlExclusionState enumValue)
        {
          switch(enumValue)
          {
          case VpcEncryptionControlExclusionState::NOT_SET:
            return {};
          case VpcEncryptionControlExclusionState::enabling:
            return "enabling";
          case VpcEncryptionControlExclusionState::enabled:
            return "enabled";
          case VpcEncryptionControlExclusionState::disabling:
            return "disabling";
          case VpcEncryptionControlExclusionState::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcEncryptionControlExclusionStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
