/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/OrchestrationType.h>
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
      namespace OrchestrationTypeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int CUSTOM_ORCHESTRATION_HASH = HashingUtils::HashString("CUSTOM_ORCHESTRATION");


        OrchestrationType GetOrchestrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return OrchestrationType::DEFAULT;
          }
          else if (hashCode == CUSTOM_ORCHESTRATION_HASH)
          {
            return OrchestrationType::CUSTOM_ORCHESTRATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrchestrationType>(hashCode);
          }

          return OrchestrationType::NOT_SET;
        }

        Aws::String GetNameForOrchestrationType(OrchestrationType enumValue)
        {
          switch(enumValue)
          {
          case OrchestrationType::NOT_SET:
            return {};
          case OrchestrationType::DEFAULT:
            return "DEFAULT";
          case OrchestrationType::CUSTOM_ORCHESTRATION:
            return "CUSTOM_ORCHESTRATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrchestrationTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
