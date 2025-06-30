/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/VectorSearchRerankingConfigurationType.h>
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
      namespace VectorSearchRerankingConfigurationTypeMapper
      {

        static const int BEDROCK_RERANKING_MODEL_HASH = HashingUtils::HashString("BEDROCK_RERANKING_MODEL");


        VectorSearchRerankingConfigurationType GetVectorSearchRerankingConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEDROCK_RERANKING_MODEL_HASH)
          {
            return VectorSearchRerankingConfigurationType::BEDROCK_RERANKING_MODEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VectorSearchRerankingConfigurationType>(hashCode);
          }

          return VectorSearchRerankingConfigurationType::NOT_SET;
        }

        Aws::String GetNameForVectorSearchRerankingConfigurationType(VectorSearchRerankingConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case VectorSearchRerankingConfigurationType::NOT_SET:
            return {};
          case VectorSearchRerankingConfigurationType::BEDROCK_RERANKING_MODEL:
            return "BEDROCK_RERANKING_MODEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VectorSearchRerankingConfigurationTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
