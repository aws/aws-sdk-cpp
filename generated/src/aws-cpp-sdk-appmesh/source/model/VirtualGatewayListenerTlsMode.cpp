/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayListenerTlsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace VirtualGatewayListenerTlsModeMapper
      {

        static constexpr uint32_t STRICT_HASH = ConstExprHashingUtils::HashString("STRICT");
        static constexpr uint32_t PERMISSIVE_HASH = ConstExprHashingUtils::HashString("PERMISSIVE");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        VirtualGatewayListenerTlsMode GetVirtualGatewayListenerTlsModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRICT_HASH)
          {
            return VirtualGatewayListenerTlsMode::STRICT;
          }
          else if (hashCode == PERMISSIVE_HASH)
          {
            return VirtualGatewayListenerTlsMode::PERMISSIVE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return VirtualGatewayListenerTlsMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualGatewayListenerTlsMode>(hashCode);
          }

          return VirtualGatewayListenerTlsMode::NOT_SET;
        }

        Aws::String GetNameForVirtualGatewayListenerTlsMode(VirtualGatewayListenerTlsMode enumValue)
        {
          switch(enumValue)
          {
          case VirtualGatewayListenerTlsMode::NOT_SET:
            return {};
          case VirtualGatewayListenerTlsMode::STRICT:
            return "STRICT";
          case VirtualGatewayListenerTlsMode::PERMISSIVE:
            return "PERMISSIVE";
          case VirtualGatewayListenerTlsMode::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VirtualGatewayListenerTlsModeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
