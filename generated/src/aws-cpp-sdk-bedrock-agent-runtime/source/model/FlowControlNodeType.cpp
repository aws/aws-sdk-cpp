/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowControlNodeType.h>
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
      namespace FlowControlNodeTypeMapper
      {

        static const int Iterator_HASH = HashingUtils::HashString("Iterator");
        static const int Loop_HASH = HashingUtils::HashString("Loop");


        FlowControlNodeType GetFlowControlNodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Iterator_HASH)
          {
            return FlowControlNodeType::Iterator;
          }
          else if (hashCode == Loop_HASH)
          {
            return FlowControlNodeType::Loop;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowControlNodeType>(hashCode);
          }

          return FlowControlNodeType::NOT_SET;
        }

        Aws::String GetNameForFlowControlNodeType(FlowControlNodeType enumValue)
        {
          switch(enumValue)
          {
          case FlowControlNodeType::NOT_SET:
            return {};
          case FlowControlNodeType::Iterator:
            return "Iterator";
          case FlowControlNodeType::Loop:
            return "Loop";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowControlNodeTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
