/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DataSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace DataSourceTypeMapper
      {

        static constexpr uint32_t S3_HASH = ConstExprHashingUtils::HashString("S3");
        static constexpr uint32_t SHAREPOINT_HASH = ConstExprHashingUtils::HashString("SHAREPOINT");
        static constexpr uint32_t DATABASE_HASH = ConstExprHashingUtils::HashString("DATABASE");
        static constexpr uint32_t SALESFORCE_HASH = ConstExprHashingUtils::HashString("SALESFORCE");
        static constexpr uint32_t ONEDRIVE_HASH = ConstExprHashingUtils::HashString("ONEDRIVE");
        static constexpr uint32_t SERVICENOW_HASH = ConstExprHashingUtils::HashString("SERVICENOW");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");
        static constexpr uint32_t CONFLUENCE_HASH = ConstExprHashingUtils::HashString("CONFLUENCE");
        static constexpr uint32_t GOOGLEDRIVE_HASH = ConstExprHashingUtils::HashString("GOOGLEDRIVE");
        static constexpr uint32_t WEBCRAWLER_HASH = ConstExprHashingUtils::HashString("WEBCRAWLER");
        static constexpr uint32_t WORKDOCS_HASH = ConstExprHashingUtils::HashString("WORKDOCS");
        static constexpr uint32_t FSX_HASH = ConstExprHashingUtils::HashString("FSX");
        static constexpr uint32_t SLACK_HASH = ConstExprHashingUtils::HashString("SLACK");
        static constexpr uint32_t BOX_HASH = ConstExprHashingUtils::HashString("BOX");
        static constexpr uint32_t QUIP_HASH = ConstExprHashingUtils::HashString("QUIP");
        static constexpr uint32_t JIRA_HASH = ConstExprHashingUtils::HashString("JIRA");
        static constexpr uint32_t GITHUB_HASH = ConstExprHashingUtils::HashString("GITHUB");
        static constexpr uint32_t ALFRESCO_HASH = ConstExprHashingUtils::HashString("ALFRESCO");
        static constexpr uint32_t TEMPLATE_HASH = ConstExprHashingUtils::HashString("TEMPLATE");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return DataSourceType::S3;
          }
          else if (hashCode == SHAREPOINT_HASH)
          {
            return DataSourceType::SHAREPOINT;
          }
          else if (hashCode == DATABASE_HASH)
          {
            return DataSourceType::DATABASE;
          }
          else if (hashCode == SALESFORCE_HASH)
          {
            return DataSourceType::SALESFORCE;
          }
          else if (hashCode == ONEDRIVE_HASH)
          {
            return DataSourceType::ONEDRIVE;
          }
          else if (hashCode == SERVICENOW_HASH)
          {
            return DataSourceType::SERVICENOW;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return DataSourceType::CUSTOM;
          }
          else if (hashCode == CONFLUENCE_HASH)
          {
            return DataSourceType::CONFLUENCE;
          }
          else if (hashCode == GOOGLEDRIVE_HASH)
          {
            return DataSourceType::GOOGLEDRIVE;
          }
          else if (hashCode == WEBCRAWLER_HASH)
          {
            return DataSourceType::WEBCRAWLER;
          }
          else if (hashCode == WORKDOCS_HASH)
          {
            return DataSourceType::WORKDOCS;
          }
          else if (hashCode == FSX_HASH)
          {
            return DataSourceType::FSX;
          }
          else if (hashCode == SLACK_HASH)
          {
            return DataSourceType::SLACK;
          }
          else if (hashCode == BOX_HASH)
          {
            return DataSourceType::BOX;
          }
          else if (hashCode == QUIP_HASH)
          {
            return DataSourceType::QUIP;
          }
          else if (hashCode == JIRA_HASH)
          {
            return DataSourceType::JIRA;
          }
          else if (hashCode == GITHUB_HASH)
          {
            return DataSourceType::GITHUB;
          }
          else if (hashCode == ALFRESCO_HASH)
          {
            return DataSourceType::ALFRESCO;
          }
          else if (hashCode == TEMPLATE_HASH)
          {
            return DataSourceType::TEMPLATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceType>(hashCode);
          }

          return DataSourceType::NOT_SET;
        }

        Aws::String GetNameForDataSourceType(DataSourceType enumValue)
        {
          switch(enumValue)
          {
          case DataSourceType::NOT_SET:
            return {};
          case DataSourceType::S3:
            return "S3";
          case DataSourceType::SHAREPOINT:
            return "SHAREPOINT";
          case DataSourceType::DATABASE:
            return "DATABASE";
          case DataSourceType::SALESFORCE:
            return "SALESFORCE";
          case DataSourceType::ONEDRIVE:
            return "ONEDRIVE";
          case DataSourceType::SERVICENOW:
            return "SERVICENOW";
          case DataSourceType::CUSTOM:
            return "CUSTOM";
          case DataSourceType::CONFLUENCE:
            return "CONFLUENCE";
          case DataSourceType::GOOGLEDRIVE:
            return "GOOGLEDRIVE";
          case DataSourceType::WEBCRAWLER:
            return "WEBCRAWLER";
          case DataSourceType::WORKDOCS:
            return "WORKDOCS";
          case DataSourceType::FSX:
            return "FSX";
          case DataSourceType::SLACK:
            return "SLACK";
          case DataSourceType::BOX:
            return "BOX";
          case DataSourceType::QUIP:
            return "QUIP";
          case DataSourceType::JIRA:
            return "JIRA";
          case DataSourceType::GITHUB:
            return "GITHUB";
          case DataSourceType::ALFRESCO:
            return "ALFRESCO";
          case DataSourceType::TEMPLATE:
            return "TEMPLATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
