﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/TaskType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace TaskTypeMapper
      {

        static const int Arithmetic_HASH = HashingUtils::HashString("Arithmetic");
        static const int Filter_HASH = HashingUtils::HashString("Filter");
        static const int Map_HASH = HashingUtils::HashString("Map");
        static const int Mask_HASH = HashingUtils::HashString("Mask");
        static const int Merge_HASH = HashingUtils::HashString("Merge");
        static const int Truncate_HASH = HashingUtils::HashString("Truncate");
        static const int Validate_HASH = HashingUtils::HashString("Validate");


        TaskType GetTaskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Arithmetic_HASH)
          {
            return TaskType::Arithmetic;
          }
          else if (hashCode == Filter_HASH)
          {
            return TaskType::Filter;
          }
          else if (hashCode == Map_HASH)
          {
            return TaskType::Map;
          }
          else if (hashCode == Mask_HASH)
          {
            return TaskType::Mask;
          }
          else if (hashCode == Merge_HASH)
          {
            return TaskType::Merge;
          }
          else if (hashCode == Truncate_HASH)
          {
            return TaskType::Truncate;
          }
          else if (hashCode == Validate_HASH)
          {
            return TaskType::Validate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskType>(hashCode);
          }

          return TaskType::NOT_SET;
        }

        Aws::String GetNameForTaskType(TaskType enumValue)
        {
          switch(enumValue)
          {
          case TaskType::Arithmetic:
            return "Arithmetic";
          case TaskType::Filter:
            return "Filter";
          case TaskType::Map:
            return "Map";
          case TaskType::Mask:
            return "Mask";
          case TaskType::Merge:
            return "Merge";
          case TaskType::Truncate:
            return "Truncate";
          case TaskType::Validate:
            return "Validate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
