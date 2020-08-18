/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace TaskFilterNameMapper
      {

        static const int LocationId_HASH = HashingUtils::HashString("LocationId");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        TaskFilterName GetTaskFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LocationId_HASH)
          {
            return TaskFilterName::LocationId;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return TaskFilterName::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskFilterName>(hashCode);
          }

          return TaskFilterName::NOT_SET;
        }

        Aws::String GetNameForTaskFilterName(TaskFilterName enumValue)
        {
          switch(enumValue)
          {
          case TaskFilterName::LocationId:
            return "LocationId";
          case TaskFilterName::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskFilterNameMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
