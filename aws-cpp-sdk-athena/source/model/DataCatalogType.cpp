/*
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

#include <aws/athena/model/DataCatalogType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace DataCatalogTypeMapper
      {

        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
        static const int GLUE_HASH = HashingUtils::HashString("GLUE");
        static const int HIVE_HASH = HashingUtils::HashString("HIVE");


        DataCatalogType GetDataCatalogTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAMBDA_HASH)
          {
            return DataCatalogType::LAMBDA;
          }
          else if (hashCode == GLUE_HASH)
          {
            return DataCatalogType::GLUE;
          }
          else if (hashCode == HIVE_HASH)
          {
            return DataCatalogType::HIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataCatalogType>(hashCode);
          }

          return DataCatalogType::NOT_SET;
        }

        Aws::String GetNameForDataCatalogType(DataCatalogType enumValue)
        {
          switch(enumValue)
          {
          case DataCatalogType::LAMBDA:
            return "LAMBDA";
          case DataCatalogType::GLUE:
            return "GLUE";
          case DataCatalogType::HIVE:
            return "HIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataCatalogTypeMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
