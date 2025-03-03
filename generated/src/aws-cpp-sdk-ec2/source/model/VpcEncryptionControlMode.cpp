/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcEncryptionControlMode.h>
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
      namespace VpcEncryptionControlModeMapper
      {

        static const int monitor_HASH = HashingUtils::HashString("monitor");
        static const int enforce_HASH = HashingUtils::HashString("enforce");


        VpcEncryptionControlMode GetVpcEncryptionControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == monitor_HASH)
          {
            return VpcEncryptionControlMode::monitor;
          }
          else if (hashCode == enforce_HASH)
          {
            return VpcEncryptionControlMode::enforce;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEncryptionControlMode>(hashCode);
          }

          return VpcEncryptionControlMode::NOT_SET;
        }

        Aws::String GetNameForVpcEncryptionControlMode(VpcEncryptionControlMode enumValue)
        {
          switch(enumValue)
          {
          case VpcEncryptionControlMode::NOT_SET:
            return {};
          case VpcEncryptionControlMode::monitor:
            return "monitor";
          case VpcEncryptionControlMode::enforce:
            return "enforce";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcEncryptionControlModeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
