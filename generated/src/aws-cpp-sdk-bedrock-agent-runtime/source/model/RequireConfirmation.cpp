/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RequireConfirmation.h>
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
      namespace RequireConfirmationMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        RequireConfirmation GetRequireConfirmationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return RequireConfirmation::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return RequireConfirmation::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequireConfirmation>(hashCode);
          }

          return RequireConfirmation::NOT_SET;
        }

        Aws::String GetNameForRequireConfirmation(RequireConfirmation enumValue)
        {
          switch(enumValue)
          {
          case RequireConfirmation::NOT_SET:
            return {};
          case RequireConfirmation::ENABLED:
            return "ENABLED";
          case RequireConfirmation::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequireConfirmationMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
