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

        static const int http_HASH = HashingUtils::HashString("http");
        static const int http2_HASH = HashingUtils::HashString("http2");
        static const int grpc_HASH = HashingUtils::HashString("grpc");


        VirtualGatewayPortProtocol GetVirtualGatewayPortProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
