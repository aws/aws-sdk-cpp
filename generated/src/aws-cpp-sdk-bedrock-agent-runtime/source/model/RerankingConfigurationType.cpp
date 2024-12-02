/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankingConfigurationType.h>
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
      namespace RerankingConfigurationTypeMapper
      {

        static const int BEDROCK_RERANKING_MODEL_HASH = HashingUtils::HashString("BEDROCK_RERANKING_MODEL");


        RerankingConfigurationType GetRerankingConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEDROCK_RERANKING_MODEL_HASH)
          {
            return RerankingConfigurationType::BEDROCK_RERANKING_MODEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RerankingConfigurationType>(hashCode);
          }

          return RerankingConfigurationType::NOT_SET;
        }

        Aws::String GetNameForRerankingConfigurationType(RerankingConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case RerankingConfigurationType::NOT_SET:
            return {};
          case RerankingConfigurationType::BEDROCK_RERANKING_MODEL:
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

      } // namespace RerankingConfigurationTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
