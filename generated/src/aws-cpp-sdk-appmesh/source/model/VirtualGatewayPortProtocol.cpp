/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayPortProtocol.h>
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
      namespace VirtualGatewayPortProtocolMapper
      {

        static constexpr uint32_t http_HASH = ConstExprHashingUtils::HashString("http");
        static constexpr uint32_t http2_HASH = ConstExprHashingUtils::HashString("http2");
        static constexpr uint32_t grpc_HASH = ConstExprHashingUtils::HashString("grpc");


        VirtualGatewayPortProtocol GetVirtualGatewayPortProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == http_HASH)
          {
            return VirtualGatewayPortProtocol::http;
          }
          else if (hashCode == http2_HASH)
          {
            return VirtualGatewayPortProtocol::http2;
          }
          else if (hashCode == grpc_HASH)
          {
            return VirtualGatewayPortProtocol::grpc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualGatewayPortProtocol>(hashCode);
          }

          return VirtualGatewayPortProtocol::NOT_SET;
        }

        Aws::String GetNameForVirtualGatewayPortProtocol(VirtualGatewayPortProtocol enumValue)
        {
          switch(enumValue)
          {
          case VirtualGatewayPortProtocol::NOT_SET:
            return {};
          case VirtualGatewayPortProtocol::http:
            return "http";
          case VirtualGatewayPortProtocol::http2:
            return "http2";
          case VirtualGatewayPortProtocol::grpc:
            return "grpc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VirtualGatewayPortProtocolMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
