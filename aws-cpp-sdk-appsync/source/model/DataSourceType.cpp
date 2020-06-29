/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace DataSourceTypeMapper
      {

        static const int AWS_LAMBDA_HASH = HashingUtils::HashString("AWS_LAMBDA");
        static const int AMAZON_DYNAMODB_HASH = HashingUtils::HashString("AMAZON_DYNAMODB");
        static const int AMAZON_ELASTICSEARCH_HASH = HashingUtils::HashString("AMAZON_ELASTICSEARCH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int RELATIONAL_DATABASE_HASH = HashingUtils::HashString("RELATIONAL_DATABASE");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_LAMBDA_HASH)
          {
            return DataSourceType::AWS_LAMBDA;
          }
          else if (hashCode == AMAZON_DYNAMODB_HASH)
          {
            return DataSourceType::AMAZON_DYNAMODB;
          }
          else if (hashCode == AMAZON_ELASTICSEARCH_HASH)
          {
            return DataSourceType::AMAZON_ELASTICSEARCH;
          }
          else if (hashCode == NONE_HASH)
          {
            return DataSourceType::NONE;
          }
          else if (hashCode == HTTP_HASH)
          {
            return DataSourceType::HTTP;
          }
          else if (hashCode == RELATIONAL_DATABASE_HASH)
          {
            return DataSourceType::RELATIONAL_DATABASE;
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
          case DataSourceType::AWS_LAMBDA:
            return "AWS_LAMBDA";
          case DataSourceType::AMAZON_DYNAMODB:
            return "AMAZON_DYNAMODB";
          case DataSourceType::AMAZON_ELASTICSEARCH:
            return "AMAZON_ELASTICSEARCH";
          case DataSourceType::NONE:
            return "NONE";
          case DataSourceType::HTTP:
            return "HTTP";
          case DataSourceType::RELATIONAL_DATABASE:
            return "RELATIONAL_DATABASE";
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
  } // namespace AppSync
} // namespace Aws
