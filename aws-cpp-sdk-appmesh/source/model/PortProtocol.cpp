/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int grpc_HASH = HashingUtils::HashString("grpc");
        static const int http_HASH = HashingUtils::HashString("http");
        static const int http2_HASH = HashingUtils::HashString("http2");
        static const int tcp_HASH = HashingUtils::HashString("tcp");


        PortProtocol GetPortProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == grpc_HASH)
          {
            return PortProtocol::grpc;
          }
          else if (hashCode == http_HASH)
          {
            return PortProtocol::http;
          }
          else if (hashCode == http2_HASH)
          {
            return PortProtocol::http2;
          }
          else if (hashCode == tcp_HASH)
          {
            return PortProtocol::tcp;
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
          case PortProtocol::grpc:
            return "grpc";
          case PortProtocol::http:
            return "http";
          case PortProtocol::http2:
            return "http2";
          case PortProtocol::tcp:
            return "tcp";
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
