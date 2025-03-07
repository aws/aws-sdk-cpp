/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ContextEnrichmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace ContextEnrichmentTypeMapper
      {

        static const int BEDROCK_FOUNDATION_MODEL_HASH = HashingUtils::HashString("BEDROCK_FOUNDATION_MODEL");


        ContextEnrichmentType GetContextEnrichmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEDROCK_FOUNDATION_MODEL_HASH)
          {
            return ContextEnrichmentType::BEDROCK_FOUNDATION_MODEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContextEnrichmentType>(hashCode);
          }

          return ContextEnrichmentType::NOT_SET;
        }

        Aws::String GetNameForContextEnrichmentType(ContextEnrichmentType enumValue)
        {
          switch(enumValue)
          {
          case ContextEnrichmentType::NOT_SET:
            return {};
          case ContextEnrichmentType::BEDROCK_FOUNDATION_MODEL:
            return "BEDROCK_FOUNDATION_MODEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContextEnrichmentTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
