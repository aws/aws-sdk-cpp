/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ToolResultStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockRuntime
  {
    namespace Model
    {
      namespace ToolResultStatusMapper
      {

        static const int success_HASH = HashingUtils::HashString("success");
        static const int error_HASH = HashingUtils::HashString("error");


        ToolResultStatus GetToolResultStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == success_HASH)
          {
            return ToolResultStatus::success;
          }
          else if (hashCode == error_HASH)
          {
            return ToolResultStatus::error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ToolResultStatus>(hashCode);
          }

          return ToolResultStatus::NOT_SET;
        }

        Aws::String GetNameForToolResultStatus(ToolResultStatus enumValue)
        {
          switch(enumValue)
          {
          case ToolResultStatus::NOT_SET:
            return {};
          case ToolResultStatus::success:
            return "success";
          case ToolResultStatus::error:
            return "error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ToolResultStatusMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
