/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailTrace.h>
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
      namespace GuardrailTraceMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabled_full_HASH = HashingUtils::HashString("enabled_full");


        GuardrailTrace GetGuardrailTraceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return GuardrailTrace::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return GuardrailTrace::disabled;
          }
          else if (hashCode == enabled_full_HASH)
          {
            return GuardrailTrace::enabled_full;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailTrace>(hashCode);
          }

          return GuardrailTrace::NOT_SET;
        }

        Aws::String GetNameForGuardrailTrace(GuardrailTrace enumValue)
        {
          switch(enumValue)
          {
          case GuardrailTrace::NOT_SET:
            return {};
          case GuardrailTrace::enabled:
            return "enabled";
          case GuardrailTrace::disabled:
            return "disabled";
          case GuardrailTrace::enabled_full:
            return "enabled_full";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailTraceMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
