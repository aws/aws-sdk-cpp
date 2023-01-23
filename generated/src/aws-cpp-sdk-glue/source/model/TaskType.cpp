/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TaskType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace TaskTypeMapper
      {

        static const int EVALUATION_HASH = HashingUtils::HashString("EVALUATION");
        static const int LABELING_SET_GENERATION_HASH = HashingUtils::HashString("LABELING_SET_GENERATION");
        static const int IMPORT_LABELS_HASH = HashingUtils::HashString("IMPORT_LABELS");
        static const int EXPORT_LABELS_HASH = HashingUtils::HashString("EXPORT_LABELS");
        static const int FIND_MATCHES_HASH = HashingUtils::HashString("FIND_MATCHES");


        TaskType GetTaskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVALUATION_HASH)
          {
            return TaskType::EVALUATION;
          }
          else if (hashCode == LABELING_SET_GENERATION_HASH)
          {
            return TaskType::LABELING_SET_GENERATION;
          }
          else if (hashCode == IMPORT_LABELS_HASH)
          {
            return TaskType::IMPORT_LABELS;
          }
          else if (hashCode == EXPORT_LABELS_HASH)
          {
            return TaskType::EXPORT_LABELS;
          }
          else if (hashCode == FIND_MATCHES_HASH)
          {
            return TaskType::FIND_MATCHES;
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
          case TaskType::EVALUATION:
            return "EVALUATION";
          case TaskType::LABELING_SET_GENERATION:
            return "LABELING_SET_GENERATION";
          case TaskType::IMPORT_LABELS:
            return "IMPORT_LABELS";
          case TaskType::EXPORT_LABELS:
            return "EXPORT_LABELS";
          case TaskType::FIND_MATCHES:
            return "FIND_MATCHES";
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
  } // namespace Glue
} // namespace Aws
