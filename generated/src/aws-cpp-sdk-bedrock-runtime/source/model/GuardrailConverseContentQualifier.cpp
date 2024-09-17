/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailConverseContentQualifier.h>
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
      namespace GuardrailConverseContentQualifierMapper
      {

        static const int grounding_source_HASH = HashingUtils::HashString("grounding_source");
        static const int query_HASH = HashingUtils::HashString("query");
        static const int guard_content_HASH = HashingUtils::HashString("guard_content");


        GuardrailConverseContentQualifier GetGuardrailConverseContentQualifierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == grounding_source_HASH)
          {
            return GuardrailConverseContentQualifier::grounding_source;
          }
          else if (hashCode == query_HASH)
          {
            return GuardrailConverseContentQualifier::query;
          }
          else if (hashCode == guard_content_HASH)
          {
            return GuardrailConverseContentQualifier::guard_content;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailConverseContentQualifier>(hashCode);
          }

          return GuardrailConverseContentQualifier::NOT_SET;
        }

        Aws::String GetNameForGuardrailConverseContentQualifier(GuardrailConverseContentQualifier enumValue)
        {
          switch(enumValue)
          {
          case GuardrailConverseContentQualifier::NOT_SET:
            return {};
          case GuardrailConverseContentQualifier::grounding_source:
            return "grounding_source";
          case GuardrailConverseContentQualifier::query:
            return "query";
          case GuardrailConverseContentQualifier::guard_content:
            return "guard_content";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailConverseContentQualifierMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
