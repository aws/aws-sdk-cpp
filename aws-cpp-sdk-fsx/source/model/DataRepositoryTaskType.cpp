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

#include <aws/fsx/model/DataRepositoryTaskType.h>
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
      namespace DataRepositoryTaskTypeMapper
      {

        static const int EXPORT_TO_REPOSITORY_HASH = HashingUtils::HashString("EXPORT_TO_REPOSITORY");


        DataRepositoryTaskType GetDataRepositoryTaskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXPORT_TO_REPOSITORY_HASH)
          {
            return DataRepositoryTaskType::EXPORT_TO_REPOSITORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataRepositoryTaskType>(hashCode);
          }

          return DataRepositoryTaskType::NOT_SET;
        }

        Aws::String GetNameForDataRepositoryTaskType(DataRepositoryTaskType enumValue)
        {
          switch(enumValue)
          {
          case DataRepositoryTaskType::EXPORT_TO_REPOSITORY:
            return "EXPORT_TO_REPOSITORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataRepositoryTaskTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
