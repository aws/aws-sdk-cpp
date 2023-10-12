/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/IntegrationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace IntegrationTypeMapper
      {

        static constexpr uint32_t EVENT_HASH = ConstExprHashingUtils::HashString("EVENT");
        static constexpr uint32_t VOICE_ID_HASH = ConstExprHashingUtils::HashString("VOICE_ID");
        static constexpr uint32_t PINPOINT_APP_HASH = ConstExprHashingUtils::HashString("PINPOINT_APP");
        static constexpr uint32_t WISDOM_ASSISTANT_HASH = ConstExprHashingUtils::HashString("WISDOM_ASSISTANT");
        static constexpr uint32_t WISDOM_KNOWLEDGE_BASE_HASH = ConstExprHashingUtils::HashString("WISDOM_KNOWLEDGE_BASE");
        static constexpr uint32_t CASES_DOMAIN_HASH = ConstExprHashingUtils::HashString("CASES_DOMAIN");
        static constexpr uint32_t APPLICATION_HASH = ConstExprHashingUtils::HashString("APPLICATION");


        IntegrationType GetIntegrationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVENT_HASH)
          {
            return IntegrationType::EVENT;
          }
          else if (hashCode == VOICE_ID_HASH)
          {
            return IntegrationType::VOICE_ID;
          }
          else if (hashCode == PINPOINT_APP_HASH)
          {
            return IntegrationType::PINPOINT_APP;
          }
          else if (hashCode == WISDOM_ASSISTANT_HASH)
          {
            return IntegrationType::WISDOM_ASSISTANT;
          }
          else if (hashCode == WISDOM_KNOWLEDGE_BASE_HASH)
          {
            return IntegrationType::WISDOM_KNOWLEDGE_BASE;
          }
          else if (hashCode == CASES_DOMAIN_HASH)
          {
            return IntegrationType::CASES_DOMAIN;
          }
          else if (hashCode == APPLICATION_HASH)
          {
            return IntegrationType::APPLICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationType>(hashCode);
          }

          return IntegrationType::NOT_SET;
        }

        Aws::String GetNameForIntegrationType(IntegrationType enumValue)
        {
          switch(enumValue)
          {
          case IntegrationType::NOT_SET:
            return {};
          case IntegrationType::EVENT:
            return "EVENT";
          case IntegrationType::VOICE_ID:
            return "VOICE_ID";
          case IntegrationType::PINPOINT_APP:
            return "PINPOINT_APP";
          case IntegrationType::WISDOM_ASSISTANT:
            return "WISDOM_ASSISTANT";
          case IntegrationType::WISDOM_KNOWLEDGE_BASE:
            return "WISDOM_KNOWLEDGE_BASE";
          case IntegrationType::CASES_DOMAIN:
            return "CASES_DOMAIN";
          case IntegrationType::APPLICATION:
            return "APPLICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntegrationTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
