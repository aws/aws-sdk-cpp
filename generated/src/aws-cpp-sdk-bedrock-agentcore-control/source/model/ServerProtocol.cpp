/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ServerProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace ServerProtocolMapper
      {

        static const int MCP_HASH = HashingUtils::HashString("MCP");
        static const int HTTP_HASH = HashingUtils::HashString("HTTP");


        ServerProtocol GetServerProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MCP_HASH)
          {
            return ServerProtocol::MCP;
          }
          else if (hashCode == HTTP_HASH)
          {
            return ServerProtocol::HTTP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerProtocol>(hashCode);
          }

          return ServerProtocol::NOT_SET;
        }

        Aws::String GetNameForServerProtocol(ServerProtocol enumValue)
        {
          switch(enumValue)
          {
          case ServerProtocol::NOT_SET:
            return {};
          case ServerProtocol::MCP:
            return "MCP";
          case ServerProtocol::HTTP:
            return "HTTP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerProtocolMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
