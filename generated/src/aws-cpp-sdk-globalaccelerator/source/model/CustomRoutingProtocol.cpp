/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlobalAccelerator
  {
    namespace Model
    {
      namespace CustomRoutingProtocolMapper
      {

        static constexpr uint32_t TCP_HASH = ConstExprHashingUtils::HashString("TCP");
        static constexpr uint32_t UDP_HASH = ConstExprHashingUtils::HashString("UDP");


        CustomRoutingProtocol GetCustomRoutingProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TCP_HASH)
          {
            return CustomRoutingProtocol::TCP;
          }
          else if (hashCode == UDP_HASH)
          {
            return CustomRoutingProtocol::UDP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomRoutingProtocol>(hashCode);
          }

          return CustomRoutingProtocol::NOT_SET;
        }

        Aws::String GetNameForCustomRoutingProtocol(CustomRoutingProtocol enumValue)
        {
          switch(enumValue)
          {
          case CustomRoutingProtocol::NOT_SET:
            return {};
          case CustomRoutingProtocol::TCP:
            return "TCP";
          case CustomRoutingProtocol::UDP:
            return "UDP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomRoutingProtocolMapper
    } // namespace Model
  } // namespace GlobalAccelerator
} // namespace Aws
