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

#include <aws/kendra/model/DataSourceStatus.h>
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
      namespace DataSourceStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        DataSourceStatus GetDataSourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DataSourceStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DataSourceStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataSourceStatus::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DataSourceStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DataSourceStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceStatus>(hashCode);
          }

          return DataSourceStatus::NOT_SET;
        }

        Aws::String GetNameForDataSourceStatus(DataSourceStatus enumValue)
        {
          switch(enumValue)
          {
          case DataSourceStatus::CREATING:
            return "CREATING";
          case DataSourceStatus::DELETING:
            return "DELETING";
          case DataSourceStatus::FAILED:
            return "FAILED";
          case DataSourceStatus::UPDATING:
            return "UPDATING";
          case DataSourceStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
