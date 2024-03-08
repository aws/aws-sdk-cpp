/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskFilesystemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace TaskFilesystemTypeMapper
      {

        static const int ext3_HASH = HashingUtils::HashString("ext3");
        static const int ext4_HASH = HashingUtils::HashString("ext4");
        static const int xfs_HASH = HashingUtils::HashString("xfs");


        TaskFilesystemType GetTaskFilesystemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ext3_HASH)
          {
            return TaskFilesystemType::ext3;
          }
          else if (hashCode == ext4_HASH)
          {
            return TaskFilesystemType::ext4;
          }
          else if (hashCode == xfs_HASH)
          {
            return TaskFilesystemType::xfs;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskFilesystemType>(hashCode);
          }

          return TaskFilesystemType::NOT_SET;
        }

        Aws::String GetNameForTaskFilesystemType(TaskFilesystemType enumValue)
        {
          switch(enumValue)
          {
          case TaskFilesystemType::NOT_SET:
            return {};
          case TaskFilesystemType::ext3:
            return "ext3";
          case TaskFilesystemType::ext4:
            return "ext4";
          case TaskFilesystemType::xfs:
            return "xfs";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskFilesystemTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
