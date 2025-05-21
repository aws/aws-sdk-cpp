/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/NodeErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace NodeErrorCodeMapper
      {

        static const int VALIDATION_HASH = HashingUtils::HashString("VALIDATION");
        static const int DEPENDENCY_FAILED_HASH = HashingUtils::HashString("DEPENDENCY_FAILED");
        static const int BAD_GATEWAY_HASH = HashingUtils::HashString("BAD_GATEWAY");
        static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("INTERNAL_SERVER");


        NodeErrorCode GetNodeErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_HASH)
          {
            return NodeErrorCode::VALIDATION;
          }
          else if (hashCode == DEPENDENCY_FAILED_HASH)
          {
            return NodeErrorCode::DEPENDENCY_FAILED;
          }
          else if (hashCode == BAD_GATEWAY_HASH)
          {
            return NodeErrorCode::BAD_GATEWAY;
          }
          else if (hashCode == INTERNAL_SERVER_HASH)
          {
            return NodeErrorCode::INTERNAL_SERVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeErrorCode>(hashCode);
          }

          return NodeErrorCode::NOT_SET;
        }

        Aws::String GetNameForNodeErrorCode(NodeErrorCode enumValue)
        {
          switch(enumValue)
          {
          case NodeErrorCode::NOT_SET:
            return {};
          case NodeErrorCode::VALIDATION:
            return "VALIDATION";
          case NodeErrorCode::DEPENDENCY_FAILED:
            return "DEPENDENCY_FAILED";
          case NodeErrorCode::BAD_GATEWAY:
            return "BAD_GATEWAY";
          case NodeErrorCode::INTERNAL_SERVER:
            return "INTERNAL_SERVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeErrorCodeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
