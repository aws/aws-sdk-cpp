/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ExecutionType.h>
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
      namespace ExecutionTypeMapper
      {

        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
        static const int RETURN_CONTROL_HASH = HashingUtils::HashString("RETURN_CONTROL");


        ExecutionType GetExecutionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAMBDA_HASH)
          {
            return ExecutionType::LAMBDA;
          }
          else if (hashCode == RETURN_CONTROL_HASH)
          {
            return ExecutionType::RETURN_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionType>(hashCode);
          }

          return ExecutionType::NOT_SET;
        }

        Aws::String GetNameForExecutionType(ExecutionType enumValue)
        {
          switch(enumValue)
          {
          case ExecutionType::NOT_SET:
            return {};
          case ExecutionType::LAMBDA:
            return "LAMBDA";
          case ExecutionType::RETURN_CONTROL:
            return "RETURN_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
