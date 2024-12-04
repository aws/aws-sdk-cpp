/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultLocationType.h>
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
      namespace RetrievalResultLocationTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int WEB_HASH = HashingUtils::HashString("WEB");
        static const int CONFLUENCE_HASH = HashingUtils::HashString("CONFLUENCE");
        static const int SALESFORCE_HASH = HashingUtils::HashString("SALESFORCE");
        static const int SHAREPOINT_HASH = HashingUtils::HashString("SHAREPOINT");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int KENDRA_HASH = HashingUtils::HashString("KENDRA");
        static const int SQL_HASH = HashingUtils::HashString("SQL");


        RetrievalResultLocationType GetRetrievalResultLocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return RetrievalResultLocationType::S3;
          }
          else if (hashCode == WEB_HASH)
          {
            return RetrievalResultLocationType::WEB;
          }
          else if (hashCode == CONFLUENCE_HASH)
          {
            return RetrievalResultLocationType::CONFLUENCE;
          }
          else if (hashCode == SALESFORCE_HASH)
          {
            return RetrievalResultLocationType::SALESFORCE;
          }
          else if (hashCode == SHAREPOINT_HASH)
          {
            return RetrievalResultLocationType::SHAREPOINT;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return RetrievalResultLocationType::CUSTOM;
          }
          else if (hashCode == KENDRA_HASH)
          {
            return RetrievalResultLocationType::KENDRA;
          }
          else if (hashCode == SQL_HASH)
          {
            return RetrievalResultLocationType::SQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrievalResultLocationType>(hashCode);
          }

          return RetrievalResultLocationType::NOT_SET;
        }

        Aws::String GetNameForRetrievalResultLocationType(RetrievalResultLocationType enumValue)
        {
          switch(enumValue)
          {
          case RetrievalResultLocationType::NOT_SET:
            return {};
          case RetrievalResultLocationType::S3:
            return "S3";
          case RetrievalResultLocationType::WEB:
            return "WEB";
          case RetrievalResultLocationType::CONFLUENCE:
            return "CONFLUENCE";
          case RetrievalResultLocationType::SALESFORCE:
            return "SALESFORCE";
          case RetrievalResultLocationType::SHAREPOINT:
            return "SHAREPOINT";
          case RetrievalResultLocationType::CUSTOM:
            return "CUSTOM";
          case RetrievalResultLocationType::KENDRA:
            return "KENDRA";
          case RetrievalResultLocationType::SQL:
            return "SQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetrievalResultLocationTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
