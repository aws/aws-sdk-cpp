/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/PortProtocol.h>
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
      namespace PortProtocolMapper
      {

        static const int http_HASH = HashingUtils::HashString("http");
        static const int tcp_HASH = HashingUtils::HashString("tcp");
        static const int http2_HASH = HashingUtils::HashString("http2");
        static const int grpc_HASH = HashingUtils::HashString("grpc");


        PortProtocol GetPortProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == http_HASH)
          {
            return PortProtocol::http;
          }
          else if (hashCode == tcp_HASH)
          {
            return PortProtocol::tcp;
          }
          else if (hashCode == http2_HASH)
          {
            return PortProtocol::http2;
          }
          else if (hashCode == grpc_HASH)
          {
            return PortProtocol::grpc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortProtocol>(hashCode);
          }

          return PortProtocol::NOT_SET;
        }

        Aws::String GetNameForPortProtocol(PortProtocol enumValue)
        {
          switch(enumValue)
          {
          case PortProtocol::http:
            return "http";
          case PortProtocol::tcp:
            return "tcp";
          case PortProtocol::http2:
            return "http2";
          case PortProtocol::grpc:
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

      } // namespace PortProtocolMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
