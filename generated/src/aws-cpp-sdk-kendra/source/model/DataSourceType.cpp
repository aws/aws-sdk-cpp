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

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int SHAREPOINT_HASH = HashingUtils::HashString("SHAREPOINT");
        static const int DATABASE_HASH = HashingUtils::HashString("DATABASE");
        static const int SALESFORCE_HASH = HashingUtils::HashString("SALESFORCE");
        static const int ONEDRIVE_HASH = HashingUtils::HashString("ONEDRIVE");
        static const int SERVICENOW_HASH = HashingUtils::HashString("SERVICENOW");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int CONFLUENCE_HASH = HashingUtils::HashString("CONFLUENCE");
        static const int GOOGLEDRIVE_HASH = HashingUtils::HashString("GOOGLEDRIVE");
        static const int WEBCRAWLER_HASH = HashingUtils::HashString("WEBCRAWLER");
        static const int WORKDOCS_HASH = HashingUtils::HashString("WORKDOCS");
        static const int FSX_HASH = HashingUtils::HashString("FSX");
        static const int SLACK_HASH = HashingUtils::HashString("SLACK");
        static const int BOX_HASH = HashingUtils::HashString("BOX");
        static const int QUIP_HASH = HashingUtils::HashString("QUIP");
        static const int JIRA_HASH = HashingUtils::HashString("JIRA");
        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
        static const int ALFRESCO_HASH = HashingUtils::HashString("ALFRESCO");
        static const int TEMPLATE_HASH = HashingUtils::HashString("TEMPLATE");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
