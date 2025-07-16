/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ProgrammingLanguage.h>
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
      namespace ProgrammingLanguageMapper
      {

        static const int python_HASH = HashingUtils::HashString("python");
        static const int javascript_HASH = HashingUtils::HashString("javascript");
        static const int typescript_HASH = HashingUtils::HashString("typescript");


        ProgrammingLanguage GetProgrammingLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == python_HASH)
          {
            return ProgrammingLanguage::python;
          }
          else if (hashCode == javascript_HASH)
          {
            return ProgrammingLanguage::javascript;
          }
          else if (hashCode == typescript_HASH)
          {
            return ProgrammingLanguage::typescript;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProgrammingLanguage>(hashCode);
          }

          return ProgrammingLanguage::NOT_SET;
        }

        Aws::String GetNameForProgrammingLanguage(ProgrammingLanguage enumValue)
        {
          switch(enumValue)
          {
          case ProgrammingLanguage::NOT_SET:
            return {};
          case ProgrammingLanguage::python:
            return "python";
          case ProgrammingLanguage::javascript:
            return "javascript";
          case ProgrammingLanguage::typescript:
            return "typescript";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProgrammingLanguageMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
