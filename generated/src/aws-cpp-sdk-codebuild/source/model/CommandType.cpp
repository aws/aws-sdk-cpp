/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CommandType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace CommandTypeMapper
      {

        static const int SHELL_HASH = HashingUtils::HashString("SHELL");


        CommandType GetCommandTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHELL_HASH)
          {
            return CommandType::SHELL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommandType>(hashCode);
          }

          return CommandType::NOT_SET;
        }

        Aws::String GetNameForCommandType(CommandType enumValue)
        {
          switch(enumValue)
          {
          case CommandType::NOT_SET:
            return {};
          case CommandType::SHELL:
            return "SHELL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommandTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
