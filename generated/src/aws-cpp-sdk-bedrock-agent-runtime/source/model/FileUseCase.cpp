/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FileUseCase.h>
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
      namespace FileUseCaseMapper
      {

        static const int CODE_INTERPRETER_HASH = HashingUtils::HashString("CODE_INTERPRETER");
        static const int CHAT_HASH = HashingUtils::HashString("CHAT");


        FileUseCase GetFileUseCaseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODE_INTERPRETER_HASH)
          {
            return FileUseCase::CODE_INTERPRETER;
          }
          else if (hashCode == CHAT_HASH)
          {
            return FileUseCase::CHAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileUseCase>(hashCode);
          }

          return FileUseCase::NOT_SET;
        }

        Aws::String GetNameForFileUseCase(FileUseCase enumValue)
        {
          switch(enumValue)
          {
          case FileUseCase::NOT_SET:
            return {};
          case FileUseCase::CODE_INTERPRETER:
            return "CODE_INTERPRETER";
          case FileUseCase::CHAT:
            return "CHAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileUseCaseMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
