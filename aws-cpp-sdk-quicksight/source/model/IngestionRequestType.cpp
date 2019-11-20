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

#include <aws/quicksight/model/IngestionRequestType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace IngestionRequestTypeMapper
      {

        static const int INITIAL_INGESTION_HASH = HashingUtils::HashString("INITIAL_INGESTION");
        static const int EDIT_HASH = HashingUtils::HashString("EDIT");
        static const int INCREMENTAL_REFRESH_HASH = HashingUtils::HashString("INCREMENTAL_REFRESH");
        static const int FULL_REFRESH_HASH = HashingUtils::HashString("FULL_REFRESH");


        IngestionRequestType GetIngestionRequestTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIAL_INGESTION_HASH)
          {
            return IngestionRequestType::INITIAL_INGESTION;
          }
          else if (hashCode == EDIT_HASH)
          {
            return IngestionRequestType::EDIT;
          }
          else if (hashCode == INCREMENTAL_REFRESH_HASH)
          {
            return IngestionRequestType::INCREMENTAL_REFRESH;
          }
          else if (hashCode == FULL_REFRESH_HASH)
          {
            return IngestionRequestType::FULL_REFRESH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionRequestType>(hashCode);
          }

          return IngestionRequestType::NOT_SET;
        }

        Aws::String GetNameForIngestionRequestType(IngestionRequestType enumValue)
        {
          switch(enumValue)
          {
          case IngestionRequestType::INITIAL_INGESTION:
            return "INITIAL_INGESTION";
          case IngestionRequestType::EDIT:
            return "EDIT";
          case IngestionRequestType::INCREMENTAL_REFRESH:
            return "INCREMENTAL_REFRESH";
          case IngestionRequestType::FULL_REFRESH:
            return "FULL_REFRESH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionRequestTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
