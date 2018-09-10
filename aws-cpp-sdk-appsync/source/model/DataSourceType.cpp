﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DataSourceTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
