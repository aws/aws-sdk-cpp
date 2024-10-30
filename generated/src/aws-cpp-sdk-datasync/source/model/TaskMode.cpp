/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskMode.h>
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
      namespace TaskModeMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int ENHANCED_HASH = HashingUtils::HashString("ENHANCED");


        TaskMode GetTaskModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return TaskMode::BASIC;
          }
          else if (hashCode == ENHANCED_HASH)
          {
            return TaskMode::ENHANCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskMode>(hashCode);
          }

          return TaskMode::NOT_SET;
        }

        Aws::String GetNameForTaskMode(TaskMode enumValue)
        {
          switch(enumValue)
          {
          case TaskMode::NOT_SET:
            return {};
          case TaskMode::BASIC:
            return "BASIC";
          case TaskMode::ENHANCED:
            return "ENHANCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskModeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
