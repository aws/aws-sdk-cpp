/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankingMetadataSelectionMode.h>
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
      namespace RerankingMetadataSelectionModeMapper
      {

        static const int SELECTIVE_HASH = HashingUtils::HashString("SELECTIVE");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        RerankingMetadataSelectionMode GetRerankingMetadataSelectionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELECTIVE_HASH)
          {
            return RerankingMetadataSelectionMode::SELECTIVE;
          }
          else if (hashCode == ALL_HASH)
          {
            return RerankingMetadataSelectionMode::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RerankingMetadataSelectionMode>(hashCode);
          }

          return RerankingMetadataSelectionMode::NOT_SET;
        }

        Aws::String GetNameForRerankingMetadataSelectionMode(RerankingMetadataSelectionMode enumValue)
        {
          switch(enumValue)
          {
          case RerankingMetadataSelectionMode::NOT_SET:
            return {};
          case RerankingMetadataSelectionMode::SELECTIVE:
            return "SELECTIVE";
          case RerankingMetadataSelectionMode::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RerankingMetadataSelectionModeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
