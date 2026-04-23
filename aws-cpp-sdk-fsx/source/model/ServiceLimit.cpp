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

#include <aws/fsx/model/ServiceLimit.h>
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
      namespace ServiceLimitMapper
      {

        static const int FILE_SYSTEM_COUNT_HASH = HashingUtils::HashString("FILE_SYSTEM_COUNT");
        static const int TOTAL_THROUGHPUT_CAPACITY_HASH = HashingUtils::HashString("TOTAL_THROUGHPUT_CAPACITY");
        static const int TOTAL_STORAGE_HASH = HashingUtils::HashString("TOTAL_STORAGE");
        static const int TOTAL_USER_INITIATED_BACKUPS_HASH = HashingUtils::HashString("TOTAL_USER_INITIATED_BACKUPS");


        ServiceLimit GetServiceLimitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILE_SYSTEM_COUNT_HASH)
          {
            return ServiceLimit::FILE_SYSTEM_COUNT;
          }
          else if (hashCode == TOTAL_THROUGHPUT_CAPACITY_HASH)
          {
            return ServiceLimit::TOTAL_THROUGHPUT_CAPACITY;
          }
          else if (hashCode == TOTAL_STORAGE_HASH)
          {
            return ServiceLimit::TOTAL_STORAGE;
          }
          else if (hashCode == TOTAL_USER_INITIATED_BACKUPS_HASH)
          {
            return ServiceLimit::TOTAL_USER_INITIATED_BACKUPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceLimit>(hashCode);
          }

          return ServiceLimit::NOT_SET;
        }

        Aws::String GetNameForServiceLimit(ServiceLimit enumValue)
        {
          switch(enumValue)
          {
          case ServiceLimit::FILE_SYSTEM_COUNT:
            return "FILE_SYSTEM_COUNT";
          case ServiceLimit::TOTAL_THROUGHPUT_CAPACITY:
            return "TOTAL_THROUGHPUT_CAPACITY";
          case ServiceLimit::TOTAL_STORAGE:
            return "TOTAL_STORAGE";
          case ServiceLimit::TOTAL_USER_INITIATED_BACKUPS:
            return "TOTAL_USER_INITIATED_BACKUPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceLimitMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
