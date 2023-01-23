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

        static const int EVENT_HASH = HashingUtils::HashString("EVENT");
        static const int VOICE_ID_HASH = HashingUtils::HashString("VOICE_ID");
        static const int PINPOINT_APP_HASH = HashingUtils::HashString("PINPOINT_APP");
        static const int WISDOM_ASSISTANT_HASH = HashingUtils::HashString("WISDOM_ASSISTANT");
        static const int WISDOM_KNOWLEDGE_BASE_HASH = HashingUtils::HashString("WISDOM_KNOWLEDGE_BASE");
        static const int CASES_DOMAIN_HASH = HashingUtils::HashString("CASES_DOMAIN");


        IntegrationType GetIntegrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
