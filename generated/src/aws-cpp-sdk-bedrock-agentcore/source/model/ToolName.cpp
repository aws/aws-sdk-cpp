/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ToolName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCore
  {
    namespace Model
    {
      namespace ToolNameMapper
      {

        static const int executeCode_HASH = HashingUtils::HashString("executeCode");
        static const int executeCommand_HASH = HashingUtils::HashString("executeCommand");
        static const int readFiles_HASH = HashingUtils::HashString("readFiles");
        static const int listFiles_HASH = HashingUtils::HashString("listFiles");
        static const int removeFiles_HASH = HashingUtils::HashString("removeFiles");
        static const int writeFiles_HASH = HashingUtils::HashString("writeFiles");
        static const int startCommandExecution_HASH = HashingUtils::HashString("startCommandExecution");
        static const int getTask_HASH = HashingUtils::HashString("getTask");
        static const int stopTask_HASH = HashingUtils::HashString("stopTask");


        ToolName GetToolNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == executeCode_HASH)
          {
            return ToolName::executeCode;
          }
          else if (hashCode == executeCommand_HASH)
          {
            return ToolName::executeCommand;
          }
          else if (hashCode == readFiles_HASH)
          {
            return ToolName::readFiles;
          }
          else if (hashCode == listFiles_HASH)
          {
            return ToolName::listFiles;
          }
          else if (hashCode == removeFiles_HASH)
          {
            return ToolName::removeFiles;
          }
          else if (hashCode == writeFiles_HASH)
          {
            return ToolName::writeFiles;
          }
          else if (hashCode == startCommandExecution_HASH)
          {
            return ToolName::startCommandExecution;
          }
          else if (hashCode == getTask_HASH)
          {
            return ToolName::getTask;
          }
          else if (hashCode == stopTask_HASH)
          {
            return ToolName::stopTask;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ToolName>(hashCode);
          }

          return ToolName::NOT_SET;
        }

        Aws::String GetNameForToolName(ToolName enumValue)
        {
          switch(enumValue)
          {
          case ToolName::NOT_SET:
            return {};
          case ToolName::executeCode:
            return "executeCode";
          case ToolName::executeCommand:
            return "executeCommand";
          case ToolName::readFiles:
            return "readFiles";
          case ToolName::listFiles:
            return "listFiles";
          case ToolName::removeFiles:
            return "removeFiles";
          case ToolName::writeFiles:
            return "writeFiles";
          case ToolName::startCommandExecution:
            return "startCommandExecution";
          case ToolName::getTask:
            return "getTask";
          case ToolName::stopTask:
            return "stopTask";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ToolNameMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
