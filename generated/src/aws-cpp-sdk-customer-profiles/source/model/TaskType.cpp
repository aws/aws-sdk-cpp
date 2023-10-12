/**
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

        static constexpr uint32_t Arithmetic_HASH = ConstExprHashingUtils::HashString("Arithmetic");
        static constexpr uint32_t Filter_HASH = ConstExprHashingUtils::HashString("Filter");
        static constexpr uint32_t Map_HASH = ConstExprHashingUtils::HashString("Map");
        static constexpr uint32_t Mask_HASH = ConstExprHashingUtils::HashString("Mask");
        static constexpr uint32_t Merge_HASH = ConstExprHashingUtils::HashString("Merge");
        static constexpr uint32_t Truncate_HASH = ConstExprHashingUtils::HashString("Truncate");
        static constexpr uint32_t Validate_HASH = ConstExprHashingUtils::HashString("Validate");


        TaskType GetTaskTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case TaskType::NOT_SET:
            return {};
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
