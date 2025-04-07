/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/Trace.h>
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
      namespace TraceMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_FULL_HASH = HashingUtils::HashString("ENABLED_FULL");


        Trace GetTraceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return Trace::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Trace::DISABLED;
          }
          else if (hashCode == ENABLED_FULL_HASH)
          {
            return Trace::ENABLED_FULL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Trace>(hashCode);
          }

          return Trace::NOT_SET;
        }

        Aws::String GetNameForTrace(Trace enumValue)
        {
          switch(enumValue)
          {
          case Trace::NOT_SET:
            return {};
          case Trace::ENABLED:
            return "ENABLED";
          case Trace::DISABLED:
            return "DISABLED";
          case Trace::ENABLED_FULL:
            return "ENABLED_FULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TraceMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
