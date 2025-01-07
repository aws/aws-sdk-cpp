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
        static const int WISDOM_QUICK_RESPONSES_HASH = HashingUtils::HashString("WISDOM_QUICK_RESPONSES");
        static const int Q_MESSAGE_TEMPLATES_HASH = HashingUtils::HashString("Q_MESSAGE_TEMPLATES");
        static const int CASES_DOMAIN_HASH = HashingUtils::HashString("CASES_DOMAIN");
        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");
        static const int FILE_SCANNER_HASH = HashingUtils::HashString("FILE_SCANNER");
        static const int SES_IDENTITY_HASH = HashingUtils::HashString("SES_IDENTITY");
        static const int ANALYTICS_CONNECTOR_HASH = HashingUtils::HashString("ANALYTICS_CONNECTOR");
        static const int CALL_TRANSFER_CONNECTOR_HASH = HashingUtils::HashString("CALL_TRANSFER_CONNECTOR");
        static const int COGNITO_USER_POOL_HASH = HashingUtils::HashString("COGNITO_USER_POOL");


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
          else if (hashCode == WISDOM_QUICK_RESPONSES_HASH)
          {
            return IntegrationType::WISDOM_QUICK_RESPONSES;
          }
          else if (hashCode == Q_MESSAGE_TEMPLATES_HASH)
          {
            return IntegrationType::Q_MESSAGE_TEMPLATES;
          }
          else if (hashCode == CASES_DOMAIN_HASH)
          {
            return IntegrationType::CASES_DOMAIN;
          }
          else if (hashCode == APPLICATION_HASH)
          {
            return IntegrationType::APPLICATION;
          }
          else if (hashCode == FILE_SCANNER_HASH)
          {
            return IntegrationType::FILE_SCANNER;
          }
          else if (hashCode == SES_IDENTITY_HASH)
          {
            return IntegrationType::SES_IDENTITY;
          }
          else if (hashCode == ANALYTICS_CONNECTOR_HASH)
          {
            return IntegrationType::ANALYTICS_CONNECTOR;
          }
          else if (hashCode == CALL_TRANSFER_CONNECTOR_HASH)
          {
            return IntegrationType::CALL_TRANSFER_CONNECTOR;
          }
          else if (hashCode == COGNITO_USER_POOL_HASH)
          {
            return IntegrationType::COGNITO_USER_POOL;
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
          case IntegrationType::WISDOM_QUICK_RESPONSES:
            return "WISDOM_QUICK_RESPONSES";
          case IntegrationType::Q_MESSAGE_TEMPLATES:
            return "Q_MESSAGE_TEMPLATES";
          case IntegrationType::CASES_DOMAIN:
            return "CASES_DOMAIN";
          case IntegrationType::APPLICATION:
            return "APPLICATION";
          case IntegrationType::FILE_SCANNER:
            return "FILE_SCANNER";
          case IntegrationType::SES_IDENTITY:
            return "SES_IDENTITY";
          case IntegrationType::ANALYTICS_CONNECTOR:
            return "ANALYTICS_CONNECTOR";
          case IntegrationType::CALL_TRANSFER_CONNECTOR:
            return "CALL_TRANSFER_CONNECTOR";
          case IntegrationType::COGNITO_USER_POOL:
            return "COGNITO_USER_POOL";
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
