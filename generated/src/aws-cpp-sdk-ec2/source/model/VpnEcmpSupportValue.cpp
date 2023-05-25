/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpnEcmpSupportValue.h>
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
      namespace VpnEcmpSupportValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        VpnEcmpSupportValue GetVpnEcmpSupportValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return VpnEcmpSupportValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return VpnEcmpSupportValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpnEcmpSupportValue>(hashCode);
          }

          return VpnEcmpSupportValue::NOT_SET;
        }

        Aws::String GetNameForVpnEcmpSupportValue(VpnEcmpSupportValue enumValue)
        {
          switch(enumValue)
          {
          case VpnEcmpSupportValue::enable:
            return "enable";
          case VpnEcmpSupportValue::disable:
            return "disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpnEcmpSupportValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
