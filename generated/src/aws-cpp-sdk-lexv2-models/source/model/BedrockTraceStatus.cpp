/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BedrockTraceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace BedrockTraceStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        BedrockTraceStatus GetBedrockTraceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return BedrockTraceStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return BedrockTraceStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BedrockTraceStatus>(hashCode);
          }

          return BedrockTraceStatus::NOT_SET;
        }

        Aws::String GetNameForBedrockTraceStatus(BedrockTraceStatus enumValue)
        {
          switch(enumValue)
          {
          case BedrockTraceStatus::NOT_SET:
            return {};
          case BedrockTraceStatus::ENABLED:
            return "ENABLED";
          case BedrockTraceStatus::DISABLED:
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

      } // namespace BedrockTraceStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
