/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PromptRouterStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace PromptRouterStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");


        PromptRouterStatus GetPromptRouterStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return PromptRouterStatus::AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PromptRouterStatus>(hashCode);
          }

          return PromptRouterStatus::NOT_SET;
        }

        Aws::String GetNameForPromptRouterStatus(PromptRouterStatus enumValue)
        {
          switch(enumValue)
          {
          case PromptRouterStatus::NOT_SET:
            return {};
          case PromptRouterStatus::AVAILABLE:
            return "AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PromptRouterStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
