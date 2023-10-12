/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeSnippetErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CodeSnippetErrorCodeMapper
      {

        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t CODE_SNIPPET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CODE_SNIPPET_NOT_FOUND");
        static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("INVALID_INPUT");


        CodeSnippetErrorCode GetCodeSnippetErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return CodeSnippetErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return CodeSnippetErrorCode::ACCESS_DENIED;
          }
          else if (hashCode == CODE_SNIPPET_NOT_FOUND_HASH)
          {
            return CodeSnippetErrorCode::CODE_SNIPPET_NOT_FOUND;
          }
          else if (hashCode == INVALID_INPUT_HASH)
          {
            return CodeSnippetErrorCode::INVALID_INPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeSnippetErrorCode>(hashCode);
          }

          return CodeSnippetErrorCode::NOT_SET;
        }

        Aws::String GetNameForCodeSnippetErrorCode(CodeSnippetErrorCode enumValue)
        {
          switch(enumValue)
          {
          case CodeSnippetErrorCode::NOT_SET:
            return {};
          case CodeSnippetErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case CodeSnippetErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case CodeSnippetErrorCode::CODE_SNIPPET_NOT_FOUND:
            return "CODE_SNIPPET_NOT_FOUND";
          case CodeSnippetErrorCode::INVALID_INPUT:
            return "INVALID_INPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodeSnippetErrorCodeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
