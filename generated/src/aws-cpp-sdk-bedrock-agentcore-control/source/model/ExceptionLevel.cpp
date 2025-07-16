/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ExceptionLevel.h>
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
      namespace ExceptionLevelMapper
      {

        static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");


        ExceptionLevel GetExceptionLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEBUG__HASH)
          {
            return ExceptionLevel::DEBUG_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExceptionLevel>(hashCode);
          }

          return ExceptionLevel::NOT_SET;
        }

        Aws::String GetNameForExceptionLevel(ExceptionLevel enumValue)
        {
          switch(enumValue)
          {
          case ExceptionLevel::NOT_SET:
            return {};
          case ExceptionLevel::DEBUG_:
            return "DEBUG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExceptionLevelMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
