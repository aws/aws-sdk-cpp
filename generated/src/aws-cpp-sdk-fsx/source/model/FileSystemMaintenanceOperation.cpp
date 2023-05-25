/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileSystemMaintenanceOperation.h>
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
      namespace FileSystemMaintenanceOperationMapper
      {

        static const int PATCHING_HASH = HashingUtils::HashString("PATCHING");
        static const int BACKING_UP_HASH = HashingUtils::HashString("BACKING_UP");


        FileSystemMaintenanceOperation GetFileSystemMaintenanceOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PATCHING_HASH)
          {
            return FileSystemMaintenanceOperation::PATCHING;
          }
          else if (hashCode == BACKING_UP_HASH)
          {
            return FileSystemMaintenanceOperation::BACKING_UP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileSystemMaintenanceOperation>(hashCode);
          }

          return FileSystemMaintenanceOperation::NOT_SET;
        }

        Aws::String GetNameForFileSystemMaintenanceOperation(FileSystemMaintenanceOperation enumValue)
        {
          switch(enumValue)
          {
          case FileSystemMaintenanceOperation::PATCHING:
            return "PATCHING";
          case FileSystemMaintenanceOperation::BACKING_UP:
            return "BACKING_UP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileSystemMaintenanceOperationMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
