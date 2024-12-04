/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DataSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace DataSourceTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int WEB_HASH = HashingUtils::HashString("WEB");
        static const int CONFLUENCE_HASH = HashingUtils::HashString("CONFLUENCE");
        static const int SALESFORCE_HASH = HashingUtils::HashString("SALESFORCE");
        static const int SHAREPOINT_HASH = HashingUtils::HashString("SHAREPOINT");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int REDSHIFT_METADATA_HASH = HashingUtils::HashString("REDSHIFT_METADATA");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return DataSourceType::S3;
          }
          else if (hashCode == WEB_HASH)
          {
            return DataSourceType::WEB;
          }
          else if (hashCode == CONFLUENCE_HASH)
          {
            return DataSourceType::CONFLUENCE;
          }
          else if (hashCode == SALESFORCE_HASH)
          {
            return DataSourceType::SALESFORCE;
          }
          else if (hashCode == SHAREPOINT_HASH)
          {
            return DataSourceType::SHAREPOINT;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return DataSourceType::CUSTOM;
          }
          else if (hashCode == REDSHIFT_METADATA_HASH)
          {
            return DataSourceType::REDSHIFT_METADATA;
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
          case DataSourceType::WEB:
            return "WEB";
          case DataSourceType::CONFLUENCE:
            return "CONFLUENCE";
          case DataSourceType::SALESFORCE:
            return "SALESFORCE";
          case DataSourceType::SHAREPOINT:
            return "SHAREPOINT";
          case DataSourceType::CUSTOM:
            return "CUSTOM";
          case DataSourceType::REDSHIFT_METADATA:
            return "REDSHIFT_METADATA";
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
  } // namespace BedrockAgent
} // namespace Aws
