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

#include <aws/fsx/model/DataRepositoryTaskFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace DataRepositoryTaskFilterNameMapper
      {

        static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");
        static const int task_lifecycle_HASH = HashingUtils::HashString("task-lifecycle");


        DataRepositoryTaskFilterName GetDataRepositoryTaskFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == file_system_id_HASH)
          {
            return DataRepositoryTaskFilterName::file_system_id;
          }
          else if (hashCode == task_lifecycle_HASH)
          {
            return DataRepositoryTaskFilterName::task_lifecycle;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataRepositoryTaskFilterName>(hashCode);
          }

          return DataRepositoryTaskFilterName::NOT_SET;
        }

        Aws::String GetNameForDataRepositoryTaskFilterName(DataRepositoryTaskFilterName enumValue)
        {
          switch(enumValue)
          {
          case DataRepositoryTaskFilterName::file_system_id:
            return "file-system-id";
          case DataRepositoryTaskFilterName::task_lifecycle:
            return "task-lifecycle";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataRepositoryTaskFilterNameMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
