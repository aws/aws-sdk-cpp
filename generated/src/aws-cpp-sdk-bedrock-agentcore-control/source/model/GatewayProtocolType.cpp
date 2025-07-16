/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayProtocolType.h>
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
      namespace GatewayProtocolTypeMapper
      {

        static const int MCP_HASH = HashingUtils::HashString("MCP");


        GatewayProtocolType GetGatewayProtocolTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MCP_HASH)
          {
            return GatewayProtocolType::MCP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayProtocolType>(hashCode);
          }

          return GatewayProtocolType::NOT_SET;
        }

        Aws::String GetNameForGatewayProtocolType(GatewayProtocolType enumValue)
        {
          switch(enumValue)
          {
          case GatewayProtocolType::NOT_SET:
            return {};
          case GatewayProtocolType::MCP:
            return "MCP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GatewayProtocolTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
