/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FileSystemAccessMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace FileSystemAccessModeMapper
      {

        static const int rw_HASH = HashingUtils::HashString("rw");
        static const int ro_HASH = HashingUtils::HashString("ro");


        FileSystemAccessMode GetFileSystemAccessModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == rw_HASH)
          {
            return FileSystemAccessMode::rw;
          }
          else if (hashCode == ro_HASH)
          {
            return FileSystemAccessMode::ro;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileSystemAccessMode>(hashCode);
          }

          return FileSystemAccessMode::NOT_SET;
        }

        Aws::String GetNameForFileSystemAccessMode(FileSystemAccessMode enumValue)
        {
          switch(enumValue)
          {
          case FileSystemAccessMode::rw:
            return "rw";
          case FileSystemAccessMode::ro:
            return "ro";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileSystemAccessModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
