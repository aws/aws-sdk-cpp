/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailStreamProcessingMode.h>
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
      namespace GuardrailStreamProcessingModeMapper
      {

        static const int sync_HASH = HashingUtils::HashString("sync");
        static const int async_HASH = HashingUtils::HashString("async");


        GuardrailStreamProcessingMode GetGuardrailStreamProcessingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sync_HASH)
          {
            return GuardrailStreamProcessingMode::sync;
          }
          else if (hashCode == async_HASH)
          {
            return GuardrailStreamProcessingMode::async;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailStreamProcessingMode>(hashCode);
          }

          return GuardrailStreamProcessingMode::NOT_SET;
        }

        Aws::String GetNameForGuardrailStreamProcessingMode(GuardrailStreamProcessingMode enumValue)
        {
          switch(enumValue)
          {
          case GuardrailStreamProcessingMode::NOT_SET:
            return {};
          case GuardrailStreamProcessingMode::sync:
            return "sync";
          case GuardrailStreamProcessingMode::async:
            return "async";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailStreamProcessingModeMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
