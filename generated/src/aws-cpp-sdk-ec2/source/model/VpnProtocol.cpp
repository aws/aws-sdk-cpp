/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpnProtocol.h>
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
      namespace VpnProtocolMapper
      {

        static const int openvpn_HASH = HashingUtils::HashString("openvpn");


        VpnProtocol GetVpnProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == openvpn_HASH)
          {
            return VpnProtocol::openvpn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpnProtocol>(hashCode);
          }

          return VpnProtocol::NOT_SET;
        }

        Aws::String GetNameForVpnProtocol(VpnProtocol enumValue)
        {
          switch(enumValue)
          {
          case VpnProtocol::openvpn:
            return "openvpn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpnProtocolMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
