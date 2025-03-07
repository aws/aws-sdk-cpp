/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/EnrichmentStrategyMethod.h>
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
      namespace EnrichmentStrategyMethodMapper
      {

        static const int CHUNK_ENTITY_EXTRACTION_HASH = HashingUtils::HashString("CHUNK_ENTITY_EXTRACTION");


        EnrichmentStrategyMethod GetEnrichmentStrategyMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHUNK_ENTITY_EXTRACTION_HASH)
          {
            return EnrichmentStrategyMethod::CHUNK_ENTITY_EXTRACTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnrichmentStrategyMethod>(hashCode);
          }

          return EnrichmentStrategyMethod::NOT_SET;
        }

        Aws::String GetNameForEnrichmentStrategyMethod(EnrichmentStrategyMethod enumValue)
        {
          switch(enumValue)
          {
          case EnrichmentStrategyMethod::NOT_SET:
            return {};
          case EnrichmentStrategyMethod::CHUNK_ENTITY_EXTRACTION:
            return "CHUNK_ENTITY_EXTRACTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnrichmentStrategyMethodMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
