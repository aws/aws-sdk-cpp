/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailContentQualifier.h>
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
      namespace GuardrailContentQualifierMapper
      {

        static const int grounding_source_HASH = HashingUtils::HashString("grounding_source");
        static const int query_HASH = HashingUtils::HashString("query");
        static const int guard_content_HASH = HashingUtils::HashString("guard_content");


        GuardrailContentQualifier GetGuardrailContentQualifierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == grounding_source_HASH)
          {
            return GuardrailContentQualifier::grounding_source;
          }
          else if (hashCode == query_HASH)
          {
            return GuardrailContentQualifier::query;
          }
          else if (hashCode == guard_content_HASH)
          {
            return GuardrailContentQualifier::guard_content;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContentQualifier>(hashCode);
          }

          return GuardrailContentQualifier::NOT_SET;
        }

        Aws::String GetNameForGuardrailContentQualifier(GuardrailContentQualifier enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContentQualifier::NOT_SET:
            return {};
          case GuardrailContentQualifier::grounding_source:
            return "grounding_source";
          case GuardrailContentQualifier::query:
            return "query";
          case GuardrailContentQualifier::guard_content:
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

      } // namespace GuardrailContentQualifierMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
